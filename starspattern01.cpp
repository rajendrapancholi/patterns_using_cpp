// Pattern Type stars 2.1 : right triangle pattern.
// *
// * *
// * * *
// * * * *
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "* ";
            col++;
        }
        row++;
        cout << endl;
    }
    return 0;
}