#include <SDL.h>
#undef main
#include <bitset>
#include "SDL_image.h"
#include "draw.h"
#include "init.h"
#include "input.h"
#include "structs.h"

void cleanup() {
	IMG_Quit();
	SDL_DestroyRenderer(app.renderer);
	SDL_DestroyWindow(app.window);
	SDL_Quit();
}

int main() {

	init_SDL();
/*
	drink_textures.beer = IMG_LoadTexture(app.renderer, "..\\..\\..\\..\\Downloads\\FreePixelFood\\FreePixelFood\\Assets\\FreePixelFood\\Sprite\\Food\\Beer.png");
	drink_textures.moonshine = IMG_LoadTexture(app.renderer, "..\\..\\..\\..\\Downloads\\FreePixelFood\\FreePixelFood\\Assets\\FreePixelFood\\Sprite\\Food\\Moonshine.png");
	drink_textures.saki = IMG_LoadTexture(app.renderer, "..\\..\\..\\..\\Downloads\\FreePixelFood\\FreePixelFood\\Assets\\FreePixelFood\\Sprite\\Food\\Saki.png");
	drink_textures.stein = IMG_LoadTexture(app.renderer, "..\\..\\..\\..\\Downloads\\FreePixelFood\\FreePixelFood\\Assets\\FreePixelFood\\Sprite\\Food\\Stein.png");
	drink_textures.whiskey = IMG_LoadTexture(app.renderer, "..\\..\\..\\..\\Downloads\\FreePixelFood\\FreePixelFood\\Assets\\FreePixelFood\\Sprite\\Food\\Whiskey.png");
	drink_textures.wine = IMG_LoadTexture(app.renderer, "..\\..\\..\\..\\Downloads\\FreePixelFood\\FreePixelFood\\Assets\\FreePixelFood\\Sprite\\Food\\Wine.png");
	drink_textures.pickle = IMG_LoadTexture(app.renderer, "..\\..\\..\\..\\Downloads\\FreePixelFood\\FreePixelFood\\Assets\\FreePixelFood\\Sprite\\Food\\Pickle.png");
	*/
	atexit(cleanup);

	while (1) {
		SDL_SetRenderDrawColor(app.renderer, 255, 255, 255, 255);
		handle_input();
		SDL_RenderPresent(app.renderer);
		SDL_UpdateWindowSurface(app.window);
		SDL_Delay(16);
	}

	return 0;
}