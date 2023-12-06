//Ronald Ton pje33

//10/04/2023

// Lab 5 Pre-Lab

// Finish the following program which adds up all integers from 0 to
// the user's given number inclusively using a FOR loop. The total should be
// assigned to the variable 'total'.

#include <iostream>
using namespace std;


int main()
{
    int number;
    int total;

    cout << "Enter a positive integer to find the summation of"
         << " all numbers from 0 to the given number." << endl;
    cin >> number;


    for (int a = number  ; a >= 0 ; a--){

        total += (number - a);
    }

    cout << "Total : " << total << endl;

    return 0;
}
