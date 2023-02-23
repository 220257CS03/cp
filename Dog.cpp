#include "Dog.h"
Dog::Dog(){}
Dog::Dog(string n, string b, int e, int a, float s,string c){
    name = n;
    breed = b;
    energy = e;
    age = a;
    size = s;
    color = c;
}
// setters
void Dog::setName(string n) {name = n;}
void Dog::setBreed(string b) {breed = b;}
void Dog::setEnergy(int e) {energy = e;}
void Dog::setAge(int a) {age = a;}
void Dog::setSize(float s) {size = s;}
void Dog::setColor(string c) {color = c;}

// getters
string Dog::getName() {return name;}
string Dog::getBreed() {return breed;}
int Dog::getEnergy() {return energy;}
int Dog::getAge() {return age;}
float Dog::getSize() {return size;}
string Dog::getColor() {return color;}



void Dog::walk(int minutes){
    energy -= minutes * 2;
    if(energy <= 0){
        energy = -1;
        cout<<"Energy = "<< energy << " - " << name << " Dog needs some sleep!"<<endl;
    }else {
        cout << "Energy = " << energy << " - " << name << endl;
    }
}
void Dog::sleep(int minutes){
    energy += minutes * 3;
    if(energy > 100) energy = 100;
    cout<<"Energy = "<<energy << " - " << name << endl;
}
void Dog::bark(){
    cout<< "Bowwow! " << name <<endl;
}
void Dog::eat(){
    size += 0.5;
    cout<<"Size = "<< size <<", Name: "<< name << endl;
}

void Dog::setDetails() {
    cout<<"Dog's name: "; cin>>name;
    cout<<"Dog's breed: "; getline(cin>>ws, breed);
    cout<<"Dog's energy: "; cin>>energy;
    cout<<"Dog's age: "; cin>>age;
    cout<<"Dog's size: "; cin>>size;
    cout<<"Dog's color: "; cin>>color;
}
void Dog::printDetails(){
    cout << "Name: " << name << endl << "Breed: " << breed << endl <<
         "Energy: " << energy << endl << "Age: "  << age <<
         endl << "Size: " << size << endl << "Color: " << color << endl <<"-----------------------"<<endl;
}
