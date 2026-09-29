#include <iostream>
#include <string>

struct Contacto
{
    std::string nombre_cliente_;
    std::string numero_telefonico_;
};
struct Nodo
{
    Contacto contacto;
    Nodo *siguiente;
};
// Puntero Global
struct Nodo *lista = nullptr;
void InsertarInicio(struct Contacto c);
void Imprimir ();
void EliminarInicio ();
void InsertarFinal ();
void EliminarFinal ();


int main()
{
   Contacto contacto1, contacto2;
   contacto1.nombre_cliente_ = "Julio";
   contacto1.numero_telefonico_ = "7899876899";
   contacto2.nombre_cliente_ = "Sebastian";
   contacto2.numero_telefonico_ = "1234567";

   InsertarInicio (contacto1);
   InsertarFinal (contacto2);
   Imprimir ();
   EliminarInicio ();
   InsertarFinal ();

    return 0;
}
void InsertarInicio(struct Contacto c)
{
    // Reserva de Memoria
    struct Nodo *nuevo_nodo = new Nodo;
    nuevo_nodo->contacto.nombre_cliente_= c.nombre_cliente_;
    nuevo_nodo->contacto.numero_telefonico_ = c.numero_telefonico_;

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
        std::cout << "Valor: " << temporal->contacto.nombre_cliente_
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
void InsertarFinal (Contacto c){
    struct Nodo *nuevo_nodo = new Nodo ;
    nuevo_nodo->contacto.nombre_cliente_ = c.nombre_cliente_;
    nuevo_nodo->contacto.numero_telefonico_ = c.numero_telefonico_;
    nuevo_nodo->siguiente = nullptr;

//Si la lista esta vacia, el nuevo nodo es el primero
if (lista == nullptr){
lista = nuevo_nodo;
return;
}
//Si no esta vacia, buscamos el ultimo nod
struct Nodo *temporal = lista;
while (temporal->siguiente != nullptr){

}
}

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





