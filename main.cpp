#include <iostream>
#include <list>
#include <vector>
#include "functions.hh"

void printEmptyGrid()
{
    std::cout << "_|_|_\n"
                 "_|_|_\n"
                 " | | " << std::endl;
}

void createEmptyList()
{
    std::list<int> gameList(9);
    std::cout << "mylist" << std::endl;
}

void printVector(std::vector<int> &v)
{
    for (int i : v)
        std::cout << i << ' ';
    std::cout << '\n';
}

bool isEmpty(int num, std::vector<int> &v)
// Check if a spot is still available
{
    if (v[num] == 0)
        return true;
    else
        return false;
}


int main() {
    printEmptyGrid();
    createEmptyList();

    // Initialize vector
    std::vector<int> v(9);
    std::cout << "The length of vector is " << v.size() << std::endl;

    // Print vector in main
    for (int i : v)
        std::cout << i << ' ';
    std::cout << '\n';

    // Set 5th value in vector to 2
    v[5] = 2;
    // print the vector by passing address
    printVector(v);
    std::cout << '\n';

    std::cout << isEmpty(1, v);
    return 0;
}

