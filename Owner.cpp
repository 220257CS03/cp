#include "Owner.h"
Owner::Owner(){}
Owner::Owner(string n, int a, int p, string d){
    name = n;
    age = a;
    phoneNumber = p;
    dogName = d;
}
void Owner::setName(string n){name = n;}
void Owner::setAge(int a){age = a;}
void Owner::setPhoneNumber(int p){phoneNumber = p;}
void Owner::setDogName(string d){dogName = d;}

string Owner::getName() {return name;}
int Owner::getAge() {return age;}
int Owner::getPhoneNumber() {return phoneNumber;}
string Owner::getDogName() {return dogName;}

void Owner::setDetails() {
    cout<<"Owner's name: "; cin>>name;
    cout<<"Owner's age: "; cin>>age;
    cout<<"Owner's phone number: "; cin>>phoneNumber;
    cout<<"Owner's dog's name: "; cin>>dogName;
}
void Owner::printDetails (){
    cout << "Name: " << name << endl << "Age: " << age << endl << "Phone number: " << phoneNumber << endl << "Dog name: " << dogName << endl <<"-----------------------"<<endl;
}