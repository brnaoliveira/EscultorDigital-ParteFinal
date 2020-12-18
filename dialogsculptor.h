#ifndef DIALOGSCULPTOR_H
#define DIALOGSCULPTOR_H

#include <QDialog>

namespace Ui {
class DialogSculptor;
}

class DialogSculptor : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSculptor(QWidget *parent = nullptr);
    ~DialogSculptor();
    int getNumX();
    int getNumZ();
    int getNumY();

private:
    Ui::DialogSculptor *ui;
};

#endif // DIALOGSCULPTOR_H
