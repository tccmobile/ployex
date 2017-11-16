//
// Created by William Smith on 11/16/17.
//

#include<iostream>
#include<string>
using namespace std;

class fruit {
public:
   fruit() { }
   void display() {
      cout << "\nDisplay Fruit " << endl;
   }
   virtual void info() { // virtual function
      cout << "I am a fruit" << endl;
   }
};

class mango : public fruit {
public :
   mango() { }
   void display() {
      cout << "\nDisplay mango" << endl;
   }
   void info() {
      cout << "My name is Mango" << endl;
   }
   void show() {
      cout << "Showing Mango" << endl;
   }
};

int main() {
   fruit *ptr; // pointer to the base class
   fruit f; // declare an object of base class
   mango m; // declare an object of derived class

   /* select the object at run time and call the appropriate member function */
   ptr = &f; // points to 'fruit' object
   ptr->display(); // calls display() of class 'fruit';
   ptr->info(); // calls info() of class 'fruit' 
   ptr = &m; // points to 'mango' object
   ptr->display(); // calls display() of class 'fruit' ( we don't want this )
   ptr->info(); // calls info() of class 'mango'(since info() is virtual)
   //ptr->show(); // compilation error 
   return 0;
}
