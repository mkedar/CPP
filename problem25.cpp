/*
CIST 004A Spring 2022
HW week 2 problem 25
Description: Uses inputeed things to edit a story 
Input:  name, age, city, college, profession, animalType, animalName;
Output: Story based on inputs 
Student: Matan Kedar 
Known bugs: none.
Date: 2/10/2023
*/

#include <iostream>
using namespace std;

int main()
{
    // intialize varaibles 
    string name, age, city, college, profession, animalType, animalName;

    // ask for inputs and assign the input to the varaibles
    cout<<"What is your name? "; 
    getline(cin,name);
    cout << "What is your age? ";
    getline(cin, age);
    cout << "What city do you live in? ";
    getline(cin, city);
    cout << "Where do you go to college? ";
    getline(cin, college);
    cout << "What is your profession? ";
    getline(cin, profession);
    cout << "What type of animal? ";
    getline(cin, animalType);
    cout << "What is the name of the animal? ";
    getline(cin, animalName);

    // print out the whole paragraph
    cout << "There was once a person named " << name;
    cout << " who lived in " << city << ". At the age of ";
    cout << age << ", " << name << " went to college at ";
    cout << college << ". " << name << " graduated and ";
    cout << "went to work as a " << profession << ". Then";
    cout << ", " << name << " adopted a(n) " << animalType ;
    cout << " named " << animalName << ". They both lived ";
    cout << "happily ever after!";

    return 0;
}

/*
What is your name? Adam Smith
What is your age? 24
What city do you live in? New York
Where do you go to college? Columbia
What is your profession? Writer
What type of animal? Dog
What is the name of the animal? Sunshine
There was once a person named Adam Smith who lived in New York. At the age of 24, Adam Smith went to college at Columbia. 
Adam Smith graduated and went to work as a Writer. Then, Adam Smith adopted a(n) Dog named Sunshine. They both lived happily ever after!
*/
