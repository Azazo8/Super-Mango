#include "Enemies.h"

void Enemies::manage_flames1()
{
	animations.flame_anim1();
	animations.flame_disp1_1.y -= (flame_speed - gravity);
	animations.flame_disp1_2.y -= (flame_speed - gravity);
	gravity++;
	if (animations.flame_disp1_1.y == 1100)
	{
		animations.flame_rotation = 0;
		gravity = 0;
	}
	if (gravity >= 30 && gravity < 50)
		animations.flame_rotation += 9;
}
void Enemies::manage_flames2()
{
	animations.flame_anim2();
	animations.flame_disp2_1.y -= (flame_speed - gravity);
	animations.flame_disp2_2.y -= (flame_speed - gravity);
	animations.flame_disp2_3.y -= (flame_speed - gravity);
	gravity++;
	if (animations.flame_disp2_3.y == 1100)
	{
		animations.flame_rotation = 0;
		gravity = 0;
	}
	if (gravity >= 30 && gravity < 50)
		animations.flame_rotation += 9;
}
void Enemies::manage_birds()
{
	animations.bird1_disp.x -= bird_speed.x;
	animations.bird1_disp.y += bird_speed.y;
	animations.bird2_disp.x -= bird2_speed.x;
	animations.bird2_disp.y += bird2_speed.y;
	animations.bird3_disp.x -= bird3_speed.x;
	animations.bird3_disp.y += bird3_speed.y;

	if (animations.bird1_disp.x == 2200)
	{
		bird_go_right = false;
		bird_speed.x = -bird_speed.x;
	}
	if (animations.bird1_disp.x == 1550)
	{
		bird_go_right = true;
		bird_speed.x = -bird_speed.x;
	}
	if (animations.bird1_disp.y == 70)
	{
		bird_go_up = true;
		bird_speed.y = -bird_speed.y;
	}
	if (animations.bird1_disp.y == 30)
	{
		bird_go_up = false;
		bird_speed.y = -bird_speed.y;
	}
	if (bird_go_right)
		animations.bird1_anim_right();
	if (!bird_go_right)
		animations.bird1_anim_left();

	if (animations.bird2_disp.x == 4600)
	{
		bird2_go_right = false;
		bird2_speed.x = -bird2_speed.x;
	}
	if (animations.bird2_disp.x == 3700)
	{
		bird2_go_right = true;
		bird2_speed.x = -bird2_speed.x;
	}
	if (animations.bird2_disp.y == 365)
	{
		bird2_go_up = true;
		bird2_speed.y = -bird2_speed.y;
	}
	if (animations.bird2_disp.y == 325)
	{
		bird2_go_up = false;
		bird2_speed.y = -bird2_speed.y;
	}
	if (bird2_go_right)
		animations.bird2_anim_right();
	if (!bird2_go_right)
		animations.bird2_anim_left();

	if (animations.bird3_disp.x == 4300)
	{
		bird3_go_right = false;
		bird3_speed.x = -bird3_speed.x;
	}
	if (animations.bird3_disp.x == 3800)
	{
		bird3_go_right = true;
		bird3_speed.x = -bird3_speed.x;
	}
	if (animations.bird3_disp.y == 620)
	{
		bird3_go_up = true;
		bird3_speed.y = -bird3_speed.y;
	}
	if (animations.bird3_disp.y == 580)
	{
		bird3_go_up = false;
		bird3_speed.y = -bird3_speed.y;
	}
	if (bird3_go_right)
		animations.bird3_anim_right();
	if (!bird3_go_right)
		animations.bird3_anim_left();
}
void Enemies::manage_spiders()
{
	animations.spider1_disp.x += spider1_speed.x;
	animations.spider2_disp.x += spider2_speed.x;
	animations.spider3_disp.x += spider3_speed.x;
	animations.spider4_disp.x += spider4_speed.x;
	animations.spider5_disp.x += spider5_speed.x;
	animations.spider2_disp.y -= (spider2_speed.y - spider2_gravity);

	spider2_gravity++;
	if (spider2_gravity == 2 * spider2_speed.y + 1)
		spider2_gravity = 0;

	if (animations.spider1_disp.x == 2460)
	{
		spider1_go_right = true;
		spider1_speed.x = -spider1_speed.x;
	}
	if (animations.spider1_disp.x == 2700)
	{
		spider1_go_right = false;
		spider1_speed.x = -spider1_speed.x;
	}
	if (spider1_go_right)
		animations.spider1_anim_right();
	if (!spider1_go_right)
		animations.spider1_anim_left();

	if (animations.spider2_disp.x == 4800)
	{
		spider2_go_right = true;
		spider2_speed.x = -spider2_speed.x;
	}
	if (animations.spider2_disp.x == 5600)
	{
		spider2_go_right = false;
		spider2_speed.x = -spider2_speed.x;
	}
	if (spider2_go_right)
		animations.spider2_anim_right();
	if (!spider2_go_right)
		animations.spider2_anim_left();

	if (animations.spider3_disp.x == 6250)
	{
		spider3_go_right = true;
		spider3_speed.x = -spider3_speed.x;
	}
	if (animations.spider3_disp.x == 6890)
	{
		spider3_go_right = false;
		spider3_speed.x = -spider3_speed.x;
	}
	if (spider3_go_right)
		animations.spider3_anim_right();
	if (!spider3_go_right)
		animations.spider3_anim_left();

	if (animations.spider4_disp.x == 2820)
	{
		spider4_go_right = true;
		spider4_speed.x = -spider4_speed.x;
	}
	if (animations.spider4_disp.x == 3060)
	{
		spider4_go_right = false;
		spider4_speed.x = -spider4_speed.x;
	}
	if (spider4_go_right)
		animations.spider4_anim_right();
	if (!spider4_go_right)
		animations.spider4_anim_left();

	if (animations.spider5_disp.x == 3180)
	{
		spider5_go_right = true;
		spider5_speed.x = -spider5_speed.x;
	}
	if (animations.spider5_disp.x == 3420)
	{
		spider5_go_right = false;
		spider5_speed.x = -spider5_speed.x;
	}
	if (spider5_go_right)
		animations.spider5_anim_right();
	if (!spider5_go_right)
		animations.spider5_anim_left();
}
void Enemies::reset_enemies()
{
	animations.flame_disp1_1.y = 1100;
	animations.flame_disp1_2.y = 1100;
	animations.flame_disp2_1.y = 1100;
	animations.flame_disp2_2.y = 1100;
	animations.flame_disp2_3.y = 1100;
	animations.bird1_disp.x = 2200;
	animations.bird1_disp.y = 50;
	animations.bird2_disp.x = 4600;
	animations.bird2_disp.y = 345;
	animations.bird3_disp.x = 4300;
	animations.bird3_disp.y = 600;
	gravity = 0;
	animations.flame_rotation = 0;
	bird3_go_up = true;
	bird2_go_up = true;
	bird_go_up = true;
	bird3_go_right = false;
	bird2_go_right = false;
	bird_go_right = false;
	bird_speed = { 10, 4 };
	bird2_speed = { 10, 4 };
	bird3_speed = { 10, 4 };
}