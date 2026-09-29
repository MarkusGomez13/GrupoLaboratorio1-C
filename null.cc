#include <iostream>
int main(void) {
  // 4 bytes se reservan en el stack
    /*int numero = 99;
  // 20 bytes se reservan en el stack
    int lista_numeros[5] = {1,2,46,7,8};
    
  // Reserva de memoria dinámica para int
    int *ptr = new int;
  // Libere la memoria dinámica
    delete ptr;
  // Puntero apunta a nulo
    ptr = nullptr;
    
    return 0;*/
    //Reservando memoria
    int *p = nullptr;
    //Verificando la asignacion de memoria
    if (p == nullptr){
        std::cout<<"Error de asignacion de dir. de memoria";
        exit (1);
    }else{
        std::cout<<"Direccion de memoria asignada"<< p;
    }
    
    delete p;
    p= nullptr;
    
    return 0;
}
