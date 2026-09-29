#include <iostream>

struct Datos
{
    int numero;
};

struct Nodo
{
    struct Datos datos;
    struct Nodo *siguiente;
};

// Puntero global para la cabeza de la lista
struct Nodo *lista = nullptr;

// Declaración de funciones
void InsertarInicio(int n);
void InsertarFinal(int n);
void InsertarIntermedio(int n, int posicion);
void Imprimir();
void EliminarInicio();
void EliminarFinal();
void EliminarIntermedio(int posicion);

int main(int argc, char *argv[])
{
    InsertarIntermedio(3, 2);
    InsertarInicio(1);
    InsertarFinal(10);
    Imprimir();

    return 0;
}

// Insertar al inicio (Muy claro y visual)
void InsertarInicio(int n)
{
    struct Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->datos.numero = n;
    
    // Apuntamos el nuevo nodo hacia donde estaba la lista
    nuevo_nodo->siguiente = lista;
    
    // El nuevo nodo se convierte en el inicio de la lista
    lista = nuevo_nodo;
}

// Insertar al final
void InsertarFinal(int n)
{
    struct Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->datos.numero = n;
    nuevo_nodo->siguiente = nullptr;

    // Si la lista está vacía, el nuevo nodo es el primero
    if (lista == nullptr)
    {
        lista = nuevo_nodo;
        return;
    }

    // Si no está vacía, buscamos el último nodo
    struct Nodo *temporal = lista;
    while (temporal->siguiente != nullptr)
    {
        temporal = temporal->siguiente;
    }
    
    // Conectamos el último nodo con el nuevo
    temporal->siguiente = nuevo_nodo;
}

// Insertar en una posición intermedia
void InsertarIntermedio(int n, int posicion)
{
    if (posicion <= 0)
    {
        std::cout << "Posicion invalida. Debe ser mayor a 0.\n";
        return;
    }
    
    if (posicion == 1)
    {
        InsertarInicio(n);
        return;
    }

    struct Nodo *temporal = lista;
    int contador = 1;

    // Avanzamos hasta el nodo anterior a la posición deseada
    while (temporal != nullptr && contador < posicion - 1)
    {
        temporal = temporal->siguiente;
        contador++;
    }

    if (temporal == nullptr)
    {
        std::cout << "Posicion fuera de rango.\n";
        return;
    }

    // Creamos el nuevo nodo y ajustamos los enlaces
    struct Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->datos.numero = n;
    
    nuevo_nodo->siguiente = temporal->siguiente;
    temporal->siguiente = nuevo_nodo;
}

// Eliminar el primer nodo
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

// Eliminar el último nodo (sin variables confusas)
void EliminarFinal()
{
    if (lista == nullptr)
    {
        std::cout << "Lista vacia\n";
        return;
    }

    // Si solo hay un elemento, lo eliminamos directamente
    if (lista->siguiente == nullptr)
    {
        delete lista;
        lista = nullptr;
        return;
    }

    // Buscamos el penúltimo nodo
    struct Nodo *temporal = lista;
    while (temporal->siguiente->siguiente != nullptr)
    {
        temporal = temporal->siguiente;
    }

    // Borramos el último nodo y ponemos nullptr en el penúltimo
    delete temporal->siguiente;
    temporal->siguiente = nullptr;
}

//Eliminar en posición intermedia
void EliminarIntermedio(int posicion)
{
    if (posicion <= 0 || lista == nullptr)
    {
        std::cout << "Posicion invalida o lista vacia.\n";
        return;
    }

    if (posicion == 1)
    {
        EliminarInicio();
        return;
    }

    struct Nodo *temporal = lista;
    int contador = 1;

    // Avanzamos hasta el nodo anterior al que queremos borrar
    while (temporal->siguiente != nullptr && contador < posicion - 1)
    {
        temporal = temporal->siguiente;
        contador++;
    }

    if (temporal->siguiente == nullptr)
    {
        std::cout << "Posicion fuera de rango.\n";
        return;
    }

    // Guardamos el nodo a eliminar
    struct Nodo *a_borrar = temporal->siguiente;
    
    // Saltamos el nodo que vamos a borrar
    temporal->siguiente = a_borrar->siguiente;
    
    delete a_borrar;
}

// Imprimir la lista
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
        std::cout << "Valor: " << temporal->datos.numero 
                  << " | Direccion: " << temporal 
                  << " | Siguiente: " << temporal->siguiente << "\n";
        temporal = temporal->siguiente;
    }
}