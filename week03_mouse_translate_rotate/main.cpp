#include <GL/glut.h>
#include <stdio.h>
float teapotX= 0, teapotY= 0;
float angle= 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(teapotX, teapotY, 0);
        glRotatef(angle, 0, 0, 1);
        glutSolidTeapot(0.3);
    glPopMatrix();///還原矩陣
    glutSwapBuffers();

}
int method = 1;
int oldX=0, oldY=0;
void mouse(int button, int state,int x, int y)
{
    /*teapotX= (x-150)/150.0;
    teapotY= -(y-150)/150.0;*/
    oldX = x;
    oldY = y;
}

void motion(int x, int y)
{
    if(method==1){
        angle += x-oldX;
    }else if(method==2){
        teapotX += (x- oldX)/150.0;
        teapotY -= (y- oldY)/150.0;
    }
    oldX=x;
    oldY=y;
    display();
}

void keyboard(unsigned char key, int x, int y)
{
    if(key=='e') method=1;;///Rotate
    if(key=='w') method=2;///Translate

}

int main(int argc, char *argv[])/// 138-lines
{
    glutInit(&argc, argv);///初始化 GLUT 140-lines
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143-lines

    glutCreateWindow("week mouse glTranslatef"); ///145-lines 建視窗

    glutDisplayFunc(display);
    glutMouseFunc(mouse);///148-lines 設定要畫圖的display程式
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);
    glutMainLoop();///174-lines 主要迴圈

}
