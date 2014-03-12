#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    long long current = 2;
    long long prev = 1;
    long long sum = 0;
    long long temp = 0;
    while(current <= 4000000){
        if (current%2 == 0){
            sum += current;
        }
        temp = current;
        current = current + prev;
        prev = temp;
    }

    cout<<sum<<"\n";

    return 0;
}
