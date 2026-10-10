#include<iostream>
#include<limits>
using namespace std;
int maxsum ( int mat[][3] , int row, int column  ){
    int maxrowssum = INT32_MIN;
    for (int i = 0; i < row; i++)
    {
        int rowsum = 0;
        for (int j= 0; j < column; j++)
        {
            rowsum += mat[i][j];
        }
        maxrowssum = max(maxrowssum , rowsum);
    }
    return maxrowssum;
}
int main(int argc, char const *argv[])
{
    int matrix[3][3] ={ {1,2,3 }, {4,5,6 }, {7,8,9}};
    int row = 3;
    int column = 3;
    cout << maxsum (matrix , row,column) << endl;
    return 0;
}
