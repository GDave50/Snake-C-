#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "SDL2/SDL.h"

#include <main/Display.h>
#include <game/Game.h>

class Controller: public Display
{
    public:
        Controller();
        ~Controller();

        void run();
        void draw(SDL_Renderer *);

    private:
        const int displaySize = Game::gridSize * Game::segmentSize;
        const int FPS = 10;
        const int frameDelay = 1000 / FPS;

        Game * game;
};

#endif // CONTROLLER_H
