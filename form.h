#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <iostream>
#include <QTimer>
#include <QPen>
#include <QPainter>
#include <QFileDialog>
#include <QTime>
#include <QImage>
#include <opencv2/opencv.hpp>
#include <QPolygon>
#include <QMap>
#include <QBitmap>
//#include <form1.h>
#include <QStandardItemModel>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QDebug>

using namespace cv;

using namespace std;


namespace Ui {
class Form;
}

class Form1;
class Form : public QWidget
{
    Q_OBJECT


public:
    explicit Form(QWidget *parent = 0);
    ~Form();
    QImage qimg;
    QPixmap pixmap1;
    void show_frame(Mat &img);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void showtime();
    void on_pushButton_3_clicked();


    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_13_clicked();

    void on_tableWidget_cellPressed(int row, int column);

private:
    Ui::Form *ui;
    int yellow = 255;
    int red = 0 ;
    bool yel_up = false;
    bool red_up = true;
    // Form1 form1;
    Form1 *form1;
    bool hazf = false;
    int tabel_num  = 0;




};

#endif // FORM_H
