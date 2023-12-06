// Lab 10 Pre-Lab Assignment

// Write a function that subtracts each element in the array "myArray"
// with the variable "subtractMe".

#include <iostream>

using namespace std;

// TODO - Write your function prototype here
void funcSubtract(int, int[], int);

int main()
{
    const int SIZE = 8;
    int myArray[SIZE] = {16, 38, 93, 49, 14, 50, 5, 10};
    int subtractMe = 5;

    // TODO - Add your function call here
    funcSubtract (SIZE, myArray, subtractMe);

    // print the array
    for(int i=0; i < SIZE; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;

}

// TODO - Write your function definition here
void funcSubtract(int SIZE, int myArray[], int subtractMe)
{
    for(int i = 0; i < SIZE; i++)
    {
        myArray[i] = myArray[i] - subtractMe;
    }
    return;
}
