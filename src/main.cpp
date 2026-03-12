#include "raylib.h"
#include "rlgl.h"
#include "raymath.h"
#include <fmt/base.h>

#include "Common.h"

using namespace Common;

int main()
{
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);

	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);

	SetTargetFPS(FPS);

	while (!WindowShouldClose())
	{
		if (IsKeyPressed(KEY_LEFT_ALT))
			IsCursorHidden() ? ShowCursor() : HideCursor();

		// DRAW
		BeginDrawing();
		ClearBackground(RAYWHITE);

		rlTranslatef(GetScreenWidth() / 2, GetScreenHeight(), 0);
		rlRotatef(90, 1, 0, 0);
		DrawGrid(10, 50);

		EndDrawing();
	}

	CloseWindow();
}