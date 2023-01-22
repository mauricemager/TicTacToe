#include <iostream>
#include <vector>

class Game{
private:
    std::vector <int>  m_GameVector{};

public:
    static void initGame();
};

void Game::initGame() {
    std::cout << "Hello and welcome to a new game!" << std::endl;
}

int playGame(){
    std::cout << "Hello Game! \n";
    Game tictactoe;
    tictactoe.initGame();
    return 0;
}