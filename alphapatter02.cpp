// Pattern Type Alphabets 3.2 : Square alphabets(increase column with respect to the row) pattern.
// A A A A
// B B B B
// C C C C
// D D D D
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
        while (j <= n)
        {
            cout << ch << " ";
            j++;
        }
        ch++;
        i++;
        cout << endl;
    }

    return 0;
}