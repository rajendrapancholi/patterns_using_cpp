// Pattern Type stars 2.4 : upper-left triagular right riangle pattern.
// Pattern 1.15
// * * * *
//   * * *
//     * *
//       *
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        // 1. print space
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << '*';
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}