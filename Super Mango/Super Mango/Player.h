#pragma once
#include"Animations.h"

class Player
{
public:
	Animations animations;

	Sound
		death_sound = LoadSound("resources/audio/sound/death.wav"),
		hit_sound = LoadSound("resources/audio/sound/hit.wav"),
		jump_sound = LoadSound("resources/audio/sound/jump.wav");
	Texture2D
		heart = LoadTexture("resources/graphics/UI/heart.png"),
		lives_ = LoadTexture("resources/graphics/UI/lives_count.png");
	Font
		font = LoadFont("resources/graphics/fonts/font.ttf");
	Rectangle
		lives_src = { 0, 0, 48, 48 },
		heart_src = { 0, 0, 19, 18 },
		lives_disp = { 0, 0, 144, 144 },
		heart1_disp = { 0, 0, 48, 48 },
		heart2_disp = { 0, 0, 48, 48 },
		heart3_disp = { 0, 0, 48, 48 },
		coll = { 0, 0, 66, 52 },
		foot_coll = { 0, 0, 0, 0 };
	Color
		transparent = { 0, 0, 0, 0 };
	Vector2
		score_pos = { 0, 0 },
		lives_pos = { 0, 0 },
		heart1_pos = { 0, 0 },
		heart2_pos = { 0, 0 },
		heart3_pos = { 0, 0 },
		speed = { 8, 24.5 },
		origin = { 0, 0 };
	Camera2D
		camera = { Vector2{ animations.player_disp.x, 650 }, Vector2{ animations.player_disp.x, 580 }, 0, 1 };

	float gravity = 0;

	bool move_right = false;
	bool move_left = false;
	bool sprint = false;
	bool jump = false;
	bool turned_right = true;
	bool turned_left = false;
	bool going_up = false;
	bool jump_break = false;
	bool move_camera = false;

	bool idle_right_anim = false;
	bool idle_left_anim = false;
	bool run_right_anim = false;
	bool run_left_anim = false;
	bool jump_right_anim = false;
	bool jump_left_anim = false;

	int hp = 3;
	float lives = 3;
	int score = 0;
	bool one_up = false;
	int increment = 1;
	bool death = false;
	int hit_timer = 0;
	int hit_duration = 200000;

	float jump_volume = 0.06;
	float death_volume = 0.08;
	float hit_volume = 0.06;
	bool play_jump_sound = false;

	void set_audio_volume();
	void draw_ui();
	void check_input();
	void manage_input();
	void set_pos1();
	void set_pos2();
	void set_pos3();
};