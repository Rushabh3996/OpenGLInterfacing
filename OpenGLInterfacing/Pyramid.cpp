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
	glTranslatef(2.5f, -1.0f, -7.0f);
	glRotatef(angle, 0.0f, 1.0f, 0.0f);
	drawPyramid();
}



void drawPyramid(void)
{
	glBegin(GL_TRIANGLES);

	// front face
	glColor3f(1.0f, 0.0f, 0.0f); // red
	glVertex3f(0.0f, 1.0f, 0.0f);   // Apex

	glColor3f(0.0f, 1.0f, 0.0f);    // green
	glVertex3f(-1.0f, -1.0f, 1.0f); // left-corner of front face

	glColor3f(0.0f, 0.0f, 1.0f);    // blue
	glVertex3f(1.0f, -1.0f, 1.0f);   //right corner of front face

									 //right face
	glColor3f(1.0f, 0.0f, 0.0f); // red
	glVertex3f(0.0f, 1.0f, 0.0f);     // apex

	glColor3f(0.0f, 0.0f, 1.0f);  // blue
	glVertex3f(1.0f, -1.0f, 1.0f);    //left corner of the right face

	glColor3f(0.0f, 1.0f, 0.0f);  //green
	glVertex3f(1.0f, -1.0f, -1.0f);  // right corner of the right face

									 //Back face

	glColor3f(1.0f, 0.0f, 0.0f);//red
	glVertex3f(0.0f, 1.0f, 0.0f); // apex

	glColor3f(0.0f, 1.0f, 0.0f);// green
	glVertex3f(1.0f, -1.0f, -1.0f); //left corner of the back face

	glColor3f(0.0f, 0.0f, 1.0f);// blue
	glVertex3f(-1.0f, -1.0f, -1.0f); //right corner of the back face

									 //left face
	glColor3f(1.0f, 0.0f, 0.0f);//red
	glVertex3f(0.0f, 1.0f, 0.0f); // apex

	glColor3f(0.0f, 0.0f, 1.0f);// blue
	glVertex3f(-1.0f, -1.0f, -1.0f); //left corner of the back face

	glColor3f(0.0f, 1.0f, 0.0f);// green
	glVertex3f(-1.0f, -1.0f, 1.0f); //right corner of the back face

	glEnd();
}