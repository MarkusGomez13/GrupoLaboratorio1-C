#include <iostream>
//Aritmetica de punteros
int main (){
    char puntero [6] = {'m', 'a', 'r', 'k', 'u', 's'};
    std::cout<<"Accediendo a posicion 2 "<< puntero [2]<<"\n";
    //Acceder a la direccion de memoria de un arreglo
    std::cout<<"Direccion de memoria del arreglo"<< &puntero<<"\n";
    //Notacion de punteros
    std::cout<<"Accediendo a posicion 2: "<< (puntero +  2);

    return 0;

}