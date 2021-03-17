#include <cstdio>
#include <math.h>
#include <stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>

float X1, Y1, X2, Y2;

void setplot(GLint X, GLint Y)
{
  glBegin(GL_POINTS);
  glVertex2i(X, Y);
  glEnd();
  glFlush();
}

void DDA_drawline(int X1, int Y1, int X2, int Y2)
{
  int i;
  float Length;
  float X, Y, xincrease, yincrease;
  Length = abs(X2 - X1);
  if (abs(Y2 - Y1) > Length)
    Length = abs(Y2 - Y1);
  xincrease = (X2 - X1) / (Length);
  yincrease = (Y2 - Y1) / (Length);
  X = X1+0.5;
  Y = Y1+0.5;
  for (i = 0; i< Length; i++)
  {
    setplot((X + 0.5), (Y + 0.5));
    X = X + xincrease;
    Y = Y + yincrease;
  }
}

void drawline()
{
     DDA_drawline(X1, Y1, X2, Y2);
}

void init(void)
{
  glClearColor(1.0, 1.0, 1.0, 0.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0.0, 300.0, 0.0, 300.0);
}
int main(int argc, char **argv)
{
  printf("For Line :\nEnter on Initial points :\n");
  printf("X1 = ");
  scanf("%f", &X1);
  printf("Y1 = ");
  scanf("%f", &Y1);
   printf("DDA\nEnter the Final points :\n");
  printf("X2 = ");
  scanf("%f", &X2);
  printf("Y2 = ");
  scanf("%f", &Y2);
  glutInit(&argc, argv);
  glutInitWindowSize(800,800);
  glutCreateWindow("DDA");
  init();
  glutDisplayFunc(drawline);
  glutMainLoop();
  return 0;
}
