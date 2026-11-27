#pragma once

#include "ICameraController.h"
#include "raylib.h"

class FreeCamera : public ICameraController
{
public:
	FreeCamera();
private:

	Camera3D m_camera;
	void updateCamera(InputSnapshot& snapshot, float duration);
	Camera3D getCamera3D() const override;
	void reset() override;
	std::string nom() const override;

};

