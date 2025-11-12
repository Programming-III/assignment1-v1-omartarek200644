#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird: public Animal{
        private:
        float wingSpan;
        public:
        ~Bird();
        Bird();
        Bird(string name,int age,bool isHungry,float w):Animal(name,age,isHungry);
           
        };







#endif
