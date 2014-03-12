#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<long long> prime;
    prime.push_back(2);
    bool isPrime = true;
    int number = 3;
    long long sum = 0;
    while(number < 2000000){
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
        }
        number += 2;
    }
    for(int i = 0;i<prime.size();i++){
        sum+=prime[i];
    }
    cout << sum;
    return 0;
}
