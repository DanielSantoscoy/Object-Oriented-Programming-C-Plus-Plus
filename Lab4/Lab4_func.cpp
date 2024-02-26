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

/** division
* @brief returns x / y
*
* @param x : (double)
* @param y : (double)
* @return double
*/

double division(double x, double y) {
    return x/y;
}

/** isGreatherThan
* @brief returns whether x is greater than y
*
* @param x : (double)
* @param y : (int)
* @return true : x is greater than y
* @return false : x is less than or equal to y
*/

bool isGreaterThan(double x, int y) {
    if (x > y)
        return true;
    else if 
        (x <= y)
        return false;
}

/** select
* @brief output the statements based on func_type
* func_type : output
* "sum" : "The sum is "
* "division" : "The quotient is "
* "comparison" : "The first value being greater than the second value is "
* All other phrases: "Invalid function type\n"
* @param func_type : (string)
* @return string
*/

string func_type select(string)
    string out = ""
    if (func_type == "sum")
        out = "The sum is "
    else (func_type == "division")

    if (func_type == "division")
        out = "The quotient is "
        else (func_type == "comparison")
    
    if (func_type == "comparison")
        out = "The first value being greater than the second value is "
        else (out = "Invalid function type\n")

int main()
{
    //Initialize 3 integer paramaters
    int x = 2;
    int y = 3;
    int z = 5;

    //call sumOfThree
    int sum_out = sumOfThree();
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

