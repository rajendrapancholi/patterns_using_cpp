// Pattern Type Alphabets 3.3 : Square alphabets(increase column whith respect to previous row and then increment each column) pattern.
// A B C
// B C D
// C D E
#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            // type casting int to char.
            char chh = ch + i + j - 2;
            cout << chh << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}