#ifndef PLAYER_H
#define PLAYER_H

#include <QDialog>

namespace Ui {
    class Player;
}

class Player : public QDialog {
    Q_OBJECT
public:
    Player(QWidget *parent = 0);
    ~Player();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Player *ui;
};

#endif // PLAYER_H
