#include "raylib.h"
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

		BeginDrawing();
		ClearBackground(RAYWHITE);

		if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
			fmt::print("pressed\n");

		EndDrawing();
	}

	CloseWindow();
}