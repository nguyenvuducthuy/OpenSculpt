/*
 * ModelManager.h
 * @author : Team OpenSculpt
 *
 * ModelManager controls a list of Models and links these with a VBOManager for rendering.
 * Its the class used by the sculpting tools.
 *
 * Models must be added to a ModelManager to be rendered.
 *
 */

#ifndef MODELMANAGER_H
#define MODELMANAGER_H

#include <QVector>
#include "model/Model.h"
#include "model/MCube.h"

using namespace std;

class ModelManager
{
private:
    QVector<Model*> m_models;

public:
    ModelManager();
    ~ModelManager();

    void initializeGL();
    void paintGL();

    void addModel(Model *model);
    void removeModel();
    QVector3D getGLpos(QPoint mouse);
    Model* pickModel(QVector3D position);
};

#endif // MODELMANAGER_H
