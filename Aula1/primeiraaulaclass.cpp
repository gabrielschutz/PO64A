#include <iostream>

using namespace std;

class automovel{
    string fabricante;
    string categoria;
    int ano;

public:
    void setFabricante(string fabricante){
        this->fabricante = fabricante;
    }

    void setCategoria(string categoria){
        this->categoria = categoria;
    }

    void setAno(int ano){
        this->ano = ano;
    }

    string getFabricante(){
        return fabricante;
    }

    string getCategoria(){
        return categoria;
    }

    int getAno(){
        return ano;
    }


};

int main() {
    automovel fusca;
    fusca.setFabricante("Volks");
    fusca.setCategoria("Compacto");
    fusca.setAno(1995);


    cout << "O fusca " << fusca.getFabricante() << " ano " << fusca.getAno() << " Categoria: " << fusca.getCategoria() << endl;

    return 0;
}


