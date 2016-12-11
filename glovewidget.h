#ifndef GLOVEWIDGET_H
#define GLOVEWIDGET_H

#include <QWidget>
#include <QOpenGLWidget>

class GloveWidget : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit GloveWidget(QWidget *parent = 0);
    void DrawCube();
protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w,int h);
private:
//    QGLAbstractScene *m_scene;
//    QGLSceneNode *m_rootNode;
signals:

public slots:
};

#endif // GLOVEWIDGET_H
