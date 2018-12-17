#include <game/snake/Snake.h>

Snake::Snake()
{
    for (int i = 0; i < growthFactor; ++i)
        segs.push_back(new Segment {-i, 0});
}

Snake::~Snake()
{
    for (int i = 0; i < segs.size(); ++i)
        delete segs[i];
}

void Snake::update()
{
    for (int i = 0; i < segs.size(); ++i)
        segs[i]->update();
}

void Snake::draw(SDL_Renderer * renderer)
{
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
    for (int i = 0; i < segs.size(); ++i)
        segs[i]->draw(renderer);
}
