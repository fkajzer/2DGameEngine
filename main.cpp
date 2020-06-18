#include "Game.h"

Game *game = nullptr;

int main(int argc, const char *argv[]) {
    
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    int frameTime;

    game = new Game();
    game->init("2DGame", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

    while (game->running()) {
        


        game->handleEvents();
        game->update();
        game->render();
    }

    game->clean();

    return 0;
}