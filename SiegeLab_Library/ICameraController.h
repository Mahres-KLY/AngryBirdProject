#pragma once

#include <iostream>
#include <string>

#include "raylib.h"
#include "InputController.h"

class ICameraController {
	public:
		virtual ~ICameraController() = default;
		virtual void update(InputSnapshot& snapshot, float duration) = 0;
		virtual Camera3D getCamera3D() const = 0;
		virtual void reset() = 0;
		virtual std::string nom() const = 0;
};