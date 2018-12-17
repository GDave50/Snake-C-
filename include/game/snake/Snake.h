#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
#include "SDL2/SDL.h"

#include <game/snake/Segment.h>

class Snake
{
    public:
        Snake();
        ~Snake();

        void update();
        void draw(SDL_Renderer *);

    private:
        const int growthFactor = 5;

        std::vector<Segment *> segs;
};

#endif // SNAKE_H
