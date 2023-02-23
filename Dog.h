#ifndef CP_DOG_H
#define CP_DOG_H
#include <iostream>
#include <string>
using namespace std;
class Dog{
    string name;
    string breed;
    int energy;
    int age;
    float size;
    string color;
public:
    Dog();
    Dog(string,string,int,int,float,string);
//    Setters
    void setName(string);
    void setBreed(string);
    void setEnergy(int);
    void setAge(int);
    void setSize(float);
    void setColor(string);
//    Getters
    string getName();
    string getBreed();
    int getEnergy();
    int getAge();
    float getSize();
    string getColor();
//    Functionality
    void walk(int);
    void sleep(int);
    void bark();
    void eat();
    void setDetails();
    void printDetails();
};

#endif //CP_DOG_H
