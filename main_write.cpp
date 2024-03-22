#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   int N;
    
    // Open the file for writing
    ofstream outFile("students.txt");

    if (!outFile) {
        cerr << "Error: Unable to create or open the file." << endl;
        return 1; // Exit program with error code
    }

    // Ask for the number of students
    cout << "Enter the number of students: ";
    cin >> N;

    // Write the number of students to the file
    outFile << N << endl;

    // Input student information and write to the file
    for (int i = 0; i < N; ++i) {
        string name;
        int score1, score2;

        cout << "Enter name of student " << i + 1 << ": ";
        cin.ignore(); // Clear input buffer
        getline(cin, name);

        cout << "Enter score 1 for " << name << ": ";
        cin >> score1;

        cout << "Enter score 2 for " << name << ": ";
        cin >> score2;

        // Write student information to the file
        outFile << name << " " << score1 << " " << score2 << endl;
    }

    // Close the file
    outFile.close();

    cout << "Student information has been saved to students.txt." << endl;

    return 0;
}
}
