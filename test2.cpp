//Matan Kedar
//3/2/2023

#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    float total = 0;
    for(int i = 10; i <= 1249; i++){
        total += (1.0) / ((i)*(i+1));
    }
    cout << fixed << setprecision(3) << total << endl;

}