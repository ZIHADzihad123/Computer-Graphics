#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glPointSize(5.0);

    glBegin(GL_POLYGON);
    glColor3ub (0, 51, 153);

    glVertex2i(300,360);
    glVertex2i(300,420);
    glVertex2i(320,420);
    glVertex2i(320,400);
    glVertex2i(340,400);
    glVertex2i(340,360);

    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(340,360);
    glVertex2i(340,420);
     glVertex2i(360,420);
     glVertex2i(360,360);
     glEnd();


    glBegin(GL_POLYGON);
   glColor3ub (255, 153, 51);
    glVertex2i(300,360);
    glVertex2i(360,360);
    glVertex2i(360,330);
    glVertex2i(300,330);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub (189, 189, 189 );
    glVertex2i(280,330);
    glVertex2i(380,330);
    glVertex2i(380,310);
    glVertex2i(280,310);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub (66, 66, 66 );
    glVertex2i(300,310);
    glVertex2i(360,310);
    glVertex2i(360,300);
    glVertex2i(300,300);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub (189, 189, 189 );
    glVertex2i(300,310);
    glVertex2i(260,310);
    glVertex2i(260,300);
    glVertex2i(280,300);
    glVertex2i(280,290);
    glVertex2i(300,290);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub (189, 189, 189 );
    glVertex2i(360,310);
    glVertex2i(400,310);
    glVertex2i(400,300);
    glVertex2i(380,300);
    glVertex2i(380,290);
    glVertex2i(360,290);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub (189, 189, 189 );
    glVertex2i(300,300);
    glVertex2i(360,300);
    glVertex2i(360,290);
    glVertex2i(300,290);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub (255, 153, 51 );
    glVertex2i(260,300);
    glVertex2i(280,300);
    glVertex2i(280,290);
    glVertex2i(260,290);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub (255, 153, 51 );
    glVertex2i(380,300);
    glVertex2i(400,300);
    glVertex2i(400,290);
    glVertex2i(380,290);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub (0, 51, 153 );
    glVertex2i(380,290);
    glVertex2i(400,290);
    glVertex2i(400,270);
    glVertex2i(380,270);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 51, 153 );
    glVertex2i(260,290);
    glVertex2i(280,290);
    glVertex2i(280,270);
    glVertex2i(260,270);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 238, 88 );
    glVertex2i(280,290);
    glVertex2i(380,290);
    glVertex2i(380,270);
    glVertex2i(280,270);
    glEnd();

     glBegin(GL_POLYGON);
   glColor3ub (46, 125, 50  );
    glVertex2i(380,270);
    glVertex2i(400,270);
    glVertex2i(400,200);
    glVertex2i(380,200);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (46, 125, 50 );
    glVertex2i(260,270);
    glVertex2i(280,270);
    glVertex2i(280,200);
    glVertex2i(260,200);
    glEnd();

     glBegin(GL_POLYGON);
   glColor3ub (0, 51, 153 );
    glVertex2i(280,270);
    glVertex2i(280,250);
    glVertex2i(300,250);
    glVertex2i(300,230);
    glVertex2i(360,230);
    glVertex2i(360,250);
    glVertex2i(380,250);
    glVertex2i(380,270);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (109, 76, 65 );

    glVertex2i(280,250);
    glVertex2i(300,250);
    glVertex2i(300,160);
    glVertex2i(280,160);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub (109, 76, 65 );

    glVertex2i(300,230);
    glVertex2i(310,230);
    glVertex2i(310,160);
    glVertex2i(300,160);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (40, 53, 147  );

    glVertex2i(280,160);
    glVertex2i(300,160);
    glVertex2i(300,150);
    glVertex2i(280,150);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub (40, 53, 147  );

    glVertex2i(300,160);
    glVertex2i(310,160);
    glVertex2i(310,150);
    glVertex2i(300,150);
    glEnd();



      glBegin(GL_POLYGON);
    glColor3ub (109, 76, 65 );

    glVertex2i(380,250);
    glVertex2i(360,250);
    glVertex2i(360,160);
    glVertex2i(380,160);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub (109, 76, 65 );

    glVertex2i(360,230);
    glVertex2i(350,230);
    glVertex2i(350,160);
    glVertex2i(360,160);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (40, 53, 147  );

    glVertex2i(380,160);
    glVertex2i(360,160);
    glVertex2i(360,150);
    glVertex2i(380,150);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub (40, 53, 147  );

    glVertex2i(360,160);
    glVertex2i(350,160);
    glVertex2i(350,150);
    glVertex2i(360,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (117, 117, 117);

    glVertex2i(310,230);
    glVertex2i(350,230);
    glVertex2i(350,210);
    glVertex2i(310,210);
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
