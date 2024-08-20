// Pattern Type stars 2.4 : upper triagular right riangle pattern.
// * * * *
// * * *
// * *
// *
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << "* ";
            col++;
        }
        row++;
        cout << endl;
    }

    return 0;
}