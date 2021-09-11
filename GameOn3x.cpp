/*
	Author: Max Edward
    Email: maxedwar@uat.edu
    Assignment Name: Game On!
*/

// Game On 3.0 (Originally Game Over 3.0)
// Demonstrates using declarations


/*
    The #include part of the next line tells the preprocessor to "include" the contents of another file.
    The "iostream" is part of the standard library and contains code to allow for output to be displayed.
*/
#include <iostream>
/*
    The "using" directive gives direct access to elements of the next stated namespace.
    The "std" prefix is a namespace - it identifies the group to which something belongs.
    Next, you prefix the namespace using the scope resolution operator which is the "::" part of the line.
    The "cout;" is an object that is used to send data to the standard output stream.

    The reason this is better than writing out "using namespace std;" instead is because it explicitly states which elements you want to use.
    It also doesn't have to fetch a ton of other elements that you may not ever use in your program, resulting in quicker processing and load times.
*/
using std::cout;
/*
    We once again have the "using" directive to gain access to the elements.
    Just like above, "std" is the namespace prefix to specify the group.
    Again, we have the scope resolution operator between the namespace and object.
    Finally, we have the "endl;" object which is jsut like pressing the enter - or return - key. 
    It specifies the end of the line and whatever is after this bit is sent to the next line.
*/
using std::endl;

/*
    The "int" part of the next line indicates that the function will return an integer value.
    This line intiates a function. In this case the function being initiated is called main().
    All C++ programs must have a function called main(), which is the starting point of a program. 
*/  
int main()
// The { and } mark the beginning and end of the function. Code between these curly brackets is called a block. 
{
    /*
        We can see the "cout" object being used here. Next to that is the output operator to send the literal string "Game On!". 
        Think of the << as a funnel sending whatever is on the open side to the pointed side.
        Finally we have the "endl" object to state that this is the end of the line.
    */
    cout << "Game On!" << endl;
    // The system("pause") tells the system to wait until a button is pressed to continue, just like pressing the pause button on a stopwatch. 
    system("pause");
    /*
        Finally, the return 0 bit literally returns a 0 to the operating system.
        Returning a 0 from the main() function is a way to tell the system that the program ended with no 
        issues - even if there might be something that is an issue to the programmer.
    */
    return 0;
}
/*
    Some final comments:
    There are a handful of lines that end in ";". That is because these lines are statement lines and control the execution flow. 
    ALL statements must end with a semicolon or the compilor will give you an error. Forgetting this semicolon is one of the most common errors for beginners. 
*/