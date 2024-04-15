#include "Animations.h"

void Animations::keybindings()
{
	if (timer5 % 50 == 0)
	{
		key_regular_src.x += 32;
		key_space_src.x += 64;
	}
	DrawTexturePro(w_key, key_regular_src, key_w_disp, origin, 0, RAYWHITE);
	DrawTexturePro(s_key, key_regular_src, key_s_disp, origin, 0, RAYWHITE);
	DrawTexturePro(a_key, key_regular_src, key_a_disp, origin, 0, RAYWHITE);
	DrawTexturePro(d_key, key_regular_src, key_d_disp, origin, 0, RAYWHITE);
	DrawTexturePro(space_key, key_space_src, key_space_disp, origin, 0, RAYWHITE);
	DrawTexturePro(q_key, key_regular_src, key_q_disp, origin, 0, RAYWHITE);
	timer5++;
	if (timer5 == 50)
		timer5 = 0;
}
void Animations::idle_left()
{
	if (timer1 % 6 == 0)
		player_src_left.x += 48;
	DrawTexturePro(player_idle, player_src_left, player_disp, origin, 0, RAYWHITE);
	timer1++;
	if (timer1 == 30)
		timer1 = 0;
}
void Animations::idle_right()
{
	if (timer2 % 6 == 0)
		player_src_right.x += 48;
	DrawTexturePro(player_idle, player_src_right, player_disp, origin, 0, RAYWHITE);
	timer2++;
	if (timer2 == 30)
		timer2 = 0;
}
void Animations::run_left()
{
	if (timer3 % 6 == 0)
		player_src_left.x += 48;
	DrawTexturePro(player_run, player_src_left, player_disp, origin, 0, RAYWHITE);
	timer3++;
	if (timer3 == 30)
		timer3 = 0;
}
void Animations::run_right()
{
	if (timer4 % 6 == 0)
		player_src_right.x += 48;
	DrawTexturePro(player_run, player_src_right, player_disp, origin, 0, RAYWHITE);
	timer4++;
	if (timer4 == 30)
		timer4 = 0;
}
void Animations::jump_left()
{
	DrawTexturePro(player_jump, player_src_left, player_disp, origin, 0, RAYWHITE);
}
void Animations::jump_right()
{
	DrawTexturePro(player_jump, player_src_right, player_disp, origin, 0, RAYWHITE);
}
void Animations::flame_anim1()
{
	if (timer24 % 10 == 0)
		flame_src.x += 48;
	DrawTexturePro(flame, flame_src, flame_disp1_1, flame_origin, flame_rotation, RAYWHITE);
	DrawTexturePro(flame, flame_src, flame_disp1_2, flame_origin, flame_rotation, RAYWHITE);
	timer24++;
	if (timer24 == 30)
		timer24 = 0;
}
void Animations::flame_anim2()
{
	if (timer23 % 10 == 0)
		flame_src.x += 48;
	DrawTexturePro(flame, flame_src, flame_disp2_1, flame_origin, flame_rotation, RAYWHITE);
	DrawTexturePro(flame, flame_src, flame_disp2_2, flame_origin, flame_rotation, RAYWHITE);
	DrawTexturePro(flame, flame_src, flame_disp2_3, flame_origin, flame_rotation, RAYWHITE);
	timer23++;
	if (timer23 == 30)
		timer23 = 0;
}
void Animations::spider1_anim_left()
{
	if (timer7 % 10 == 0)
		spider1_src_left.x += 64;
	DrawTexturePro(spider, spider1_src_left, spider1_disp, origin, 0, RAYWHITE);
	timer7++;
	if (timer7 == 40)
		timer7 = 0;
}
void Animations::bird1_anim_left()
{
	if (timer8 % 10 == 0)
		bird1_src_left.x += 48;
	DrawTexturePro(bird, bird1_src_left, bird1_disp, origin, 0, RAYWHITE);
	timer8++;
	if (timer8 == 40)
		timer8 = 0;
}
void Animations::spider1_anim_right()
{
	if (timer9 % 10 == 0)
		spider1_src_right.x += 64;
	DrawTexturePro(spider, spider1_src_right, spider1_disp, origin, 0, RAYWHITE);
	timer9++;
	if (timer9 == 40)
		timer9 = 0;
}
void Animations::bird1_anim_right()
{
	if (timer10 % 10 == 0)
		bird1_src_right.x += 48;
	DrawTexturePro(bird, bird1_src_right, bird1_disp, origin, 0, RAYWHITE);
	timer10++;
	if (timer10 == 40)
		timer10 = 0;
}
void Animations::spider2_anim_left()
{
	if (timer11 % 10 == 0)
		spider2_src_left.x += 64;
	DrawTexturePro(spider, spider2_src_left, spider2_disp, origin, 0, RAYWHITE);
	timer11++;
	if (timer11 == 40)
		timer11 = 0;
}
void Animations::bird2_anim_left()
{
	if (timer12 % 10 == 0)
		bird2_src_left.x += 48;
	DrawTexturePro(bird, bird2_src_left, bird2_disp, origin, 0, RAYWHITE);
	timer12++;
	if (timer12 == 40)
		timer12 = 0;
}
void Animations::spider2_anim_right()
{
	if (timer13 % 10 == 0)
		spider2_src_right.x += 64;
	DrawTexturePro(spider, spider2_src_right, spider2_disp, origin, 0, RAYWHITE);
	timer13++;
	if (timer13 == 40)
		timer13 = 0;
}
void Animations::bird2_anim_right()
{
	if (timer14 % 10 == 0)
		bird2_src_right.x += 48;
	DrawTexturePro(bird, bird2_src_right, bird2_disp, origin, 0, RAYWHITE);
	timer14++;
	if (timer14 == 40)
		timer14 = 0;
}
void Animations::spider3_anim_left()
{
	if (timer15 % 10 == 0)
		spider3_src_left.x += 64;
	DrawTexturePro(spider, spider3_src_left, spider3_disp, origin, 0, RAYWHITE);
	timer15++;
	if (timer15 == 40)
		timer15 = 0;
}
void Animations::bird3_anim_left()
{
	if (timer16 % 10 == 0)
		bird3_src_left.x += 48;
	DrawTexturePro(bird, bird3_src_left, bird3_disp, origin, 0, RAYWHITE);
	timer16++;
	if (timer16 == 40)
		timer16 = 0;
}
void Animations::spider3_anim_right()
{
	if (timer17 % 10 == 0)
		spider3_src_right.x += 64;
	DrawTexturePro(spider, spider3_src_right, spider3_disp, origin, 0, RAYWHITE);
	timer17++;
	if (timer17 == 40)
		timer17 = 0;
}
void Animations::bird3_anim_right()
{
	if (timer18 % 10 == 0)
		bird3_src_right.x += 48;
	DrawTexturePro(bird, bird3_src_right, bird3_disp, origin, 0, RAYWHITE);
	timer18++;
	if (timer18 == 40)
		timer18 = 0;
}
void Animations::spider4_anim_right()
{
	if (timer19 % 10 == 0)
		spider4_src_right.x += 64;
	DrawTexturePro(spider, spider4_src_right, spider4_disp, origin, 0, RAYWHITE);
	timer19++;
	if (timer19 == 40)
		timer19 = 0;
}
void Animations::spider5_anim_right()
{
	if (timer20 % 10 == 0)
		spider5_src_right.x += 64;
	DrawTexturePro(spider, spider5_src_right, spider5_disp, origin, 0, RAYWHITE);
	timer20++;
	if (timer20 == 40)
		timer20 = 0;
}
void Animations::spider4_anim_left()
{
	if (timer21 % 10 == 0)
		spider4_src_right.x += 64;
	DrawTexturePro(spider, spider4_src_left, spider4_disp, origin, 0, RAYWHITE);
	timer21++;
	if (timer21 == 40)
		timer21 = 0;
}
void Animations::spider5_anim_left()
{
	if (timer22 % 10 == 0)
		spider5_src_right.x += 64;
	DrawTexturePro(spider, spider5_src_left, spider5_disp, origin, 0, RAYWHITE);
	timer22++;
	if (timer22 == 40)
		timer22 = 0;
}