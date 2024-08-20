// Pattern Type stars 2.2 : right triangle(mirror image) pattern.
//       *
//     * *
//   * * *
// * * * *
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int row = 1;
    while (row <= n)
    {
        // print space
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        // print star
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}