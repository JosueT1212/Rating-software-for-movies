#include <iostream>

using namespace std;
#include "PRc_04.cpp"




int main(){
Video V1("MOV","MOV1","Accion",2010,2);
Video V2("MOV","MOV2","Drama",9,2013,3);
Pelicula p1("MOV","MOV3","Suspenso",10,2018,2,5);
Pelicula p2("MOV","MOV4","Terror",7,2015,1,6);
Pelicula p3("MOV","MOV5","Comedia",4,2013,3,7);
Pelicula p4("MOV","MOV6","Documental",3,2020,2,8);
Serie s1("SER1","MOV7","Miniserie",7,2019,19,5);
Serie s2("SER2","MOV8","Accion",9,2005,25,7);
int n,k;
while(1){

cout<<"Elige 1 para Mostrar los videos en general"<<"\n";
cout<<"Elige 2 para Mostrar las series  con una calificación determinada"<<"\n";
cout<<"Elige 3 para Mostrar las películas con cierta calificación"<<"\n";
cout<<"Elige 4 para Calificar un video o serie "<<"\n";
cout<<"Elige 5 para Salir"<<"\n";
cin>>n;

if(n==1){
    cout<<"Los datos del video 1 son: "<<"\n";
    V1.muestraDatos();
    cout<<"\n";
       cout<<"Los datos del video 2 son: "<<"\n";
    V2.muestraDatos();
    cout<<"\n";
}else if(n==2){
    int k;
    cout<<"Introduce la calificacion determinada: "<<"\n";
    cin>>k;
if(s1.getCalificacion()==k){s1.muestraDatos(); cout<<"\n";}
if(s2.getCalificacion()==k){s2.muestraDatos(); cout<<"\n";}


}else if(n==3){

    int k;
    cout<<"Introduce la calificacion determinada: "<<"\n";
    cin>>k;
if(p1.getCalificacion()==k){p1.muestraDatos(); cout<<"\n";}
if(p2.getCalificacion()==k){p2.muestraDatos(); cout<<"\n";}
if(p3.getCalificacion()==k){p3.muestraDatos(); cout<<"\n";}
if(p4.getCalificacion()==k){p4.muestraDatos(); cout<<"\n";}



}else if(n==4){
string s;
int k,p;
cout<<"Introduce si quieres calificar un video o serie: "<<"\n";
cin>>s;
cout<<"Introduce que numero de "<<s<<" quieres calificar"<<"\n";
cin>>k;
cout<<"Introduce la calificacion que le quieres dar: "<<"\n";
cin>>p;
if(s=="video" && k==1){V1.calificaVideo(p); cout<<"\n";}
if(s=="video" && k==2){V2.calificaVideo(p); cout<<"\n";}
if(s=="serie" && k==1){s1.calificaVideo(p); cout<<"\n";}
if(s=="serie" && k==2){s2.calificaVideo(p); cout<<"\n";}
cout<<"Calificacion otorgada!"<<"\n";
}else break;


}





}

