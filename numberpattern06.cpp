// Pattern Type Number 1.6 :incremented row and decrement column right triangle pattern.
// 1
// 2 1
// 3 2 1
// 4 3 2 1
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int n = i;
        while (j <= i)
        {
            cout << n << " ";
            n--;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}