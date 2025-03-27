#include <iostream>
#include <string>
#include <limits> // Include this for numeric_limits

using namespace std;

int main()
{
    cout << "Hello World!\n"; // Same as "print()"

    const int myAge = 18;
    cout << "I am " << myAge << " years old!\n";

    int nums = 3 + 4;
    cout << "3 + 4 is " << nums;

    cout << "\nWhat's your age?: ";
    int x;
    cin >> x;

    cout << "Damn, you're " << x << " years old?";

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clears the leftover newline

    string name;
    cout << "\nWhat's your name?: ";
    getline(cin, name); // Now it will properly wait for input

    cout << "Your name is " << name.length() << " letters long!";

    char str[] = "\nThis is a c-style string!";
    cout << str;

    cout << '\n';

    int myNums[5] = {1, 2, 3, 4, 5};

    for (int i : myNums)
    {
        cout << i << "\n";
    }

    return 0;
}
