#include <SDL.h>
#include <iostream>
#include "SDL_main.h"
#include "SDL_image.h"
#include "init.h"
#include "structs.h"
#include "defs.h"
using namespace std;

void init_SDL() {
	int renderer_flags = SDL_RENDERER_ACCELERATED;
	int window_flags = 0;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << ("Couldn't initialize SDL: %s\n", SDL_GetError()) << endl;
		exit(1);
	}

	app.window = SDL_CreateWindow("Match 3 Game", 0, 0, SCREEN_HEIGHT, SCREEN_WIDTH, window_flags);

	if (!app.window) {
		cout << ("Failed to open %d x %d window: %s", SCREEN_WIDTH, SCREEN_HEIGHT, SDL_GetError()) << endl;
		exit(1);
	}

	SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");

	app.renderer = SDL_CreateRenderer(app.window, -1, renderer_flags);

	if (!app.renderer) {
		cout << ("Failed to create renderer $%s", SDL_GetError()) << endl;
		exit(1);
	}

	/*IMG_Init(IMG_INIT_PNG);

	grid = new Drink * [grid_size.y];

	int x = 0; 
	int y = 0;
	
	for (int i = 0; i < grid_size.y; i++) {
		grid[i] = new Drink[grid_size.x];
		for (int j = 0; j < grid_size.x; j++) {
			int drink_type = rand() % 6 + 1;

			SDL_Rect text_rect;
			text_rect.x = x;
			text_rect.y = y;
			text_rect.w = sprite_size.x;
			text_rect.h = sprite_size.y;

			SDL_Texture* texture;

			switch (drink_type) {
				case DrinkType::Beer:
					texture = drink_textures.beer;
					break;
				case DrinkType::Moonshine:
					texture = drink_textures.moonshine;
					break;
				case DrinkType::Saki:
					texture = drink_textures.saki;
					break;
				case DrinkType::Stein:
					texture = drink_textures.stein;
					break;
				case DrinkType::Whiskey:
					texture = drink_textures.whiskey;
					break;
				case DrinkType::Wine:
					texture = drink_textures.wine;
					break;
				default:
					texture = drink_textures.pickle;
			}
		
			SDL_RenderCopy(app.renderer, texture, NULL, &text_rect);

			grid[i][j] = { text_rect, DrinkType(drink_type) };
			x += spacing + sprite_size.x;
		}
		y += spacing + sprite_size.y;
	}*/

}