#include "InputController.h"
#include "raylib.h"

InputSnapshot InputController::capture()
{
	InputSnapshot snapshot;

	if (IsKeyDown(KEY_E)) snapshot.E = true;
	if (IsKeyDown(KEY_A)) snapshot.A = true;
	if (IsKeyDown(KEY_W)) snapshot.W = true;

	if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) snapshot.mouseLeft = true;
	snapshot.mouseDelta = GetMouseDelta();
	snapshot.mousePosition = GetMousePosition();

	return snapshot;
}
