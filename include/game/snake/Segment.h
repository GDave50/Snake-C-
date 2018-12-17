#ifndef SEGMENT_H
#define SEGMENT_H

#include "SDL2/SDL.h"

class Segment
{
    public:
        Segment(int x, int y) : x(x), y(y) {}
        ~Segment();

        void update();
        void draw(SDL_Renderer *);

    private:
        int x, y;
};

#endif // SEGMENT_H
