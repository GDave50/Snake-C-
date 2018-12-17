#include <game/snake/Segment.h>
#include <game/Game.h>

Segment::~Segment()
{
}

void Segment::update()
{
    x++;
}

void Segment::draw(SDL_Renderer * renderer)
{
    SDL_Rect rect{x * Game::segmentSize + 2, y * Game::segmentSize + 2,
            Game::segmentSize - 4, Game::segmentSize - 4};
    SDL_RenderFillRect(renderer, &rect);
}
