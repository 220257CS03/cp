#include <iostream>
using namespace std;
#include "Dog.h"
#include "Owner.h"
//Write Your Code Here

struct Pair{
  string ownerName;
  string dogName;
};


int
main (int argc, const char *argv[])
{

  // //----------PART ONE: DO NOT CHANGE CODE!----------

//  Dog d("Beethoven","Saint Bernard",100,1,19.5,"Brown");
//  d.printDetails();
//  cout<<"----------------------"<<endl;
//  d.walk(5);
//  cout<<"----------------------"<<endl;
//  d.sleep(2);
//  cout<<"----------------------"<<endl;
//  d.bark();
//  cout<<"----------------------"<<endl;
//  d.eat();
//  cout<<"----------------------"<<endl;
//  d.printDetails();
//  cout << "*------------------------------------------*" << endl;
//
//  Owner o ("Jack", 25, 99891, "Beethoven");
//  o.printDetails ();
//  cout <<"----------------------"<<endl;
//  cout <<"*------------------------------------------*"<<endl;

  //----------PART TWO: DO IT YOURSELF!----------
  //Write Your Code Here

  Dog d1[1];
  Owner ow[1];
  for(int i = 0; i < 1; i++){
      d1[i].setDetails();
  }
  for(int i = 0; i < 1; i++){
      ow[i].setDetails();
  }
  for(int i = 0; i < 1; i++){
      d1[i].printDetails();
  }
  for(int i = 0; i < 1; i++){
      ow[i].printDetails();
  }
  Pair p[1];
  for(int i = 0; i < 1; i++){
      for(int j = 0; j < 1; j++){
          if(d1[i].getName() == ow[j].getDogName()){
              p[i].dogName = d1[i].getName();
              p[j].ownerName = ow[j].getDogName();
          }
      }
  }
  for(int i = 0; i < 1; i++){
      cout<<"Owner name: "<<p[i].ownerName << ", Dog name: "<< p[i].dogName<<endl;
  }
  return 0;
}