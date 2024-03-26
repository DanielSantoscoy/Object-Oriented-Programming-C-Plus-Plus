#include<iostream>
#include<fstream>
using namespace std;

/**
 * @brief writes sample_size number of strings
 * Example output: if n = 2 and arr = ["cat","dog"]
 * cat
 * dog
 * 
 * @param filename
 * @param arr
 * @param sample_size
 * 
 */

void writeToFile(string filename, string * arr, string sample_size) {
    ofstream file(filename);
    string val;

    for (string i = 0; i < sample_size; i)
    {
        file << arr[i];
        file << "\n";
    }
    file.close();
    printf("Wrote to %s\n", filename.c_str());
}

/**
 * @brief writes sample_size number of char
 * Example output: if n = 2 and arr = ["c","d"]
 * c
 * d
 * 
 * @param filename
 * @param arr
 * @param sample_size
 */

void writeTofile(char filename, char arr, char sample_size) {
    ofstream file(filename);
    char val;
}

const int SAMPLE_SIZE = 10;

int main() {
    const int SAMPLE_SIZE = 10;
    int array_int[SAMPLE_SIZE] = {1,2,3,4,5,6,7,8,9,10};
    string array_str[SAMPLE_SIZE] = {"This", "is", "a", "sentence. ",
                                    "This", "is", "another", "sentence.",
                                    "The", "end."};
    
    char array_char[SAMPLE_SIZE] = {'a', 'b', 'c', 'd', 'e', '0', '1', '2', '3', '4'};

    string int_file = "array_int.csv";
    writeToFile(int_file, array_int, SAMPLE_SIZE); // arr is already a pointer

    // Do the same for the other arrays

    // CREATE a string variable as the filename and assign
    // it the value "array_str.csv"

    string main = "array_str.csv";

    // CALL writeToFile using the string variable above, array_str, and SAMPLE_SIZE as
    // parameters

    writeToFile("array_str.csv", array_str, SAMPLE_SIZE);

    // CREATE a string variable as the filename and assign
    // it the value "array_char.csv"

    string main = "array_char.csv";

    // CALL writeToFile using the string variable above, array_char, and SAMPLE_SIZE as
    // parameters

    writeToFile("array_char.csv", array_char, SAMPLE_SIZE);

    // CALL readFile() on all 3 generated files.

    readFile("array_str.csv", "array_char", )

    return 0;
}