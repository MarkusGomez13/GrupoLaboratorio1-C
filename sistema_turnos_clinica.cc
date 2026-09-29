#include <iostream>
#include <string>

struct Paciente 
{
std::string nombre_paciente_;
int anio_nacimiento_paciente_;
float peso_paciente_;
std::string tipo_sangre_paciente;
};
struct Nodo
{
struct Paciente paciente;
struct Nodo *siguiente;
struct Nodo *anterior;
};
//Declaracion de funciones usando referencias
void RegistrarPaciente (Nodo *&lista);

int main ()
{
Nodo *lista = nullptr;
Paciente pacientei;
pacientei.nombre_paciente_ = "";
pacientei.tipo_sangre_paciente = "";
pacientei.peso_paciente_ = 0;
pacientei.anio_nacimiento_paciente_ = 0;
RegistrarPaciente (lista);

}
void RegistrarPaciente (Nodo *&lista)
{
struct Nodo *nuevo_nodo = new Nodo;
nuevo_nodo->paciente = paciente;
std::cout<<"Bienvenido a la clinica\n";
std::cout<<"Ingrese su nombre,por favor"<<std::endl;
std::getline(std::cin,nuevo_nodo->paciente.nombre_paciente_);
std::cout<<"Ingrese su peso en kg";
std::cin>>nuevo_nodo->paciente.peso_paciente_;
std::cout<<"Ingrese su tipo de sangre";
std::cin>>nuevo_nodo->paciente.tipo_sangre_paciente;
std::cout<<"Ingrese su anio de nacimiento";
std::cin>>nuevo_nodo->paciente.anio_nacimiento_paciente_;
}
//funcion tipo struct 