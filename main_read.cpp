#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    // Prompt the user to input a number
    cout << "Enter a number: ";
    cin >> num;

    // Validate if the input number is positive
    if (num <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1; // Exit the program with an error code
    }

    // Calculate the summation of the series
    for (int i = 1; i <= num; ++i) {
        sum += i;
    }

    // Print the summation of the series
    cout << "The summation of the series up to " << num << " is: " << sum << endl;

    return 0;
}
