#include <iostream>
// Pattern Type Number 1.10 :incremented row with previous value lower right triangle pattern.
//        1
//      2 3
//    4 5 6
// 7 8 9 10
using namespace std;
int main()
{
    int n = 4;
    int i = 1, num = 1;
    while (i <= n)
    {
        // print space
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        // print value
        int j = 1;
        while (j <= i)
        {
            cout << num;
            num++;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}