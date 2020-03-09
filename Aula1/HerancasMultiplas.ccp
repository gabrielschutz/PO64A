#include <iostream>

using namespace std;

class aeronave{

public:

    string fabricante;
    int modelo;

public:

    void setFabricante(string fabricante){
        this->fabricante = fabricante;
    }

    void setModelo(int modelo){
        this->modelo = modelo;
    }

    string getFabricante(){
        return fabricante;
    }

    int getModelo(){
        return modelo;
    }

};

class aviao : public aeronave{

public:

    bool continental;
    int qtd_motores;
    string categoria;

public:

    void setContinental(bool continental){
        this->continental = continental;
    }

    void setCategoria(string categoria){
        this->categoria = categoria;
    }

    void setQtd_motores(int qtd_motores){
        this->qtd_motores = qtd_motores;
    }

    string getCategoria(){
        return categoria;
    }

    int getQtd_motores(){
        return qtd_motores;
    }

    bool getContinental(){
        return continental;
    }

};

class armamento{
public:
    bool misseis;
    bool metralhadora;

public:

    void setMisseis(bool misseis){
        this->misseis = misseis;
    }

    void setMetralhadora(bool metralhadora){
        this->metralhadora = metralhadora;
    }

    bool getMisseis(){
        return misseis;
    }

    bool getMetralhadora(){
        return metralhadora;
    }
};

class aviaodecombate : public aviao,public armamento{
public:
    string modelo;

public:
    aviaodecombate(){
        this->categoria = "Militar";
    }

    ~aviaodecombate(){
        cout << "\n\nAviao de combate destruido\n\n" << endl;
    }

    void setModelo(string modelo){
        this->modelo = modelo;
    }

    string getModelo(){
        return modelo;
    }
};

class helicoptero:public aeronave{
public:
    string categoria;
    bool armamento;

public:

    void setCategoria(string categoria){
        this->categoria = categoria;
    }

    void setArmamento(bool continental){
        this->armamento = armamento;
    }


    bool getArmamento(){
        return armamento;
    }

    string getCategoria(){
        return categoria;
    }

};

int main() {

    aviao a;
    string modelo;

    a.setFabricante("Mercedes");
    a.setModelo(88);
    a.setContinental(true);
    a.setQtd_motores(4);
    a.setCategoria("Particular");

    if (a.getContinental() == 1){
        modelo = "True";
    }else{
        modelo = "False";
    }

    cout << "Avião: " << a.getFabricante() << "\nModelo: " << a.getModelo() << "\nContinental: "<< modelo << "\nQuantidade de Motores: "<< a.getQtd_motores()<<"\nCategoria: "<<a.getCategoria()<< endl;

    cout << "\n\n\n==========================================================================\n\n\n" <<endl;

    aviaodecombate testes;

    testes.setModelo("Teste");

    cout << "Modelo: " <<testes.getModelo()<<endl;

    return 0;
}
