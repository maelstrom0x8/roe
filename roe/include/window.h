#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QWidget>
#include <QAction>
#include <QIcon>
#include <QSettings>
#include <QPixmap>
#include <QCloseEvent>

class Window : public QMainWindow {
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
    ~Window();
    void readSettings();
    void closeEvent(QCloseEvent *event);
public:
    QVBoxLayout *layout;
    QVBoxLayout *ctlayout;
    QWidget *centralwidget;

};
#endif // WINDOW_H
