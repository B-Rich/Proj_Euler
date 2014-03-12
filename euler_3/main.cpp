#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    const long long NUM = 600851475143;
    const long long bound = sqrt(NUM);
    vector<long long> result;
    vector<long long> prime;
    prime.push_back(2);

    for(long long i = 3; i<=bound; i++){
        bool isPrime = true;
        for(size_t j = 0; j < prime.size(); j++){
            if (i%prime[j] == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime == true){
            prime.push_back(i);
            if (NUM%i == 0){
                result.push_back(i);
                cout << "Find prime factor " << i << "\n";
            }
        }
    }
    long long finalResult = result.back();
    cout << finalResult << "\n";
    return 0;
}
