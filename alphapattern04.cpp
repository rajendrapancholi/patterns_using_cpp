// Pattern Type Alphabets 3.4 : right triagle pattern with increment the alphabets.
// A
// B C
// C D E
// E F G H
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char(ch + j + i - 2) << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}