#include "Cube.h"

void Cube::initialize()
{

}
void Cube::uninitialize()
{

}

void Cube::update()
{
    angle = angle + 0.1f;
    if (angle > 360.0f)
        angle = 0.0f;  
}

void Cube::display()
{
    void drawCube(void);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(-3.0f, 1.7f, -9.0f);
	glScalef(0.75f, 0.75f, 0.75f);
    glRotatef(angle, 1.0f, 1.0f, 0.0f);
    drawCube();
}

void drawCube(void)
{
    glBegin(GL_QUADS);

    //font face
    glColor3f(1.0f, 0.0f, 0.0f);  // red color
    glVertex3f(1.0f, 1.0f, 1.0f);  //right top
    glVertex3f(-1.0f, 1.0f, 1.0f); //left top
    glVertex3f(-1.0f, -1.0f, 1.0f); //left bottom
    glVertex3f(1.0f, -1.0f, 1.0f); //right bottom

    //Right Face
    glColor3f(0.0f, 1.0f, 0.0f);  // green color
    glVertex3f(1.0f, 1.0f, -1.0f);   //right top
    glVertex3f(1.0f, 1.0f, 1.0f); //left top
    glVertex3f(1.0f, -1.0f, 1.0f); //left bottom
    glVertex3f(1.0f, -1.0f, -1.0f); //right bottom

    //back Face
    glColor3f(0.0f, 0.0f, 1.0f);  // blue color
    glVertex3f(-1.0f, 1.0f, -1.0f);  //right top
    glVertex3f(1.0f, 1.0f, -1.0f); //left top
    glVertex3f(1.0f, -1.0f, -1.0f); //left bottom
    glVertex3f(-1.0f, -1.0f, -1.0f); //right bottom


    //left Face
    glColor3f(1.0f, 1.0f, 0.0f);  // yellow color
    glVertex3f(-1.0f, 1.0f, 1.0f);  //right top
    glVertex3f(-1.0f, 1.0f, -1.0f); //left top
    glVertex3f(-1.0f, -1.0f, -1.0f); //left bottom
    glVertex3f(-1.0f, -1.0f, 1.0f); //right bottom


    //top Face
    glColor3f(0.0f, 1.0f, 1.0f);  // cyan color
    glVertex3f(-1.0f, 1.0f, 1.0f);   //right top
    glVertex3f(1.0f, 1.0f, 1.0f);  //left top
    glVertex3f(1.0f, 1.0f, -1.0f); //left bottom
    glVertex3f(-1.0f, 1.0f, -1.0f); //right bottom


    //down Face
    glColor3f(1.0f, 0.0f, 1.0f);  // magenta color
    glVertex3f(1.0f, -1.0f, 1.0f);  //right top
    glVertex3f(-1.0f, -1.0f, 1.0f);//left top
    glVertex3f(-1.0f, -1.0f, -1.0f); //left bottom
    glVertex3f(1.0f, -1.0f, -1.0f); //right bottom

    glEnd();
}