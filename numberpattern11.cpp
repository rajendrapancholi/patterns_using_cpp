// Pattern Type Number 1.11 :piramid pattern.
//    1
//   121
//  12321
// 1234321
// 1st triangle
//    1
//   12
//  123
// 1234
// 2nd triangle
//  1
//  21
//  321
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int row = 1;
    while (row <= n)
    {
        // print spaces (1st triangle)
        int space = n - row;
        while (space)
        {
            cout << ' ';
            space--;
        }
        // print value (1st triangle)
        int j = 1;
        while (j <= row)
        {
            cout << j;
            j++;
        }
        // print 3rd triangle
        int k = 1;
        while (k <= row - 1)
        {
            cout << row - k;
            k++;
        }
        row++;
        cout << endl;
    }

    return 0;
}