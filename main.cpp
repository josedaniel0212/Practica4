#include <enrutador.h>
#include<funciones.h>
#include <iterator>
#include<cstdlib>
#include<ostream>

//list<Enrutador> enrs;
void showlist(list<Enrutador> enrs);

int main() {
     map<char,short int>mapa;
     map<char,short int>mapa4;
     map<char,short int>mapa2;
      map<char,Enrutador>mapa3;
    vector <map<char,short int>> vec;
    char opc=0,opt=0;
    char nodo, enr;
    int costo=0,total=0,total2=0;
    Enrutador EnrutadorB;//Guarda el sistema de enrutamientio

    do{
        //vector<Enrutador> EnrutadorA;
        Enrutador EnrutadorA[200];
        char clave[200];
    cout<<"Desea agregar un nuevo enrutador? "<<endl;
    cout<<"1. Si"<<endl;
    cout<<"2. Salir"<<endl;
    cin>>opt;

    switch (opt) {
    case '1':
    {
        cout<<"Ingrese nuevo enrutador: "<<endl;
        cin>>enr;
        cout<<"Ingrese costo del enrutamiento: ";
        cin>>costo;

        EnrutadorB.AgregarEnrutadores(enr,costo);
        clave[total2]=enr;
        total2++;
        do{
            cout<<"Ingrese un nuevo enrutador: ";
            cin>>nodo;
            cout<<"Ingrese el costo del enrutador: ";
            cin>>costo;
           mapa=EnrutadorB.AgregarEnrutadores(nodo,costo);
           vec.push_back(mapa);
            clave[total2]=nodo;
            total2++;
            cout<<"Desea ingresar nuevo nodo? "<<endl;
            cout<<"1. Si"<<endl;
            cout<<"2. No"<<endl;
            cin>>opc;
        }while(opc=='1');
        cout<<"\nSistema de enrutamiento: "<<endl;
        EnrutadorB.Imprimir();
        break;
    }
    default:
        break;
    }
  //TOTAL DE ENRUTADOR_A(Mapa de enrutamiento de cada enrutador)
  for(int i=0;i<total2;i++){
    for(int j=0;j<total2;j++){//De i hasta el numero de Enrutadores de B
        if(clave[i]==clave[j]){
            mapa2=EnrutadorA[total].AgregarEnrutadores(clave[j],0);//i++
            vec.push_back(mapa2);


        }else{
            mapa2=EnrutadorA[total].AgregarEnrutadores(clave[j],mapa[clave[j]]);
             //mapa3.insert(std::make_pair(clave[j], mapa2));
        }

    }
    total++;
  }


  for(int i=0;i<total;i++){
      cout<<"enrutador "<<" ["<<i<<"]";

       EnrutadorA[i].Imprimir();
   }


    }while(opt=='1');

 return 0;
}
