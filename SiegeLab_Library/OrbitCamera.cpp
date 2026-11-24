#include "OrbitCamera.h"
#include <iostream>

void OrbitCamera::update(InputSnapshot& snapshot, float duration) const
{
    if (snapshot.E)
        std::cout << "Press E " << std::endl;

    if (snapshot.A)
        std::cout << "Press A " << std::endl;

}

Camera3D OrbitCamera::getCamera3D() const
{
    Camera3D camera = { 0 };
    camera.position = m_position; // Camera position
    camera.target = { 0.0f, 0.0f, 0.0f };      // Camera looking at point
    camera.up = { 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    camera.fovy = 45.0f;                                // Camera field-of-view Y
    camera.projection = CAMERA_PERSPECTIVE;             // Camera projection type
    return camera;
}

void OrbitCamera::reset() const
{
}

std::string OrbitCamera::nom() const
{
    return std::string();
}
