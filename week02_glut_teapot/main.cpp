#include <GL/glut.h>

void display()
{
    glColor3f(247/255.0, 180/255.0, 171/255.0);
    glutSolidTeapot(0.3);

    glColor3f(251/255.0,  233/255.0, 219/255.0);
    glutSolidTeapot(0.2);
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
