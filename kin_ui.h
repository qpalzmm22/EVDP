#ifndef KIN_UI_H
#define KIN_UI_H

#include <QMainWindow>

namespace Ui {
class KIN_ui;
}

class KIN_ui : public QMainWindow
{
    Q_OBJECT

public:
    explicit KIN_ui(QWidget *parent = nullptr);
    ~KIN_ui();

private:
    Ui::KIN_ui *ui;
};

#endif // KIN_UI_H
