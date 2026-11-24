#pragma once

struct InputSnapshot
{
	bool A = false;
	bool E = false;
};

class InputController
{
public:
	InputSnapshot capture();
};

