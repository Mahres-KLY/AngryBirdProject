#include "pch.h"
#include "framework.h"

#include "Game.h"
#include "CameraManager.h"
#include "InputController.h"

#include "raylib.h"

void Game::Run()
{
	CameraManager cameraManager;
	// Tell the window to use vsync and work on high DPI displays
	SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI);
	InputController inputController;

	// Create the window and OpenGL context
	InitWindow(800, 600, "Hello Raylib");
	Vector3 cubePosition = { 0.0f, 0.0f, 0.0f };

	// game loop
	while (!WindowShouldClose())		// run the loop until the user presses ESCAPE or presses the Close button on the window
	{
		InputSnapshot snapshot = inputController.capture();
		cameraManager.update(snapshot, 0);

		// drawing
		BeginDrawing();

		ClearBackground(RAYWHITE);
		BeginMode3D(cameraManager.getCamera());
		DrawGrid(20, 1.0f);
		DrawCube(cubePosition, 2.0f, 2.0f, 2.0f, RED);
		DrawCubeWires(cubePosition, 2.0f, 2.0f, 2.0f, MAROON);
		EndMode3D();

		// end the frame and get ready for the next one  (display frame, poll input, etc...)
		EndDrawing();
	}

	// destroy the window and cleanup the OpenGL context
	CloseWindow();
}
