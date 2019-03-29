#include "form.h"
#include "ui_form.h"
#include <form1.h>


Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{

    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(0);
    QPixmap bkgnd("/home/piltan/Desktop/backs/carbon-fiber-free-vector.jpg");
    bkgnd = bkgnd.scaled(this->size());
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    // ui->pushButton->setFixedHeight(200);
    //  ui->pushButton->setFixedWidth(200);
    QRect rect(0,0,100,100);
    //qDebug() << rect.size();
    // qDebug() << ui->pushButton->size();
    QRegion region(rect, QRegion::Ellipse);
    // qDebug() << region.boundingRect().size();
    //  ui->pushButton->setMask(region);
    // ui->label_3->setMask(region);
    ui->label_3->setStyleSheet("QLabel{ background-color: rgb(255, 24, 16);border-style: solid;border-color: yellow;border-width: 5px;border-radius: 65px;}");
    ui->label_4->setStyleSheet("QLabel{ background-color: rgb(255, 24, 16);border-style: solid;border-color: yellow;border-width: 5px;border-radius: 65px;}");
    QTimer *timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Form::showtime);
    timer->start(1000);
    ui->pushButton_2->setStyleSheet("QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0  rgb(100, 0, 0), stop: 1 rgb(255, 255, 255));border-style: solid;border-color: black;border-width: 2px;border-radius: 20px}QPushButton{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0  rgb(255, 0, 0), stop: 1 rgb(255, 255,255));border-style: solid;border-color: black;border-width: 2px;border-radius: 20px;}");
    yel_up = false;
    red_up = true;

    QBitmap map(200,200),map2(200,200),map4(200,200),map6(200,200),map8(200,200),map10(200,200);
    QBitmap map1(200,200), map3(200,200),map5(200,200),map7(200,200),map9(200,200),map11(200,200);//my pixmap is 100x100

    map.fill(Qt::color0);
    QPainter painter( &map );
    painter.setBrush(Qt::color1);
    painter.drawEllipse(QPoint(100,100),100,100);
    ui->pushButton_6->setMask(map);

    map1.fill(Qt::color0);
    QPainter painter1( &map1 );
    painter1.setBrush(Qt::color1);
    painter1.drawEllipse(QPoint(0,100),100,100);
    ui->pushButton_5->setMask(map1);

    map2.fill(Qt::color0);
    QPainter painter2( &map2 );
    painter2.setBrush(Qt::color1);
    painter2.drawEllipse(QPoint(100,100),100,100);
    ui->pushButton_9->setMask(map2);

    map3.fill(Qt::color0);
    QPainter painter3( &map3 );
    painter3.setBrush(Qt::color1);
    painter3.drawEllipse(QPoint(0,100),100,100);
    ui->pushButton_10->setMask(map3);

    map4.fill(Qt::color0);
    QPainter painter4( &map4 );
    painter4.setBrush(Qt::color1);
    painter4.drawEllipse(QPoint(100,100),100,100);
    ui->pushButton_11->setMask(map4);

    map5.fill(Qt::color0);
    QPainter painter5( &map5 );
    painter5.setBrush(Qt::color1);
    painter5.drawEllipse(QPoint(0,100),100,100);
    ui->pushButton_12->setMask(map5);

    map6.fill(Qt::color0);
    QPainter painter6( &map6 );
    painter6.setBrush(Qt::color1);
    painter6.drawEllipse(QPoint(100,100),100,100);
    ui->pushButton_25->setMask(map6);

    map7.fill(Qt::color0);
    QPainter painter7( &map7 );
    painter7.setBrush(Qt::color1);
    painter7.drawEllipse(QPoint(0,100),100,100);
    ui->pushButton_28->setMask(map7);

    map8.fill(Qt::color0);
    QPainter painter8( &map8 );
    painter8.setBrush(Qt::color1);
    painter8.drawEllipse(QPoint(100,100),100,100);
    ui->pushButton_26->setMask(map8);

    map9.fill(Qt::color0);
    QPainter painter9( &map9 );
    painter9.setBrush(Qt::color1);
    painter9.drawEllipse(QPoint(0,100),100,100);
    ui->pushButton_30->setMask(map9);

    map11.fill(Qt::color0);
    QPainter painter11( &map11 );
    painter11.setBrush(Qt::color1);
    painter11.drawEllipse(QPoint(100,100),100,100);
    ui->pushButton_27->setMask(map11);

    map10.fill(Qt::color0);
    QPainter painter10( &map10 );
    painter10.setBrush(Qt::color1);
    painter10.drawEllipse(QPoint(0,100),100,100);
    ui->pushButton_29->setMask(map10);

}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()//takhliye
{

    // store.dotransfer(store.transfer);

    cout<<"salam"<<endl;



}


void Form::on_pushButton_2_clicked() //film
{
    ui->pushButton_2->setStyleSheet("QPushButton{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0  rgb(0, 255, 0), stop: 1 rgb(0, 255,0));border-style: solid;border-color: black;border-width: 2px;border-radius: 20px;}");
    ui->pushButton_3->setStyleSheet("QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0  rgb(100, 0, 0), stop: 1 rgb(255, 255, 255));border-style: solid;border-color: black;border-width: 2px;border-radius: 20px}QPushButton{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0  rgb(255, 0, 0), stop: 1 rgb(255, 255,255));border-style: solid;border-color: black;border-width: 2px;border-radius: 20px;}");

}

void Form::showtime()
{

}

void Form::on_pushButton_3_clicked() //aks
{
    ui->pushButton_3->setStyleSheet("QPushButton{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0  rgb(0, 255, 0), stop: 1 rgb(0, 255,0));border-style: solid;border-color: black;border-width: 2px;border-radius: 20px;}");
    ui->pushButton_2->setStyleSheet("QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0  rgb(100, 0, 0), stop: 1 rgb(255, 255, 255));border-style: solid;border-color: black;border-width: 2px;border-radius: 20px}QPushButton{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0  rgb(255, 0, 0), stop: 1 rgb(255, 255,255));border-style: solid;border-color: black;border-width: 2px;border-radius: 20px;}");

}


void Form::show_frame(Mat &img)
{
    ui->label->setStyleSheet("QLabel{background-color: rgb(0, 0, 0);border-style: solid;border-color: white;border-width: 5px;border-radius: 65px; }");
    Mat im;
    cvtColor(img,im,COLOR_BGR2RGB);
    cv::resize(im,im,Size(381,401));

    if (yel_up)
    {
        yellow+=30;
        if(yellow > 225)
        {
            yel_up = false;
            // yellow = 255;

        }
    }

    else
    {
        yellow-=30;
        if(yellow < 30)
        {
            yel_up = true;
            // yellow = 0;

        }
    }

    if (red_up)
    {
        red+=30;
        if(red > 225)
        {   //red = 255;
            red_up = false;
        }
    }

    else
    {
        red-=30;
        if(red < 30)
        {
            red_up = true;
            // red = 0;
        }
    }
    QString border_color = QString::number(red)+","+QString::number(yellow)+","+QString::number(0);
    ui->label_3->setStyleSheet("QLabel{ background-color: rgb(24, 255, 16);border-style: solid;border-color:rgb("+border_color+");border-width: 5px;border-radius: 65px;}");
    QImage qimg = QImage(im.data,im.cols,im.rows,im.step,QImage::Format_RGB888);
    QPixmap pixmap1 =QPixmap::fromImage(qimg);
    QBitmap map(381,401);     //my pixmap is 100x100
    map.fill(Qt::color0);
    QPainter painter( &map );
    painter.setBrush(Qt::color1);
    painter.drawRoundRect(0,0,381,401,32,32);
    pixmap1.setMask(map);
    ui->label->setPixmap(pixmap1);
    ui->label->setStyleSheet("QLabel{background-color: rgb(0, 0, 0);border-style: solid;border-color: white;border-width: 5px;border-radius: 65px; }");
    ui->label_2->setPixmap(pixmap1);
}


void Form::on_pushButton_4_clicked() //تنظیمات دوربین
{

    ui->tabWidget->setCurrentIndex(1);


}

void Form::on_pushButton_7_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}

void Form::on_pushButton_8_clicked() //hazfe tartibi
{
    hazf =!hazf;
    if (hazf)
    {
        ui->pushButton_8->setStyleSheet("QPushButton{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0  rgb(0, 255, 0), stop: 1 rgb(0, 255,0));border-style: solid;border-color: black;border-width: 2px;border-radius: 20px;}QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0  rgb(0, 100, 0), stop: 1 rgb(0, 100, 0));border-style: solid;border-color: black;border-width: 2px;border-radius: 20px;}");
        cout<<"yes"<<endl;
    }


    else
    {
        ui->pushButton_8->setStyleSheet("QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0  rgb(100, 0, 0), stop: 1 rgb(255, 255, 255));border-style: solid;border-color: black;border-width: 2px;border-radius: 20px}QPushButton{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0  rgb(255, 0, 0), stop: 1 rgb(255, 255,255));border-style: solid;border-color: black;border-width: 2px;border-radius: 20px;}");
        cout<<"no"<<endl;
    }

}

//
