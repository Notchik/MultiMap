#include "defaultwindow.h"
#include "ui_defaultwindow.h"
#include <QDialog>
#include <QTextEdit>
#include <QFile>
#include <QDesktopServices>

DefaultWindow::DefaultWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DefaultWindow)
{
    ui->setupUi(this);

    this->setWindowIcon(QPixmap(":/Background/Source/WindowIcon.png"));
}

DefaultWindow::~DefaultWindow()
{
    delete ui;
}

void DefaultWindow::Minsk1Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Проспект_Победителей_(Минск)";
    this->place = "TextInfo/Minsk/Minsk1.txt";
    showWindow();
}

void DefaultWindow::Minsk2Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Улица_Притыцкого";
    this->place = "TextInfo/Minsk/Minsk2.txt";
    showWindow();
}

void DefaultWindow::Minsk3Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Минск";
    this->place = "TextInfo/Minsk/Minsk3.txt";
    showWindow();
}

void DefaultWindow::Minsk4Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Ленинский_район_(Минск)";
    this->place = "TextInfo/Minsk/Minsk4.txt";
    showWindow();
}

void DefaultWindow::Minsk5Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Чижовское_водохранилище";
    this->place = "TextInfo/Minsk/Minsk5.txt";
    showWindow();
}

void DefaultWindow::Minsk6Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Партизанский_проспект_(Минск)";
    this->place = "TextInfo/Minsk/Minsk6.txt";
    showWindow();
}

void DefaultWindow::Minsk7Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Проспект_Дзержинского_(Минск)";
    this->place = "TextInfo/Minsk/Minsk7.txt";
    showWindow();
}

void DefaultWindow::Minsk8Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Магистраль_М9";
    this->place = "TextInfo/Minsk/Minsk8.txt";
    showWindow();
}

void DefaultWindow::Minsk9Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Советский_район_(Минск)";
    this->place = "TextInfo/Minsk/Minsk9.txt";
    showWindow();
}

void DefaultWindow::Minsk10Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Первомайский_район_(Минск)";
    this->place = "TextInfo/Minsk/Minsk10.txt";
    showWindow();
}

void DefaultWindow::Minsk11Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Московский_район_(Минск)";
    this->place = "TextInfo/Minsk/Minsk11.txt";
    showWindow();
}

void DefaultWindow::Minsk12Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Центральный_район_(Минск)";
    this->place = "TextInfo/Minsk/Minsk12.txt";
    showWindow();
}

void DefaultWindow::Minsk13Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Октябрьский_район_(Минск)";
    this->place = "TextInfo/Minsk/Minsk13.txt";
    showWindow();
}

void DefaultWindow::on_pushButton_6_clicked()
{
    QDialog *Minsk = new QDialog();
    Minsk->setWindowTitle("Минск");
    QPushButton *Button1 = new QPushButton(Minsk); //Пр-т победителей
    Button1->setGeometry(320,225,20,20);
    Button1->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button2 = new QPushButton(Minsk); //Ул. Притыцкого
    Button2->setGeometry(280,360,20,20);
    Button2->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button3 = new QPushButton(Minsk); //Минск
    Button3->setGeometry(520,390,20,20);
    Button3->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button4 = new QPushButton(Minsk); //ленинский район
    Button4->setGeometry(620,550,20,20);
    Button4->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button5 = new QPushButton(Minsk); //Чижовское водохран.
    Button5->setGeometry(700,640,20,20);
    Button5->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button6 = new QPushButton(Minsk); //Партизанский пр-т
    Button6->setGeometry(700,510,20,20);
    Button6->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button7 = new QPushButton(Minsk); //пр-т Дзержинского
    Button7->setGeometry(290,590,20,20);
    Button7->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button8 = new QPushButton(Minsk); //МКАД
    Button8->setGeometry(310,80,20,20);
    Button8->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button9 = new QPushButton(Minsk); //Советский район
    Button9->setGeometry(580,200,20,20);
    Button9->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button10 = new QPushButton(Minsk); //Первомайский район
    Button10->setGeometry(770,200,20,20);
    Button10->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button11 = new QPushButton(Minsk); //Московский район
    Button11->setGeometry(290,500,20,20);
    Button11->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button12 = new QPushButton(Minsk); //Центральный район
    Button12->setGeometry(480,300,20,20);
    Button12->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button13 = new QPushButton(Minsk); //Октябрьский район
    Button13->setGeometry(490,490,20,20);
    Button13->setIcon(QPixmap(":/Background/Source/Marker.png"));

    connect(Button1,SIGNAL (clicked()),this,SLOT (Minsk1Button_clicked()));
    connect(Button2,SIGNAL (clicked()),this,SLOT (Minsk2Button_clicked()));
    connect(Button3,SIGNAL (clicked()),this,SLOT (Minsk3Button_clicked()));
    connect(Button4,SIGNAL (clicked()),this,SLOT (Minsk4Button_clicked()));
    connect(Button5,SIGNAL (clicked()),this,SLOT (Minsk5Button_clicked()));
    connect(Button6,SIGNAL (clicked()),this,SLOT (Minsk6Button_clicked()));
    connect(Button7,SIGNAL (clicked()),this,SLOT (Minsk7Button_clicked()));
    connect(Button8,SIGNAL (clicked()),this,SLOT (Minsk8Button_clicked()));
    connect(Button9,SIGNAL (clicked()),this,SLOT (Minsk9Button_clicked()));
    connect(Button10,SIGNAL (clicked()),this,SLOT (Minsk10Button_clicked()));
    connect(Button11,SIGNAL (clicked()),this,SLOT (Minsk11Button_clicked()));
    connect(Button12,SIGNAL (clicked()),this,SLOT (Minsk12Button_clicked()));
    connect(Button13,SIGNAL (clicked()),this,SLOT (Minsk13Button_clicked()));

    Minsk->setGeometry(150,100,1020,800);
    Minsk->setFixedSize(1020,800);
    Minsk->setStyleSheet("{background-image: url(:/Background/Source/Minsk.bmp);}");
    QPixmap bkgnd(":/Background/Source/Minsk.bmp");
    bkgnd = bkgnd.scaled(Minsk->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    Minsk->setWindowIcon(QPixmap(":/Background/Source/WindowIcon.png"));
    palette.setBrush(QPalette::Background, bkgnd);
    Minsk->setPalette(palette);
    Minsk->show();
}

void DefaultWindow::Brest1Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Ленинский_район_(Брест)";
    this->place = "TextInfo/Brest/Brest1.txt";
    showWindow();
}

void DefaultWindow::Brest3Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Брест_(аэропорт,_Белоруссия)";
    this->place = "TextInfo/Brest/Brest3.txt";
    showWindow();
}

void DefaultWindow::Brest4Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Брест";
    this->place = "TextInfo/Brest/Brest4.txt";
    showWindow();
}

void DefaultWindow::Brest5Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Брестская_крепость";
    this->place = "TextInfo/Brest/Brest5.txt";
    showWindow();
}

void DefaultWindow::Brest6Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Черни_(Брестская_область)";
    this->place = "TextInfo/Brest/Brest6.txt";
    showWindow();
}

void DefaultWindow::Brest7Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Тюхиничи";
    this->place = "TextInfo/Brest/Brest7.txt";
    showWindow();
}

void DefaultWindow::Brest8Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Клейники";
    this->place = "TextInfo/Brest/Brest8.txt";
    showWindow();
}

void DefaultWindow::Brest9Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Большие_Косичи";
    this->place = "TextInfo/Brest/Brest9.txt";
    showWindow();
}

void DefaultWindow::Brest10Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Скоки_(станция)";
    this->place = "TextInfo/Brest/Brest10.txt";
    showWindow();
}

void DefaultWindow::on_pushButton_clicked()
{
    QDialog *Brest = new QDialog();
    Brest->setWindowTitle("Брест");

    QPushButton *Button1 = new QPushButton(Brest); //Ленинский район
    Button1->setGeometry(510,290,20,20);
    Button1->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button3 = new QPushButton(Brest); //аэропорт
    Button3->setGeometry(850,320,20,20);
    Button3->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button4 = new QPushButton(Brest); //Брест
    Button4->setGeometry(510,330,20,20);
    Button4->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button5 = new QPushButton(Brest); //Брестская крепость
    Button5->setGeometry(460,390,20,20);
    Button5->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button6 = new QPushButton(Brest); //Черни
    Button6->setGeometry(630,190,20,20);
    Button6->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button7 = new QPushButton(Brest); //Тюхиничи
    Button7->setGeometry(510,200,20,20);
    Button7->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button8 = new QPushButton(Brest); //Клейники
    Button8->setGeometry(390,230,20,20);
    Button8->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button9 = new QPushButton(Brest); //Большие Косичи
    Button9->setGeometry(770,250,20,20);
    Button9->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button10 = new QPushButton(Brest); //Скоки
    Button10->setGeometry(430,200,20,20);
    Button10->setIcon(QPixmap(":/Background/Source/Marker.png"));

    connect(Button1,SIGNAL (clicked()),this,SLOT (Brest1Button_clicked()));
    connect(Button3,SIGNAL (clicked()),this,SLOT (Brest3Button_clicked()));
    connect(Button4,SIGNAL (clicked()),this,SLOT (Brest4Button_clicked()));
    connect(Button5,SIGNAL (clicked()),this,SLOT (Brest5Button_clicked()));
    connect(Button6,SIGNAL (clicked()),this,SLOT (Brest6Button_clicked()));
    connect(Button7,SIGNAL (clicked()),this,SLOT (Brest7Button_clicked()));
    connect(Button8,SIGNAL (clicked()),this,SLOT (Brest8Button_clicked()));
    connect(Button9,SIGNAL (clicked()),this,SLOT (Brest9Button_clicked()));
    connect(Button10,SIGNAL (clicked()),this,SLOT (Brest10Button_clicked()));

    Brest->setGeometry(150,100,1020,800);
    Brest->setFixedSize(1020,800);
    Brest->setStyleSheet("{background-image: url(:/Background/Source/Brest.bmp);}");
    QPixmap bkgnd(":/Background/Source/Brest.bmp");
    bkgnd = bkgnd.scaled(Brest->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    Brest->setWindowIcon(QPixmap(":/Background/Source/WindowIcon.png"));
    palette.setBrush(QPalette::Background, bkgnd);
    Brest->setPalette(palette);
    Brest->show();
}

void DefaultWindow::Vitebsk1Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Витебск";
    this->place = "TextInfo/Vitebsk/Vitebsk1.txt";
    showWindow();
}

void DefaultWindow::Vitebsk2Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Витебск_(аэропорт)";
    this->place = "TextInfo/Vitebsk/Vitebsk2.txt";
    showWindow();
}

void DefaultWindow::Vitebsk3Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Октябрьский_район_(Витебск)";
    this->place = "TextInfo/Vitebsk/Vitebsk3.txt";
    showWindow();
}

void DefaultWindow::Vitebsk4Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Первомайский_район_(Витебск)";
    this->place = "TextInfo/Vitebsk/Vitebsk4.txt";
    showWindow();
}

void DefaultWindow::Vitebsk5Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Тулово_(Витебский_район)";
    this->place = "TextInfo/Vitebsk/Vitebsk5.txt";
    showWindow();
}

void DefaultWindow::Vitebsk6Button_clicked()
{
    this->link = "http://www.evitebsk.com/wiki/Московский_проспект";
    this->place = "TextInfo/Vitebsk/Vitebsk6.txt";
    showWindow();
}

void DefaultWindow::on_pushButton_2_clicked()
{
    QDialog *Vitebsk = new QDialog();
    Vitebsk->setWindowTitle("Витебск");

    QPushButton *Button1 = new QPushButton(Vitebsk); //Витебск
    Button1->setGeometry(500,360,20,20);
    Button1->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button2 = new QPushButton(Vitebsk); //аэропорт
    Button2->setGeometry(915,620,20,20);
    Button2->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button3 = new QPushButton(Vitebsk); //Октябрьский район
    Button3->setGeometry(550,310,20,20);
    Button3->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button4 = new QPushButton(Vitebsk); //Первомайский район
    Button4->setGeometry(470,490,20,20);
    Button4->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button5 = new QPushButton(Vitebsk); //Тулово
    Button5->setGeometry(740,300,20,20);
    Button5->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button6 = new QPushButton(Vitebsk); //Московский проспект
    Button6->setGeometry(600,430,20,20);
    Button6->setIcon(QPixmap(":/Background/Source/Marker.png"));

    connect(Button1,SIGNAL (clicked()),this,SLOT (Vitebsk1Button_clicked()));
    connect(Button2,SIGNAL (clicked()),this,SLOT (Vitebsk2Button_clicked()));
    connect(Button3,SIGNAL (clicked()),this,SLOT (Vitebsk3Button_clicked()));
    connect(Button4,SIGNAL (clicked()),this,SLOT (Vitebsk4Button_clicked()));
    connect(Button5,SIGNAL (clicked()),this,SLOT (Vitebsk5Button_clicked()));
    connect(Button6,SIGNAL (clicked()),this,SLOT (Vitebsk6Button_clicked()));

    Vitebsk->setGeometry(150,100,1020,800);
    Vitebsk->setFixedSize(1020,800);
    Vitebsk->setStyleSheet("{background-image: url(:/Background/Source/Vitebsk.bmp);}");
    QPixmap bkgnd(":/Background/Source/Vitebsk.bmp");
    bkgnd = bkgnd.scaled(Vitebsk->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    Vitebsk->setWindowIcon(QPixmap(":/Background/Source/WindowIcon.png"));
    palette.setBrush(QPalette::Background, bkgnd);
    Vitebsk->setPalette(palette);
    Vitebsk->show();
}

void DefaultWindow::Gomel1Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Гомель";
    this->place = "TextInfo/Gomel/Gomel1.txt";
    showWindow();
}

void DefaultWindow::Gomel2Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Центральный_район_(Гомель)";
    this->place = "TextInfo/Gomel/Gomel2.txt";
    showWindow();
}

void DefaultWindow::Gomel3Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Новобелицкий_район";
    this->place = "TextInfo/Gomel/Gomel3.txt";
    showWindow();
}

void DefaultWindow::Gomel4Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Советский_район_(Гомель)";
    this->place = "TextInfo/Gomel/Gomel4.txt";
    showWindow();
}

void DefaultWindow::Gomel5Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Гомель_(аэропорт)";
    this->place = "TextInfo/Gomel/Gomel5.txt";
    showWindow();
}

void DefaultWindow::Gomel6Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Берёзки_(Гомельский_район)";
    this->place = "TextInfo/Gomel/Gomel6.txt";
    showWindow();
}

void DefaultWindow::Gomel7Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Чёнки";
    this->place = "TextInfo/Gomel/Gomel7.txt";
    showWindow();
}

void DefaultWindow::Gomel8Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Красное_(Гомельский_район)";
    this->place = "TextInfo/Gomel/Gomel8.txt";
    showWindow();
}

void DefaultWindow::Gomel9Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Мичуринская_(Гомельский_район)";
    this->place = "TextInfo/Gomel/Gomel9.txt";
    showWindow();
}

void DefaultWindow::on_pushButton_3_clicked()
{
    QDialog *Gomel = new QDialog();
    Gomel->setWindowTitle("Гомель");

    QPushButton *Button1 = new QPushButton(Gomel); //Гомель
    Button1->setGeometry(350,220,20,20);
    Button1->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button2 = new QPushButton(Gomel); //Центральный район
    Button2->setGeometry(380,200,20,20);
    Button2->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button3 = new QPushButton(Gomel); //Новобелицкий район
    Button3->setGeometry(380,320,20,20);
    Button3->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button4 = new QPushButton(Gomel); //Советский район
    Button4->setGeometry(230,260,20,20);
    Button4->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button5 = new QPushButton(Gomel); //аэропорт
    Button5->setGeometry(365,25,20,20);
    Button5->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button6 = new QPushButton(Gomel); //Берёзки
    Button6->setGeometry(490,290,20,20);
    Button6->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button7 = new QPushButton(Gomel); //Чёнки
    Button7->setGeometry(300,390,20,20);
    Button7->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button8 = new QPushButton(Gomel); //Красное
    Button8->setGeometry(210,120,20,20);
    Button8->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button9 = new QPushButton(Gomel); //Мичуринская
    Button9->setGeometry(330,120,20,20);
    Button9->setIcon(QPixmap(":/Background/Source/Marker.png"));

    connect(Button1,SIGNAL (clicked()),this,SLOT (Gomel1Button_clicked()));
    connect(Button2,SIGNAL (clicked()),this,SLOT (Gomel2Button_clicked()));
    connect(Button3,SIGNAL (clicked()),this,SLOT (Gomel3Button_clicked()));
    connect(Button4,SIGNAL (clicked()),this,SLOT (Gomel4Button_clicked()));
    connect(Button5,SIGNAL (clicked()),this,SLOT (Gomel5Button_clicked()));
    connect(Button6,SIGNAL (clicked()),this,SLOT (Gomel6Button_clicked()));
    connect(Button7,SIGNAL (clicked()),this,SLOT (Gomel7Button_clicked()));
    connect(Button8,SIGNAL (clicked()),this,SLOT (Gomel8Button_clicked()));
    connect(Button9,SIGNAL (clicked()),this,SLOT (Gomel9Button_clicked()));

    Gomel->setGeometry(150,100,700,550);
    Gomel->setFixedSize(700,550);
    Gomel->setStyleSheet("{background-image: url(:/Background/Source/Gomel.bmp);}");
    QPixmap bkgnd(":/Background/Source/Gomel.bmp");
    bkgnd = bkgnd.scaled(Gomel->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    Gomel->setWindowIcon(QPixmap(":/Background/Source/WindowIcon.png"));
    palette.setBrush(QPalette::Background, bkgnd);
    Gomel->setPalette(palette);
    Gomel->show();
}

void DefaultWindow::Grodno1Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Гродно";
    this->place = "TextInfo/Grodno/Grodno1.txt";
    showWindow();
}

void DefaultWindow::Grodno2Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Октябрьский_район_(Гродно)";
    this->place = "TextInfo/Grodno/Grodno2.txt";
    showWindow();
}

void DefaultWindow::Grodno3Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Ленинский_район_(Гродно)";
    this->place = "TextInfo/Grodno/Grodno3.txt";
    showWindow();
}

void DefaultWindow::Grodno4Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Старый_замок_(Гродно)";
    this->place = "TextInfo/Grodno/Grodno4.txt";
    showWindow();
}

void DefaultWindow::Grodno5Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Нижняя_церковь_(Гродно)";
    this->place = "TextInfo/Grodno/Grodno5.txt";
    showWindow();
}

void DefaultWindow::on_pushButton_4_clicked()
{
    QDialog *Grodno = new QDialog();
    Grodno->setWindowTitle("Гродно");

    QPushButton *Button1 = new QPushButton(Grodno); //Гродно
    Button1->setGeometry(350,220,20,20);
    Button1->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button2 = new QPushButton(Grodno); //Октябрьский район
    Button2->setGeometry(350,340,20,20);
    Button2->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button3 = new QPushButton(Grodno); //Ленинский район
    Button3->setGeometry(350,50,20,20);
    Button3->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button4 = new QPushButton(Grodno); //Старый замок
    Button4->setGeometry(320,225,20,20);
    Button4->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button5 = new QPushButton(Grodno); //Нижняя церковь
    Button5->setGeometry(320,248,20,20);
    Button5->setIcon(QPixmap(":/Background/Source/Marker.png"));

    connect(Button1,SIGNAL (clicked()),this,SLOT (Grodno1Button_clicked()));
    connect(Button2,SIGNAL (clicked()),this,SLOT (Grodno2Button_clicked()));
    connect(Button3,SIGNAL (clicked()),this,SLOT (Grodno3Button_clicked()));
    connect(Button4,SIGNAL (clicked()),this,SLOT (Grodno4Button_clicked()));
    connect(Button5,SIGNAL (clicked()),this,SLOT (Grodno5Button_clicked()));

    Grodno->setGeometry(150,100,700,550);
    Grodno->setFixedSize(700,550);
    Grodno->setStyleSheet("{background-image: url(:/Background/Source/Grodno.bmp);}");
    QPixmap bkgnd(":/Background/Source/Grodno.bmp");
    bkgnd = bkgnd.scaled(Grodno->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    Grodno->setWindowIcon(QPixmap(":/Background/Source/WindowIcon.png"));
    palette.setBrush(QPalette::Background, bkgnd);
    Grodno->setPalette(palette);
    Grodno->show();
}

void DefaultWindow::Mogilev1Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Могилёв";
    this->place = "TextInfo/Mogilev/Mogilev1.txt";
    showWindow();
}

void DefaultWindow::Mogilev2Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Полыковичи_(Могилёвский_район)";
    this->place = "TextInfo/Mogilev/Mogilev2.txt";
    showWindow();
}

void DefaultWindow::Mogilev3Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Новое_Пашково";
    this->place = "TextInfo/Mogilev/Mogilev3.txt";
    showWindow();
}

void DefaultWindow::Mogilev4Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Буйничи";
    this->place = "TextInfo/Mogilev/Mogilev4.txt";
    showWindow();
}

void DefaultWindow::Mogilev5Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Коминтерн_(Могилёвский_район)";
    this->place = "TextInfo/Mogilev/Mogilev5.txt";
    showWindow();
}

void DefaultWindow::Mogilev6Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Севостьяновичи";
    this->place = "TextInfo/Mogilev/Mogilev6.txt";
    showWindow();
}

void DefaultWindow::Mogilev7Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Тишовка";
    this->place = "TextInfo/Mogilev/Mogilev7.txt";
    showWindow();
}

void DefaultWindow::Mogilev8Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Голени_1";
    this->place = "TextInfo/Mogilev/Mogilev8.txt";
    showWindow();
}

void DefaultWindow::Mogilev9Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Дары_(Могилёвская_область)";
    this->place = "TextInfo/Mogilev/Mogilev9.txt";
    showWindow();
}

void DefaultWindow::Mogilev10Button_clicked()
{
    this->link = "https://ru.wikipedia.org/wiki/Щежерь_1";
    this->place = "TextInfo/Mogilev/Mogilev10.txt";
    showWindow();
}

void DefaultWindow::on_pushButton_5_clicked()
{
    QDialog *Mogilev = new QDialog();
    Mogilev->setWindowTitle("Могилёв");

    QPushButton *Button1 = new QPushButton(Mogilev); //Могилёв
    Button1->setGeometry(510,320,20,20);
    Button1->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button2 = new QPushButton(Mogilev); //Полыковичи
    Button2->setGeometry(570,140,20,20);
    Button2->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button3 = new QPushButton(Mogilev); //Новое Пашково
    Button3->setGeometry(410,190,20,20);
    Button3->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button4 = new QPushButton(Mogilev); //Буйничи
    Button4->setGeometry(390,440,20,20);
    Button4->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button5 = new QPushButton(Mogilev); //Коминтерн
    Button5->setGeometry(630,280,20,20);
    Button5->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button6 = new QPushButton(Mogilev); //Севостьяновичи
    Button6->setGeometry(220,310,20,20);
    Button6->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button7 = new QPushButton(Mogilev); //Тишовка
    Button7->setGeometry(370,340,20,20);
    Button7->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button8 = new QPushButton(Mogilev); //Голени 1
    Button8->setGeometry(950,590,20,20);
    Button8->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button9 = new QPushButton(Mogilev); //Дары
    Button9->setGeometry(740,460,20,20);
    Button9->setIcon(QPixmap(":/Background/Source/Marker.png"));

    QPushButton *Button10 = new QPushButton(Mogilev); //Щежерь 1
    Button10->setGeometry(850,490,20,20);
    Button10->setIcon(QPixmap(":/Background/Source/Marker.png"));

    connect(Button1,SIGNAL (clicked()),this,SLOT (Mogilev1Button_clicked()));
    connect(Button2,SIGNAL (clicked()),this,SLOT (Mogilev2Button_clicked()));
    connect(Button3,SIGNAL (clicked()),this,SLOT (Mogilev3Button_clicked()));
    connect(Button4,SIGNAL (clicked()),this,SLOT (Mogilev4Button_clicked()));
    connect(Button5,SIGNAL (clicked()),this,SLOT (Mogilev5Button_clicked()));
    connect(Button6,SIGNAL (clicked()),this,SLOT (Mogilev6Button_clicked()));
    connect(Button7,SIGNAL (clicked()),this,SLOT (Mogilev7Button_clicked()));
    connect(Button8,SIGNAL (clicked()),this,SLOT (Mogilev8Button_clicked()));
    connect(Button9,SIGNAL (clicked()),this,SLOT (Mogilev9Button_clicked()));
    connect(Button10,SIGNAL (clicked()),this,SLOT (Mogilev10Button_clicked()));

    Mogilev->setGeometry(150,100,1020,800);
    Mogilev->setFixedSize(1020,800);
    Mogilev->setStyleSheet("{background-image: url(:/Background/Source/Mogilev.bmp);}");
    QPixmap bkgnd(":/Background/Source/Mogilev.bmp");
    bkgnd = bkgnd.scaled(Mogilev->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    Mogilev->setWindowIcon(QPixmap(":/Background/Source/WindowIcon.png"));
    palette.setBrush(QPalette::Background, bkgnd);
    Mogilev->setPalette(palette);
    Mogilev->show();
}

void DefaultWindow::on_actionInfo_triggered()
{
    QDialog *info = new QDialog();
    info->setWindowIcon(QPixmap(":/Background/Source/WindowIcon.png"));

    info->setGeometry(150,100,310,180);
    info->setFixedSize(310,180);

    QLabel *text  = new QLabel(info);
    text->setGeometry(0,0,310,180);

    try
    {
        QFile F("TextInfo/Authority.txt");
        if(!F.open(QIODevice::ReadOnly)) throw 1;

        QString str = "";

        str = F.readAll();

        text->setText(str);
        info->show();
    }
    catch(int)
    {
        text->setText("===========================\n========Can't open the file========\n===========================");
        info->show();
    }
}

void DefaultWindow::showWindow(){
    QDialog *sshow = new QDialog();
    QTextEdit *txt = new QTextEdit(sshow);
    QPushButton *but = new QPushButton(sshow);

    sshow->setWindowTitle("Информация");
    sshow->setWindowIcon(QPixmap(":/Background/Source/WindowIcon.png"));
    sshow->setGeometry(150,100,400,400);
    sshow->setFixedSize(400,400);
    txt->setGeometry(0,0,330,400);
    but->setGeometry(330,0,70,40);
    but->setText("Подробнее");
    txt->setReadOnly(true);

    connect(but,SIGNAL (clicked()),this,SLOT (linkOpen()));

    try
    {
        QFile F(this->place);
        if(!F.open(QIODevice::ReadOnly)) throw 1;

        QString str = "";

        str = F.readAll();

        txt->setText(str);
        sshow->show();
    }
    catch(int)
    {
        txt->setText("===========================\n========Can't open the file========\n===========================");
        sshow->show();
    }
}

void DefaultWindow::linkOpen(){
    QDesktopServices::openUrl(QUrl(this->link));
}
