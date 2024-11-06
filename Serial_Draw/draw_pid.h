#ifndef DRAW_PID_H
#define DRAW_PID_H

#include <QWidget>
#include <QMainWindow>
#include <QtCharts>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QMessageBox>
#include <QString>
#include <QDateTime>
#include <QFont>
#include <QMessageBox>
#include <QDebug>
#include <QVBoxLayout>
#include <QByteArray>
#include <QFileDialog> // 需要添加这个头文件以使用文件对话框
#include <QPixmap>
#include <QOpenGLWidget>

namespace Ui {
class draw_pid;
}

class draw_pid : public QWidget
{
    Q_OBJECT

public:
    explicit draw_pid(QWidget *parent = nullptr);
    ~draw_pid();

protected:
    void closeEvent(QCloseEvent *event) override; // 重写 closeEvent 方法

private:
    Ui::draw_pid *ui;
};

#endif // DRAW_PID_H
