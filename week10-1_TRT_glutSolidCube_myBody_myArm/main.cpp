#include<GL/glut.h>
void myBody(){
    glColor3f(1,0,0);
    glutWireCube(0.6);
}
void myArm(){
    //glTranslatef(+0.0,+0.3,0);
        glColor3f(0,1,0);
        glScalef(1.5,0.5,0.5);
        glutWireCube(0.3);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|
            GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        //glTranslatef(-0.6,+0.3,0);
        myBody();
    glPopMatrix();
    glPushMatrix();
        myArm();
    glPopMatrix();
    glPushMatrix();
        glTranslatef(+0.6,+0.3,30);
        glutSolidSphere(0.3,30,30);
        //glRotatef(angle++,0,0,1);
        //myArm();
    glPopMatrix();
    glutSwapBuffers();
}
int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("");
    glutDisplayFunc(display);
    //glutdleFunc(display);
    glutMainLoop();


}
