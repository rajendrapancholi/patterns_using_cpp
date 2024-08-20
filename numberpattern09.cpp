// Pattern Type Number 1.9 :incremented row upper right triangle pattern.
// 1 2 3 4
//   2 3 4
//     3 4
//       4
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        // print spaces
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j + i - 1;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}