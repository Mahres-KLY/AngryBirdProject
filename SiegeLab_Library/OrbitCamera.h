#pragma once

#include "ICameraController.h"
#include "raylib.h"

class OrbitCamera : public ICameraController
{
	// Hérité via ICameraController
	Vector3 m_position = { 10.0f, 10.0f, 10.0f };

	void update(InputSnapshot& snapshot, float duration) override;
	Camera3D getCamera3D() const override;
	void reset() override;
	std::string nom() const override;
};

