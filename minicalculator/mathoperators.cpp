#include <iostream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Khyam Arain
//CIS165 

using namespace std;

 main()
{
    //#variables    
int o1, o2;
cout << "enter two numbers "; cin >> o1 >> o2;
int
    sum = o1 + o2,
    diff = o1 - o2,
    prod = o1 * o2,
    wq = o1/o2,
    power = pow(o2, 4),
    re =  o1 % o2;
   
float
    rq = (float)o1 / (float)o2,
    square = sqrt(o1); 

//output
cout <<
"Sum " << sum << endl << 
"Diff " << diff << endl <<
"Prod "<<  prod << endl << 
"WQ " << wq << endl << 
"Second number to the fourth power " << power <<endl<< 
"Remainder of first/Second "<< re << endl <<
"real quotient " << rq << endl <<
"square of first integer " << square << endl;
system("pause");
return 0;
}
