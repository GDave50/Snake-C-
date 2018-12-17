#include <game/Game.h>

Game::Game()
{
    snake = new Snake();
    food = new Food();
}

Game::~Game()
{
    delete snake;
    delete food;
}

void Game::tick()
{
    snake->update();
}

void Game::draw(SDL_Renderer * renderer)
{
    snake->draw(renderer);
}
