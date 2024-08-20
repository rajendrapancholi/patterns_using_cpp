// Pattern Type Alphabets 3.5 : right triagle pattern with decrement the alphabets.
// D
// C D
// B C D
// A B C D
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    char ch = 'A' + n - 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char(ch + j - 1) << " ";
            j++;
        }
        ch--;
        i++;
        cout << endl;
    }
    return 0;
}