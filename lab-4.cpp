// COMSC-210-5293 | Lab 4 | Yuyi Chen

#include <iostream>
#include <vector>
#include <random>
using namespace std;

// Define a struct to represent a color with red, green, and blue components
struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    // Create a vector to hold Color objects
    vector<Color> colors;

    // Create an instance of the Color struct and initialize it with specific values
    Color testColor = {255, 155, 55};

    // Add the testColor instance to the colors vector
    colors.push_back(testColor);

    // Output the values of the color components to the console
    cout << colors[0].red << " " 
         << colors[0].green << " " 
         << colors[0].blue << endl;

    return 0;
}