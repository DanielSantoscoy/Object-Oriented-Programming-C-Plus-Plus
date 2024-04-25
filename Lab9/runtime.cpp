#include<iostream>
#include<vector>
#include<fstream>
#include<chrono>
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
    for (int i = 0; i < v.size(); i++)

    // inside the for loop, use an if statement to check whether the element at i (e.g. v[i]) equals elem
    // inside the if statement return -1
    
    {
        if (v[i] == elem) {
            return i;
        }
    } 
    return -1;  
}




/**
 * @brief returns the index of elem, if it exists in v. Otherwise it returns -1.
 * binarySearch is recursive (i.e. functions calls itself).
 * It utilizes the fact that v is increasing order (e.g. values go up and
 * duplicates are not allowed).
 * 
 * It calculates the mid from the start and end index. It compares v[mid] (i.e. value
 * at mid) with elem and decides whether to search the left half (lower values)
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
    if (start <= end )
    {
        // instantiate the midpoint
        int mid = (start + end) / 2;

        // Use if/else statements to do the following:
        // 1) update end (search left half)
        if (v[mid] > elem) {
            return binarySearch(v, start, mid - 1, elem); 
        // 2) update start (search right half)   
        } else if (v[mid] < elem){
            return binarySearch(v, mid + 1, end, elem); 
            // 3) return mid (found the elem)
        } else {
            return mid;
        }

    // return a recursive call to binarySearch(...)
    }
    // if elem isn't found
    return -1;
    
}


/**
 * @brief updates v to contain the values from filename (leave as is)
 * 
 * It is expected that the files contain values ranging from one to 
 * one hundred million in ascending order (no duplicates).
 * 
 * @param filename : string
 * @param v : vector
 */
void vecGen(string filename, vector<int> & v) {
    ifstream file(filename);
    int num;
    v.clear();
    while(file.is_open() && file >> num) {
        v.push_back(num);
    }
    file.close();
}

/**
 * @brief writes to file the time it took to search with respect to the
 * size of the vector, n
 * Number of Elements (n)       Time (sec)
   XXXX                         X.XXXXX
   XXXX                         X.XXXXX
   @param filename (string) : filename (e.g. output_10000_numbers.csv)
   @param times (vector<double>) : average times
   @param n (vector<int>) : sizes of vectors
 */
void writeTimes(string filename, const vector<double> times, const vector<int> n) {
    ofstream myFile(filename);

    myFile << "Number of elements (n)\t Time (sec)" << endl;
    for (int i = 0; i < times.size(); i++)
    {
        myFile << n[i] << "\t" << times[i] << "\n";
    }
    myFile.close();
    cout << "Wrote to " << filename << endl;
}

/**
 * @brief computes the average of the elements in vector, a
 * 
 * @param a vector of double
 * @return double
 */
double average(vector<double> & a) {
    if (a.empty())
    {
        return 0.0;
    }
    
}

int main()
{

    // test elements to search for (leave as is)
    vector<int> elem_to_find;
    vecGen("test_elem.csv", elem_to_find);

    // size (n) of all tests
    vector<int> files_sizes;
    vecGen("size.csv", files_sizes);

    // n list of numbers
    vector<int>v;

    // results of times
    vector<double> times;

    // results of times
    vector<double> avg;

        // create a for loop to iterate through the file sizes
        for (int i = 0; i < files_sizes.size(); i++) {
        
            // get the name/size of the file and assign it to string called filename
           string filename = to_string(files_sizes[i]) + "_numbers.csv";        

        // call vecGen on filename and v
        vecGen(filename, v);



        // print filename (this will be good for debugging)
        cout << filename << endl;

        // call time.clear() // this ensures that we reset times everytime we need to write a new file
        time.clear();

        // create another for loop to iterate through all the elements of elem_to_find
        // the code here should be nearly identical to the code from previous lab

        for (int i = 0; i < elem_to_find.size(); i++) {
        
            return elem_to_find[i];
        }

            // append the elapsed_time_in_sec to the vector, times (hint: push.back())
            // This code should be within the for loop that iterates
            // through all the elements from elem_to_find
            elapsed_time_in_sec.push.back(times, v);


        // call average on the vector, times, and save it as a double. This code should be
        // outside the for loop that iterates through all the elements of elem_to_find
        // but within the for loop that iterates through the file sizes        
        vector<double> avg;
        }

        // outside both for loops call writeTimes with the appropriate paramaters
        // the first parameter should be "binarySearch_times.csv"
        // read the function brief to complete the rest of the parameters
        writeTimes("binarySearch_times.csv", string filename, vector<double> times, vector<int> n);

}

// iterativeSearch is 688 microseconds, divide by 10 and you get 68.8
// binarySearch is 7 microseconds, divide by 10 and you get 0.7





