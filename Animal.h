#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal{
    private:
    string name;
    int age;
    bool isHungry;
    public:
    Animal();
        
    Animal(string n,int a,bool h);
        ~Animal();
      void display();
     void feed();
    };



#endif
