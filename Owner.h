//
// Created by Admin on 21.02.2023.
//

#ifndef CP_OWNER_H
#define CP_OWNER_H
#include <iostream>
#include <string>
using namespace std;
class Owner{
private:
    string name;
    int phoneNumber;
    int age;
    string dogName;
public:
    Owner();
    Owner(string,int ,int, string);
//   setters
    void setName (string);
    void setAge (int a);
    void setPhoneNumber (int);
    void setDogName (string);

//    getters
    string getName();
    int getAge();
    int getPhoneNumber();
    string getDogName();
//    functionality
    void setDetails();
    void printDetails();
};

#endif //CP_OWNER_H
