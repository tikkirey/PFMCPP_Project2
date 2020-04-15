#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 int
 char 
 bool 
 float 
 double
 void
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int floor = 13;
    int seatNum = 1;

    char symb1 = 'c';
    char symb2 = 'b';
    char symb3 = ' ';

    bool trigger = true;
    bool triggerNext = false;
    bool statementIs = true;
    
    float num1 = 49506.2f;
    float num2 = 984.4f;
    float num3 = 395.5f;

    double dnum1 = 5605533.7;
    double dnum2 = 4.563;
    double dnum3 = 0.1;
    
    ignoreUnused(number,floor, seatNum, symb1, symb2, symb3, trigger, triggerNext, statementIs, num1, num2, num3, dnum1, dnum2, dnum3); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void goToFloor(int floor = 1)
{
    ignoreUnused(floor);
}

/*
 2)
 */
char combineSymbols(char symb1 = 't', char symb2 = ' ', char symb3 = 'm')
{
    ignoreUnused(symb1, symb2, symb3);
    return {};
}
/*
 3)
 */
double addValues(double dnum1 = 0.1, double dnum2 = 0.7)
{
    ignoreUnused(dnum1, dnum2);
    return {};
}
/*
 4)
 */
double multValues(double dnum1, double dnum2)
{
    ignoreUnused(dnum1, dnum2);
    return {};
}
/*
 5)
 */
bool checkStatment(bool statementIs = true, char symb1 = 'u')
{
    ignoreUnused(statementIs, symb1);
    return {};
}
/*
 6)
 */
void bookTicket(bool trigger, int seatNum)
{
    ignoreUnused(trigger, seatNum);
}
/*
 7)
 */
void stopElevator(int floor = 1)
{
    ignoreUnused(floor);
}
/*
 8)
 */
float doubleValue(float num1)
{
    ignoreUnused(num1);
    return {};
}
/*
 9)
 */
char assignSymbol(char symb1)
{
    ignoreUnused(symb1);
    return {};
}
/*
 10)
 */
void rentAFlat(int number)
{
    ignoreUnused(number);
}

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    goToFloor(13);

    //2)
    auto newSymb = combineSymbols('f', 'l', 'y');

    //3)
    auto newVal = addValues(4.5, 8.0);

    //4)
    auto multVal = multValues(5.4, 2.042);

    //5)
    auto statment2 = checkStatment(false, 'y');

    //6)
    bookTicket(true, 68);

    //7)
    stopElevator(13);

    //8)
    auto num4 = doubleValue(5.95f);

    //9)
    auto sumb4 = assignSymbol(' ');

    //10)
    rentAFlat(7);

    ignoreUnused(carRented, newSymb, newVal, multVal, statment2, num4, sumb4);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
