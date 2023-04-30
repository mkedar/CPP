#include <iostream>
using namespace std;

class Patient {
private: 
    string firstName;
    string middleName;
    string lastName;
    string address;
    string city;
    string state;
    int  zipcode;
    int phoneNum; 
    string emgName;
    int emgPhoneNum;	
public:
    Patient(string fN, string mN, string lN, string a, string c, string s, int z, int p, string emgN, int emgP){
        firstName = fN;
        middleName = mN;
        lastName = lN;
        address = a;
        city = c;
        state = s;
        zipcode = z;
        phoneNum = p;
        emgName = emgN;
        emgPhoneNum = emgP;
    }
    
    string getFirstName(){
        return firstName;
    }
    
    string getMiddleName(){
        return middleName;
    } 
    
    string getLastName(){
        return lastName;
    }
    
    string getAddress(){
        return address;
    }
    
    string getCity(){
        return city;	
    }
    
    string getState(){
        return state;
    }
    
    int getZipcode(){
        return zipcode;
    }
    
    int getPhoneNum(){
        return phoneNum;
    }
    
    string getEmgName(){
        return emgName;
    }
    
    int getEmgPhoneNum(){
        return emgPhoneNum;
    }

    void setFirstName(string fN){
        firstName = fN;
    }
    
    void setMiddleName(string mN){
        middleName = mN;
    } 
    
    void setLastName(string lN){
        lastName = lN;
    }
    
    void setAddress(string a){
        address = a;
    }
    
    void setCity(string c){
        city = c;
    }
    
    void setState(string s){
        state = s;
    }
    
    void setZipcode(int z){
        zipcode = z;
    }
    
    void setPhoneNum(int p){
        phoneNum = p;
    }
    
    void setEmgName(string emgN){
        emgName = emgN;
    }
    
    void setEmgPhoneNum(int emgP){
        emgPhoneNum = emgP;
    }
};

class Procedure {
private:
    string name;
    string date;
    string practitionerName;
    double charges;
public:
    Procedure(string n, string d, string pn, double c) {
        name = n;
        date = d;
        practitionerName = pn;
        charges = c;
    }

    string getName() {
        return name;
    }

    string getDate() {
        return date;
    }

    string getPractitionerName() {
        return practitionerName;
    }

    double getCharges() {
        return charges;
    }

    void setName(string n) {
        name = n;
    }

    void setDate(string d) {
        date = d;
    }

    void setPractitionerName(string pn) {
        practitionerName = pn;
    }

    void setCharges(int c) {
        charges = c;
    }
    
    void print() {
        cout << "Procedure name: " << name << endl;
        cout << "Date: " << date << endl;
        cout << "Practitioner: " << practitionerName << endl;
        cout << "Charges: $" << charges << endl;
    }
};

int main(){
    Patient p1("John", "A.", "Doe", "123 Main St.", "Anytown", "CA", 12345, 5551234, "Jane Doe", 5554321);

    Procedure pro1("Physical Exam", "Today's date", "Dr. Irvine", 250.00 );
    Procedure pro2("X-ray", "Today's date", "Dr. Jamison", 500.00 );
    Procedure pro3("Blood test", "Today's date", "Dr. Smith", 200.00 );

    cout << "Procedure 1: " << endl;
    pro1.print();
    cout << endl;

    cout << "Procedure 2: " << endl;
    pro2.print();
    cout << endl;

    cout << "Procedure 3: " << endl;
    pro3.print();
    cout << endl;

}  
