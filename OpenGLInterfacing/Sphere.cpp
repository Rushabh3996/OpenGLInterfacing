#include "Sphere.h"

void Sphere::initialize()
{

}
void Sphere::uninitialize()
{
	if (quadric != NULL) {
		gluDeleteQuadric(quadric);
	}
}

void Sphere::update()
{
	angle = angle + 0.1f;
	if (angle > 360.0f)
		angle = 0.0f;
}

void Sphere::display()
{
	void drawSphere(GLUquadric *gluquadric);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(2.5f, -1.0f, -7.0f);
	glRotatef(angle, 0.0f, 1.0f, 0.0f);
	drawSphere(quadric);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

}

void drawSphere(GLUquadric *gluquadric) {
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	gluquadric = gluNewQuadric();
	glColor3f(1.0f, 0.0f, 0.0f);
	gluSphere(gluquadric, 1.0, 20, 20);
}