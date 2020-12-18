#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <vector>
#include <QColor>
#include <QString>
#include <dialogsculptor.h>
#include <Sculptor.h>

using namespace std;

class Canvas : public QWidget
{
    Q_OBJECT
private:
    // Dimensões do escultor
    int NumL, NumC, NumP;
    // Vector 3D que armazena todo o escultor
    vector<vector<vector<Voxel>>> painter_sculptor;
    // Plano atual do escultor que eh mostrado na tela
    vector<vector<Voxel>> plano_atual;
    // Ponteiro para o escultor
    Sculptor* sculptor;
    // Indices do escultor no momento de um click
    int id_plano, id_linha, id_coluna;
    // Espacamentos entre as linhas do paint
    double h_altura, h_largura;
    // Acao selecionada pelo usuario
    QString acao;

    // Caracteristicas da Caixa
    int x_caixa, y_caixa, z_caixa;
    // Caracterisca da Esfera
    int raioEsfera;
    // Caracteristica do Elipsoide
    int raioXEllipsoid, raioYEllipsoid, raioZEllipsoid;

    // Cor do desenho
    QColor cor;

    // Ativa um Voxel
    void ativaVoxel(Voxel &v, QColor cor);
    // Desativa um Voxel
    void desativaVoxel(Voxel &v);
    // Verifica se o Voxel estao dentro dos limites
    bool dentroDosLimites(int linha, int coluna, int plano);
public:
    explicit Canvas(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event);

    void mousePressEvent(QMouseEvent *event);

signals:
    void alteraSlidersX(int,int);

    void alteraSlidersY(int,int);

    void alteraSlidersZ(int,int);

    void alteraSliderRaioEsfera(int,int);

    void alteraSliderR(int);

    void alteraSliderG(int);

    void alteraSliderB(int);
public slots:
    void abreDialogSculptor();

    void alteraCor();

    void salvaEscultor();

    void executaGeomview();

    void limpaEscultor();

    void mudaPlanoZ(int planoZ);

    void acaoSelecionada(QString _acao);

    void mudaXCaixa(int _x);

    void mudaYCaixa(int _y);

    void mudaZCaixa(int _z);

    void mudaRaioEsfera(int _re);

    void mudaRaioXEllipsoid(int _rx);

    void mudaRaioYEllipsoid(int _ry);

    void mudaRaioZEllipsoid(int _rz);

    void mudaR(int _r);

    void mudaB(int _b);

    void mudaG(int _g);

};

#endif // CANVAS_H
