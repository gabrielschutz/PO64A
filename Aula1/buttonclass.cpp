#include <iostream>

using namespace std;

class botao{
    string label;
    string color;
    int id;
    bool pressionado;

public:
    void setlabel(string label){
        this->label = label;
    }

    void setcolor(string color){
        this->color = color;
    }

    void setid(int id){
        this->id = id;
    }

    void setpressionado(bool pressionado){
        this->pressionado = pressionado;
    }

    void pressionar(){
        setpressionado(true);
    }

    void despressionar(){
        setpressionado(false);
    }

    string getlabel(){
        return label;
    }

    string getcolor(){
        return color;
    }

    int getid(){
        return id;
    }

    bool getstatus(){
        return pressionado;
    }



};

int main() {
    botao ligarpc;
    ligarpc.setlabel("Ligar Maquina");
    ligarpc.setcolor("Preto");
    ligarpc.setid(55);
    ligarpc.setpressionado(true);



    cout << "Botão: " << ligarpc.getlabel() << " ID: " << ligarpc.getid() << " Cor: " << ligarpc.getcolor() << endl;
    cout << "Status: " << ligarpc.getstatus() << endl;

    ligarpc.setpressionado(false);

    cout << "Status: " << ligarpc.getstatus() << endl;

    return 0;
}
