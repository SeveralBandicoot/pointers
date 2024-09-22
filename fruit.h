#include <iostream>

using namespace std;

class fruit { // base class
  public: // base attributes vvv
    fruit(string n, string bnd, int ct, double cst){
            name = n;
            brand = bnd;
            count = ct;
            cost = cst;
        }

  virtual void print() {
    cout << "Fruit: " << name << endl;
    cout << "Brand: " << brand << endl; // brand value is output using apple/banana object
    cout << "Ct: " << count << endl; // count value is output using apple/banana object
    cout << "Cost: $" << cost << endl; // cost value is output using apple/banana object
    cout << "\n\n\n";
  }
  protected:
    string name;
    string brand;
    int count;
    double cost;
};

class tomato : fruit {
  public: 
        tomato(string n, string bnd, int ct, double cst) : fruit(n, bnd, ct, cst) {}
     virtual void print() {
        cout << "Fruit: " << name << endl;
        cout << "Brand: " << brand << endl; // brand value is output using green object
        cout << "Ct: " << count << endl; // count value is output using green object
        cout << "Cost: $" << cost << endl; // cost value is output using green object
    }
};