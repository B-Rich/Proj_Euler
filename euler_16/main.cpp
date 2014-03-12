#include <iostream>
#include <cmath>
#include <sstream>
#include <vector>

using namespace std;

typedef vector<int> Vector;

void printBigInt(const Vector& bigInt, int digitNum){
    for (size_t j = 1000-digitNum;j<1000;j++){
        cout<<bigInt.at(j);
    }
    cout<<"\n";
}
void calculateBigInt(const Vector& bigInt, int digitNum){
    int sum = 0;
    for (size_t j = 1000-digitNum;j<1000;j++){
        sum += bigInt.at(j);
        //cout<<bigInt.at(j);
    }
    cout<<sum<<"\n";
}

int main()
{
    cout << "Hello world!" << endl;
    const int power = 1000;
    Vector bigInt(999,0);
    bigInt.push_back(1);
    //cout<<bigInt.size();
    //printBigInt(bigInt,3);

    int digitNum = 1;

    int temp = 0;
    for (int i=0;i<power;i++){
        int carry = 0;
        for(int index = 999;index>999-digitNum;index--){
            temp = bigInt[index] * 2 + carry;
            if (temp >9){
                carry = 1;
                bigInt[index] = temp%10;
                if (index == 999-digitNum+1){
                    digitNum++;
                }
            }
            else{
                bigInt[index] = temp;
                carry = 0;
            }
        }
        //printBigInt(bigInt, digitNum);
    }
    printBigInt(bigInt, digitNum);
    calculateBigInt(bigInt, digitNum);
    return 0;
}
