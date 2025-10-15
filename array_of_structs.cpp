#include <iostream>
#include <fstream>
using namespace std;

// ISSA MARTINEZ, OSCAR CASTELLANOS 
// Test Commit
// Test Commit 2
// Test Commit 3

// TODO: Step 1 - Define the struct TemperatureRecord
// It should contain two integer fields: day and temperature.

struct TemperatureRecord {
    int day;
    int temperature;
};

// Constants
const int MAX_DAYS = 31;

// Function Prototypes
void readTemperatures(TemperatureRecord arr[], int& days); // TODO: Fix the parameters
// void printTemperatures(const ???);
// TemperatureRecord findMin(const ???);
// TemperatureRecord findMax(const ???);
// double findAverage(const ???);

int main() {
    // TODO: Step 2 - Declare an array of TemperatureRecord structs (MAX_DAYS size)
    TemperatureRecord records[MAX_DAYS];

    int size = 0;  // Actual number of records read

    // TODO: Step 3 - Call readTemperatures() to load data from file
    readTemperatures(records, size);

    // TODO: Step 4 - Print the temperatures

    // TODO: Step 5 - Compute and display min, max, and average temperature

    return 0;
}

// TODO: Step 6 - Implement readTemperatures()
// Read from "temps.txt" and store data in the array

void readTemperatures(TemperatureRecord arr[], int& days) {
    ifstream infile("temps.txt");

    if (!infile) {
        cout << "No File Found\n";
    }
    int i = 0;
    while (i < MAX_DAYS && infile >> arr[i].day && infile >> arr[i].temperature) {
        ++i;   
    }
    days = i;
    cout << "Read " << days << " number of records\n";
}

// TODO: Step 7 - Implement printTemperatures()
// Print all stored temperatures in a formatted table

// TODO: Step 8 - Implement findMin()
// Return the TemperatureRecord with the lowest temperature

// TODO: Step 9 - Implement findMax()
// Return the TemperatureRecord with the highest temperature

// TODO: Step 10 - Implement findAverage()
// Compute and return the average temperature
