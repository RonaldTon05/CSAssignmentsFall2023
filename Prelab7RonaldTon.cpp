//Ronald Ton Pje33
// 10/18/2023
// Lab 7 Prelab Assignment

// Move the indicated code into functions.

#include <iostream>
using namespace std;
//prototypes
void welcome_message();
double payment_func();
int main()
{
    welcome_message();
    double payment;
    payment = payment_func();
    int payments;
    float principal;


    // TODO - write a void function to print out to console this welcome message



    // TODO - write a function that will prompt the user for the principal ammount,
    // and a number of payments. Then calculate and return the cost of each
    // payment (returns a double). Remember to assign the retuned value
    // to the variable 'payment'.


    // this should remain inside your main function
    cout << "Each payment will cost : " << payment;

    return 0;

    }

      void welcome_message()
    {
    cout << "Welcome to my fabulous payment calculator!" << endl
         << "This program will take a principal amount and a number of payments , and" << endl
         << "return the cost of each payment!"
         << endl << endl;
         return;
    }
        double payment_func()
    {
    double payment;

    int payments;
    float principal;

    cout << "please enter a principal ammount : ";
    cin >> principal;
    cout << "please enter a number of payments: ";
    cin >> payments;
    payment = static_cast <double>((1.2*principal)/payments);
    return payment;
    }

