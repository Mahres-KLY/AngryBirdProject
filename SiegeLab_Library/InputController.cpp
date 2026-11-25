#include "InputController.h"
#include "raylib.h"

InputSnapshot InputController::capture()
{
	InputSnapshot snapshot;

	if (IsKeyDown(KEY_E)) snapshot.E = true;
	if (IsKeyDown(KEY_A)) snapshot.A = true;
	if (IsKeyDown(KEY_W)) snapshot.W = true;

	return snapshot;
}
