/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 * 
 *    Description: A raylib game to apply some C knowledge 
 *
 *        Version:  0.0
 *        Created:  14/04/2021 02:13:46
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Felix Marques (hgg), hggmarks@gmail.com
 *        Company:  UFRPE
 *
 * =====================================================================================
 */

#include "raylib.h"
#include <stdio.h>
#define GRAVITY 500

const int screenWidth = 1600;
const int screenHeight = 900;
	
typedef struct Player {
		Vector2 position;
		Vector2 speed;
		float radius ;
		float aceleration;
		float rotation;
		bool canDash;
		Color color;
} Player;

typedef struct Ball {
		Vector2 position;
		float radius;
		bool active;
		Color color;
} Ball;

Vector2 mouseClickPos;


static void DrawBalls(void);
static void UpdatePlayer(void);
static void DrawAim(void);
static Player player;
static Ball ball;

	int
main ( int argc, char *argv[] )
{
	
//	Vector2 end;
	const char title[31] = "YOHOB - You Only Have One Bump!";

	InitWindow(screenWidth, screenHeight, title);
	SetTargetFPS(60);
	player.position = (Vector2){screenWidth/2, screenHeight*0.8};
	player.radius = 25;
	player.color = RED;
	ball.position = (Vector2){screenWidth/2, screenHeight/2};
	ball.radius = 30;
	ball.color = PURPLE;
	while(!WindowShouldClose()){


		BeginDrawing();
		
		ClearBackground(BLACK);
		DrawCircleV(player.position, player.radius, player.color);
		DrawCircleV(ball.position, ball.radius, ball.color);
		DrawAim();
		EndDrawing();
	
	} 	
}		/* --  end of function main  -- */

static void DrawAim(){
	
	Vector2 end;
	

	if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON))	mouseClickPos = GetMousePosition();	


	if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)){
	
		end.x = player.position.x + (mouseClickPos.x - GetMousePosition().x);
		end.y = player.position.y + (mouseClickPos.y - GetMousePosition().y);

		DrawLineV(player.position, end, RED);

		}
	}







