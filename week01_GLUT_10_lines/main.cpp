#include <GL/glut.h>

void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}

int main(int argc, char *argv[])/// 138-lines
{
    glutInit(&argc, argv);///��l�� GLUT 140-lines
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143-lines

    glutCreateWindow("GLUT Shapes"); ///145-lines �ص���

    glutDisplayFunc(display); ///148-lines �]�w�n�e�Ϫ�display�{��

    glutMainLoop();///174-lines �D�n�j��

}
