#include <iostream>
#include <string>

//Declaracion de variables globales
const int kCapacidadMaxima = 200;
int gespacios_disponibles = kCapacidadMaxima;
int gvehiculosactuales = 0;
//Se declara un array con la capacidad maxima
std::string capacidad_maxima [kCapacidadMaxima];
//Declaracion de funciones
void RegistrarDatos ();
void RegistrarSalida ();
void BuscarVehiculo ();
void ConsultarEstado ();



struct DatosVehiculo{
std::string placa_vehiculo_;
std::string tipo_vehiculo_;
std::string hora_entrada_;
char estado_actual_;
char agregar_nuevo_vehiculo_;
};
void RegistrarDatos (){
    DatosVehiculo obtenerdatos;
    obtenerdatos.placa_vehiculo_;
    obtenerdatos.tipo_vehiculo_;
    obtenerdatos.hora_entrada_;
    obtenerdatos.estado_actual_;
    obtenerdatos.agregar_nuevo_vehiculo_ = 's';

    while ((obtenerdatos.agregar_nuevo_vehiculo_ == 's' || obtenerdatos.agregar_nuevo_vehiculo_ == 'S') && gespacios_disponibles > 0){
    if (gespacios_disponibles < 0){
    std::cout<<"\n Lo sentimos el estacionamiento esta lleno\n";
    break;
}
    std::cout<<"\n Bienvenido al estacionamiento Tu Carro\n";
    std::cout<<"Espacios disponibles: "<<gespacios_disponibles<<"/"<<kCapacidadMaxima;
    std::cout<<"\n Ingrese su numero de placa por favor\n ";
    std::cin>>obtenerdatos.placa_vehiculo_;
    std::cout<<"\n Ingresar el tipo de vehiculo, por favor\n";
    std::cin>>obtenerdatos.tipo_vehiculo_;
    std::cout<<"\n Ingresar la hora de entrada por favor\n";
    std::cin>>obtenerdatos.hora_entrada_;
    capacidad_maxima [gvehiculosactuales] = obtenerdatos.placa_vehiculo_;
    gvehiculosactuales ++;
    gespacios_disponibles --;
    std::cout<<"\n Vehiculo registrado con exito :D\n Quedan: "<<gespacios_disponibles<<" Espacios disponibles";
    std::cout<<"\n Le gustaria ingresar otro vehiculo? (s/n)\n";
    std::cin>>obtenerdatos.agregar_nuevo_vehiculo_;

    }
    std::cout<<"Muchas gracias por utilizar nuestros servicios\n Tenga un buen dia";
};
void RegistrarSalida (){
std::string placa_a_buscar;
std::cout<<"Ha escogido la opcion para registrar la salida de su vehiculo\n";
std::cout<<"Ingrese la placa del vehiculo que esta saliendo\n";
std::cin>>placa_a_buscar;
bool encontrado = false;
int posicion = -1;
for (int i = 0; i < gvehiculosactuales; i++){
  if (capacidad_maxima [i] == placa_a_buscar){
    encontrado = true;
    posicion = i;
    break;
  }
  if (encontrado){
    for (int i = posicion; i < gvehiculosactuales -1;i++){
    capacidad_maxima [i] = capacidad_maxima [i+1];
  }

  
  capacidad_maxima [gvehiculosactuales - 1] = "";
  gvehiculosactuales --;
  gespacios_disponibles ++;
  std::cout<<"Vehiculo retirado con exito :D";
  std::cout<<"Espacios disponibles ahora: "<<gespacios_disponibles<<"/"<<kCapacidadMaxima;

  }
  else {
  std::cout<<placa_a_buscar<<" no se encuentra en nuestros registros";
  }
}
/*
for (int i = posicion; i < gvehiculosactuales -1; i ++){
    capacidad_maxima [i] = capacidad_maxima [i + 1];
}
capacidad_maxima [gvehiculosactuales -1] = "";
gvehiculosactuales --;
gespacios_disponibles ++;
*/
}
void BuscarVehiculo (){
std::string placa_a_buscar;
std::cout<<"Escogio la opcion para buscar un vehiculo usando su placa\n";
std::cout<<"Ingrese la placa a buscar\n";
std::cin>>placa_a_buscar;
bool encontrado = false;
for (int i = 0 ; i < gvehiculosactuales;i++){
if (capacidad_maxima [i] == placa_a_buscar){
encontrado = true;
break;
}
}
if (encontrado){
    std::cout<<"Encontrado el vehiculo con placa "<<placa_a_buscar<<"si se encuentra en el estacionamiento\n";
}
else {
    std::cout<<"La placa "<<placa_a_buscar<<" no se encuentra en el estacionamiento\n";

}

}
void ConsultarEstado (){
float porcentaje_ocupacion = (static_cast<float>(gvehiculosactuales)/kCapacidadMaxima)*100;
std::cout<<"-- Estado actual del estacionamiento --";
std::cout<<"Capacidad maxima "<<kCapacidadMaxima;
std::cout<<"Espacios ocupados: "<<gvehiculosactuales;
std::cout<<"Espacios libres: "<<gespacios_disponibles;
std::cout<<"Porcentaje de ocupacion: "<<porcentaje_ocupacion;
std::cout<<"-- Gracoas por visitarnos --";
}





int main (){
int opcion;
do{
 std::cout<<"\nMenu del estacionamiento\n";
 std::cout<<"Que le gustaria hacer el dia de hoy?\n";
 std::cout<<"1.Para Registrar Entrada del Vehiculo, 2.Para Registrar Salida del Vehiculo\n";
 std::cout<<"3.Para Buscar un vehiculo usando su placa, 4.Para consultar el estado del estacionamiento\n";
 std::cout<<"5. Para salir del Programa";
 std::cin>>opcion;
switch (opcion){
    case 1: 
    RegistrarDatos ();
    break;
    case 2: 
    RegistrarSalida ();
    break;
    case 3:
    BuscarVehiculo ();
    break;
    case 4:
    ConsultarEstado ();
    break;
    case 5:
    std::cout<<"Adios";
    break;
    default:
    std::cout<<"Esa opcion no existe\n";

} 
} while (opcion != 5);
return 0;

}





