#include <SDL.h>

typedef struct {
	SDL_Renderer *renderer;
	SDL_Window *window;
} App;

static App app;

typedef struct {
	int x;
	int y;
} Vec2;

enum DrinkType{
	Beer = 1,
	Moonshine = 2,
	Saki = 3,
	Stein = 4,
	Whiskey = 5,
	Wine = 6
};

typedef struct {
	SDL_Rect text_rect;
	DrinkType drink_type;
} Drink;

typedef struct {
	SDL_Texture* beer;
	SDL_Texture* moonshine;
	SDL_Texture* saki;
	SDL_Texture* stein;
	SDL_Texture* whiskey;
	SDL_Texture* wine;
	SDL_Texture* pickle;
} DrinkTextures;

static DrinkTextures drink_textures;

const static int spacing = 10;

const static Vec2 grid_size { 25, 25 };

const static Vec2 sprite_size { 20, 20 };

static Drink **grid;