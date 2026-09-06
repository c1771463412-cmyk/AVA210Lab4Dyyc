// COMSC-210-5293 | Lab 4 | Yuyi Chen

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Define a struct to represent a color with red, green, and blue components
struct Color {
    int red;
    int green;
    int blue;
};

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

    // Print the RGB values of each Color object in the vector
    for (int i = 0; i < colors.size(); i++) {
        cout << colors[i].red << " " 
             << colors[i].green << " " 
             << colors[i].blue << endl;
    }

    return 0;
}