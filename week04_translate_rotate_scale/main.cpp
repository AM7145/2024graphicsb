#include <GL/glut.h>
float teapotX = 0.5;
float angle = 0;
float s = 0.3;///一開始是原本一倍的大小
void display()
{///設定清背景的顏色
    glClearColor(1, 1, 0.9, 1);///R,G,B,A
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(0, 1, 0);///3f就是R,G,B
    glPushMatrix();///備分矩陣
        glTranslatef(teapotX, teapotY, 0);
        glRotatef(angle++, 0, 0, 1);
        glScalef(s, s, s);///縮放s倍
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}

void motion(int x, int y)
{
    s= 1 + (x-150)/150.0;///會變大變小的變數0~1~2
    display(); ///重畫畫面
}

int main(int argc, char *argv[])/// 138-lines
{
    glutInit(&argc, argv);///初始化 GLUT 140-lines
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///143-lines

    glutCreateWindow("week mouse glScalef"); ///145-lines 建視窗
    glutIdleFunc(display);

    glutDisplayFunc(display); ///148-lines 設定要畫圖的display程式
    glutMotionFunc(motion);///拖動motion的時候
    glutMainLoop();///174-lines 主要迴圈

}
