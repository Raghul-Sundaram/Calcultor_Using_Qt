/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ac_btn;
    QPushButton *del_btn;
    QPushButton *btn_11;
    QPushButton *divbtn;
    QWidget *number_widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *mulbtn;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *subbtn;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *addbtn;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_0;
    QPushButton *dot_btn;
    QPushButton *res_btn;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuEdit;
    QMenu *menuSettings;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculatorClass)
    {
        if (CalculatorClass->objectName().isEmpty())
            CalculatorClass->setObjectName(QString::fromUtf8("CalculatorClass"));
        CalculatorClass->resize(636, 733);
        CalculatorClass->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        actionNew = new QAction(CalculatorClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(CalculatorClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(CalculatorClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(CalculatorClass);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        centralWidget = new QWidget(CalculatorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 130, 361, 71));
        lineEdit->setStyleSheet(QString::fromUtf8("border:2px solid black;\n"
"font-size:20px;"));
        lineEdit->setReadOnly(false);
        lineEdit->setClearButtonEnabled(false);
        widget_6 = new QWidget(centralWidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(110, 200, 361, 352));
        widget_6->setStyleSheet(QString::fromUtf8("border:2px solid black;"));
        verticalLayout = new QVBoxLayout(widget_6);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(widget_6);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setCursor(QCursor(Qt::PointingHandCursor));
        widget->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ac_btn = new QPushButton(widget);
        ac_btn->setObjectName(QString::fromUtf8("ac_btn"));
        ac_btn->setStyleSheet(QString::fromUtf8("font-size:30px;\n"
"color:orange;\n"
"border:1px solid black;"));

        horizontalLayout->addWidget(ac_btn);

        del_btn = new QPushButton(widget);
        del_btn->setObjectName(QString::fromUtf8("del_btn"));
        del_btn->setStyleSheet(QString::fromUtf8("font-size:30px;\n"
"color:orange;\n"
"border:1px solid black;"));

        horizontalLayout->addWidget(del_btn);

        btn_11 = new QPushButton(widget);
        btn_11->setObjectName(QString::fromUtf8("btn_11"));
        btn_11->setStyleSheet(QString::fromUtf8("font-size:30px;\n"
"color:orange;\n"
"border:1px solid black;"));

        horizontalLayout->addWidget(btn_11);

        divbtn = new QPushButton(widget);
        divbtn->setObjectName(QString::fromUtf8("divbtn"));
        divbtn->setStyleSheet(QString::fromUtf8("font-size:30px;\n"
"color:orange;\n"
"border:1px solid black;"));

        horizontalLayout->addWidget(divbtn);


        verticalLayout->addWidget(widget);

        number_widget = new QWidget(widget_6);
        number_widget->setObjectName(QString::fromUtf8("number_widget"));
        number_widget->setCursor(QCursor(Qt::PointingHandCursor));
        number_widget->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_2 = new QHBoxLayout(number_widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_7 = new QPushButton(number_widget);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        btn_7->setStyleSheet(QString::fromUtf8("font-size:30px;"));

        horizontalLayout_2->addWidget(btn_7);

        btn_8 = new QPushButton(number_widget);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        btn_8->setStyleSheet(QString::fromUtf8("font-size:30px;"));

        horizontalLayout_2->addWidget(btn_8);

        btn_9 = new QPushButton(number_widget);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        btn_9->setStyleSheet(QString::fromUtf8("font-size:30px;"));

        horizontalLayout_2->addWidget(btn_9);

        mulbtn = new QPushButton(number_widget);
        mulbtn->setObjectName(QString::fromUtf8("mulbtn"));
        mulbtn->setStyleSheet(QString::fromUtf8("font-size:30px;\n"
"color:orange;\n"
"border:1px solid black;"));

        horizontalLayout_2->addWidget(mulbtn);


        verticalLayout->addWidget(number_widget);

        widget_3 = new QWidget(widget_6);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setCursor(QCursor(Qt::PointingHandCursor));
        widget_3->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_4 = new QPushButton(widget_3);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setStyleSheet(QString::fromUtf8("font-size:30px;"));

        horizontalLayout_3->addWidget(btn_4);

        btn_5 = new QPushButton(widget_3);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setStyleSheet(QString::fromUtf8("font-size:30px;"));

        horizontalLayout_3->addWidget(btn_5);

        btn_6 = new QPushButton(widget_3);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setStyleSheet(QString::fromUtf8("font-size:30px;"));

        horizontalLayout_3->addWidget(btn_6);

        subbtn = new QPushButton(widget_3);
        subbtn->setObjectName(QString::fromUtf8("subbtn"));
        subbtn->setStyleSheet(QString::fromUtf8("font-size:30px;\n"
"color:orange;\n"
"border:1px solid black;"));

        horizontalLayout_3->addWidget(subbtn);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setCursor(QCursor(Qt::PointingHandCursor));
        widget_4->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_1 = new QPushButton(widget_4);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setStyleSheet(QString::fromUtf8("font-size:30px;"));

        horizontalLayout_4->addWidget(btn_1);

        btn_2 = new QPushButton(widget_4);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setStyleSheet(QString::fromUtf8("font-size:30px;"));

        horizontalLayout_4->addWidget(btn_2);

        btn_3 = new QPushButton(widget_4);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setStyleSheet(QString::fromUtf8("font-size:30px;"));

        horizontalLayout_4->addWidget(btn_3);

        addbtn = new QPushButton(widget_4);
        addbtn->setObjectName(QString::fromUtf8("addbtn"));
        addbtn->setStyleSheet(QString::fromUtf8("font-size:30px;\n"
"color:orange;\n"
"border:1px solid black;"));

        horizontalLayout_4->addWidget(addbtn);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setCursor(QCursor(Qt::PointingHandCursor));
        widget_5->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btn_0 = new QPushButton(widget_5);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        btn_0->setStyleSheet(QString::fromUtf8("font-size:30px;"));

        horizontalLayout_5->addWidget(btn_0);

        dot_btn = new QPushButton(widget_5);
        dot_btn->setObjectName(QString::fromUtf8("dot_btn"));
        dot_btn->setStyleSheet(QString::fromUtf8("font-size:30px;"));

        horizontalLayout_5->addWidget(dot_btn);

        res_btn = new QPushButton(widget_5);
        res_btn->setObjectName(QString::fromUtf8("res_btn"));
        res_btn->setStyleSheet(QString::fromUtf8("font-size:30px;\n"
"color:orange;\n"
"border:1px solid black;"));

        horizontalLayout_5->addWidget(res_btn);


        verticalLayout->addWidget(widget_5);

        CalculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculatorClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 636, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        CalculatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CalculatorClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CalculatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CalculatorClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CalculatorClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);

        retranslateUi(CalculatorClass);

        QMetaObject::connectSlotsByName(CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorClass)
    {
        CalculatorClass->setWindowTitle(QApplication::translate("CalculatorClass", "Calculator", nullptr));
        actionNew->setText(QApplication::translate("CalculatorClass", "New", nullptr));
        actionOpen->setText(QApplication::translate("CalculatorClass", "Open", nullptr));
        actionSave->setText(QApplication::translate("CalculatorClass", "Save", nullptr));
        actionSave_as->setText(QApplication::translate("CalculatorClass", "Save as", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("CalculatorClass", "0", nullptr));
        ac_btn->setText(QApplication::translate("CalculatorClass", "AC", nullptr));
        del_btn->setText(QApplication::translate("CalculatorClass", "DEL", nullptr));
        btn_11->setText(QApplication::translate("CalculatorClass", "%", nullptr));
        divbtn->setText(QApplication::translate("CalculatorClass", "/", nullptr));
        btn_7->setText(QApplication::translate("CalculatorClass", "7", nullptr));
        btn_8->setText(QApplication::translate("CalculatorClass", "8", nullptr));
        btn_9->setText(QApplication::translate("CalculatorClass", "9", nullptr));
        mulbtn->setText(QApplication::translate("CalculatorClass", "*", nullptr));
        btn_4->setText(QApplication::translate("CalculatorClass", "4", nullptr));
        btn_5->setText(QApplication::translate("CalculatorClass", "5", nullptr));
        btn_6->setText(QApplication::translate("CalculatorClass", "6", nullptr));
        subbtn->setText(QApplication::translate("CalculatorClass", "-", nullptr));
        btn_1->setText(QApplication::translate("CalculatorClass", "1", nullptr));
        btn_2->setText(QApplication::translate("CalculatorClass", "2", nullptr));
        btn_3->setText(QApplication::translate("CalculatorClass", "3", nullptr));
        addbtn->setText(QApplication::translate("CalculatorClass", "+", nullptr));
        btn_0->setText(QApplication::translate("CalculatorClass", "0", nullptr));
        dot_btn->setText(QApplication::translate("CalculatorClass", ".", nullptr));
        res_btn->setText(QApplication::translate("CalculatorClass", "=", nullptr));
        menuFile->setTitle(QApplication::translate("CalculatorClass", "File", nullptr));
        menuView->setTitle(QApplication::translate("CalculatorClass", "View", nullptr));
        menuEdit->setTitle(QApplication::translate("CalculatorClass", "Edit", nullptr));
        menuSettings->setTitle(QApplication::translate("CalculatorClass", "Settings", nullptr));
        menuHelp->setTitle(QApplication::translate("CalculatorClass", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorClass: public Ui_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
