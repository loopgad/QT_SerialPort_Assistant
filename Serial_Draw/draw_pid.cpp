#include "draw_pid.h"
#include "ui_draw_pid.h"
#include "mainwindow.h" // 包含 MainWindow 的头文件

draw_pid::draw_pid(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::draw_pid)
{
    ui->setupUi(this);
}

draw_pid::~draw_pid()
{
    delete ui;
}

void draw_pid::closeEvent(QCloseEvent *event) {
    // 在关闭窗口时执行的操作
    MainWindow *mainWindow = static_cast<MainWindow*>(parentWidget()); // 获取父窗口（MainWindow）的指针
    if (mainWindow) {
        mainWindow->on_draw_pid_stateChanged(Qt::Unchecked); // 调用 MainWindow 中的槽函数来恢复复选框
    }
    QWidget::closeEvent(event); // 调用基类的 closeEvent 方法来完成关闭操作
}
