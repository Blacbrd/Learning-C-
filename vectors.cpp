#include <vector>
#include <string>
#include <iostream>
#include <list>

int main()
{

    // Acts very similarly to arraylist / list in java/python
    std::vector<std::string> cars = {"Volvo", "BMW"};

    for (std::string car : cars)
    {
        std::cout << car << "\n";
    }

    cars.push_back("Mini"); // Adds an item to the vector

    std::cout << "\n";

    for (std::string car : cars)
    {
        std::cout << car << "\n";
    }

    cars.pop_back();

    std::cout << "\n";

    for (std::string car : cars)
    {
        std::cout << car << "\n";
    }

    std::cout << "\n";

    std::cout << "The size is " << cars.size() << std::endl;
    std::cout << "Is the list empty?: " << cars.empty() << std::endl;

    // There are also lists which act very similarly, however they are implemented using a doubly linked list
    // This means they are very fast to insert into, however have slow access times
    // List is better if you want to insert a lot into the middle
    // Vector is better if you have a lot of access

    std::vector<int> vec = {1, 2, 3};
    vec.push_back(4);                                       // Fast O(1) append
    std::cout << "Vector element: " << vec[2] << std::endl; // O(1) access

    std::list<int> lst = {1, 2, 3};

    auto it = lst.begin(); // Points to (it is a pointer)
    ++it;                  // Now points to 2

    std::cout << "Iterator now points to: " << *it << std::endl;

    return 0;
}