#include <main/Controller.h>

Controller::Controller()
{
}

Controller::~Controller()
{
    delete game;
    destroy();
}

void Controller::run()
{
    init("Snake", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, displaySize, displaySize, false);
    game = new Game();

    Uint32 frameStart;
    int frameTime;

    while (running())
    {
        frameStart = SDL_GetTicks();

        game->tick();
        tick();

        frameTime = SDL_GetTicks() - frameStart;
        if (frameDelay > frameTime)
            SDL_Delay(frameDelay - frameTime);
    }
}

void Controller::draw(SDL_Renderer * renderer)
{
    game->draw(renderer);
}
