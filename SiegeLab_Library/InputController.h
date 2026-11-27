#pragma once
#include "raylib.h"

struct InputSnapshot
{
	bool A = false;
	bool E = false;
	bool W = false;

	bool mouseLeft = false;
	Vector2 mouseDelta;
	Vector2 mousePosition;
};

class InputController
{
public:
	InputSnapshot capture();
};

