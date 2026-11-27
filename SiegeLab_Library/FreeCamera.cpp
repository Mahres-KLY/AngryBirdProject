#include "FreeCamera.h"
#include <iostream>

#include "raylib.h"
#include "raymath.h"

FreeCamera::FreeCamera()
{
    m_camera.position ={ 10.0f, 10.0f, 10.0f }; // Camera position
    m_camera.target ={ 0.0f, 0.0f, 0.0f };      // Camera looking at point
    m_camera.up = { 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    m_camera.fovy = 45.0f;                                // Camera field-of-view Y
    m_camera.projection = CAMERA_PERSPECTIVE;             // Camera projection type
}

void FreeCamera::updateCamera(InputSnapshot& snapshot, float duration)
{
    UpdateCamera(&m_camera, CAMERA_FREE);

    if (snapshot.W) m_camera.target = { 0.0f, 0.0f, 0.0f };

}

Camera3D FreeCamera::getCamera3D() const
{
    return m_camera;
}

void FreeCamera::reset()
{
}

std::string FreeCamera::nom() const
{
    return std::string();
}
