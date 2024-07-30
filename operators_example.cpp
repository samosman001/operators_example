// Created by Sam Osman
// 07/29/2024
// Example of various operators.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n{0};

    // Prompts User to enter a number.
    cout << "Enter a number: ";
    cin >> n;

    // Outputs results of various operations.
    cout << "n == " << n
         << "\nn + 1 == " << n + 1
         << "\nthree times n == " << 3 * n
         << "\ntwice n == " << n + n
         << "\nn squared == " << n * n
         << "\nhalf of n (integer divison) == " << n / 2
         << "\nModulo of n and 2 == " << n % 2
         << "\nsquare root of n == " << sqrt(n)
         << '\n';

    return 0;
}