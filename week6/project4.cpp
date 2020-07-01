#include<iostream>
#include"matrix.hpp"

using namespace std;

int main(int argc, char * argv[]) {
   Matrix m1(argv[1]);
   Matrix m2(argv[2]);
   
   cout << endl << "Matrix 1:" << endl;
   m1.print();
   cout << endl << "Matrix 2:" << endl;
   m2.print();

   cout << endl<< "Transpose m1: " << endl;
   Matrix m3 = m1.transpose();
   m3.print();
   cout << endl<< "Add m1 + m2: " << endl;
   Matrix m4 = m1 + m2;
   m4.print();
   cout << endl<< "Mult m1*3 (right): " << endl;
   Matrix m5 = m1 * 3;
   m5.print();
   cout << endl<< "Mult 5*m2 (left): " << endl;
   Matrix m6 = 5 * m2;
   m6.print();
   cout << endl<< "Assignment m7=m1: " << endl;
   Matrix m7 = m1;
   m7.print();

}
