#ifndef LA4_Dog_h
#define LA4_Dog_h

#include <iostream>
#include <string>
#include <vector>
#include "Animal.h"
using namespace std;

class Dog : public Animal {
    
    public:
    Dog(){
        cout << "Creating Generic Animal Dog" << endl;
    }
    Dog(string name, int age){
    setName(name);
    setAge(age);
}
    ~Dog(){
        cout << "Deleting Dog" << endl;
    }
    
    void feed(){
        cout << "A small bone, please!" << endl;
    }

};

#endif