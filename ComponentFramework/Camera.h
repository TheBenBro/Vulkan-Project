#ifndef CAMERA_H
#define CAMERA_H
#include "MMath.h"
using namespace MATH;
class Camera
{
private:
	Matrix4 projection;
	Matrix4 view;
	Matrix4 rotate;
	Matrix4 translate;
public:
	Camera();
	~Camera();

	void Perspective(const float FoVY, const float aspectRatio, const float near, const float far);
	void LookAt(const Vec3& eye, const Vec3& dir, const Vec3& up);
	inline Matrix4 GetProjectionMatrix() { return projection; }
	inline Matrix4 GetViewMatrix() {return rotate * translate;};
	void SetPosition(const Vec3& position);
	void SetRotation(const float angle, const Vec3& axis);


};

#endif