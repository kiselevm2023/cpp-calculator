/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *l_memory;
    QLabel *l_result;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QPushButton *btn_5;
    QPushButton *btn_9;
    QPushButton *btn_1;
    QPushButton *btn_del;
    QPushButton *btn_8;
    QPushButton *btn_2;
    QPushButton *btn_7;
    QPushButton *btn_ms;
    QPushButton *btn_mc;
    QPushButton *btn_mr;
    QPushButton *btn_0;
    QPushButton *btn_plus_minus;
    QPushButton *btn_c;
    QPushButton *btn_6;
    QPushButton *btn_3;
    QPushButton *tb_extra;
    QPushButton *btn_4;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_pow;
    QPushButton *btn_div;
    QPushButton *btn_mul;
    QPushButton *btn_sub;
    QPushButton *btn_add;
    QPushButton *btn_res;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *cmb_controller;
    QLabel *l_formula;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(283, 436);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        l_memory = new QLabel(centralwidget);
        l_memory->setObjectName("l_memory");

        horizontalLayout->addWidget(l_memory);

        l_result = new QLabel(centralwidget);
        l_result->setObjectName("l_result");

        horizontalLayout->addWidget(l_result, 0, Qt::AlignmentFlag::AlignRight);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        btn_5 = new QPushButton(centralwidget);
        btn_5->setObjectName("btn_5");

        gridLayout_2->addWidget(btn_5, 3, 1, 1, 1);

        btn_9 = new QPushButton(centralwidget);
        btn_9->setObjectName("btn_9");

        gridLayout_2->addWidget(btn_9, 2, 2, 1, 1);

        btn_1 = new QPushButton(centralwidget);
        btn_1->setObjectName("btn_1");

        gridLayout_2->addWidget(btn_1, 4, 0, 1, 1);

        btn_del = new QPushButton(centralwidget);
        btn_del->setObjectName("btn_del");

        gridLayout_2->addWidget(btn_del, 5, 2, 1, 1);

        btn_8 = new QPushButton(centralwidget);
        btn_8->setObjectName("btn_8");

        gridLayout_2->addWidget(btn_8, 2, 1, 1, 1);

        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName("btn_2");

        gridLayout_2->addWidget(btn_2, 4, 1, 1, 1);

        btn_7 = new QPushButton(centralwidget);
        btn_7->setObjectName("btn_7");

        gridLayout_2->addWidget(btn_7, 2, 0, 1, 1);

        btn_ms = new QPushButton(centralwidget);
        btn_ms->setObjectName("btn_ms");

        gridLayout_2->addWidget(btn_ms, 0, 2, 1, 1);

        btn_mc = new QPushButton(centralwidget);
        btn_mc->setObjectName("btn_mc");

        gridLayout_2->addWidget(btn_mc, 0, 0, 1, 1);

        btn_mr = new QPushButton(centralwidget);
        btn_mr->setObjectName("btn_mr");

        gridLayout_2->addWidget(btn_mr, 0, 1, 1, 1);

        btn_0 = new QPushButton(centralwidget);
        btn_0->setObjectName("btn_0");

        gridLayout_2->addWidget(btn_0, 5, 1, 1, 1);

        btn_plus_minus = new QPushButton(centralwidget);
        btn_plus_minus->setObjectName("btn_plus_minus");

        gridLayout_2->addWidget(btn_plus_minus, 1, 2, 1, 1);

        btn_c = new QPushButton(centralwidget);
        btn_c->setObjectName("btn_c");

        gridLayout_2->addWidget(btn_c, 1, 0, 1, 2);

        btn_6 = new QPushButton(centralwidget);
        btn_6->setObjectName("btn_6");

        gridLayout_2->addWidget(btn_6, 3, 2, 1, 1);

        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName("btn_3");

        gridLayout_2->addWidget(btn_3, 4, 2, 1, 1);

        tb_extra = new QPushButton(centralwidget);
        tb_extra->setObjectName("tb_extra");

        gridLayout_2->addWidget(tb_extra, 5, 0, 1, 1);

        btn_4 = new QPushButton(centralwidget);
        btn_4->setObjectName("btn_4");

        gridLayout_2->addWidget(btn_4, 3, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        btn_pow = new QPushButton(centralwidget);
        btn_pow->setObjectName("btn_pow");

        verticalLayout->addWidget(btn_pow);

        btn_div = new QPushButton(centralwidget);
        btn_div->setObjectName("btn_div");

        verticalLayout->addWidget(btn_div);

        btn_mul = new QPushButton(centralwidget);
        btn_mul->setObjectName("btn_mul");

        verticalLayout->addWidget(btn_mul);

        btn_sub = new QPushButton(centralwidget);
        btn_sub->setObjectName("btn_sub");

        verticalLayout->addWidget(btn_sub);

        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName("btn_add");

        verticalLayout->addWidget(btn_add);

        btn_res = new QPushButton(centralwidget);
        btn_res->setObjectName("btn_res");

        verticalLayout->addWidget(btn_res);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        cmb_controller = new QComboBox(centralwidget);
        cmb_controller->setObjectName("cmb_controller");

        horizontalLayout_3->addWidget(cmb_controller, 0, Qt::AlignmentFlag::AlignLeft);

        l_formula = new QLabel(centralwidget);
        l_formula->setObjectName("l_formula");

        horizontalLayout_3->addWidget(l_formula, 0, Qt::AlignmentFlag::AlignRight);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        l_memory->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        l_result->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_del->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_ms->setText(QCoreApplication::translate("MainWindow", "MS", nullptr));
        btn_mc->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        btn_mr->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_plus_minus->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        btn_c->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        tb_extra->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_pow->setText(QCoreApplication::translate("MainWindow", "x\312\270", nullptr));
        btn_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        btn_mul->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        btn_sub->setText(QCoreApplication::translate("MainWindow", "\342\210\222", nullptr));
        btn_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_res->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        l_formula->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
