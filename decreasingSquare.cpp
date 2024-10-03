/**********************
Program Name        : Decreasing square
Author              : Rajendra Pancholi
Date of creation    : 03/10/2024
Organization        : NIT Patna
***********************/
/* n=4
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
 */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    n = 4;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int left = i;
            int right = (2 * n - 2) - i;
            int top = j;
            int bottom = (2 * n - 2) - j;
            cout << n - min(min(left, right), min(top, bottom)) << " ";
        }
        cout << endl;
    }
}
