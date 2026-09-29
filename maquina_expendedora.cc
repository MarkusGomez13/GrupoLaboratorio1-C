#include <iostream>
#include <string>

/*2. Máquina expendedora
Una máquina expendedora contiene una cantidad limitada de productos. Cada
producto tiene un nombre, precio, cantidad disponible y un registro de cuántas
unidades se han vendido.
El usuario debe poder consultar los productos disponibles y seleccionar uno para
realizar una compra. El sistema debe verificar que el producto exista y que haya
unidades disponibles antes de completar la venta.
También debe existir una opción para reabastecer productos. Al finalizar la operación,
el programa deberá mostrar información como el producto más vendido, la cantidad
total de productos vendidos y los ingresos generados por la máquina.*/
struct MaquinaExpendedora{
    struct Producto{
        std::string nombre_producto_;
        float precio_producto_;
        int cantidad_disponible_;
        int productos_vendidos_;

    };
    Producto inventario_[5];
    float ingresos_totales = 0.0f;

};
int main (){
    MaquinaExpendedora mi_maquina_expendedora_;
    mi_maquina_expendedora_.inventario_[0].nombre_producto_="Coca-Cola";
    mi_maquina_expendedora_.inventario_[0].precio_producto_= 1.25f;
    mi_maquina_expendedora_.inventario_[0].cantidad_disponible_= 15;
    mi_maquina_expendedora_.inventario_[0].productos_vendidos_=0;

    mi_maquina_expendedora_.inventario_[1].nombre_producto_="Pepsi";
    mi_maquina_expendedora_.inventario_[1].precio_producto_=1.00f;
    mi_maquina_expendedora_.inventario_[1].cantidad_disponible_=15;
    mi_maquina_expendedora_.inventario_[1].productos_vendidos_=0;

    mi_maquina_expendedora_.inventario_[2].nombre_producto_="Takis";
    mi_maquina_expendedora_.inventario_[2].precio_producto_=0.75f;
    mi_maquina_expendedora_.inventario_[2].cantidad_disponible_=10;
    mi_maquina_expendedora_.inventario_[2].productos_vendidos_=0;

    mi_maquina_expendedora_.inventario_[3].nombre_producto_="Cheetos";
    mi_maquina_expendedora_.inventario_[3].precio_producto_=0.85f;
    mi_maquina_expendedora_.inventario_[3].cantidad_disponible_=12;
    mi_maquina_expendedora_.inventario_[3].productos_vendidos_=0;

    mi_maquina_expendedora_.inventario_[4].nombre_producto_="Oreos";
    mi_maquina_expendedora_.inventario_[4].precio_producto_=0.50f;
    mi_maquina_expendedora_.inventario_[4].cantidad_disponible_=13;
    mi_maquina_expendedora_.inventario_[4].productos_vendidos_=0;

    std::cout<<"Producto: "<<mi_maquina_expendedora_.inventario_[0].nombre_producto_<<"\n";
    std::cout<<"Precio: $"<<mi_maquina_expendedora_.inventario_[0].precio_producto_<<"\n";

    std::cout<<"Producto: "<<mi_maquina_expendedora_.inventario_[1].nombre_producto_<<"\n";
    std::cout<<"Precio: $"<<mi_maquina_expendedora_.inventario_[1].precio_producto_<<"\n";

    std::cout<<"Producto: "<<mi_maquina_expendedora_.inventario_[2].nombre_producto_<<"\n";
    std::cout<<"Precio: $"<<mi_maquina_expendedora_.inventario_[2].precio_producto_<<"\n";

    std::cout<<"Producto: "<<mi_maquina_expendedora_.inventario_[3].nombre_producto_<<"\n";
    std::cout<<"Precio: $"<<mi_maquina_expendedora_.inventario_[3].precio_producto_<<"\n";

    std::cout<<"Producto: "<<mi_maquina_expendedora_.inventario_[4].nombre_producto_<<"\n";
    std::cout<<"Precio: $"<<mi_maquina_expendedora_.inventario_[4].precio_producto_<<"\n";
}