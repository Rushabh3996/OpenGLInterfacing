#include "Pyramid.h"

void Pyramid::initialize()
{

}
void Pyramid::uninitialize()
{

}

void Pyramid::update()
{
	angle = angle + 0.1f;
	if (angle > 360.0f)
		angle = 0.0f;
}

void Pyramid::display()
{
	void drawPyramid(void);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(-2.5f, -1.0f, -7.0f);
	glRotatef(angle, 0.0f, 1.0f, 0.0f);
	drawPyramid();
}



void drawPyramid(void)
{
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f); //Front
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 1.0f);

	glColor3f(1.0f, 0.0f, 0.0f); //Right
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 1.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, -1.0f);

	glColor3f(1.0f, 0.0f, 0.0f); //Back
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, -1.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-1.0f, -1.0f, -1.0f);

	glColor3f(1.0f, 0.0f, 0.0f); //Left
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-1.0f, -1.0f, -1.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 1.0f);

	glEnd();
}