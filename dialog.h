#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtGui>
#include <QtCore>
#include <QRandomGenerator>




QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();


private:
    Ui::Dialog *ui;

    void paintEvent(QPaintEvent *e) override;
    void dragon(); //REPRESENTA A main()
    void generarDragon(QPainter *Canvas);
    int EjeX[4098], EjeY[4098], paso;
    int signo;

    void henon();
    void ExtranioConfirmador();
    int maxX, maxY;
    double EscalaX, EscalaY,despX,despY;


};
#endif // DIALOG_H
