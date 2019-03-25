// Name: Khyam Arain
// Course:  CIS-165 
// Last Update: 2/4/2019
// Description: Sum of Two Number, project 1

//*********************** Preprocessor Directives *********************
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

using namespace std;

//******************************* main ********************************
int main(void)
{
  	
//#variables	
int o1, o2;
int sum = o1 + o2,
    diff = o1 - o2,
    prod = o1 * o2,
    wq = o1/o2,
    remainder =  o1%o2,
    power = pow(o2, 4);
float rq = o1/o2,  
    square = sqrt(o2); // square is integer
//algorith
//output
cout << "Enter two numbers";
cin >> o1 >> o2;
cout << "sum = " << sum;
cout << "diff = " << diff;
cout << "prod = " << prod;
cout << "whole quotient = " << wq ;
cout << "Remainder = " << remainder;
cout << "Square = " << square;
cout << "Power = " << power;
cin.get();
return 0;
  }
