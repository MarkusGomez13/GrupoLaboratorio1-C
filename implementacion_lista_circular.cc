#include <iostream>
struct Informacion 
{
    int numero;
};

struct Nodo 
{
    struct Informacion inf;
    struct Nodo *siguiente;
};

//Declaracion de funciones usando referencias (*&)
void InsertarInicio (Nodo *&lista, int n);
int main (){
    Nodo *lista = nullptr;
    return 0;

}
// Insertar al inicio de la lista circular 
void InsertarInicio (struct Nodo *&lista, int n)
{
    struct Nodo *nuevo_nodo = new Nodo;
    nuevo_nodo->inf.numero = n;

//Si la lista esta vacia, se apunta a si misma
if (lista == nullptr)
{
    lista = nuevo_nodo;
    lista->siguiente = lista;
}
else 
{
//Buscamos el ultimo nodo para actualizar al nuevo nodo 
struct Nodo *temporal = lista;
while (temporal->siguiente != lista)
{
    temporal = temporal->siguiente;
}
}
}