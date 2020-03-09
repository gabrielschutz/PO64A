#include <iostream>

using namespace std;

class A{
public:
    A(){
        cout << "\nConstruido A !"<<endl;
    }

    ~A(){
        cout << "\nDesconstruido A !"<<endl;
    }
};

class B:public A{
public:
    B(){
        cout << "\nConstruido B !"<<endl;
    }

    ~B(){
        cout << "\nDesconstruido B !"<<endl;
    }
};


class C: public B{
public:
    C(){
        cout << "\nConstruido C !"<<endl;
    }

    ~C(){
        cout << "\nDesconstruido C !"<<endl;
    }
};



int main() {
    
    C caweawe;


    return 0;
}
