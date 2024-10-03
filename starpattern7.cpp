/**********************
Program Name        : Pattern Type stars 2.7 like piramid
Author              : Rajendra Pancholi
Date of creation    : 03/10/2024
Organization        : NIT Patna
***********************/

/* Pattern Type stars 2.7 :
 *             *
 * *         * *
 * * *     * * *
 * * * * * * * *
 * * *     * * *
 * *         * *
 *             *

 */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: " << endl;
    // cin >> n;
    n = 4;
    cout << endl;
    int spaces = n * 2 - 2;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        // Print stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }

        // Print space
        for (int j = 1; j <= spaces; j++)
        {
            cout << "  ";
        }

        // Print stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }

    return 0;
}