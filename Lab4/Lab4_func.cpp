#include<iostream>
using namespace std;

/** sumOfThree
* @brief returns the sum of x, y, and z
*
* @param x : (int)
* @param y : (int)
* @param z : (int)
* @return int
*/
int sumOfThree(int x, int y, int z) {
    return x + y + z;
}

int main()
{
    //Initialize 3 integer paramaters
    int x = 2;
    int y = 3;
    int z = 5;

    //call sumOfThree
    int sum_out = sumOfThree(int x, int y, int z);
    //call myPrint
    myPrint("sum", sum_out);

    //Initialize 2 double parameters
    double dividend = 12345.1;
    double divisor = 2345.6;

    //call division
    double div_out = division(dividend, divisor);
    myPrint("division", div_out);

    //compare div_out and sum_out
    bool is_greater_out = isGreaterThan(div_out, sum_out);
    myPrint("comparison", is_greater_out);
    return 0;
}

