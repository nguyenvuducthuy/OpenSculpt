/********************************************************************************
** Form generated from reading UI file 'parametragemodele.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETRAGEMODELE_H
#define UI_PARAMETRAGEMODELE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParametrageModele
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetCube;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *labellongueur;
    QLabel *labellongeur;
    QDoubleSpinBox *longeurint;
    QDoubleSpinBox *hauteurint;
    QWidget *widgetCylindre;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QWidget *widget_2;
    QFormLayout *formLayout_2;
    QLabel *labelcylindre;
    QDoubleSpinBox *doubleSpinCylindre;
    QLabel *labelhauteur;
    QDoubleSpinBox *doubleSpinhauteur;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *annulerparam;
    QPushButton *validerparam;

    void setupUi(QDialog *ParametrageModele)
    {
        if (ParametrageModele->objectName().isEmpty())
            ParametrageModele->setObjectName(QString::fromUtf8("ParametrageModele"));
        ParametrageModele->resize(414, 368);
        verticalLayout = new QVBoxLayout(ParametrageModele);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widgetCube = new QWidget(ParametrageModele);
        widgetCube->setObjectName(QString::fromUtf8("widgetCube"));
        verticalLayout_2 = new QVBoxLayout(widgetCube);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widgetCube);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        widget = new QWidget(widgetCube);
        widget->setObjectName(QString::fromUtf8("widget"));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labellongueur = new QLabel(widget);
        labellongueur->setObjectName(QString::fromUtf8("labellongueur"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labellongueur);

        labellongeur = new QLabel(widget);
        labellongeur->setObjectName(QString::fromUtf8("labellongeur"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labellongeur);

        longeurint = new QDoubleSpinBox(widget);
        longeurint->setObjectName(QString::fromUtf8("longeurint"));
        longeurint->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        longeurint->setSingleStep(0.1);

        formLayout->setWidget(1, QFormLayout::FieldRole, longeurint);

        hauteurint = new QDoubleSpinBox(widget);
        hauteurint->setObjectName(QString::fromUtf8("hauteurint"));
        hauteurint->setSingleStep(0.1);

        formLayout->setWidget(2, QFormLayout::FieldRole, hauteurint);


        verticalLayout_2->addWidget(widget);


        verticalLayout->addWidget(widgetCube);

        widgetCylindre = new QWidget(ParametrageModele);
        widgetCylindre->setObjectName(QString::fromUtf8("widgetCylindre"));
        verticalLayout_3 = new QVBoxLayout(widgetCylindre);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(widgetCylindre);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        widget_2 = new QWidget(widgetCylindre);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        formLayout_2 = new QFormLayout(widget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        labelcylindre = new QLabel(widget_2);
        labelcylindre->setObjectName(QString::fromUtf8("labelcylindre"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelcylindre);

        doubleSpinCylindre = new QDoubleSpinBox(widget_2);
        doubleSpinCylindre->setObjectName(QString::fromUtf8("doubleSpinCylindre"));
        doubleSpinCylindre->setSingleStep(0.1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, doubleSpinCylindre);

        labelhauteur = new QLabel(widget_2);
        labelhauteur->setObjectName(QString::fromUtf8("labelhauteur"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, labelhauteur);

        doubleSpinhauteur = new QDoubleSpinBox(widget_2);
        doubleSpinhauteur->setObjectName(QString::fromUtf8("doubleSpinhauteur"));
        doubleSpinhauteur->setSingleStep(0.1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, doubleSpinhauteur);


        verticalLayout_3->addWidget(widget_2);


        verticalLayout->addWidget(widgetCylindre);

        widget_3 = new QWidget(ParametrageModele);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        annulerparam = new QPushButton(widget_3);
        annulerparam->setObjectName(QString::fromUtf8("annulerparam"));

        horizontalLayout->addWidget(annulerparam);

        validerparam = new QPushButton(widget_3);
        validerparam->setObjectName(QString::fromUtf8("validerparam"));

        horizontalLayout->addWidget(validerparam);


        verticalLayout->addWidget(widget_3);


        retranslateUi(ParametrageModele);
        QObject::connect(annulerparam, SIGNAL(clicked()), ParametrageModele, SLOT(reject()));

        QMetaObject::connectSlotsByName(ParametrageModele);
    } // setupUi

    void retranslateUi(QDialog *ParametrageModele)
    {
        ParametrageModele->setWindowTitle(QApplication::translate("ParametrageModele", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ParametrageModele", "Cube", 0, QApplication::UnicodeUTF8));
        labellongueur->setText(QApplication::translate("ParametrageModele", "Longeur", 0, QApplication::UnicodeUTF8));
        labellongeur->setText(QApplication::translate("ParametrageModele", "Hauteur", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ParametrageModele", "Cylindre", 0, QApplication::UnicodeUTF8));
        labelcylindre->setText(QApplication::translate("ParametrageModele", "Rayon", 0, QApplication::UnicodeUTF8));
        labelhauteur->setText(QApplication::translate("ParametrageModele", "Hauteur", 0, QApplication::UnicodeUTF8));
        annulerparam->setText(QApplication::translate("ParametrageModele", "Annuler", 0, QApplication::UnicodeUTF8));
        validerparam->setText(QApplication::translate("ParametrageModele", "Valider", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ParametrageModele: public Ui_ParametrageModele {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETRAGEMODELE_H
