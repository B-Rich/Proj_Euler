#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<long long> prime;
    prime.push_back(2);
    int primeNum = 1;
    bool isPrime = true;
    int number = 3;
    while(primeNum < 10001){
        //check prime
        isPrime = true;
        for(size_t j = 0; j < prime.size(); j++){
            if (number%prime[j] == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime == true){
            prime.push_back(number);
            cout<<number<<"\n";
            primeNum++;
        }
        number++;
    }
    cout<<prime.at(10000)<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
