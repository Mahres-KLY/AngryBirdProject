#pragma once
#include "raylib.h"

struct InputSnapshot
{
	bool A = false;
	bool E = false;
	bool W = false;

	Vector2 mouseDelta;
};

class InputController
{
public:
	InputSnapshot capture();
};

