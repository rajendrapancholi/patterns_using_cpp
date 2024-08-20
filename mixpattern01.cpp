// Pattern Type Mix-pattern  m.01
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1
// 1st triangle
// 1 2 3 4 5
// 1 2 3 4 *
// 1 2 3 * *
// 1 2 * * *
// 2nd triangle
// 5 4 3 2 1
// * 4 3 2 1
// * * 3 2 1
// * * * 2 1
// * * * * 1
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int i = 1;
    while (i <= n)
    {
        // print numbers (1st triangle)
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        // print stars (1st triangle)
        int star = i - 1;
        while (star)
        {
            cout << "*";
            star--;
        }
        // print stars (2nd triangle)
        int star2 = i - 1;
        while (star2)
        {
            cout << '*';
            star2--;
        }
        // print numbers (second triangle)
        int k = 1;
        while (k <= n - i + 1)
        {
            cout << n - i - k + 2;
            k++;
        }
        i++;
        cout << endl;
    }
    return 0;
}