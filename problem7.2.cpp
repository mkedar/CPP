/*
CIST 004A Spring 2022
HW week 6 problem 7
Description: Reads random numbers from txt file and calculates difffrent values. 
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

int getArrayLength(string input){
    int counter = 0;
    string text;
    // open file 
    ifstream MyFile(input); 
    // read file 
    while (getline(MyFile, text)) {
        //cout << text << endl;
        try {
        
        } catch (invalid_argument& e) {}
        counter++;     
    }
    MyFile.close();
   //cout << counter << endl;
    return counter; 
}

int getMax(int array[], int size){
	int largest = 0;
	for(int i = 0; i <= size; i++){
		largest = largest < array[i] ? array[i] : largest;
	}	
	return largest; 
}

int getMin(int array[], int size){
	int smallest  = 0;
	for(int i = 0; i <= size; i++){
		smallest  = smallest > array[i]||smallest==0 ? array[i] : smallest ;
	}	
	return smallest; 
}

double getAvg(int array[], double size){
	double total = 0; 
	for(int i = 0; i <= size; i++){
		total += array[i];
	}
	return total/(size+1);
	}
int getTot(int array[], int size){
	int total = 0; 
	for(int i = 0; i <= size; i++){
		total += array[i];
	}
	return total; 
}

int main() {
 string pathNAME = "//Users//matankedar//Desktop//cpp//numbers.txt";  
 const int arrayLength = getArrayLength(pathNAME)-1;
 int array[arrayLength];

     int counter = 0, total = 0;
     string text;
     // open file 
     ifstream MyFile(pathNAME); 
     // read file 
     while (getline(MyFile, text)) {
	 //cout << text << endl;
	 try {
	array[counter] = stoi(text);
	//cout << array[counter] << endl; 
	 } catch (invalid_argument& e) {}
	 counter++;     
     }
	
     MyFile.close();
	cout << "Maximum:  " << getMax(array, arrayLength) << endl;
	cout << "Minimum:  " << getMin(array, arrayLength) << endl;
	cout << "Average:  " << getAvg(array, arrayLength) << endl; 
	cout << "Total:    " << getTot(array, arrayLength) << endl; 
	
return 0;
}


/*
Maximum:  89
Minimum:  8
Average:  43.3333
Total:    520
*/
