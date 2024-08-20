// Pattern Type Number 1.7 :incremented row upper right triangle pattern.
// 1 1 1 1
//   2 2 2
//     3 3
//       4
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        // print space
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << i;
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}