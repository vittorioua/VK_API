#include "widget.h"
#include "ui_widget.h"
#include <QUrlQuery>


using namespace QtJson;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this); //5111874
    ui->webView->load(QUrl("https://oauth.vk.com/authorize?client_id=5111874&scope=messages,friends,offline&redirect_uri=https://oauth.vk.com/blank.html&display=wap&response_type=token"));
    ui->label->clear();
    connect(ui->webView,SIGNAL(urlChanged(QUrl)),this,SLOT(checkurl(QUrl)));
    connect(this,SIGNAL(aut_suc()),this,SLOT(getfriend()));
    connect(this,SIGNAL(send_id(QString)),this,SLOT(getfriend2(QString)));
    connect(this,SIGNAL(send_id2(QString)),this,SLOT(getfriend3(QString)));
    connect(this,SIGNAL(send_idmut(QString,QString)),this,SLOT(getmutal(QString,QString)));
    connect(this,SIGNAL(friends_loaded(bool)),ui->lineEdit,SLOT(setEnabled(bool)));
    connect(this,SIGNAL(friends_loaded(bool)),ui->pushButton,SLOT(setEnabled(bool)));
    ui->label->hide();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::getfriend()
{
    ui->webView->hide();
    this->adjustSize();
    QUrl current("https://api.vk.com/method/friends.get?fields=first_name,last_name&access_token="+token);
    QByteArray answer=GET(current);
    if(answer.isEmpty()){
    qDebug()<< "Empty answer";
    exit(-1);
    }
    QVariantList list=parse(answer).toMap().value("response").toList();
    for(int i=0; i<list.size();i++){
        QVariantMap current=list[i].toMap();
        QString tem=current.value("first_name").toString()+" "+current.value("last_name").toString();
        users[tem]=current.value("uid").toString();
    }
    for(User::iterator itr=users.begin(); itr!=users.end(); itr++){
        ui->listWidget->addItem(itr.key());
    }
}
void Widget::checkurl(QUrl url){
    url= url.toString().replace("#","?");
    token= QUrlQuery(url).queryItemValue("access_token");      //url.queryItemValue("access_token");
    if(token.isEmpty()){
        return;
    }
    ui->label->setText("Success, token: "+token);
    emit aut_suc();
}

QByteArray Widget::GET(QUrl r)
{
    QNetworkAccessManager *maneger= new QNetworkAccessManager(this);
    QNetworkReply *reply=maneger->get(QNetworkRequest(r));
    QEventLoop wait;
    connect(maneger,SIGNAL(finished(QNetworkReply*)),&wait,SLOT(quit()));
    connect(maneger, SIGNAL(finished(QNetworkReply*)), maneger, SLOT(deleteLater()));
    QTimer::singleShot(10000,&wait,SLOT(quit()));
    wait.exec();
    QByteArray answer=reply->readAll();
    reply->deleteLater();
    return answer;
}

void Widget::getfriend2(QString iduser)
{
    QUrl current("https://api.vk.com/method/friends.get?user_id="+iduser+"&fields=first_name,last_name");
    QByteArray answer=GET(current);
    if(answer.isEmpty()){
    qDebug()<< "Empty answer";
    exit(-1);
    }
    QVariantList list=parse(answer).toMap().value("response").toList();
    for(int i=0; i<list.size();i++){
        QVariantMap current=list[i].toMap();
        QString tem=current.value("first_name").toString()+" "+current.value("last_name").toString();
        users2[tem]=current.value("uid").toString();

    }
    for(User::iterator itr=users2.begin(); itr!=users2.end(); itr++){
        ui->listWidget_2->addItem(itr.key());
    }
}
void Widget::getfriend3(QString iduser)
{
    QUrl current("https://api.vk.com/method/friends.get?user_id="+iduser+"&fields=first_name,last_name");

    QByteArray answer=GET(current);
    if(answer.isEmpty()){
    qDebug()<< "Empty answer";
    exit(-1);
    }
    QVariantList list=parse(answer).toMap().value("response").toList();
    for(int i=0; i<list.size();i++){
        QVariantMap current=list[i].toMap();
        QString tem=current.value("first_name").toString()+" "+current.value("last_name").toString();
        users3[tem]=current.value("uid").toString();

    }
    for(User::iterator itr=users3.begin(); itr!=users3.end(); itr++){

        ui->listWidget_3->addItem(itr.key());
    }
}
void Widget::getmutal(QString iduser,QString iduser2)
{
    QUrl current("https://api.vk.com/method/friends.getMutual?fields=first_name,last_name&source_uid="+iduser+"&target_uid="+iduser2+"&access_token="+token);
    QByteArray answer=GET(current);
    qDebug()<<answer;
    if(answer.isEmpty()){
    qDebug()<< "Empty answer";
    exit(-1);
    }
    QVariantList list=parse(answer).toMap().value("response").toList();
    qDebug()<<list.size();
    for(int i=0; i<list.size();i++){
        QString tem=list[i].toString();
        QUrl current2("https://api.vkontakte.ru/method/getProfiles?uid="+tem+"&access_token="+token);
        QByteArray answer=GET(current2);
        QVariantList list=parse(answer).toMap().value("response").toList();
        QVariantMap currentmap=list[0].toMap();
        QString tem2=currentmap.value("first_name").toString()+" "+currentmap.value("last_name").toString();
        users4[tem2]=currentmap.value("uid").toString();

    }
    qDebug()<<users4.size();
    for(User::iterator itr=users4.begin(); itr!=users4.end(); itr++){
        ui->listWidget_4->addItem(itr.key());
        if (!friends.contains(itr.key())){
        friends[itr.key()]=val;
        ui->listWidget_5->addItem(itr.key());
        val++;
        qDebug()<<friends[itr.key()];}
    }
}
void Widget::on_pushButton_clicked()
{
    users2.clear();
    ui->listWidget_2->clear();
    QString iduser;
    QString temp=ui->listWidget->currentItem()->text();
    ui->label_3->setText("Друзья: "+temp);
    qDebug()<<temp;
    iduser=users[temp];
    qDebug()<<iduser;
    emit send_id(iduser);
}

void Widget::on_pushButton_2_clicked()
{
    users3.clear();
    ui->listWidget_3->clear();
    QString iduser;
    QString temp=ui->listWidget_2->currentItem()->text();
    ui->label_4->setText("Друзья: "+temp);
    qDebug()<<temp;
    iduser=users2[temp];
    qDebug()<<iduser;
    emit send_id2(iduser);
}

void Widget::on_pushButton_3_clicked()
{
    users4.clear();
    ui->listWidget_4->clear();
    QString iduser;
    QString iduser2;
    QString temp=ui->listWidget->currentItem()->text();
    QString temp2=ui->listWidget_2->currentItem()->text();
    qDebug()<<temp;
    iduser=users[temp];
    qDebug()<<iduser;
    qDebug()<<temp2;
    iduser2=users2[temp2];
    qDebug()<<iduser2;
    emit send_idmut(iduser,iduser2);
}

void Widget::on_pushButton_4_clicked(bool checked)
{
       QString text = ui->lineEdit->text();
       QString id = users[ui->listWidget->currentItem()->text()];
       id.toInt();
       QUrl current("https://api.vk.com/method/messages.send?user_id="+id+"&message="+text+"&access_token="+token);

       QByteArray answer = GET(current);
       qDebug() << answer;
       if(answer.contains("response")){
           QMessageBox::information(this,tr("Error"),tr("Sended"),QMessageBox::Ok);
       }else{
           QMessageBox::warning(this,tr("All right"),tr("Not sended"),QMessageBox::Ok);
       }

}



void Widget::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString id = users[item->text()];
    QUrl current("https://api.vkontakte.ru/method/getProfiles?uid="+id+"&fields=photo_100&access_token="+token);

    QByteArray answer=GET(current);
    qDebug()<<answer;
    if(answer.isEmpty()){
    qDebug()<< "Empty answer";
    exit(-1);
    }
    QVariantList list=parse(answer).toMap().value("response").toList();
    QVariantMap currentmap=list[0].toMap();
    QString tem2=currentmap.value("photo_100").toString();
    users4[tem2]=currentmap.value("uid").toString();
    qDebug()<<tem2;
     ui->webView_2->load(QUrl(tem2));
}
