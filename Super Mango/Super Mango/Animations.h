#pragma once
#include"raylib.h"

class Animations
{
public:
	Texture2D
		w_key = LoadTexture("resources/graphics/menu/w.png"),
		s_key = LoadTexture("resources/graphics/menu/s.png"),
		a_key = LoadTexture("resources/graphics/menu/a.png"),
		d_key = LoadTexture("resources/graphics/menu/d.png"),
		space_key = LoadTexture("resources/graphics/menu/space.png"),
		q_key = LoadTexture("resources/graphics/menu/q.png"),
		bird = LoadTexture("resources/graphics/characters/bird.png"),
		spider = LoadTexture("resources/graphics/characters/spider.png"),
		flame = LoadTexture("resources/graphics/characters/flame.png"),
		player_idle = LoadTexture("resources/graphics/characters/player_idle.png"),
		player_run = LoadTexture("resources/graphics/characters/player_move.png"),
		player_jump = LoadTexture("resources/graphics/characters/player_jump.png");
	Rectangle
		key_regular_src = { 0, 0, 32, 32 },
		key_w_disp = { 680, 510, 64, 64 },
		key_s_disp = { 680, 570, 64, 64 },
		key_a_disp = { 600, 570, 64, 64 },
		key_d_disp = { 760, 570, 64, 64 },
		key_q_disp = { 980, 530, 64, 64 },
		key_space_src = { 0, 0, 64, 32 },
		key_space_disp = { 1180, 530, 128 , 64 },
		bird1_src_right = { 0, 0, 48, 48 },
		bird2_src_right = { 0, 0, 48, 48 },
		bird3_src_right = { 0, 0, 48, 48 },
		spider1_src_right = { 0, 0, 64, 48 },
		spider2_src_right = { 0, 0, 64, 48 },
		spider3_src_right = { 0, 0, 64, 48 },
		spider5_src_right = { 0, 0, 64, 48 },
		spider4_src_right = { 0, 0, 64, 48 },
		flame_src = { 0, 0, 48, 48 },
		bird1_src_left = { 0, 0, -48, 48 },
		bird2_src_left = { 0, 0, -48, 48 },
		bird3_src_left = { 0, 0, -48, 48 },
		spider1_src_left = { 0, 0, -64, 48 },
		spider2_src_left = { 0, 0, -64, 48 },
		spider3_src_left = { 0, 0, -64, 48 },
		spider4_src_left = { 0, 0, -64, 48 },
		spider5_src_left = { 0, 0, -64, 48 },
		player_src_left = { 0, 0, -48, 48 },
		player_src_right = { 0, 0, 48, 48 },
		flame_disp1_1 = { 5810, 1100, 192, 192 },
		flame_disp1_2 = { 6060, 1100, 192, 192 },
		flame_disp2_1 = { 1000, 1100, 192, 192 },
		flame_disp2_2 = { 1650, 1100, 192, 192 },
		flame_disp2_3 = { 4200, 1100, 192, 192 },
		bird1_disp = { 2200, 50, 192, 192 },
		bird2_disp = { 4600, 345, 192, 192 },
		bird3_disp = { 4300, 600, 192, 192 },
		spider1_disp = { 2460, 450, 256, 192 },
		spider2_disp = { 4800, 704, 256, 192 },
		spider3_disp = { 6250, 704, 256, 192 },
		spider4_disp = { 2980, 190, 256, 192 },
		spider5_disp = { 3260, 450, 256, 192 },
		player_disp = { 50, 704, 192, 192 };
	Vector2
		flame_origin = { 96, 96 },
		origin = { 0, 0 };

	int flame_rotation = 0;

	int timer1 = 0;
	int timer2 = 0;
	int timer3 = 0;
	int timer4 = 0;
	int timer5 = 0;
	int timer6 = 0;
	int timer7 = 0;
	int timer8 = 0;
	int timer9 = 0;
	int timer10 = 0;
	int timer11 = 0;
	int timer12 = 0;
	int timer13 = 0;
	int timer14 = 0;
	int timer15 = 0;
	int timer16 = 0;
	int timer17 = 0;
	int timer18 = 0;
	int timer19 = 0;
	int timer20 = 0;
	int timer21 = 0;
	int timer22 = 0;
	int timer23 = 0;
	int timer24 = 0;

	void keybindings();
	void idle_left();
	void idle_right();
	void run_left();
	void run_right();
	void jump_left();
	void jump_right();
	void flame_anim1();
	void flame_anim2();
	void spider1_anim_left();
	void bird1_anim_left();
	void spider1_anim_right();
	void bird1_anim_right();
	void spider2_anim_left();
	void bird2_anim_left();
	void spider2_anim_right();
	void bird2_anim_right();
	void spider3_anim_left();
	void bird3_anim_left();
	void spider3_anim_right();
	void bird3_anim_right();
	void spider4_anim_right();
	void spider5_anim_right();
	void spider4_anim_left();
	void spider5_anim_left();
};