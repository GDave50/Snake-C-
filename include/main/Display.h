#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>
#include "SDL2/SDL.h"

class Display
{
    public:
        Display();
        ~Display();

        void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
        void tick();
        virtual void draw(SDL_Renderer *) = 0;
        void destroy();
        bool running() { return isRunning; }

    private:
        bool isRunning;
        SDL_Window * window;
        SDL_Renderer * renderer;

        void checkQuit();
        void render();
};

#endif // DISPLAY_H
