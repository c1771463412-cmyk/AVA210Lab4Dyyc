// COMSC-210-5293 | Lab 4 | Yuyi Chen

#include <iostream>
#include <random>
using namespace std;

// Define a struct to represent a color with red, green, and blue components
struct Color {
    int red;
    int green;
    int blue;
};

main() {
    // Create an instance of the Color struct and initialize it with specific values
    Color testColor = {255, 155, 55};

    // Output the values of the color components to the console
    cout << testColor.red << " " 
         << testColor.green << " " 
         << testColor.blue << endl;

    return 0;
}