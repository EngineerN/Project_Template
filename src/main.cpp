// overloading class constructors
#include <iostream>
#include "rectangle/rectangle.h"

using namespace std;


int main () {
  Rectangle rect (3,4);
  Rectangle rectb;
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}