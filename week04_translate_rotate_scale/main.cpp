#include <GL/glut.h>
float teapotX = 0.5;
float angle = 0;
float s = 0.3;///�@�}�l�O�쥻�@�����j�p
void display()
{///�]�w�M�I�����C��
    glClearColor(1, 1, 0.9, 1);///R,G,B,A
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(0, 1, 0);///3f�N�OR,G,B
    glPushMatrix();///�Ƥ��x�}
        glTranslatef(teapotX, teapotY, 0);
        glRotatef(angle++, 0, 0, 1);
        glScalef(s, s, s);///�Y��s��
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}

void motion(int x, int y)
{
    s= 1 + (x-150)/150.0;///�|�ܤj�ܤp���ܼ�0~1~2
    display(); ///���e�e��
}

int main(int argc, char *argv[])/// 138-lines
{
    glutInit(&argc, argv);///��l�� GLUT 140-lines
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///143-lines

    glutCreateWindow("week mouse glScalef"); ///145-lines �ص���
    glutIdleFunc(display);

    glutDisplayFunc(display); ///148-lines �]�w�n�e�Ϫ�display�{��
    glutMotionFunc(motion);///���motion���ɭ�
    glutMainLoop();///174-lines �D�n�j��

}
