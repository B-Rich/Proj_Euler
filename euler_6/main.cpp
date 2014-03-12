#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int Sum = 0;
    int squareSum = 0;
    for(int i=1;i<101;i++){
        Sum += i;
        squareSum += i*i;
    }

    int diff = Sum*Sum - squareSum;
    cout << diff << "\n";
    return 0;
}
