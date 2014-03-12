#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

bool checkPalindrome(long number){
    ostringstream ss;
    ss << number;

    string strResult = ss.str();
    bool check = true;
    for(string::iterator it1 = strResult.begin(),it2 = strResult.end()-1;it1<=it2;it1++,it2--){
        if (*it1 != *it2){
            check = false;
            break;
        }

    }
    return check;
}
int main()
{
    vector<long> palindrome;
    long result = 0;
    string strResult;

    for (int i=100;i<1000;i++){
        for(int j=100;j<=i;j++){
            result = i * j;
            if (checkPalindrome(result)){
                palindrome.push_back(result);
                cout << result << "\n";
            }
        }
    }
    cout <<*max_element(palindrome.begin(),palindrome.end())<<endl;

    cout << "Hello world!" << endl;


    return 0;
}
