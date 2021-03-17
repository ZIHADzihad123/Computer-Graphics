#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glPointSize(5.0);

glBegin(GL_POLYGON);
glColor3ub (219, 169, 1);
glVertex2i(02,46);
glVertex2i(12,43);
glVertex2i(02,53);
glVertex2i(-10,43);
glVertex2i(15, 50);
glVertex2i(-10, 50);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (219, 169, 1);
glVertex2i(22,40);
glVertex2i(32,37);
glVertex2i(22,47);
glVertex2i(12,37);
glVertex2i(35, 44);
glVertex2i(12, 44);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (219, 169, 1);
glVertex2i(-02,-46);
glVertex2i(-12,-43);
glVertex2i(-02,-53);
glVertex2i(10,-43);
glVertex2i(-15, -50);
glVertex2i(10, -50);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (219, 169, 1);
glVertex2i(-46,-02);
glVertex2i(-43,-12);
glVertex2i(-53,-02);
glVertex2i(-43,10);
glVertex2i(-50, -15);
glVertex2i(-50, 10);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (219, 169, 1);
glVertex2i(46,02);
glVertex2i(43,12);
glVertex2i(53,02);
glVertex2i(43,-10);
glVertex2i(50, 15);
glVertex2i(50, -10);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (219, 169, 1);
glVertex2i(-22,-40);
glVertex2i(-32,-37);
glVertex2i(-22,-47);
glVertex2i(-12,-37);
glVertex2i(-35, -44);
glVertex2i(-12, -44);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (219, 169, 1);
glVertex2i(22,-40);
glVertex2i(32,-37);
glVertex2i(22,-47);
glVertex2i(12,-37);
glVertex2i(35, -44);
glVertex2i(12, -44);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (219, 169, 1);
glVertex2i(-22,40);
glVertex2i(-32,37);
glVertex2i(-22,47);
glVertex2i(-12,37);
glVertex2i(-35, 44);
glVertex2i(-12, 44);
glEnd();


glBegin(GL_POLYGON);
glColor3ub (219, 169, 1);
glVertex2i(40,22);
glVertex2i(37,32);
glVertex2i(47,22);
glVertex2i(37,12);
glVertex2i(44, 35);
glVertex2i(44, 12);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (219, 169, 1);
glVertex2i(-40,-22);
glVertex2i(-37,-32);
glVertex2i(-47,-22);
glVertex2i(-37,-12);
glVertex2i(-44, -35);
glVertex2i(-44, -12);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (219, 169, 1);
glVertex2i(40,-22);
glVertex2i(37,-32);
glVertex2i(47,-22);
glVertex2i(37,-12);
glVertex2i(44, -35);
glVertex2i(44, -12);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (219, 169, 1);
glVertex2i(-40,22);
glVertex2i(-37,32);
glVertex2i(-47,22);
glVertex2i(-37,12);
glVertex2i(-44, 35);
glVertex2i(-44, 12);
glEnd();





glFlush ();
}

void myInit (void)
{
glClearColor(0.1372, 0.13, 0.5, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-320, 320.0, -240.0, 240.0);
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
