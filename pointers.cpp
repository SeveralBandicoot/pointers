/*
Pointers

@ AJ Enrique Arguello

9/21/24

Objectives: 
    - What is Polymorphism? How can Pointers be used to achieve Polymorphism?

    - Create an example and demonstrate the Base using the Derived Attributes
 
New Concepts: pointers, polymorphism 
*/
#include <iostream>
#include "fruit.h"
using namespace std;
void display(fruit apple, fruit banana);
int main() {
    fruit apple("Apple", "Kirkland", 1, 1.99);
    fruit banana("Banana", "Kirkland", 5, 3.99); // banana object declared

    fruit *Ptr1 = &apple; // apple object is thrown into pointer by reference 
    fruit *Ptr2 = &banana; // banana object is thrown into pointer by reference

    Ptr1->print(); // using the pointer objects that the apple/banana/green data is within, we can run print() function by referencing said pointers
    Ptr2->print();

    tomato green("Green Tomato", "Cermak", 1, 1.99);

    tomato *Ptr3 = &green; // green object is thrown into pointer by reference 
    Ptr3->print();
return 0;
}
