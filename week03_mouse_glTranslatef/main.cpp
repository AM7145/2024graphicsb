#include <GL/glut.h>
#include <stdio.h>
float teapotX= 0, teapotY= 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(teapotX, teapotY, 0);
        glutSolidTeapot(0.3);
    glPopMatrix();///�٭�x�}
    glutSwapBuffers();

}

void mouse(int button, int state, int x,int y)
{
    teapotX= (x-150)/150.0;
    teapotY= -(y-150)/150.0;
}


int main(int argc, char *argv[])/// 138-lines
{
    glutInit(&argc, argv);///��l�� GLUT 140-lines
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143-lines

    glutCreateWindow("week mouse glTranslatef"); ///145-lines �ص���

    glutDisplayFunc(display);
    glutMouseFunc(mouse);///148-lines �]�w�n�e�Ϫ�display�{��

    glutMainLoop();///174-lines �D�n�j��

}
