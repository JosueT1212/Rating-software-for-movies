
#include<iostream>


using namespace std;

#include "PRh_04.h"




Video::Video(string _tipo,string _nom,string _gen,int _anoLanz,int _dur){
tipoVideo=_tipo;
nombreVideo=_nom;
genero=_gen;
anoLanzamiento=_anoLanz;
duracion=_dur;
}


Video::Video(string _tipo,string _nom,string _gen,int _cal,int _anoLanz,int _dur){
tipoVideo=_tipo;
nombreVideo=_nom;
genero=_gen;
calificacion=_cal;
anoLanzamiento=_anoLanz;
duracion=_dur;
}

int Pelicula::getCalificacion(){

return calificacion;

}
void Video::calificaVideo(int _cal){

calificacion=_cal;
}


void Video::muestraDatos(){

cout<<"El tipo de video es: "<<tipoVideo<<"\n";
cout<<"El nombre del video es: "<<nombreVideo<<"\n";
cout<<"El genero del video es: "<<genero<<"\n";
if(calificacion<10)
cout<<"La calificacion del video es: "<<calificacion<<"\n";
cout<<"El ano de lanzamiento del video es: "<<anoLanzamiento<<"\n";
cout<<"La duracion del video es: "<<duracion<<"\n";



}

Serie::Serie(string _tipo,string _nom,string _gen,int _cal,int _anoLanz,int _dur,int _tempo):Video( _tipo,_nom, _gen, _cal, _anoLanz, _dur){
temporadas=_tempo;

}
void Serie::muestraDatos(){
Video::muestraDatos();
cout<<"la cantidad de episodios son: "<<temporadas<<"\n";

}
int Serie :: getCalificacion(){
return calificacion;

}

Pelicula::Pelicula(string _tipo,string _nom,string _gen,int _cal,int _anoLanz,int _dur,int nom):Video( _tipo, _nom, _gen, _cal,_anoLanz, _dur){
nominaciones=nom;
}

void Pelicula::muestraDatos(){
Video::muestraDatos();
cout<<"La cantidad de nominaciones es: "<<nominaciones<<"\n";
}
