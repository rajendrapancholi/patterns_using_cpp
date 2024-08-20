#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    // cout << "Enter a number: ";
    // cin >> n;

    /*
    pattern type 1
         Pattern 1.1
         1 2 3
         1 2 3
         1 2 3
    */

    int row = 0;
    while (row < n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << col << " ";
            col++;
        }
        row++;
        cout << endl;
    }

    return 0;
}