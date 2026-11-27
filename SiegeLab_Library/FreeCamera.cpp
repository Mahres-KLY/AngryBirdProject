#include "FreeCamera.h"
#include <iostream>

#include "raylib.h"
#include "raymath.h"

FreeCamera::FreeCamera()
{
    m_FreeCamera.position ={ 10.0f, 10.0f, 10.0f }; // Camera position
    m_FreeCamera.target ={ 0.0f, 0.0f, 0.0f };      // Camera looking at point
    m_FreeCamera.up = { 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    m_FreeCamera.fovy = 45.0f;                                // Camera field-of-view Y
    m_FreeCamera.projection = CAMERA_PERSPECTIVE;             // Camera projection type
}

void FreeCamera::updateCamera(InputSnapshot& snapshot, float duration)
{
    UpdateCamera(&m_FreeCamera, CAMERA_FREE);

    if (snapshot.W) m_FreeCamera.target = { 0.0f, 0.0f, 0.0f };

}

Camera3D FreeCamera::getCamera3D() const
{
    return m_FreeCamera;
}

void FreeCamera::reset()
{
}

std::string FreeCamera::nom() const
{
    return std::string();
}
