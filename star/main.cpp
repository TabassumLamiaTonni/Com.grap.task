#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glPointSize(5.0);



glBegin(GL_TRIANGLES);
glColor3ub (0, 0, 255);
glVertex2i(110, 320);
glVertex2i(320, 180 );
glVertex2i(260, 320);

glColor3ub (0, 0, 255);
glVertex2i(260, 320);
glVertex2i(170, 100);
glVertex2i(522, 320);


glColor3ub (0, 0, 255);
glVertex2i(320, 460);
glVertex2i(230, 240);
glVertex2i(430, 100);

glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
