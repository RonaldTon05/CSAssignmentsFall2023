// Ronald Ton pje33
// 11/15/2023
//You may not have covered this material in your lecture sections.
//Complete as best as you are able.  Refer to the prelab reading for assistance.

//Add code where requested to complete the program.

#include <iostream>
#include <fstream>


using namespace std;

struct Rabbit
{
    string name;
    string breed;
    char gender;
    int age;
};

int main()
{
     // TODO - Create a Rabbit object named "rabbit1", and initialize its name to
    //        "Floppy", gender to 'M', age to 2, and breed to "Rex".
    Rabbit rabbit1;
    rabbit1.name = "Floppy";
    rabbit1.gender = 'M';
    rabbit1.age = 2;
    rabbit1.breed = "Rex";

    // initializes variables for rabbit2
    Rabbit rabbit2;
    rabbit2.name;
    rabbit2.gender;
    rabbit2.age;
    rabbit2.breed;
        // TODO - Create a Rabbit object named "rabbit2".

    cout << "Rabbit Name?" << endl;
    cin >> rabbit2.name;
    cout << "Rabbit Age?" << endl;
    cin >> rabbit2.age;
    cout << "Rabbit Gender?" << endl;
    cin >> rabbit2.gender;
    cout << "Rabbit Breed?" << endl;
    cin >> rabbit2.breed;
    cout << endl;
    // TODO - Prompt the user to enter the rabbit's name, age, gender, and breed,
    //        and assign them to the "rabbit2" object.
        //        Assume the rabbit name and breed are entered as a single word
        //        so that both will work with cin statements.

    // TODO - Print "rabbit1" and "rabbit2" objects to the console. E.g.
    //        "Name: Floppy, Gender: M, Age: 2, Breed: Rex"
    cout << "Name: " << rabbit1.name << ", Gender: " << rabbit1.gender
    << ", Age: " << rabbit1.age << ", Breed: " << rabbit1.breed << endl;
    cout << "Name: " << rabbit2.name << ", Gender: " << rabbit2.gender
    << ", Age: " << rabbit2.age << ", Breed: " << rabbit2.breed << endl;


    return 0;
}
