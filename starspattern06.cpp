// Pattern Type stars 2.6 : upper-right triagular right riangle pattern.
// * * * *
// * * *
// * *
// *
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << "* ";
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}