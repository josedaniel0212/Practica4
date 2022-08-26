#include <funciones.h>
#include <enrutador.h>
list<Enrutador> enrs;
char opc;
char nodo;

void nodom (){
    do{
        cout<<"Dese ingresar nuevo nodo?";
        cin>>nodo;
    }while(opc=='1');
}
