#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}

void mouse(int button, int state, int x,int y)
{
    if(state==GLUT_DOWN){
        printf("glVertex2f((%d-150)/150.0, -(%d-150)/150.0);\n", x, y);
    }

}


int main(int argc, char *argv[])/// 138-lines
{
    glutInit(&argc, argv);///��l�� GLUT 140-lines
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143-lines

    glutCreateWindow("GLUT Shapes"); ///145-lines �ص���

    glutDisplayFunc(display);
    glutMouseFunc(mouse);///148-lines �]�w�n�e�Ϫ�display�{��

    glutMainLoop();///174-lines �D�n�j��

}
