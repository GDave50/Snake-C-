#include <main/Display.h>

Display::Display()
{
}

Display::~Display()
{
}

void Display::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
    int flag = 0;
    if (fullscreen)
        flag = SDL_WINDOW_FULLSCREEN;

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        std::cout << "Subsystems initialized." << std::endl;

        window = SDL_CreateWindow(title, xpos, ypos, width, height, flag);
        if (window)
            std::cout << "Window created." << std::endl;

        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer)
            std::cout << "Renderer created." << std::endl;

        isRunning = true;
    }
    else
    {
        isRunning = false;
    }
}

void Display::tick()
{
    checkQuit();
    render();
}

void Display::destroy()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Display cleaned." << std::endl;
}

void Display::checkQuit()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
    case SDL_QUIT:
        isRunning = false;
        break;
    }
}

void Display::render()
{
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);

    draw(renderer);

    SDL_RenderPresent(renderer);
}
