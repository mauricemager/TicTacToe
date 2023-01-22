#include <iostream>
#include <list>
#include <vector>
#include "functions.hh"


class Game {
private:
    void startGame();
public:
    std::vector <int> board;
    void renderBoard();

};

void Game::startGame() {
    std::cout << "Hello! the Game is started!" << std::endl;
}

class IntPair
{
public:
    int m_first{};
    int m_second{};

    void set(int first, int second) {
//        std::cout << "Give values for first and second int:" << std::endl;
        m_first = first;
        m_second = second;
    };
    void print(){
        std::cout << "IntPair = (" << m_first << ", " << m_second << ")" << std::endl;
    };
};

void printEmptyGrid()
{
    std::cout << "_|O|O\n"
                 "X|X|_\n"
                 " | | " << std::endl;
}

//void createEmptyList()
//{
//    std::list<int> gameList(9);
//    std::cout << "mylist" << std::endl;
//}

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

std::vector <int> gameVector(){
    std::vector<int> vector(9);
    return vector;
}

auto makeMove(){

}



int main2() {
    IntPair p1;
    p1.set(1, 1); // set p1 values to (1, 1)

    IntPair p2 { 2, 2 }; // initialize p2 values to (2, 2)
//
//    p1.print();
//    p2.print();

//    printEmptyGrid();
//    createEmptyList();

    // Initialize vector
    auto v = gameVector();
//    std::cout << "The length of vector is " << v.size() << std::endl;

    // Print vector in main
//    for (int i : v)
//        std::cout << i << ' ';
//    std::cout << '\n';

    // Set 5th value in vector to 2
//    v[5] = 2;
    // print the vector by passing address
//    printVector(v);
//    v[5] = 1;
//    std::cout << '\n';
//
//    std::cout << isEmpty(5, v);



//    Game game

    return 0;
}

