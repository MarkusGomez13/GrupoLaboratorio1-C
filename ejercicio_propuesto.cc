#include <iostream>

int main () {
    
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



