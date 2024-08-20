// Pattern Type Number 1.5 :incremented rows and columns right triangle pattern.
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n = 4;
    int num = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << num << " ";
            j++;
            num++;
        }
        i++;
        cout << endl;
    }

    return 0;
}