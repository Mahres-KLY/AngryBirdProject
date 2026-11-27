#pragma once

#include "ICameraController.h"
#include "raylib.h"

class OrbitCamera : public ICameraController
{
public:
	OrbitCamera();

private:
	Camera3D m_OrbitCamera;
	void updateCamera(InputSnapshot& snapshot, float duration) override;
	Camera3D getCamera3D() const override;
	void reset() override;
	std::string nom() const override;
};