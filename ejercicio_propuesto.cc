#include <iostream>

void Retiro(float *saldo, float monto);
int main () {
<<<<<<< HEAD
    
}
int ConsultarSaldo(int saldo) 
{
    std::cout << "Su saldo actual es: "<< saldo << std::endl;
    std::cout << "Gracias por utilizar el cajero automatico AhorraMas" << std::endl;
    return saldo;
}
void Deposito (float &saldo, float monto){
    float monto;

    std::cout<<"\n --Bienvenido a la cooperativa AhorroMas--\n";
    std::cout<<"\nCual es el monto que le gustaria depositar?\n";
    std::cin>>monto;
    if (monto < 0){
     std::cout<<"\n No se puede depositar un monto negativo\n";
     std::cout<<"\n Intente de nuevo :)\n";
    }
     else {
      saldo += monto ;
      std::cout<<"Ha depositado : "<<monto<<"\n Su nuevo saldo es de: "<<std::endl;
      std::cout<<"\n Su nuevo monto es: "<<saldo<<std::endl;
     }
    }



=======

void Retiro(float *saldo, float monto) {
    *saldo -= monto;
}
>>>>>>> Rama-Mateo
Cuenta cuenta;

    cuenta.saldo = 1000;

    std::cout << "Que desea hacer en la cuenta?" << std::endl;
    std::cout << "Ver saldo de la cuenta? (1)" << std::endl;
    std::cout << "Deposito en la cuenta? (2)" << std::endl;
    std::cout << "Retiro de la cuenta? (3)" << std::endl;



    std::cout << "Haciendo un monto:" << std::endl;
    Retiro(cuenta.saldo);


    return 0;
