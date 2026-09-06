// COMSC-210-5293 | Lab 4 | Yuyi Chen

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

// Define a struct to represent a color with red, green, and blue components
struct Color {
    int red;
    int green;
    int blue;
};

// Define a constant for the width of the output columns
const int width = 10;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between [25, 50]
    int n = rand() % 26 + 25;

    // Create an empty vector to hold Color objects
    vector<Color> colors;

    // Generate n random Color objects
    for (int i = 0; i < n; i++) {
        Color temp;

        // Generate random values for the red, green, and blue
        temp.red = rand() % 256;
        temp.green = rand() % 256;
        temp.blue = rand() % 256;

        // Add Color to the vector
        colors.push_back(temp);
    }

    // Print the header for the table
    cout << right << setw(width) << "Color#"
         << right << setw(width) << "R Value" 
         << right << setw(width) << "G Value" 
         << right << setw(width) << "B Value" << endl;

    // Print a line of dashes to separate the header from the data
    cout << right << setw(width) << "------"
         << right << setw(width) << "-------" 
         << right << setw(width) << "-------" 
         << right << setw(width) << "-------" << endl;

    // Print the color data in a formatted table
    for (int i = 0; i < colors.size(); i++) {
        cout << right << setw(width) << i + 1
             << right << setw(width) << colors[i].red
             << right << setw(width) << colors[i].green
             << right << setw(width) << colors[i].blue << endl;
    }

    return 0;
}