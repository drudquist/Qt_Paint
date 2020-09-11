#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>

class ScribbleArea;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:

    void closeEvent(QCloseEvent* event) override;

private:
    Ui::MainWindow *ui;

    ScribbleArea* scribbleArea;

    //menus
    QMenu* saveAsMenu;
    QMenu* fileMenu;
    QMenu* openMenu;
    QMenu* helpMenu;

    //actions
    QAction* openAct;
    QAction* penColorAct;
    QAction* penWidthAct;
    QAction* printAct;
    QAction* clearScreenAct;
    QAction* aboutAct;
    QAction* aboutQtAct;

    QList<QAction*> saveAsActions;

    void createActions();
    void createMenus();

    bool maybeSave();
    bool saveFile(const QByteArray& fileFormat);

private slots:

    void open();
    void save();
    void color();
    void penColor();
    void penWidth();
    void about();
};
#endif // MAINWINDOW_H
