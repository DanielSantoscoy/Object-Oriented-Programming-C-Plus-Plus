// Lab3_CF.cpp
/**
 * @file Lab3_CF.cpp
 * @author Daniel Santoscoy (you@domain.com)
 * @brief {Combining while and if/else statments}
 * @version 0.1
 * @date 2024-02-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include<iostream>
using namespace std;

int main()
{
    int x = 0;
    int y = 5;
    
    while (x < y) {
        printf("%i\n",x);
        x = x + 3;
    }

    if (x > y)
    {
        x % 2 == 0;
    } else if (x % 2 == 0){
        printf("x is even\n");
    } else {
        printf("x is odd\n");
    }
    
    return 0;
}