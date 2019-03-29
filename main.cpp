#include <QCoreApplication>
#include <QApplication>
#include <form.h>
#include <opencv2/opencv.hpp>
using namespace cv;

VideoCapture cap;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    cap.open(0);
    Mat frame;
    Form f;
    f.show();
    while(1)
    {
        QCoreApplication::processEvents(QEventLoop::AllEvents, 10);
        cap.read(frame);
        f.show_frame(frame);
    }
    return a.exec();

}
