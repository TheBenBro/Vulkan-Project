#include "Camera.h"

Camera::Camera()
{
	projection.loadIdentity();
	view.loadIdentity();
	//view = MMath::lookAt(Vec3(0.0f, 0.0f, 5.0f), Vec3(0.0f, 0.0f, 0.0f), Vec3(0.0f, 1.0f, 0.0f));
}

Camera::~Camera()
{
}

void Camera::Perspective(const float FoVY, const float aspectRatio, const float near , const float far)
{
	projection = MMath::perspective(FoVY, aspectRatio, near, far);
}

void Camera::LookAt(const Vec3& eye, const Vec3& dir, const Vec3& up)
{
	view = MMath::lookAt(eye, dir, up);
}

void Camera::SetPosition(const Vec3& position)
{
	translate = MMath::translate(position.x, position.y, -position.z);
}

void Camera::SetRotation(const float angle, const Vec3& axis)
{
	rotate = MMath::rotate(-angle, axis);
}
