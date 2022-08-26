#include <enrutador.h>
using namespace std;


Enrutador::Enrutador(){

}

Enrutador::Enrutador(char y,short costo_){
    costo=costo_;
    contrasena=y;
   mapaCosto[contrasena]=costo;
}

void Enrutador::Imprimir(){
    map<char,short int>::iterator itr;
    cout << "\n El mapa es: \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = mapaCosto.begin(); itr != mapaCosto.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
}

void Enrutador::Imprimir1(){
    map<char,short int>::iterator itr;
    cout<<"Enrutador [";
    itr = mapaCosto.begin();
    for (itr; itr != mapaCosto.end(); ++itr) {
        cout <<itr->first<<" ]"<<endl;
        break;
    }
}
map<char,short int> Enrutador::AgregarEnrutadores(char nodo,short int costo){
    mapaCosto.insert(pair<char,short int>(nodo, costo));
    return mapaCosto;
}


