#include "CameraManager.h"
#include "OrbitCamera.h"

CameraManager::CameraManager()
{
    m_currentCamera = new OrbitCamera();
}

Camera3D CameraManager::getCamera()
{
    return m_currentCamera->getCamera3D();
}

void CameraManager::update(InputSnapshot& snapshot, float duration)
{
    m_currentCamera->update(snapshot, duration);
}
