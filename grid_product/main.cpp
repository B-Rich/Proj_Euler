#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#define MATSIZE 20
using namespace std;
typedef vector<vector<int>> Matrix;
int main()
{
    string line;
    int value;
    Matrix mat;
    ifstream inFile("matrix.txt");
    while(getline(inFile,line)){
        istringstream iss(line);
        vector<int> vecArray;
        while(iss>>value){
            vecArray.push_back(value);
        }
        mat.push_back(vecArray);
    }
    int maxProduct = 0;

    //Search left - right
    /*
    for(size_t i = 0; i < MATSIZE; i++){
        for(size_t j = 0; j < (MATSIZE - 3); j++){
            int temp = mat[i][j] * mat[i][j+1] * mat[i][j+2] * mat[i][j+3];
            maxProduct = (temp > maxProduct)? temp : maxProduct;
        }
    }

    //Search up - down
    for(size_t col = 0; col < MATSIZE; col++){
        for(size_t row = 0; row < (MATSIZE - 3); row++){
            int temp = mat[row][col] * mat[row+1][col] * mat[row+2][col] * mat[row+3][col];
            maxProduct = (temp > maxProduct)? temp : maxProduct;
        }
    }
    */
    //Search diagnally
    for(size_t col  = 0; col < (MATSIZE - 3); col++){
        for(size_t row = 0; row < (MATSIZE - 3); row++){
            int temp = mat[row][col] * mat[row+1][col+1] * mat[row+2][col+2] * mat[row+3][col+3];
            maxProduct = (temp > maxProduct)? temp : maxProduct;
        }
    }

    for(size_t col  = 3; col < mat[0].size(); col++){
        for(size_t row = 0; row < mat.size()-3; row++){
            int temp = mat[row][col] * mat[row+1][col-1] * mat[row+2][col-2] * mat[row+3][col-3];
            maxProduct = (temp > maxProduct)? temp : maxProduct;
        }
    }

    cout << maxProduct<<endl;

    return 0;
}
