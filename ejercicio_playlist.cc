#include <iostream>
#include <string>
/*Una aplicación musical necesita administrar una playlist creada por el usuario. Cada
canción posee un título, artista, duración en segundos, número de reproducciones y un
indicador que determina si ha sido marcada como favorita.
El programa debe permitir reproducir una canción, incrementando su contador de
reproducciones, así como marcar o desmarcar canciones como favoritas.
El usuario podrá consultar las canciones favoritas, conocer cuál ha sido la canción
más reproducida y obtener la duración total de la playlist.
Además, el sistema deberá mostrar estadísticas generales de la playlist, como número
de canciones, cantidad de canciones favoritas y total acumulado de reproducciones.*/
struct PlaylistUsuario{
    struct DetallesCancion{
    std::string titulo_cancion_;
    std::string artista_cancion_;
    int duracion_cancion_;
    int numero_reproducciones_cancion;
    bool favorita = false;
    }
    DetallesCancion [5];
};
//Declaracion de funciones
void ReproducirCancion (PlaylistUsuario& miPlaylist);
void ConsultarFavoritos (const PlaylistUsuario& miPlaylist);
//void MostrarEstadisticas ();

int main (){
PlaylistUsuario miPlaylist;
    miPlaylist.DetallesCancion [0].artista_cancion_="Bad Bunny";
    miPlaylist.DetallesCancion [0].titulo_cancion_="Te bote-Remix";
    miPlaylist.DetallesCancion [0].duracion_cancion_= 180;
    miPlaylist.DetallesCancion [0].favorita=false;
    miPlaylist.DetallesCancion [0].numero_reproducciones_cancion = 0;

    miPlaylist.DetallesCancion [1].artista_cancion_="Bjork";
    miPlaylist.DetallesCancion [1].titulo_cancion_="Joga";
    miPlaylist.DetallesCancion [1].duracion_cancion_= 287;
    miPlaylist.DetallesCancion [1].favorita=true;
    miPlaylist.DetallesCancion [1].numero_reproducciones_cancion = 0;
    
    miPlaylist.DetallesCancion [2].artista_cancion_="Phoebe Bridgers";
    miPlaylist.DetallesCancion [2].titulo_cancion_="The governor's waltz";
    miPlaylist.DetallesCancion [2].duracion_cancion_= 207;
    miPlaylist.DetallesCancion [2].favorita=true;
    miPlaylist.DetallesCancion [2].numero_reproducciones_cancion = 0;
    
    miPlaylist.DetallesCancion [3].artista_cancion_="Fiona Apple";
    miPlaylist.DetallesCancion [3].titulo_cancion_="Paper Bag";
    miPlaylist.DetallesCancion [3].duracion_cancion_=219;
    miPlaylist.DetallesCancion [3].favorita=true;
    miPlaylist.DetallesCancion [3].numero_reproducciones_cancion = 0;

    miPlaylist.DetallesCancion [4].artista_cancion_="Rosalia";
    miPlaylist.DetallesCancion [4].titulo_cancion_="Pienso en tu mira";
    miPlaylist.DetallesCancion [4].duracion_cancion_=193;
    miPlaylist.DetallesCancion [4].favorita=true;
    miPlaylist.DetallesCancion [4].numero_reproducciones_cancion = 0;

int opcion;
do{
std::cout<<"\nBienvenido a tu aplicacion de musica favorita :D\n";
std::cout<<"\nQue quieres hacer el dia de hoy?\n";
std::cout<<"\n1. Reproducir cancion\n2. Consultar canciones favoritas\n3. Mostrar estadisticas\n4. Para Salir";

std::cin>>opcion;

switch (opcion){
case 1:
ReproducirCancion (miPlaylist);
break;
case 2:
ConsultarFavoritos (miPlaylist);
break;
/*case 3:
MostrarEstadisticas ();
break;*/
case 4:
break;
default:
std::cout<<"\nOpcion no existente, Intente de nuevo :C\n";
}
}
while (opcion !=4);


std::cout<<"\nGracias por utilizar nuestra app. Ten un buen dia :)\n";
}
//Declaracion funcion Reproducir Cancion
void ReproducirCancion (PlaylistUsuario &miPlaylist){

    int cancion_a_reproducir;
    std::cout<<"\nElegiste la opcion reproducir cancion\n";
    std::cout<<"\nQue cancion quieres reproducir?\n";
    
    
    for (int i = 0; i < 5; i++){
        std::cout<<i + 1<<"-"<<miPlaylist.DetallesCancion[i].titulo_cancion_<<"\n";
        
    }
    std::cin>>cancion_a_reproducir;

    if (cancion_a_reproducir >= 1 && cancion_a_reproducir <= 5 ){
    int indice = cancion_a_reproducir - 1;
    std::cout<<"Reproduciendo "<<miPlaylist.DetallesCancion[indice].titulo_cancion_<<" de "<<miPlaylist.DetallesCancion[indice].artista_cancion_;
    miPlaylist.DetallesCancion[indice].numero_reproducciones_cancion++;
    }
}
void ConsultarFavoritos (const PlaylistUsuario& miPlaylist){
    std::cout<<"Haz seleccionado la opcion para ver tus canciones y artistas favoritos :D";
    for (int i = 0; i < 5; i++){
        if (miPlaylist.DetallesCancion[i].favorita == true){
        std::cout<<"--Canciones Favoritas :D\n";
        std::cout<<"-"<<miPlaylist.DetallesCancion[i].titulo_cancion_<<"\n";
        std::cout<<"-"<<miPlaylist.DetallesCancion[i].artista_cancion_<<"\n";
        }
    }
    std::cout<<"Cancion mas reproducida :D\n";
    int max_reproducciones = -1;
    int top_reproducciones = 0;
    for (int i = 0; i < 5; i++){
        if (miPlaylist.DetallesCancion[i].numero_reproducciones_cancion > max_reproducciones){
        max_reproducciones = miPlaylist.DetallesCancion[i].numero_reproducciones_cancion;
        top_reproducciones = i;
        }
    }
    if (max_reproducciones > 0){
        std::cout<<"La cancion mas escuchada es: "<<miPlaylist.DetallesCancion[top_reproducciones].titulo_cancion_
        <<"con "<<max_reproducciones<<" reproducciones";

    }
    else{
    std::cout<<"Aun no has reproducido ninguna cancion :(\n";

    }
}   
