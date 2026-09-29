#include <iostream>
#include <string>
#include <random>

struct Tienda;
int opcion;
float costo;
bool descuento;

struct Inventario_Verduras {
std::string Papas;
std::string Tomates;
std::string Broccoli;
};
struct Inventario_Carnes{
std::string Pollo;
std::string Res;
std::string Cerdo;
};
struct Inventario_Snacks{
std::string Galletas;
std::string Churros;
std::string Gomitas;
};

//Declaracion de funciones:
void Bienvenida ();
float Tiene_Descuento (descuento);
float Checkout (costo);

 void Bienvenida (){
    std::cout<<"\n Bienvenido a mi tienda :D\n";
    std::cout<<"\n Que te gustaria comprar el dia de hoy?\n";
    std::cout<<"\n Las opciones disponibles son: \n";
    std::cout<<"\n 1. Verduras \n 2. Carnes \n 3. Lacteos\n";
    int opcion;
    std::cin>>opcion;
    switch (opcion){
    case 1: {
    std::cout<<"Ha seleccionado las verduras\n Siempre contamos con verduras frescas";
    Inventario_Verduras misVerduras;
    misVerduras.Papas;
    misVerduras.Tomates;
    misVerduras.Broccoli;
    std::cout<<"El dia de hoy tenemos: "<<misVerduras.Papas <<"," <<misVerduras.Tomates << "y";
    std::cout<<misVerduras.Broccoli;
    std::string VerduraElegida;
    std::cout<<"Escribe el nombre de la verdura elegida: \n";
    std::cin>>VerduraElegida;
     if (VerduraElegida == misVerduras.Papas || VerduraElegida == "papas"){
        std::cout<<"Excelente eleccion ha escogido papas \n";
     }
     else if (VerduraElegida == misVerduras.Tomates || VerduraElegida == "tomates"){
        std::cout<<"Excelente eleccion ha escogido tomates \n";
     }
     else if (VerduraElegida == misVerduras.Broccoli || VerduraElegida == "broccoli"){
        std::cout<<"Excelente eleccion ha escogido broccoli \n";

     }
     else{
        std::cout<<"Esa opcion no existe \n Intente de nuevo\n";
     }
     break;
    }
    case 2: {
    std::cout<<"Excelente opcion\n Siempre tenemos carnes de calidad y buen precio\n";
    Inventario_Carnes misCarnes;
    misCarnes.Cerdo;
    misCarnes.Pollo;
    misCarnes.Res;
    std::cout<<"El dia de hoy tenemos: "<<misCarnes.Cerdo <<"," <<misCarnes.Pollo <<"y"<<misCarnes.Res;
    std::cout<<"Ingrese el nombre de la carne escogida: \n";
    std::string CarneElegida;
    std::cin>>CarneElegida;
      if (CarneElegida == misCarnes.Cerdo || CarneElegida == "cerdo"){
        std::cout<<"Excelente opcion, ha escogido cerdo";
        
      }
      else if (CarneElegida == misCarnes.Pollo || CarneElegida == "pollo"){
        std::cout<<"Excelente opcion,ha escogido pollo\n";

      }
      else if (CarneElegida == misCarnes.Res || CarneElegida == "res"){
        std::cout<<"Excelente opcion,ha escogido res\n";

      }
      else {
        std::cout<<"Opcion no valida\n Intente de nuevo\n";

      }
      break;
    }
    case 3: {
     std::cout<<"Excelente opcion ha escogido snacks\n";
     Inventario_Snacks misSnacks;
     misSnacks.Galletas;
     misSnacks.Churros;
     misSnacks.Galletas;
     std::cout<<"El dia de hoy tenemos: "<<misSnacks.Galletas <<","<<misSnacks.Churros <<"y";
     std::cout<<misSnacks.Gomitas;
     std::cout<<"Ingrese el snack que quisiera: "<<std::endl;
     std::string SnackElegido;
     std::cin>>SnackElegido;
     if (SnackElegido == misSnacks.Galletas || SnackElegido == "galleta"){
        std::cout<<"Excelente opcion ha escogido Galletas";

     }
     else if (SnackElegido == misSnacks.Churros || SnackElegido == "churro"){
     std::cout<<"Excelente opcion ha escogido Churros";

    }
    
    else if (SnackElegido == misSnacks.Gomitas || SnackElegido == "gomitas"){
    std::cout<<"Excelente opcion ha escogido Gomitas";
    }
    break;
    }

    };
 
int main (){
    Bienvenida ();
    return 0;
}