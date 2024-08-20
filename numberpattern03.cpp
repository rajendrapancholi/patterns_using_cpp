// Pattern Type Number 1.3 : decremented rows number right triangle pattern.
// 1
// 2 2
// 3 3 3
// 4 4 4 4
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}