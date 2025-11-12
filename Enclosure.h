#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class Enclosure{
            private:
            Animal* arr;
            int capacity;
            int currentCount;
            public:
            Enclosure();
            Enclosure(Animal* a,int c,int cc);
                
            ~Enclosure();
               
            void addAnimal(Animal* a);
                
            void displayAnimals();
        };     








#endif
