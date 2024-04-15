#pragma once
#include"Animations.h"

class Enemies
{
public:
	Animations animations;

	Rectangle
		spider1_coll = { 0, 0, 100, 40 },
		spider2_coll = { 0, 0, 100, 40 },
		spider3_coll = { 0, 0, 100, 40 },
		spider4_coll = { 0, 0, 100, 40 },
		spider5_coll = { 0, 0, 100, 40 },
		bird1_coll = { 0, 0, 60, 44 },
		bird2_coll = { 0, 0, 60, 44 },
		bird3_coll = { 0, 0, 60, 44 },
		flame1_coll = { 0, 0, 56, 60 },
		flame2_coll = { 0, 0, 56, 60 },
		flame3_coll = { 0, 0, 56, 60 },
		flame4_coll = { 0, 0, 56, 60 },
		flame5_coll = { 0, 0, 56, 60 };
	Vector2
		spider1_speed = { 8, 22 },
		spider2_speed = { 8, 22 },
		spider3_speed = { 8, 22 },
		spider4_speed = { 8, 22 },
		spider5_speed = { 8, 22 },
		bird_speed = { 10, 4 },
		bird2_speed = { 10, 4 },
		bird3_speed = { 10, 4 };

	int gravity = 0;
	int flame_speed = 40;
	int spider1_gravity = 0;
	int spider2_gravity = 0;

	bool bird_go_right = false;
	bool bird2_go_right = false;
	bool bird3_go_right = false;
	bool bird_go_up = true;
	bool bird2_go_up = true;
	bool bird3_go_up = true;

	bool spider1_go_right = false;
	bool spider2_go_right = false;
	bool spider3_go_right = false;
	bool spider4_go_right = false;
	bool spider5_go_right = false;
	bool spider1_go_up = true;
	bool spider2_go_up = true;
	bool spider3_go_up = true;
	bool spider4_go_up = true;
	bool spider5_go_up = true;

	void manage_flames1();
	void manage_flames2();
	void manage_birds();
	void manage_spiders();
	void reset_enemies();
};