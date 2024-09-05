#include<iostream>
using namespace std;

class Hero{

    public: 
    int health;
    char level;

     Hero (){
        cout<< "Constructor called" << endl;
     }  

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;

    }

    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    Hero Thor;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 /*
    //statically allocated
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    
    cout << "level is " << a.level << endl;
    cout << "health is " << a.getHealth() << endl;

    //dynamic allocation
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(78);*/

    








    /*//creation of object 
    Hero scorpion ;
     //getter
    cout << "scorpion health is :" << scorpion.getHealth() << endl;

   
    scorpion.setHealth(55);

    //cout << "size : " << sizeof(h1) << endl;
    cout << "Health is  :" << scorpion.health << endl;
    
    
    cout << "Level is  : " << scorpion.level << endl;

    return 0;*/
    



}