#include "Lights.h"

void Lights::initialize()
{

}

void Lights::update()
{
	if (angle > 360.0f)
		angle = 0.0f;
	angle += 0.1f;
}

void Lights::display()
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(2.5f, 1.5f, -5.0f);
	glRotatef(angle, 0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_TRIANGLES);
		glVertex3f(0.0f, 1.0f, 0.0f);
		glVertex3f(-1.0f, -1.0f, 0.0f);
		glVertex3f(1.0f, -1.0f, 0.0f);
	glEnd();
}

void Lights::uninitialize()
{

}