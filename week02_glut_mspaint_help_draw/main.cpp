#include <GL/glut.h>

void display()
{
    glBegin(GL_POLYGON);
        glColor3f(1,1,1); glVertex2f((30-200)/200.0, -(45-200)/200.0);
        glColor3f(1,1,1); glVertex2f((46-200)/200.0, -(102-200)/200.0);
        glColor3f(1,1,1); glVertex2f((84-200)/200.0, -(23-200)/200.0);
    glEnd();
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
