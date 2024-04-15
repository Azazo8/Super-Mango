#include "Player.h"

void Player::set_audio_volume()
{
	SetSoundVolume(jump_sound, jump_volume);
	SetSoundVolume(hit_sound, hit_volume);
	SetSoundVolume(death_sound, death_volume);
}
void Player::draw_ui()
{
	score_pos = GetScreenToWorld2D({ 1500, 40 }, camera);
	lives_pos = GetScreenToWorld2D({ 280, -12 }, camera);
	heart1_pos = GetScreenToWorld2D({ 50, 40 }, camera);
	heart2_pos = GetScreenToWorld2D({ 110, 40 }, camera);
	heart3_pos = GetScreenToWorld2D({ 170, 40 }, camera);
	lives_disp.x = lives_pos.x;
	lives_disp.y = lives_pos.y;
	heart1_disp.x = heart1_pos.x;
	heart1_disp.y = heart1_pos.y;
	heart2_disp.x = heart2_pos.x;
	heart2_disp.y = heart2_pos.y;
	heart3_disp.x = heart3_pos.x;
	heart3_disp.y = heart3_pos.y;
	if (hp == 3)
	{
		DrawTexturePro(heart, heart_src, heart3_disp, origin, 0, RAYWHITE);
		DrawTexturePro(heart, heart_src, heart2_disp, origin, 0, RAYWHITE);
		DrawTexturePro(heart, heart_src, heart1_disp, origin, 0, RAYWHITE);
	}
	if (hp == 2)
	{
		DrawTexturePro(heart, heart_src, heart2_disp, origin, 0, RAYWHITE);
		DrawTexturePro(heart, heart_src, heart1_disp, origin, 0, RAYWHITE);
	}
	if (hp == 1)
		DrawTexturePro(heart, heart_src, heart1_disp, origin, 0, RAYWHITE);
	DrawTexturePro(lives_, lives_src, lives_disp, origin, 0, RAYWHITE);
	DrawTextEx(font, TextFormat("x%d", (int)lives), Vector2{ lives_pos.x + 120, lives_pos.y + 62 }, 40, 5, WHITE);
	DrawTextEx(font, TextFormat("Score: %d", score), score_pos, 40, 5, WHITE);
}
void Player::check_input()
{
	if (IsKeyDown(KEY_A))
		move_left = true;
	if (IsKeyDown(KEY_D))
		move_right = true;
	if (IsKeyDown(KEY_Q))
		sprint = true;
	if (IsKeyPressed(KEY_SPACE) && !jump_break)
	{
		jump = true;
		play_jump_sound = true;
	}
	if (IsKeyUp(KEY_A))
		move_left = false;
	if (IsKeyUp(KEY_D))
		move_right = false;
	if (IsKeyUp(KEY_Q))
		sprint = false;
}
void Player::manage_input()
{
	if (animations.player_disp.x > 548 && animations.player_disp.x < 6952)
	{
		move_camera = true;
		camera.target = Vector2{ animations.player_disp.x - 500, 580 };
	}
	else
		move_camera = false;
	if (!move_left && !move_right && !jump || move_left && move_right)
	{
		if (turned_right)
		{
			if (hit_timer < 0)
				animations.idle_right();
			else if (hit_timer > 0 && hit_timer % 3 == 0)
			    animations.idle_right();
		}
		else if (turned_left)
		{
			if (hit_timer < 0)
				animations.idle_left();
			else if (hit_timer > 0 && hit_timer % 3 == 0)
				animations.idle_left();
		}
	}
	else if (move_left)
	{
		if (!jump)
		{
			if (hit_timer < 0)
				animations.run_left();
			else if (hit_timer > 0 && hit_timer % 3 == 0)
				animations.run_left();
		}
		if (coll.x > 0)
			animations.player_disp.x -= speed.x;
		turned_left = true;
		turned_right = false;
	}
	else if (move_right)
	{
		if (!jump)
		{
			if (hit_timer < 0)
				animations.run_right();
			else if (hit_timer > 0 && hit_timer % 3 == 0)
				animations.run_right();
		}
		if (coll.x < 8250)
			animations.player_disp.x += speed.x;
		turned_right = true;
		turned_left = false;
	}
	if (sprint && speed.x < 12)
		speed.x += 0.25;
	if (!sprint && speed.x > 7)
		speed.x -= 0.25;
	if (jump && turned_left)
	{
		if (play_jump_sound)
		    PlaySound(jump_sound);
		if (hit_timer < 0)
		    animations.jump_left();
		else if (hit_timer > 0 && hit_timer % 3 == 0)
			animations.jump_left();
		animations.player_disp.y -= (speed.y - gravity);
		if (gravity < 50)
		    gravity++;
		if (gravity >= speed.y)
			going_up = false;
		else
			going_up = true;
		play_jump_sound = false;
	}
	if (jump && turned_right)
	{
		if (play_jump_sound)
		    PlaySound(jump_sound);
		if (hit_timer < 0)
		    animations.jump_right();
		else if (hit_timer > 0 && hit_timer % 3 == 0)
			animations.jump_right();
		animations.player_disp.y -= (speed.y - gravity);
		if (gravity < 49)
		    gravity++;
		if (gravity >= speed.y)
			going_up = false;
		else
			going_up = true;
		play_jump_sound = false;
	}
	if (!going_up)
		jump_break = true;
}
void Player::set_pos1()
{
	hit_timer = 0;
	hp = 3;
	score = 0;
	lives = 3;
	gravity = 0;
	jump = false;
	animations.player_disp = { 50, 704, 192, 192 };
	camera.target = Vector2{ animations.player_disp.x, 580 };
}
void Player::set_pos2()
{
	hit_timer = 0;
	gravity = 0;
	jump = false;
	animations.player_disp = { 50, 704, 192, 192 };
	camera.target = Vector2{ animations.player_disp.x, 580 };
}
void Player::set_pos3()
{
	hit_timer = 0;
	gravity = 0;
	hp = 3;
	jump = false;
	animations.player_disp = { 50, 704, 192, 192 };
	camera.target = Vector2{ animations.player_disp.x, 580 };
}