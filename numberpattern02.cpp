// Pattern 1.2: Type Number : decremented number square pattern.
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int n = 4;
    while (i < n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1 << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}