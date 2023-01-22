#include <iostream>
#include <vector>

class Game{
private:

public:
    std::vector <int>  m_Board;
    void initGame();
    void renderBoard();
//    void makeMove(int choice);
};

class Player : public Game {
private:
    int id;
private:
    void makeMove(int choice);
public:
};

void Game::initGame() {
    std::cout << "Hello and welcome to a new game!" << std::endl;
    m_Board.assign(9, 0);
}

void Game::renderBoard() {
    std::cout << "Board looks like this:    [ ";
    for (int i : m_Board)
        std::cout << i << " ";
    std::cout << "]" << std::endl;
}

void Player::makeMove(int choice) {
    while (choice < 1 or choice > 9) {
        std::cout << "Entered value is not correct" << std::endl;
        std::cout << "Please enter valid input from range [1, 9]:" << std::endl;
        std::cout << "Your input = ";
        std::cin >> choice;
    }
    Game::m_Board[--choice] = 1;
}


int main(){
    std::cout << "Hello Game! \n";
    Game tictactoe;
    Player playerOne;
    tictactoe.initGame();
    tictactoe.renderBoard();
//    playerOne
//    tictactoe.makeMove(0);
//    tictactoe.renderBoard();

    return 0;
}