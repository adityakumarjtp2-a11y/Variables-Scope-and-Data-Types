#include <iostream>
using namespace std;
int glo = 8;
void sum() {
    int a;
    cout << glo;
}

int main() { 
    int glo = 4;
    glo = 49;
    // int a = 4;
    // int b = 5;
      int a = 4, b = 5;
      float pi = 3.14;
      char A = 'B';
      bool is_true = false;
       sum();
      cout <<glo<<is_true;

      cout << " This is tutorial 4.\n Here the value of a is " <<a<<".\n The value of b is " << b;
      cout <<"\nThe value of pi is :" << pi;
      cout <<"\nThe value of A is :" << A;

      return 0;
}