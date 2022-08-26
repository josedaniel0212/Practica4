#ifndef ENRUTADOR_H
#define ENRUTADOR_H
#include<iostream>
#include<vector>
#include <cstdlib>
#include <string.h>
#include <iomanip>
#include <list>
#include <map>
#include <iterator>
using namespace std;

map<char,short int> funcionCosto();

class Enrutador{
    public://Atributos
        //short agregarEnrutadores;
        short costo;
        char contrasena;
    public://Metodos
        Enrutador(char,short);
        Enrutador();//Contructor
        //Enrutador(short int,char);//Contructor
        void Modelar();
        void Imprimir();
        void Imprimir1();
        map<char,short int> mapaCosto;
        map<char,short int> AgregarEnrutadores(char nodo,short int costo);
};

#endif // ENRUTADOR_H
