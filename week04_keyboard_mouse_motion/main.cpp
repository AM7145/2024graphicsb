#include <GL/glut.h>
#include <stdio.h>
int N=0;
float teapotX[1000], teapotY[1000];
void display(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    for(int i=0;i<N;i++){
        glPushMatrix();
            glTranslatef( teapotX[i], teapotY[i], 0);
            glutSolidTeapot(0.1);
        glPopMatrix();
    }
    glutSwapBuffers();
}
void keyboard(unsigned char key, int x, int y){
    printf("key:%c x:%d y:%d\n",key, x, y);
}
void mouse(int button, int state, int x, int y){
    teapotX[N] = (x-150)/150.0;
    teapotY[N] = -(y-150)/150.0;
    N++;
}
int main(int argc, char *argv[])/// 138-lines
{
    glutInit(&argc, argv);///��l�� GLUT 140-lines
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143-lines

    glutCreateWindow("week04 keyboard mouse motion"); ///145-lines �ص���

    glutDisplayFunc(display); ///148-lines �]�w�n�e�Ϫ�display�{��
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);

    glutMainLoop();///174-lines �D�n�j��



}
