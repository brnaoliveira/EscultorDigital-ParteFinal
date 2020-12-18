#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
/**
 * @brief The MainWindow class
 * representa a janela principal da aplicacao, que consiste em um paint para um escultor, o qual eh uma matriz 3D composta por voxels.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief MainWindow : Construtor da classe MainWindow
     */
    explicit MainWindow(QWidget *parent = nullptr);
    /**
     * @brief ~MainWindow : Destrutor da classe MainWindow
     */
    ~MainWindow();

public slots:
    /**
     * @brief capturaAcao: slot captura a acao que foi gatilhada na toolbar para modificar os elementos do escultor
     */
    void capturaAcao(bool);

signals:
    /**
     * @brief nomeAcao: emite um sinal com o nome da acao que capturada pelo slot capturaAcao
     */
    void nomeAcao(QString);

private:
    Ui::MainWindow *ui;
    QString ultimaAcao;
};

#endif // MAINWINDOW_H
