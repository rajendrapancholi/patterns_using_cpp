// Pattern Type Alphabets 3.1 : Square alphabets pattern.
// A B C
// A B C
// A B C
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    while (i < n)
    {
        char ch = 'A';
        int j = 1;
        while (j < n)
        {
            cout << ch << " ";
            j++;
            ch++;
        }
        i++;
        cout << endl;
    }

    return 0;
}