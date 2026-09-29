#include <iostream>
#include <string>


//Definicion de variable global
float gpromedio_general_consumo;
//Declaracion de struct
struct Consumo{
    std::string nombre_mes_;
    float kWh_;
};
//Declaracion de funciones
//Funcion para solicitar datos
void SolicitarDatos (Consumo *ptr);
    
//Funcion void para imprimir informacion
void ImprimirDatos (Consumo *ptr);

int main (){

//Solicitar meses a registrar
int cantidad_meses;
std::cout<<"Ingrese la cantidad de meses a registrar: "<<"\n";
std::cin>>cantidad_meses;

//Reserva de memoria para el arreglo
Consumo *ptr_consumo = new Consumo [cantidad_meses];
for (int i = 0; i < cantidad_meses; i++){
   SolicitarDatos (ptr_consumo + i); 

   
}
for (int i = 0; i < cantidad_meses; i++){
    ImprimirDatos (ptr_consumo + i);
}
//Liberacion de memoria
delete ptr_consumo;
//Inicializar a nulo el puntero
ptr_consumo = nullptr;
return 0;
}
void SolicitarDatos (Consumo *ptr){
    std::cout<<"Ingrese el nombre del mes: \n";
    std::cin>>ptr->nombre_mes_;
    std::cout<<"Ingresar la cantidad de kWh que fue consumida: \n";
    std::cin>>ptr->kWh_;
}
void ImprimirDatos (Consumo *ptr){
    std::cout<<"\n Direccion de memoria: \n";
    std::cout<<"Mes: "<<ptr->nombre_mes_<<"\n";
    std::cout<<"Direccion: "<<&ptr->nombre_mes_<<"\n";
    std::cout<<"kWh: "<<ptr->kWh_<<"\n";
    std::cout<<"Direccion: "<<&ptr->kWh_<<"\n";

        
    }


    
    

