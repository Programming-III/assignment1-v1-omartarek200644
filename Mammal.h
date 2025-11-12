#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal: public Animal{
        private:
        string furColor;
        public:
        ~Mammal();
        Mammal();
        Mammal(string name,int age,bool isHungry,string c):Animal(name,age,isHungry);
        };





#endif
