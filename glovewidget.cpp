#include "glovewidget.h"
#include <QOpenGLWidget>
GloveWidget::GloveWidget(QWidget *parent) : QOpenGLWidget(parent)
{

}
void GloveWidget::initializeGL(){
    glClearColor(0,0,0,1);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
}
void GloveWidget::paintGL(){
    glClear( GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    DrawCube();
}
void GloveWidget::resizeGL(int w, int h){
    glViewport( 0, 0, w, h );
}
void GloveWidget::DrawCube(){

        glBegin(GL_QUADS);

            //front
            glColor3f(1.0,0.8,0.0);

            glVertex3f(1.0,1.0,1.0);
            glVertex3f(-1.0,1.0,1.0);
            glVertex3f(-1.0,-1.0,1.0);
            glVertex3f(1.0,-1.0,1.0);


            //back

            glColor3f(0.0,1.0,0.0);

            glVertex3f(1.0,1.0,-1.0);
            glVertex3f(-1.0,1.0,-1.0);
            glVertex3f(-1.0,-1.0,-1.0);
            glVertex3f(1.0,-1.0,-1.0);


            //top
            //glColor3f(0.0,0.0,1.0);

            glVertex3f(-1.0,1.0,1.0);
            glVertex3f(1.0,1.0,1.0);
            glVertex3f(1.0,1.0,-1.0);
            glVertex3f(-1.0,1.0,-1.0);


            //bottom
            glColor3f(0.0,1.0,1.0);

            glVertex3f(1.0,-1.0,1.0);
            glVertex3f(1.0,-1.0,-1.0);
            glVertex3f(-1.0,-1.0,-1.0);
            glVertex3f(-1.0,-1.0,1.0);

            //right
            glColor3f(1.0,0.0,1.0);

            glVertex3f(1.0,1.0,1.0);
            glVertex3f(1.0,-1.0,1.0);
            glVertex3f(1.0,-1.0,-1.0);
            glVertex3f(1.0,1.0,-1.0);


            //left
            glColor3f(1.0,1.0,0.0);

            glVertex3f(-1.0,1.0,1.0);
            glVertex3f(-1.0,-1.0,1.0);
            glVertex3f(-1.0,-1.0,-1.0);
            glVertex3f(-1.0,1.0,-1.0);


        glEnd();
}
