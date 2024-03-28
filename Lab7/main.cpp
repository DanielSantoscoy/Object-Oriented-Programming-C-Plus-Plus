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

void writeToFile(string &filename, string * arr, int sample_size) {
    ofstream file(filename);
    string val;

    for (int i = 0; i < sample_size; i++)
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

void writeToFile(string &filename, char * arr, int sample_size) {
    ofstream file(filename);
    char val;

    for (int i = 0; i < sample_size; i++)
    {
        file << arr[i];
        file << "\n";
    }
    
}

/**
 * @brief reads the content of any file
 * 
 * @param filename
 */

void readFile(string filename) {
    ifstream file(filename);
    if (file.is_open()) {  
        string line;  
        while (getline(file, line)) { 
            cout << line << endl;  
        }
        file.close(); 
    } else {
        cerr << "Unable to open file: " << filename << endl;
    }
}

void writeToFile(string &filename, int arr[], int sample_size) {
    ofstream file(filename);
    if (file.is_open()) {
        for (int i = 0; i < sample_size; i++) {
            file << arr[i] << "\n";
        }
        file.close();
        cout << "Wrote to " << filename << endl;
    } else {
        cerr << "Unable to open file: " << filename << endl;
    }
}


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

    string str_file = "array_str.csv";

    // CALL writeToFile using the string variable above, array_str, and SAMPLE_SIZE as
    // parameters

    writeToFile(str_file, array_str, SAMPLE_SIZE);

    // CREATE a string variable as the filename and assign
    // it the value "array_char.csv"

    string char_file = "array_char.csv";

    // CALL writeToFile using the string variable above, array_char, and SAMPLE_SIZE as
    // parameters

    writeToFile(char_file, array_char, SAMPLE_SIZE);

    // CALL readFile() on all 3 generated files.

    readFile("array_int.csv");
    readFile("array_str.csv");
    readFile("array_char.csv");

    return 0;
}