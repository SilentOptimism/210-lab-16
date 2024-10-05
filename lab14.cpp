// library headers
#include <iostream>
#include <iomanip>
#include <array>

// brings the std namespace into global scope
using namespace std;

// Color: a simple class that contains 3 integers for color values RGB
class Color
{
private:
    // Member variables
    int red;
    int green;
    int blue;

public:
    // Uses a bracket initializer list to prevent user from inputing doubles avoiding narrowing conversions
    Color(int Red, int Green, int Blue) : red{Red}, green{Green}, blue{Blue} {};
    
    // Uses a bracket initializer list to prevent user from inputing doubles avoiding narrowing conversions
    Color() : red{0}, green{0}, blue{0} {}; // uses a default constructor to set all color values to zero

    // a construct that sets all color value's to one value
    Color(int Red) : red{Red}, green{0}, blue{0} {}; // PARIIAL CONSTRUCTOR


    // Our setter functions
    void setRed(int Red)        {red = Red;}
    void setGreen(int Green)    {green = Green;}
    void setBlue(int Blue)      {blue = Blue;}

    // Our getter variables
    int getRed()       {return red;}
    int getGreen()     {return green;}
    int getBlue()      {return blue;}

    // Prints a color
    void print(){
        cout << setw(1) << left << "R:";
        cout << setw(4) << left << red;
        cout << setw(1) << left << "G:";
        cout << setw(4) << left << green;
        cout << setw(1) << left << "B:";
        cout << setw(4) << left << blue;
        cout << "\n\n";
    }
};

const int SIZE = 10; // array size

int main(int argc, char const *argv[])
{
    array<Color, SIZE> colorListEmpty;
    array<Color, SIZE> colorListRed;
    array<Color, SIZE> colorList;
    int colorVal = 128;

    // Fills the colorList with default colors
    for(int i = 0; i < SIZE; i++){
        colorListEmpty.at(i) = Color();
    }

    // Fills the colorList with Red
    for(int i = 0; i < SIZE; i++){
        colorListRed.at(i) = Color(colorVal);
    }

    // Fills the colorList 
    for(int i = 0; i < SIZE; i++){
        colorList.at(i) = Color(colorVal,colorVal,colorVal);
    }

    for(auto colors : colorList){
        colors.print();
    }

    for(auto colors : colorListRed){
        colors.print();
    }

    for(auto colors : colorListEmpty){
        colors.print();
    }
    return 0;
}