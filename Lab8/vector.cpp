#include<iostream>
#include<vector>
using namespace std;

/**
 * @brief prints the elements in the vector and their memory locations
 * 
 * @param v - vector of integers
 */
void printMemVec(vector<int> & v){
    cout << "Each integer is worth " << sizeof(int) << " bytes\n";
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << "Value is " << v[i] << " at Memory Location " << &v[i] << "\n";
    }
    
}

/**
 * @brief increments all of the elements in v by 10
 * 
 * @param v - address to a vector of integers
 */
void incVecBy10(vector<int> &v) {
    for (size_t i = 0; i < v.size(); i++)
    {
        v[i] += 10;
    }
    
}

int main()
{
    // create a constant integer called SIZE that is of value 5
    const int SIZE = 5;

    // create a vector of integers called vec that can hold up to 5 elements
    vector<int> v(SIZE);

    // use a for loop to populate vec with the values 100 to 104
    for (size_t i = 0; i < SIZE; i++)
    {
        v[i] = 100 + i;
    }
    

    printf("Before increment------------\n");
    // call printMemVec(...) on vec
    printMemVec(v);


    // call incBy10(...) on vec
    incVecBy10(v);


    printf("After increment------------\n");
    // call printMemVec(...) on vec again to view the changes
    printMemVec(v);


    // remove the last element of vec
    v.pop_back();



    printf("After Pop------------\n");
    // call printMemVec(...) on vec again to view the changes
    printMemVec(v);


    // append 101 and 102 at the end of vec
    v.push_back(101);
    v.push_back(102);


    printf("After Push------------\n");
    // call printMemVec(...) on vec again to view the changes
    printMemVec(v);

    return 0;
}