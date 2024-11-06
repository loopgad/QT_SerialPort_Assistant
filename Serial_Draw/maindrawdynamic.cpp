#include "maindrawdynamic.h"
#include "ui_maindrawdynamic.h"
#include "mainwindow.h" // 包含 MainWindow 的头文件

maindrawdynamic::maindrawdynamic(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::maindrawdynamic)
{
    ui->setupUi(this);
}

maindrawdynamic::~maindrawdynamic()
{
    delete ui;
}

void maindrawdynamic::closeEvent(QCloseEvent *event) {
    // 在关闭窗口时执行的操作
    MainWindow *mainWindow = static_cast<MainWindow*>(parentWidget()); // 获取父窗口（MainWindow）的指针
    if (mainWindow) {
        mainWindow->on_draw_dynamic_stateChanged(Qt::Unchecked); // 调用 MainWindow 中的槽函数来恢复复选框
    }
    QWidget::closeEvent(event); // 调用基类的 closeEvent 方法来完成关闭操作
}
