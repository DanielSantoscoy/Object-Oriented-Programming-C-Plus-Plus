#include<iostream>
#include<vector>
using namespace std;

/**
 * @brief prints the elements in the vector and their memory locations
 * 
 * @param v - vector of integers
 */
void printMemVec(std::vector<int> & v){
    cout << "Each integer is worth " << sizeof(int) << " bytes\n";
    int i = 0;
    for (size_t i = 0; i < v.size(); i++);
    {
        cout << "Value is " << v[i] << " at Memory Location " << &v[i];
    }
    
}

int main()
{
    
    return 0;
}