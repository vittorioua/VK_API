#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QUrl>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QTimer>
#include <QEventLoop>
#include "json.h"
#include <QMap>
#include <QMessageBox>
#include <QListWidgetItem>
typedef QMap<QString,QString> User;
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
signals:
    void aut_suc();
    void send_id(QString);
    void send_id2(QString);
    void send_idmut(QString,QString);
    void friends_loaded(bool);
private:
    Ui::Widget *ui;
    QString token;
    QByteArray GET(QUrl r);
    User users;
    User users2;
    User users3;
    User users4;
    QMap<QString,int> friends;
    int val=0;
public slots:
    void getmutal(QString,QString);
    void getfriend3(QString);
    void getfriend2(QString);
    void getfriend();
    void checkurl(QUrl url);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked(bool checked);
    void on_listWidget_itemClicked(QListWidgetItem *item);
};

#endif // WIDGET_H
