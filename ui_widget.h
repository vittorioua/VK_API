/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QListWidget *listWidget_2;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QListWidget *listWidget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QListWidget *listWidget_4;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QListWidget *listWidget_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QWebView *webView_2;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QWebView *webView;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(777, 421);
        verticalLayout_7 = new QVBoxLayout(Widget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_5->addWidget(label_2);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout_5->addWidget(listWidget);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_5->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);

        listWidget_2 = new QListWidget(Widget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));

        verticalLayout_4->addWidget(listWidget_2);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        listWidget_3 = new QListWidget(Widget);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout_3->addWidget(listWidget_3);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        listWidget_4 = new QListWidget(Widget);
        listWidget_4->setObjectName(QStringLiteral("listWidget_4"));
        listWidget_4->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout_2->addWidget(listWidget_4);

        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        listWidget_5 = new QListWidget(Widget);
        listWidget_5->setObjectName(QStringLiteral("listWidget_5"));
        listWidget_5->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listWidget_5);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_6->addLayout(horizontalLayout);

        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_6->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        webView_2 = new QWebView(Widget);
        webView_2->setObjectName(QStringLiteral("webView_2"));
        webView_2->setMinimumSize(QSize(100, 100));
        webView_2->setMaximumSize(QSize(100, 100));
        webView_2->setUrl(QUrl(QStringLiteral("about:blank")));

        horizontalLayout_2->addWidget(webView_2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_8->addWidget(lineEdit);

        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_8->addWidget(pushButton_4);


        horizontalLayout_2->addLayout(verticalLayout_8);


        verticalLayout_6->addLayout(horizontalLayout_2);


        verticalLayout_7->addLayout(verticalLayout_6);

        webView = new QWebView(Widget);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        verticalLayout_7->addWidget(webView);

        webView->raise();
        label->raise();
        pushButton->raise();
        listWidget->raise();
        listWidget_2->raise();
        pushButton_2->raise();
        listWidget_3->raise();
        listWidget_4->raise();
        pushButton_3->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        listWidget_5->raise();
        label_6->raise();
        listWidget->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label_2->setText(QApplication::translate("Widget", "\320\224\321\200\321\203\320\267\321\214\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", 0));
        pushButton->setText(QApplication::translate("Widget", "Get next", 0));
        label_3->setText(QApplication::translate("Widget", "\320\224\321\200\321\203\320\267\321\214\321\217:", 0));
        pushButton_2->setText(QApplication::translate("Widget", "Get next", 0));
        label_4->setText(QApplication::translate("Widget", "\320\224\321\200\321\203\320\267\321\214\321\217:", 0));
        label_5->setText(QApplication::translate("Widget", "\320\236\320\261\321\211\320\270\320\265 \320\264\321\200\321\203\320\267\321\214\321\217 \320\264\320\262\321\203\321\205 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271:", 0));
        pushButton_3->setText(QApplication::translate("Widget", "Get Mutal", 0));
        label_6->setText(QApplication::translate("Widget", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\262\321\201\320\265\321\205 \321\201\320\276\320\262\320\277\320\260\320\262\321\210\320\270\321\205:", 0));
        label->setText(QApplication::translate("Widget", "TextLabel", 0));
        pushButton_4->setText(QApplication::translate("Widget", "Send message", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
