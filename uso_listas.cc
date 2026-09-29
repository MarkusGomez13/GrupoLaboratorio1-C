#include <iostream>
struct Informacion
{
    int numero;
};
struct Nodo
{
    Informacion informacion;
    Nodo *siguiente;
};
// Puntero Global
struct Nodo *lista = nullptr;
void InsertarInicio(int n);
void Imprimir ();
void EliminarInicio ();

int main()
{
    InsertarInicio(30);
    InsertarInicio(20);
    InsertarInicio(100);
    std::cout << "Direccion de memoria del primer elemento: " << lista << "-" << lista->informacion.numero;
    std::cout << "\nDireccion de memoria del segundo elemento: " << lista->siguiente << "-" << lista->siguiente->informacion.numero;
    std::cout << "\nDireccion de memoria del tercero elemento: " << lista->siguiente << "-" << lista->siguiente->informacion.numero;
    return 0;
}
void InsertarInicio(int n)
{
    // Reserva de Memoria
    struct Nodo *nuevo_nodo = new Nodo;
    nuevo_nodo->informacion.numero = n;

    if (lista == nullptr)
    {
        lista = nuevo_nodo;
    }
    else
    {
        // Agregar un nodo al inicio
        nuevo_nodo->siguiente = lista;
        lista = nuevo_nodo;
    }
}
void Imprimir()
{
    if (lista == nullptr)
    {
        std::cout << "Lista vacia\n";
        return;
    }

    struct Nodo *temporal = lista;
    while (temporal != nullptr)
    {
        std::cout << "Valor: " << temporal->informacion.numero
                  << " | Direccion: " << temporal 
                  << " | Siguiente: " << temporal->siguiente << "\n";
        temporal = temporal->siguiente;
    }
}
void EliminarInicio()
{
    if (lista == nullptr)
    {
        std::cout << "Lista vacia\n";
        return;
    }

    // Guardamos el nodo a eliminar
    struct Nodo *temporal = lista;
    // La lista avanza al siguiente       
    lista = lista->siguiente;    
    // Liberamos memoria de forma segura        
    delete temporal;                     
}



