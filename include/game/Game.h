#ifndef GAME_H
#define GAME_H

#include "SDL2/SDL.h"

#include <game/Food.h>
#include <game/snake/Snake.h>

class Game
{
    public:
        static const int gridSize = 20;
        static const int segmentSize = 30;

        Game();
        ~Game();

        void tick();
        void draw(SDL_Renderer *);

    private:
        Snake * snake;
        Food * food;
};

#endif // GAME_H
