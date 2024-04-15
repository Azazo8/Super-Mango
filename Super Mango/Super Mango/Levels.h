#pragma once
#include<vector>
#include<cmath>
#include"Player.h"
#include"Enemies.h"

class Levels
{
public:
	Font
		font = LoadFont("resources/graphics/fonts/font.ttf");
	Color
		color = { 255, 255, 255, 0 };
	Sound
		life_up_sound = LoadSound("resources/audio/sound/1up.wav"),
		coin_sound = LoadSound("resources/audio/sound/coin.wav");
	Music
		level1_music = LoadMusicStream("resources/audio/music/level1.mp3"),
		level2_music = LoadMusicStream("resources/audio/music/level2.mp3");
	Texture2D
		sky_background1 = LoadTexture("resources/graphics/backgrounds/sky_background1.png"),
		sky_background2 = LoadTexture("resources/graphics/backgrounds/sky_background2.png"),
		castle_background = LoadTexture("resources/graphics/backgrounds/castle_background.png"),
		coin = LoadTexture("resources/graphics/interactibles/coin.png"),
		saw = LoadTexture("resources/graphics/interactibles/saw.png"),
		spike = LoadTexture("resources/graphics/interactibles/spike.png"),
		star = LoadTexture("resources/graphics/interactibles/star.png"),
		bridge = LoadTexture("resources/graphics/tiles/bridge.png"),
		platform_left = LoadTexture("resources/graphics/tiles/platform_left.png"),
		platform_mid = LoadTexture("resources/graphics/tiles/platform_mid.png"),
		platform_right = LoadTexture("resources/graphics/tiles/platform_right.png"),
		platform_spike_left = LoadTexture("resources/graphics/tiles/platform_spike_left.png"),
		platform_spike_mid = LoadTexture("resources/graphics/tiles/platform_spike_mid.png"),
		platform_spike_right = LoadTexture("resources/graphics/tiles/platform_spike_right.png"),
		rock_topleft = LoadTexture("resources/graphics/tiles/rock_topleft.png"),
		rock_topmid = LoadTexture("resources/graphics/tiles/rock_topmid.png"),
		rock_topright = LoadTexture("resources/graphics/tiles/rock_topright.png"),
		rock_midleft = LoadTexture("resources/graphics/tiles/rock_midleft.png"),
		rock_center = LoadTexture("resources/graphics/tiles/rock_center.png"),
		rock_midright = LoadTexture("resources/graphics/tiles/rock_midright.png"),
		brick_topleft = LoadTexture("resources/graphics/tiles/brick_topleft.png"),
		brick_topmid = LoadTexture("resources/graphics/tiles/brick_topmid.png"),
		brick_topright = LoadTexture("resources/graphics/tiles/brick_topright.png"),
		brick_midleft = LoadTexture("resources/graphics/tiles/brick_midleft.png"),
		brick_center = LoadTexture("resources/graphics/tiles/brick_center.png"),
		brick_midright = LoadTexture("resources/graphics/tiles/brick_midright.png");
	Rectangle
		background_src = { 0, 0, 320, 180 },
		background_disp1_1 = { 0, 0, 1920, 1080 },
		background_disp1_2 = { 1920, 0, 1920, 1080 },
		background_disp1_3 = { 2 * 1920, 0, 1920, 1080 },
		background_disp1_4 = { 3 * 1920, 0, 1920, 1080 },
		background_disp1_5 = { 4 * 1920, 0, 1920, 1080 },
		background_disp2_1 = { 0, 0, 1920, 1080 },
		background_disp2_2 = { 1920, 0, 1920, 1080 },
		background_disp2_3 = { 2 * 1920, 0, 1920, 1080 },
		background_disp2_4 = { 3 * 1920, 0, 1920, 1080 },
		background_disp2_5 = { 4 * 1920, 0, 1920, 1080 },
		background_disp3_1 = { 0, -124, 1920, 1144 },
		background_disp3_2 = { 1920, -124, 1920, 1144 },
		background_disp3_3 = { 2 * 1920, -124, 1920, 1144 },
		background_disp3_4 = { 3 * 1920, -124, 1920, 1144 },
		background_disp3_5 = { 4 * 1920, -124, 1920, 1144 },
		saw_src = { 0, 0, 32, 32 },
		saw_disp1 = { 2400, 720, 150, 150 },
		saw_disp2 = { 6050, 650, 150, 150 },
		saw_disp3 = { 5000, 10, 150, 150 },
		saw_disp4 = { 5300, 10, 150, 150 },
		saw_disp5 = { 5600, 10, 150, 150 },
		saw_disp6 = { 6500, 10, 150, 150 },
		star_src = { 0, 0, 12, 11},
		star_disp1 = { 8000, 200, 150, 150 },
		star_disp2 = { 8050, 200, 150, 150 },
		coin_src = { 0, 0, 8, 8 },
		coin_disp = { 0, 0, 64, 64 },
		tile_src = { 0, 0, 16, 16 },
		tile_disp = { 0, 0, 64, 64 };
	Vector2
		game_over_pos = { 500, 500 },
		level_init_pos = { 820, 500 },
		saw_origin = { 75, 75 },
		origin = { 0, 0 };

	int id;
	float radius = 0;
	bool start_level = false;
	bool start_play = false;
	bool swap = false;
	bool completed = false;
	bool restart = false;

	float saw_speed = 10;
	float saw_rotation = 0;
	bool saw_go_left = false;
	bool saw4_init = false;
	bool saw5_init = false;
	bool saw6_init = false;
	bool saw3_go_up = false;
	bool saw4_go_up = false;
	bool saw5_go_up = false;
	bool saw6_go_up = false;

	float life_up_volume = 0.06;
	float coin_volume = 0.03;
	float level1_volume = 0.03;
	float level2_volume = 0.02;

	bool got_hit = false;
	int damage_timer = 0;
	bool game_over = false;

	std::vector<std::vector<char>> map;
	std::vector<std::vector<char>> map_background;

	Levels(int id);
	void set_audio_volume();
	void level_init();
	void draw_tiles();
	void draw(Player& player);
	void manage_tiles(int i, int j);
	void check_collisions(Player& player, Animations& animations, Enemies& enemies);
	void manage_collisions(Player& player, Animations& animations, Enemies& enemies, int i, int j);
	void manage_saw();
	void draw_saw();
	void game_over_screen(Player& player);
	void manage_death(Player& player, Enemies& enemies);
	void reset_music();

	bool CheckCollisionRecsOr(Rectangle rec1, Rectangle rec2, Vector2 origin);
};