#include <iostream>
using namespace std;

// Matan Kedar
// 4/13/2023
// CIST-004A Midterm 2 Part 2

int line1(double enteries[], int size) {
    int counter = 0; // checks which numbers are over 0 using simple for loops with nested if statement
    for (int i = 0; i < size; i++) {
        if (enteries[i] > 0) {
            counter++;
        }
    }
    return counter;
}
double line2(double enteries[], int size) {
    double sum = 0; // finds the average of all the input postive numbers
    for (int i = 0; i < size; i++) {
        sum += enteries[i];
    }
    return sum / size;
}
double line3(double enteries[], int size) {
    double min = enteries[0]; // find smallest value using for loop
    for (int i = 1; i < size; i++) {
        if (enteries[i] < min) {
           min = enteries[i];
        }
    }
    return min;
}
int line4(double enteries[], int size) {
    double sum = 0; // simply calculates the average and adds to counter if num is bigger
    for (int i = 0; i < size; i++) {
        sum += enteries[i];
    }
    double average = sum / size;
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (enteries[i] > average) {
            counter++;
        }
    }
    return counter;
}
void line5(double enteries[], int size) {
    for (int i = 0; i < size - 1; i++) { // bubble sort
        for (int j = 0; j < size - i - 1; j++) {
            if (enteries[j] > enteries[j+1]) {
                double temp = enteries[j];
                enteries[j] = enteries[j+1];
                enteries[j+1] = temp;
            }
        }
    }
    for(int z = 0; z < size; z++){
        cout << enteries[z] << " ";
    }
}


int main() {
    double enteries[1001];
    double input = 1;
    int counter = 0;
    while (input != 0) {
        cin >> input;
        enteries[counter] = input;
        counter++;
    }
    cout << line1(enteries, counter - 1) << endl;
    cout << line2(enteries, counter - 1) << endl;
    cout << line3(enteries, counter - 1) << endl;
    cout << line4(enteries, counter - 1) << endl;
    line5(enteries, counter - 1);
    
    return 0;
}

/* output below for input values <3 4 5 1.1 6.9 0> :
5
4
1.1
2
1.1 3 4 5 6.9
*/