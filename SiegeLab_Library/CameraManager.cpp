#include "CameraManager.h"
#include "FreeCamera.h"

CameraManager::CameraManager()
{
    m_currentCamera = new FreeCamera();
}

Camera3D CameraManager::getCamera()
{
    return m_currentCamera->getCamera3D();
}

void CameraManager::update(InputSnapshot& snapshot, float duration)
{
    m_currentCamera->updateCamera(snapshot, duration);
}
