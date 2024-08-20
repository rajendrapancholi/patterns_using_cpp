// Pattern Type Number 1.4 :incremented rows and columns right triangle pattern.
// 1
// 2 3
// 3 4 5
// 4 5 6 7
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n = 4;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i + j - 1 << " ";
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}