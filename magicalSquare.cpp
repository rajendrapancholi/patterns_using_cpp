/**********************
Program Name        : Generate magical square using cpp
Author              : Rajendra Pancholi
Date of creation    : 19/10/2024
Organization        : NIT Patna
***********************/
#include <iostream>
#include <iomanip>
using namespace std;

void magicSquare(int n, int row, int col)
{
    int i = row;
    int j = col;
    int mSquare[n][n];
    // Initial value is 0
    for (int in = 0; in < n; in++)
    {
        for (int jn = 0; jn < n; jn++)
        {
            mSquare[in][jn] = 0;
        }
    }
    // Insert the value in magic square.
    for (int num = 1; num <= n * n; num++)
    {
        mSquare[i][j] = num;
        int newi = (i - 1 + n) % n;
        int newj = (j + 1) % n;
        if (mSquare[newi][newj])
        {
            i = (i + 1) % n;
        }
        else
        {
            i = newi;
            j = newj;
        }
    }
    // print the mSquare
    for (int in = 0; in < n; in++)
    {
        for (int jn = 0; jn < n; jn++)
        {
            cout << setw(2) << mSquare[in][jn] << " ";
        }
        cout << endl;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mSquare[0][i];
    }
    cout << "sum is: " << sum << endl;
}

int main()
{
    int n, i, j;
    cout << "Enter magical square size: ";
    cin >> n;
    cout << "Enter starting point(i,j) of the square: ";
    cin >> i >> j;
    magicSquare(n, i, j);
    return 0;
}
