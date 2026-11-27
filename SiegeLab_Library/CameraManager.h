#pragma once

#include "ICameraController.h"
#include "InputController.h"
#include "raylib.h"

class CameraManager
{
	ICameraController* m_currentCamera;

public:
	CameraManager();
	Camera3D getCamera();
	void update(InputSnapshot& snapshot, float duration);

};

