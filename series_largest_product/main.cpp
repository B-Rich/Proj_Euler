#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int> list;
    ifstream in_stream("euler8_num.txt");
    stringstream buffer;
    buffer << in_stream.rdbuf();
    string test = buffer.str();
    test.erase(remove(test.begin(),test.end(),'\n'),test.end());

    vector<int> numbers;
    for(int i = 0;i<1000;i++){
        char num = test.at(i);
        numbers.push_back(atoi(&num));
    }

    int great = 0;
    int product = 0;
    for(int i = 0;i<996;i++){
        product = numbers[i]*numbers[i+1]*numbers[i+2]*numbers[i+3]*numbers[i+4];
        great = (product>great ? product:great);
    }
    cout << great<<endl;

    return 0;
}
