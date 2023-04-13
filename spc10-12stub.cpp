// Chapter 10, Programming Challenge 12: Password Verifier
#include <iostream>
using namespace std;

// Global constants
const int SIZE = 80; // The maximum size of the array
const int MIN = 6;   // The minimum number characters

// Function prototypes
void displayRequirements();
void displayResult(char[]);
bool isValid(char[]);
bool hasLength(char[]);
bool hasLower(char[]);
bool hasUpper(char[]);
bool hasDigit(char[]);

int main()
{
   char cstring[SIZE];  // To hold the password

   // Display the password requirements.
   displayRequirements();

   // Get the password as input from the user.
   cout << "Enter a password: ";
   cin.getline(cstring, SIZE);

   // Display a message indicating whether
   // or not the password is valid.
   displayResult(cstring);

   return 0;
}

//*************************************************
// The displayRequirements function displays the  *
// requirements needed for a valid password.      *
//*************************************************
void displayRequirements(){
   cout << "Password requirements:" << endl;
   cout << "Is at least " << MIN << " characters long" << endl;
   cout << "Contains at least one lowercase and uppercase letter" << endl;
   cout << "Has at least one digit" << endl;
}

//*************************************************
// The displayResult function displays a message  *
// indicating whether or not the password is      *
// valid. If the password is invalid, additional  *
// messages are displayed for each failed         *
// requirment.                                    *
//*************************************************
void displayResult(char str[]){
    if (isValid(str)){
        cout << "The password is valid." << endl;
    }
    else{
        cout << "The password is invalid." << endl;
        if(!hasLength(str)){
            cout << "Password must be at least " << MIN << " characters long." << endl;
        }
        if(!hasLower(str)){
            cout << "Password must have least one lower letter." << endl;
        }
        if(!hasUpper(str)){
            cout << "Password must have least one uppercase letter." << endl;
        }
        if(!hasDigit(str)){
            cout << "Password must have at least one digit." << endl;
        }
    }
}

//*************************************************
// The isValid function returns true if the       *
// string meets all of the requirements of a      *
// valid password. Otherwise it returns false.    *
//*************************************************
bool isValid(char str[])
{
   return hasLength(str) && hasLower(str) 
   && hasUpper(str) && hasDigit(str);
}

//*************************************************
// The hasLength function returns true if the     *
// string contains the minimum amount of          *
// characters. Otherwise, it returns false.       *
//*************************************************
bool hasLength(char str[])
{
   int counter = 0;
   while (str[counter] != '\0'){
        counter++;
   }
   return counter >= MIN;
}

//*************************************************
// The hasLower function returns true if the      *
// string contains at least one lowercase         *
// character. Otherwise, it returns false.        *
//*************************************************
bool hasLower(char str[])
{
    int counter = 0;
    while (str[counter] != '\0'){
        if (islower(str[counter])){
            return true;
        }
        counter++;
   }
   return false;
}

//*************************************************
// The hasUpper function returns true if the      *
// string contains at least one uppercase         *
// character. Otherwise, it returns false.        *
//*************************************************
bool hasUpper(char str[])
{
   int counter = 0;
   while (str[counter] != '\0'){
        if (isupper(str[counter])){
            return true;
        }
        counter++;
   }
   return false;
}

//*************************************************
// The hasDigit function returns true if the      *
// string contains at least one digit             *
// character. Otherwise, it returns false.        *
//*************************************************
bool hasDigit(char str[])
{
   int counter = 0;
   while (str[counter] != '\0'){
        if (isdigit(str[counter])){
            return true;
        }
        counter++;
   }
   return false;
}
