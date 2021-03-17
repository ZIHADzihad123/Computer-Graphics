#include<windows.h>
#include<iostream>
#include<math.h>
#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

using namespace std;

int X1, Y1, X2, Y2;

void Midpoint(void)
{
    double dx=(X2-X1),dy=(Y2-Y1),l, m, dstart, d, dnew, dold, dne, de;
    float xInc,yInc,x=X1,y=Y1;

    m=dy/dx;
    dstart=2*dy-dx;
    dne=2*(dy-dx);
    de=2*dy;

    if(abs(dx)>abs(dy))
        l=(abs(dx));
    else
        l=(abs(dy));

    xInc=dx/l;
    yInc=dy/l;

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);

    glVertex2d(x,y);

    for(int i=0; i<l; i++)
    {
        x+=xInc;
        y+=yInc;
        glVertex2d(round(x), round(y));
    }

    if (dstart>0)
    {
        x+=xInc;
        y+=yInc;
        d=dne;
    }
    else
    {   x+=xInc;
        d=de;
    }

    dold=dstart;

    dnew=dold+d;

    if (dnew>0)
    {
        x+=xInc;
        y+=yInc;
        d=dne;
    }
    else
    {
        x+=xInc;
        d=de;
    }

    glEnd();

    glFlush();

}

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(5.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100.0, 640.0,-100.0, 480.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (250, 250);
    glutCreateWindow ("Bresenham's MidPoint Line Algorithm");

    cout<<"Enter an initial points:\n";
    cout<<"X1 :";
    cin>>X1;
    cout<<"Y1 :";
    cin>>Y1;
    cout<<"Enter the final points:\n";
    cout<<"X2 :";
    cin>>X2;
    cout<<"Y2 :";
    cin>>Y2;
    glutDisplayFunc(Midpoint);
    myInit ();
    glutMainLoop();
}

