#include <iostream>
#include <string>
//Conversor de Divisas:Euro y Dolar 
const float kPreciodeVentaEuro = 1.08f;
const float kPreciodeCompraEuro = 1.12f;
struct Cliente{
    float saldo_dolares_ = 1000.00f;
    float saldo_euros_ = 500.00f;
    
} datoscliente, *datoscliente;
//Declaracion de Funciones
void ConsultarDivisas (Cliente &miCliente);
float ComprarEuros (Cliente &miCliente);
void VenderEuros (Cliente &miCliente);

int main (){
    Cliente miCliente;
    miCliente.saldo_dolares_= 1000.00f;
    miCliente.saldo_euros_= 500.00f;
    int opcion;
    do{
    
    std::cout<<"\nBienvenido a la casa de Divisas: Tu Dinero :D\n";
    std::cout<<"\nQue deseas realizar el dia de hoy?\n";
    std::cout<<"\n1. Consultar Divisas\n2. Comprar Euros\n3. Vender Euros\n4. Salir del Programa";
    std::cin>>opcion;

    switch (opcion){
    case 1: 
    ConsultarDivisas (miCliente);
    break;
    case 2:
    ComprarEuros (Cliente &miCliente);
    break;
    case 3: 
    VenderEuros (Cliente &miCliente);
    break;
    case 4:
    break;
    default:
    std::cout<<"Opcion ingresada no valida :(, Intentar de Nuevo\n";

    }
    }
    while (opcion != 4);
    std::cout<<"Gracias por utilizar nuestra casa de divisas, Regrese pronto :D\n";

}
//Declaracion Funcion ConsultarDivisas 
//Muestra el tipo de cambio recibido utilizando paso por valor, sin modificar el valor original.
void ConsultarDivisas (Cliente *miCliente){
    std::string nombre_del_cliente;
    std::cout<<"Bienvenido a la funcion de consultar divisas :D\n";
    std::cout<<"Ingrese su nombre por favor (Sin Espacios)\n";
    std::cin>>nombre_del_cliente;
    std::cout<<"Bienvenido "<<nombre_del_cliente<<" actualmente nuestro tipo de cambio es:"<<"\n1. Precio de venta del euro es: "<<kPreciodeVentaEuro<<" y nuestro precio de compra de euros es "<<kPreciodeCompraEuro;
}
//Declaracion Funcion ComprarEuros
//Permite al cliente comprar euros utilizando sus dólares. La función deberá modificar los saldos de dólares y euros mediante paso por referencia.
float ComprarEuros (Cliente &miCliente){
    std::cout<<"Ha escogido la opcion para comprar euros (€), utilizando sus dolares ($)";
    if (miCliente.saldo_dolares_ > 0){
    std::cout<<"Cuantos euros quiere comprar?";
    std::cout<<"Recuerde que cada euro vale "<<kPreciodeCompraEuro<<"\n";
    do{
      miCliente.saldo_dolares_ - kPreciodeCompraEuro;

    }
    while (miCliente.saldo_dolares_ > 1.12);
    miCliente.saldo_dolares_--;
    miCliente.saldo_euros_++;

    }
    else {
    std::cout<<"No puede comprar euros si su saldo en dolares es negativo :(";
    }
}
float VenderEuros (Cliente &miCliente){
 std::cout<<"Ha escogido la opcion para vender euros\n";
 std::cout<<"Recuerde que el precio de venta del euro es de: "<<kPreciodeVentaEuro;
 do {
 if (miCliente.saldo_dolares_<=0){
 miCliente.saldo_dolares_++;
 miCliente.saldo_euros_ --;
 }
 }
 while ()
}
