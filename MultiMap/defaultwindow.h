#ifndef DEFAULTWINDOW_H
#define DEFAULTWINDOW_H

#include <QMainWindow>
#include <vector>

namespace Ui {
class DefaultWindow;
}

class DefaultWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DefaultWindow(QWidget *parent = 0);
    QString link, place;
    ~DefaultWindow();

private slots:
    void on_pushButton_6_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();

    void on_actionInfo_triggered();

    void Minsk1Button_clicked();
    void Minsk2Button_clicked();
    void Minsk3Button_clicked();
    void Minsk4Button_clicked();
    void Minsk5Button_clicked();
    void Minsk6Button_clicked();
    void Minsk7Button_clicked();
    void Minsk8Button_clicked();
    void Minsk9Button_clicked();
    void Minsk10Button_clicked();
    void Minsk11Button_clicked();
    void Minsk12Button_clicked();
    void Minsk13Button_clicked();

    void Brest1Button_clicked();
    void Brest3Button_clicked();
    void Brest4Button_clicked();
    void Brest5Button_clicked();
    void Brest6Button_clicked();
    void Brest7Button_clicked();
    void Brest8Button_clicked();
    void Brest9Button_clicked();
    void Brest10Button_clicked();

    void Vitebsk1Button_clicked();
    void Vitebsk2Button_clicked();
    void Vitebsk3Button_clicked();
    void Vitebsk4Button_clicked();
    void Vitebsk5Button_clicked();
    void Vitebsk6Button_clicked();

    void Gomel1Button_clicked();
    void Gomel2Button_clicked();
    void Gomel3Button_clicked();
    void Gomel4Button_clicked();
    void Gomel5Button_clicked();
    void Gomel6Button_clicked();
    void Gomel7Button_clicked();
    void Gomel8Button_clicked();
    void Gomel9Button_clicked();

    void Grodno1Button_clicked();
    void Grodno2Button_clicked();
    void Grodno3Button_clicked();
    void Grodno4Button_clicked();
    void Grodno5Button_clicked();

    void Mogilev1Button_clicked();
    void Mogilev2Button_clicked();
    void Mogilev3Button_clicked();
    void Mogilev4Button_clicked();
    void Mogilev5Button_clicked();
    void Mogilev6Button_clicked();
    void Mogilev7Button_clicked();
    void Mogilev8Button_clicked();
    void Mogilev9Button_clicked();
    void Mogilev10Button_clicked();

    void showWindow();
    void linkOpen();

private:
    Ui::DefaultWindow *ui;
};

#endif // DEFAULTWINDOW_H
