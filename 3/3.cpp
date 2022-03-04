#include <iostream>
#include "Dog.h"
#include "Animal.h"
#include "display.h"
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    int num =0, count =0;
    vector<Animal*> v;
    string input,inputName;
    int inputAge; 
    cout << "Enter Number of animals to create: ";
    cin >> num; 

    while(count < num){
        cout << "animal info:....  ";
        cin >> input >>inputName >> inputAge;
        if( input == "A"){
        v.push_back(new Animal(inputName, inputAge));
        
        
        }else{
       v.push_back(new Dog(inputName, inputAge));
    }
        count++;
    }
    
    display(v);
    //Dog myDog = Dog("Snoopy", 4);
    
    //cout << myDog.getName() << " is " << myDog.getAge() << endl;
    //myDog.feed();

    return 0;
}
