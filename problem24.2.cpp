/*
CIST 004A Spring 2022
HW week 3 problem  24
Description: Reads random numbers from a txt file and calculates numbers.
Input: random.txt
Output: Average of the number, the total numbersr, and the sum of all numbe r  
Student: Matan Kedar 
Known bugs: none.
Date: 2/25/2023
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // intalize varaibles 
    int counter = 0, total = 0;
    string text;

    // open file 
    ifstream MyFile("C:\\Users\\User\\Desktop\\cpp\\random.txt");
    // read file 
    while (getline(MyFile, text)) {
        //cout << text << endl;
        try {
        total += stoi(text);
        } catch (invalid_argument& e) {}
        counter++;     
    }
    MyFile.close();
    // print calculated numbers 
    cout << "Total numbers: " << counter << endl;
    cout << "The sum of all the numbers is: " << total << endl;
    cout << "The average of all the numbers is: " << (total/counter) << endl;
    
    return 0;
}
/*
Total numbers: 201
The sum of all the numbers is: 105527 
The average of all the numbers is: 525
*/