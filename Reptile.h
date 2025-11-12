#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile: public Animal{
        private:
        bool isVenomous;
        public:
        ~Reptile();
        Reptile();
        Reptile(string name,int age,bool isHungry,bool v):Animal(name,age,isHungry);
        
            
        }; 









#endif
