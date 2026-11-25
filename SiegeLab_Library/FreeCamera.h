#pragma once

#include "ICameraController.h"
#include "raylib.h"

class FreeCamera : public ICameraController
{
	Vector3 m_position = { 10.0f, 10.0f, 10.0f };
	void updateCamera(InputSnapshot& snapshot, float duration) override;
	Camera3D getCamera3D() const override;
	void reset() override;
	std::string nom() const override;

	
};

