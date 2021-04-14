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

const int screenWidth = 1600;
const int screenHeight = 900;


	void
main ()
{
	const char title[31] = "YOHOB - You Only Have One Bump!";


	InitWindow(screenWidth, screenHeight, title);
	SetTargetFPS(60);

	while(!WindowShouldClose()){
		BeginDrawing();

		ClearBackground(BLACK);
		DrawText("Hello Window!", (screenWidth/2)-60, screenHeight/2, 20, LIGHTGRAY);


		EndDrawing();
	}
	
}				/* --  end of function main  ---------- */
