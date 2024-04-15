#pragma once
#include"Levels.h"

class Menu
{
public:
	Animations animations;

	Font
		font = LoadFont("resources/graphics/fonts/font.ttf");
	Color
		color = { 255, 255, 255, 0 };
	Music
		menu_music = LoadMusicStream("resources/audio/music/menu.mp3"),
	    ending_music = LoadMusicStream("resources/audio/music/ending.mp3");
	Sound
		button_sound = LoadSound("resources/audio/sound/button.wav");
	Texture2D
		ending_background = LoadTexture("resources/ending.png"),
		menu_background1 = LoadTexture("resources/graphics/backgrounds/sky_background1.png"),
		menu_background2 = LoadTexture("resources/graphics/backgrounds/sky_background2.png"),
		logo = LoadTexture("resources/logo.png");
	Rectangle
		ending_ = { 0, 0, 1920, 1080 },
		logo_src = { 0, 0, 64, 48 },
		logo_disp = { 700, 30, 500, 400 },
		background_src = { 0, 0, 320, 180 },
		background_disp = { 0, 0, 1920, 1080 },
		start_button = { 755, 545, 400, 100 },
		keybindings_button = { 735, 665, 440, 100 },
		keybindings_background = { 500, 430, 900, 350 },
		exit_button = { 755, 785, 400, 100 },
		return_button = { 640, 845, 600, 100 },
		continue_button = { 755, 400, 400, 100 },
		exit_to_menu_button = { 730, 520, 450, 100 };
	Vector2
		mouse_pos = { 0, 0 },
		ending_pos1 = { 70, 200 },
		ending_pos2 = { 230, 350 },
		start_game_pos = { 780, 575 },
		keybindings_pos = { 752, 695 },
		exit_pos = { 800, 815 },
		return_pos = { 700, 875 },
		pause_pos = { 0, 0 },
		pause_pos2 = { 0, 0 },
		movement_pos = { 625, 670 },
		sprint_pos = { 950 , 670 },
		jump_pos = { 1200, 670 },
		origin = { 0, 0 };

	int logoPositionX = 832;
	int logoPositionY = 412;
	int framesCounter = 0;
	int lettersCount = 0;
	int topSideRecWidth = 16;
	int leftSideRecHeight = 16;
	int bottomSideRecWidth = 16;
	int rightSideRecHeight = 16;
	int state = 0;
	float alpha = 1.0f;

	bool keybindings = false;
	bool start_game = false;
	bool exit_game = false;
	bool init = true;
	bool pause_ = false;

	bool play_button_sound = false;
	float menu_volume = 0.06;
	float ending_volume = 0.07;
	float button_volume = 0.08;

	void set_audio_volume();
	void init_animation();
	void draw();
	void draw_keybindings();
	void check_button();
	void pause();
	void pause_draw(Player& player, Levels& level_1, Levels& level_2);
	void ending(Levels& level_1, Levels& level_2);
	void reset_lvl(Levels& level_1, Levels& level_2);
};