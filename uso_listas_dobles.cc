// Lista doblemente enlazada
#include <iostream>
struct Datos
{
    int numero;
};
struct Nodo
{
    struct Datos datos;
    struct Nodo *siguiente;
    struct Nodo *anterior;
};
// Declaración de funciones con puntero doble (**)
void InsertarInicio(struct Nodo **lista, int n);
/*void InsertarFinal(struct Nodo **lista, int n);
void InsertarIntermedio(struct Nodo **lista, int n, int posicion);
void EliminarInicio(struct Nodo **lista);
void EliminarFinal(struct Nodo **lista);*/
/*void EliminarIntermedio(struct Nodo **lista, int posicion);
void EliminarNodoValor(struct Nodo **lista, int valor);*/
void Imprimir(struct Nodo *lista);
//bool Vacio(struct Nodo **lista);
// Insertar al inicio
void InsertarInicio(struct Nodo **lista, int n)
{
    struct Nodo *nuevo_nodo = new Nodo;
    nuevo_nodo->datos.numero = n;
    nuevo_nodo->siguiente = *lista;
    nuevo_nodo->anterior = nullptr;

    // Si la lista no está vacía, actualizamos el puntero anterior del primer nodo actual
    if (*lista != nullptr)
    {
        (*lista)->anterior = nuevo_nodo;
    }

    // El nuevo nodo pasa a ser la cabeza de la lista
    *lista = nuevo_nodo;
}


// Eliminar el último nodo
void EliminarFinal(struct Nodo **lista)
{
    if (*lista == nullptr)
    {
        std::cout << "Lista vacia\n";
        return;
    }

    // Si solo hay un elemento
    if ((*lista)->siguiente == nullptr)
    {
        delete *lista;
        *lista = nullptr;
        return;
    }

    struct Nodo *temporal = *lista;
    while (temporal->siguiente != nullptr)
    {
        temporal = temporal->siguiente;
    }

    // Desconectamos el último nodo y lo borramos
    temporal->anterior->siguiente = nullptr;
    delete temporal;
}
void Imprimir(struct Nodo *lista)
{
    if (lista == nullptr)
    {
        std::cout << "Lista vacia\n";
        return;
    }

    struct Nodo *temporal = lista;
    while (temporal != nullptr)
    {
        std::cout << "Valor: " << temporal->datos.numero
                  << " | Dir: " << temporal
                  << " | Sig: " << temporal->siguiente
                  << " | Ant: " << temporal->anterior << "\n";
        temporal = temporal->siguiente;
    }
}
int main()
{
    //Memoria Stack
    Nodo *lista = nullptr;
    InsertarInicio (&lista, 3);
    InsertarInicio (&lista,44);
    Imprimir (lista);
    EliminarFinal (&lista);
    Imprimir (lista);
    return 0;
}