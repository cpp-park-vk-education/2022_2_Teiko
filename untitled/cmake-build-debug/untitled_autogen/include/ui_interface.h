/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_32;
    QLabel *label_34;
    QLabel *label_33;
    QLabel *label_35;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_7;
    QLabel *label_37;
    QLabel *label;
    QLabel *label_38;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_36;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QLabel *label_19;
    QLabel *label_17;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QLabel *label_30;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_18;
    QLabel *label_29;
    QPushButton *pushButton_11;
    QLabel *label_31;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLabel *label_15;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_27;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_28;
    QPushButton *pushButton_7;
    QLabel *label_26;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_8;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QLabel *label_25;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_23;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_24;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_11;
    QWidget *tab_4;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_14;
    QLabel *label_22;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QLabel *label_21;
    QSpacerItem *verticalSpacer_12;
    QLabel *label_10;
    QLabel *label_20;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_13;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1050, 721);
        MainWindow->setMinimumSize(QSize(1050, 650));
        MainWindow->setMaximumSize(QSize(1200, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"/*Vertical Scroll*/\n"
"QScrollBar:vertical{\n"
"	boder: none;\n"
"	background-color: rgb(79, 171, 234);\n"
"	width: 14px;\n"
"	margin: 15px 0 15px 0;\n"
"	boder-radius: 0px;\n"
"}\n"
"/*Hanle Bar Vertical*/\n"
"QScrollBar::handle:vertical{\n"
"	background-color: rgb(80, 80, 122);\n"
"	min-height: 30px;\n"
"	border-radius: 7px;\n"
"}\n"
"QScrollBar::handle:vertical:hover{\n"
"background-color: rgb(255, 0, 127);\n"
"}\n"
"QScrollBar::handle:vertical:pressed{\n"
"background-color: rgb(185, 0, 92);\n"
"}\n"
"/*BTN TOP Scrollbar*/\n"
"QScrollBar::sub-line:vertical{\n"
"border:none;\n"
"background-color: rgb(59, 59, 90);\n"
"height:15 px;\n"
"border-top-left-radius: 7px;\n"
"border-top-right-radius: 7px;\n"
"subcontrol-position: top;\n"
"subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover{\n"
"background-color: rgb(255, 0, 127);\n"
"}\n"
"QScrollBar::sub-line:vertical:pressed{\n"
"background-color: rgb(185, 0, 92);\n"
"}\n"
"/*BTN bottom Scrollbar*/\n"
"QScrollBar::add-line:vertical{\n"
"b"
                        "order:none;\n"
"background-color: rgb(59, 59, 90);\n"
"height:15 px;\n"
"border-bottom-left-radius: 7px;\n"
"border-bottom-right-radius: 7px;\n"
"subcontrol-position: bottom;\n"
"subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:vertical:hover{\n"
"background-color: rgb(255, 0, 127);\n"
"}\n"
"QScrollBar::add-line:vertical:pressed{\n"
"background-color: rgb(185, 0, 92);\n"
"}\n"
"/*Resset arrow*/\n"
"QScrollBar::up-arrow:vertical,QScrollBar::down-arrow:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar:vertical{\n"
"border:none;\n"
"background:rgb(56,56,86);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(200, 200));
        groupBox_3->setMaximumSize(QSize(200, 200));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_32 = new QLabel(groupBox_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        verticalLayout_2->addWidget(label_32);

        label_34 = new QLabel(groupBox_3);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        verticalLayout_2->addWidget(label_34);

        label_33 = new QLabel(groupBox_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        verticalLayout_2->addWidget(label_33);

        label_35 = new QLabel(groupBox_3);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        verticalLayout_2->addWidget(label_35);


        gridLayout_5->addWidget(groupBox_3, 2, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 60));

        verticalLayout_4->addWidget(label_5);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_7 = new QGridLayout(groupBox_4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_37 = new QLabel(groupBox_4);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout_7->addWidget(label_37, 0, 0, 1, 1);

        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_7->addWidget(label, 1, 0, 1, 1);

        label_38 = new QLabel(groupBox_4);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout_7->addWidget(label_38, 2, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_4);


        gridLayout_5->addLayout(verticalLayout_4, 0, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(200, 150));
        groupBox->setMaximumSize(QSize(200, 150));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 67, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 60, 67, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 90, 91, 17));
        label_36 = new QLabel(groupBox);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(10, 120, 67, 17));

        gridLayout_5->addWidget(groupBox, 1, 0, 1, 1);


        verticalLayout_7->addLayout(gridLayout_5);


        gridLayout_6->addLayout(verticalLayout_7, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_6);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(300, 0));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        scrollArea = new QScrollArea(groupBox_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 366, 1218));
        scrollAreaWidgetContents->setMinimumSize(QSize(300, 0));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 1200));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(frame);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        verticalLayout_6->addWidget(groupBox_2);


        gridLayout_6->addLayout(verticalLayout_6, 0, 1, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_5->addWidget(label_8);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(350, 350));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 4, 0, 1, 1);

        label_17 = new QLabel(tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_4, 3, 1, 1, 1);

        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_4->addWidget(pushButton_10, 0, 2, 1, 1);

        pushButton_12 = new QPushButton(tab);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout_4->addWidget(pushButton_12, 4, 2, 1, 1);

        label_30 = new QLabel(tab);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_4->addWidget(label_30, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 5, 1, 1, 1);

        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 2, 0, 1, 1);

        label_29 = new QLabel(tab);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_4->addWidget(label_29, 0, 1, 1, 1);

        pushButton_11 = new QPushButton(tab);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout_4->addWidget(pushButton_11, 2, 2, 1, 1);

        label_31 = new QLabel(tab);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_4->addWidget(label_31, 4, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_5, 1, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setFocusPolicy(Qt::WheelFocus);
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(tab_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_3->addWidget(pushButton_8, 2, 2, 1, 1);

        pushButton_9 = new QPushButton(tab_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout_3->addWidget(pushButton_9, 4, 2, 1, 1);

        label_27 = new QLabel(tab_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_3->addWidget(label_27, 2, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer_7, 3, 1, 1, 1);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 4, 0, 1, 1);

        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 0, 0, 1, 1);

        label_28 = new QLabel(tab_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_3->addWidget(label_28, 4, 1, 1, 1);

        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_3->addWidget(pushButton_7, 0, 2, 1, 1);

        label_26 = new QLabel(tab_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_3->addWidget(label_26, 0, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 5, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_8, 1, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_25 = new QLabel(tab_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 4, 1, 1, 1);

        pushButton_6 = new QPushButton(tab_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_2->addWidget(pushButton_6, 4, 2, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_10, 3, 1, 1, 1);

        label_23 = new QLabel(tab_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_2->addWidget(label_23, 0, 1, 1, 1);

        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 4, 0, 1, 1);

        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        label_24 = new QLabel(tab_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_2->addWidget(label_24, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 0, 2, 1, 1);

        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 2, 2, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_9, 6, 1, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_11, 1, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout = new QGridLayout(tab_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_14 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_14, 1, 1, 1, 1);

        label_22 = new QLabel(tab_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout->addWidget(label_22, 5, 1, 1, 1);

        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 5, 2, 1, 1);

        label_21 = new QLabel(tab_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout->addWidget(label_21, 2, 1, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_12, 6, 1, 1, 1);

        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 5, 0, 1, 1);

        label_20 = new QLabel(tab_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 0, 1, 1, 1);

        pushButton = new QPushButton(tab_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(tab_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 2, 1, 1);

        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_13, 3, 1, 1, 1);

        tabWidget->addTab(tab_4, QString());

        verticalLayout_5->addWidget(tabWidget);


        gridLayout_6->addLayout(verticalLayout_5, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1050, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(change_metrics()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), MainWindow, SLOT(change_metrics()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(change_metrics()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(change_metrics()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(change_metrics()));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\276\321\217 \320\241\320\265\320\274\321\214\321\217", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\320\257", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\320\277\320\260", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\274\320\260", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\264", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\276\320\272 #1", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\277 \320\272\320\276\320\274\320\260\320\275\320\264", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\274\320\260\320\275\320\264\320\260 1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\274\320\260\320\275\320\264\320\260 2", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\274\320\260\320\275\320\264\320\260 3", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\321\200\320\270\320\272\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\273\320\276\320\264", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\245\320\276\320\273\320\276\320\264", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\262\320\273\320\265\321\207\320\265\320\275\320\270\321\217", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214\320\263\320\270", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "IT'S FINANCE", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\276\321\201\321\202\320\270", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\263\320\260\320\267\320\270\320\275", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\223\320\224\320\227", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\232\320\275\320\270\320\263\320\260", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "50.000 \342\202\275", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201\321\213", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "200 \342\202\275", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "3.500 \342\202\275", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\243\321\207\321\221\320\261\320\260", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\255\320\275\320\265\321\200\320\263\320\265\321\202\320\270\320\272", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "80 \342\202\275", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\236\320\262\320\276\321\211\320\270", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\320\277\321\201\321\213", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "100 \342\202\275", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "65 \342\202\275", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\225\320\264\320\260", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "500 \342\202\275", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "20.000 \342\202\275", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\277\320\272\320\260", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\227\320\270\320\274\320\275\321\217\321\217 \320\272\321\203\321\200\321\202\320\272\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\320\273\321\214\321\202\320\276", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "15.000 \342\202\275", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\236\320\264\320\265\320\266\320\264\320\260", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "1.000 \342\202\275", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "10.000 \342\202\275", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\234\321\213\321\210\320\272\320\260", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "50.000 \342\202\275", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\321\203\321\202\320\261\321\203\320\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\270\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
