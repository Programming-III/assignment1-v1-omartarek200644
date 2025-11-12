// Example program
#include <iostream>
#include <string
#include "Animal.h"
#include "Bird.h"
#include "Enclosure.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Visitor.h"
using namespace std;
class Animal{
    private:
    string name;
    int age;
    bool isHungry;
    public:
    Animal(){
        name="";
        age=0;
        isHungry=false;
        }
    Animal(string n,int a,bool h){
        name=n;
        age=a;
        isHungry=h;
        }
        ~Animal(){}
      void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<isHungry<<endl;
        }
     void feed(){
            if(isHungry)
            cout<<"Needs feeding"<<endl;
        else
            cout<<"Not Hungry"<<endl;        
            }
    };
    
    class Mammal: public Animal{
        private:
        string furColor;
        public:
        ~Mammal(){}
        Mammal(){
            furColor="";
            }
        Mammal(string name,int age,bool isHungry,string c):Animal(name,age,isHungry){
        furColor=c;
        }
        };
        
    class Bird: public Animal{
        private:
        float wingSpan;
        public:
        ~Bird(){}
        Bird(){
            wingSpan=0;
            }
        Bird(string name,int age,bool isHungry,float w):Animal(name,age,isHungry){
            wingSpan=w;
            }
        };
    class Reptile: public Animal{
        private:
        bool isVenomous;
        public:
        ~Reptile(){}
        Reptile(){
            isVenomous=false;
            }
        Reptile(string name,int age,bool isHungry,bool v):Animal(name,age,isHungry){
            isVenomous=v;
            }
        }; 
        
        class Enclosure{
            private:
            Animal* arr;
            int capacity;
            int currentCount;
            public:
            Enclosure(){
                capacity=0;
                currentCount=0;
                }
            Enclosure(Animal* a,int c,int cc){
                arr=a;
                capacity=c;
                currentCount=cc;
                }
            ~Enclosure(){
                delete arr;
                }    
            void addAnimal(Animal* a){
                arr[currentCount]=a;
                currentCount++;
                }
            void displayAnimals(){
                for(int i=0;i<currentCount;i++){
                    cout<<arr[i]<<endl;
                    }
                }    
        };     
        
        class Visitor{
            private:
            string visitorName;
            int ticketsBought;
            public:
            Visitor(){
                visitorName="";
                ticketsBought=0;
                }
            Visitor(string vn,int t){
                visitorName=vn;
                ticketsBought=t;
                }
            ~Visitor(){}    
                void displayInfo(){
                    cout<<"Name: "<<visitorName<<endl;
                    cout<<"Number of tickets = "<<ticketsBought<<endl;
                    }
            };


int main()
{
 Visitor* v1=new Visitor("Sarah Ali",3);
 v1->displayInfo();
}
