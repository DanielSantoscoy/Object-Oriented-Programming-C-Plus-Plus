#include<iostream>
#include<vector>
using namespace std;

/**
 * @brief prints the elements in the vector and their memory locations
 * 
 * @param v - vector of integers
 */
void printMemVec(std::vector<int> & v){
    printf("Each integer is worth " + v.sizeof() " bytes\n")
    for (size_t i = 0; i < v.size; i++)
    {
        printf("")
    }
    
}

int main()
{
    
    return 0;
}