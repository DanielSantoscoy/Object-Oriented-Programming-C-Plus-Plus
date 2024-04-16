#include<iostream>
#include<vector>
#include<fstream>
#include<ctime>
using namespace std;


/**
 * @brief returns the first index of elem if it exists, otherwise returns -1
 * iterativeSearch starts at the first index and iterates sequentially to the next until it either 
 * finds the element or until it reaches the end (i.e. element does not exist)
 * 
 * @param v : vector of elements
 * @param elem : integer to look for 
 * @return int 
 */
int iterativeSearch(vector<int> v, int elem) {
    // use a for loop where the index, i goes from 0 to the size of v

    // inside the for loop, use an if statement to check whether the element at i (e.g. v[i]) equals elem
    // inside the if statement return -1

}


/**
 * @brief returns the index of elem, if it exists in v. Otherwise it returns -1.
 * binarySearch is recursive (i.e. functions calls itself).
 * It utilizes the fact that v is increasing order (e.g. values go up and
 * duplicates are not allowed).
 * 
 * It calculates the mid from the start and end index. It compares v[mid] (i.e. value
 * at mid) with elem and decides whether to search the left half (lowewr values)
 * or right half (upper values).
 * 
 * 
 * @param v : vector of elements 
 * @param start : leftmost index (starting value is 0)
 * @param end : rightmost index (starting value is v.size())
 * @param elem : integer to look for
 * @return int 
 */

int binarySearch(vector<int> & v, int start, int end, int elem) {
    // write an if statement that checks the terminating case 
    // inside the statement return -1

    // instantiate the midpoint


    // Use if/else statements to do the following:
    // 1) update end (search left half)

    // 2) update start (search right half)

    // 3) return mid (found the elem)

    // return a recursive call to binarySearch(...)

    
}

int main()
{
    
    return 0;
}