#include <GL/glut.h>
#include <math.h>
void myCircle(float cx, float cy, float r){
    glBegin(GL_POLYGON);
    for(float a=0;a<=3.14*2;a+=0.1){
        glVertex2f( r*cos(a)+cx, r*sin(a)+cy);
    }
    glEnd();
}
void display()
{
    glColor3f(1,1,1); myCircle(0, 0, 1);
    glColor3f(0,0,0); myCircle(-0.5, +0.5, 0.3);
    glColor3f(0,0,0); myCircle(+0.5, +0.5, 0.3);
    glColor3f(0,0,0); myCircle(0, -0.3, 0.7);
    glutSwapBuffers();
}

int main(int argc, char *argv[])/// 138-lines
{
    glutInit(&argc, argv);///初始化 GLUT 140-lines
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143-lines

    glutCreateWindow("GLUT Shapes"); ///145-lines 建視窗

    glutDisplayFunc(display); ///148-lines 設定要畫圖的display程式

    glutMainLoop();///174-lines 主要迴圈

}
