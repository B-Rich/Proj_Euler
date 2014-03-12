#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    for(int c=333;c<999;c++){
        int bUpperBound = min(c, 1000-c);
        for(int b=1;b<bUpperBound;b++){
            int a = 1000 - c - b;
            if (c*c == a*a + b*b){
                cout << a*b*c<<endl;
            }
        }
    }
    cout << "Hello world!" << endl;
    return 0;
}
