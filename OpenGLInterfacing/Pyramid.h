#pragma once
#pragma once
#include "IOpenGL.h"
#include <windows.h>

//OpenGL headers
#include <gl/GL.h>
#include <gl/GLU.h>

class Pyramid : public IOpenGL
{
	float angle = 0.0f;
private:
	void drawPyramid(void);
public:
	void initialize();
	void update();
	void display();
	void uninitialize();
};