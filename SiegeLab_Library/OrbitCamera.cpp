#include "OrbitCamera.h"
#include <iostream>

#include "raylib.h"
#include "raymath.h"

OrbitCamera::OrbitCamera()
{
    m_OrbitCamera.position = { 0.0f, 0.0f, 5.0f }; // Camera position
    m_OrbitCamera.target = { 1.0f, 0.0f, 0.0f };      // Camera looking at point
    m_OrbitCamera.up = { 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    m_OrbitCamera.fovy = 45.0f;                                // Camera field-of-view Y
    m_OrbitCamera.projection = CAMERA_PERSPECTIVE;             // Camera projection type
}

void OrbitCamera::updateCamera(InputSnapshot& snapshot, float duration)
{
    if (IsMouseButtonDown(1)) // only rotate on right click
    {
        Vector2 mousePosition = GetMousePosition();
    }

}


Camera3D OrbitCamera::getCamera3D() const
{
    return m_OrbitCamera;
}

void OrbitCamera::reset()
{
}

std::string OrbitCamera::nom() const
{
    return std::string();
}
