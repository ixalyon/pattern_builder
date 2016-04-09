#ifndef CONFIGURE_H
#define CONFIGURE_H

#include <QMainWindow>

namespace Ui {
class Configure;
}

class Configure : public QMainWindow
{
    Q_OBJECT

public:
    explicit Configure(QWidget *parent = 0);
    ~Configure();

private:
    Ui::Configure *ui;
};

#endif // CONFIGURE_H
