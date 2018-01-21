#pragma once
#pragma once
#include "IOpenGL.h"
#include <windows.h>

//OpenGL headers
#include <gl/GL.h>
#include <gl/GLU.h>

class Sphere : public IOpenGL
{
private:
	float angle = 0.0f;
	GLUquadric *quadric = NULL;
	void drawSphere(GLUquadric *gluquadric);

public:
	void initialize();
	void update();
	void display();
	void uninitialize();
};