//Crear una agenda telefonica en una lista simpl / doble
#include <iostream>
#include <string>

struct Contacto{
       std::string nombre_cliente_;
       std::string numero_telefonico_;
};
struct Nodo{
    Contacto contacto;
    struct Nodo *siguiente;
    struct Nodo *anterior;
};
//Declaracion de funciones
void InsertarIncio ();
void InsertarFinal ();
int main (){
    Nodo *lista = nullptr;
}
void InsertarInicio (struct Nodo **lista){
    struct Nodo *nuevo_nodo = new Nodo;
    nuevo_nodo->siguiente = *lista;
    nuevo_nodo->anterior = nullptr;
//Si la lista no esta vacia, se actualiza el puntero anterior del nodo actual
if (*lista != nullptr){
    (*lista)->anterior = nuevo_nodo;
}
//El nuevo nodo pasa a ser la cabacera de la lista
*lista =  nuevo_nodo;
}
void EliminarFinal (struct Nodo **lista)
{
if (*lista == nullptr){
std::cout<<"Lista Vacia";

}
else {
    
}
}