#include <iostream>

using namespace std;

class aeronave{

public:

    string fabricante;
    int modelo;
    string tipo;

public:

    void setFabricante(string fabricante){
        this->fabricante = fabricante;
    }

    void setModelo(int modelo){
        this->modelo = modelo;
    }

    void setTipo(string tipo){
        this->tipo = tipo;
    }

    string getFabricante(){
        return fabricante;
    }

    int getModelo(){
        return modelo;
    }

    string getTipo(){
        return tipo;
    }

};

class aviao : public aeronave{

private:

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

class militar : public aviao,public armamento{
public:
    bool militar;

public:

    void setMilitar(bool militar){
        this->militar = militar;
    }

    bool getMilitar(){
        return militar;
    }
};

class drone : public militar{
public:
    string asas;

public:

    void setAsas(string asas){
        this->asas = asas;
    }

    string getAsas(){
        return asas;
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

    drone testes;

    cout << "Modelo: " <<testes.getModelo()<<endl;

    return 0;
}
