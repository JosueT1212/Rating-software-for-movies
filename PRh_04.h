#ifndef PRH_04_H_INCLUDED
#define PRH_04_H_INCLUDED

#include<iostream>
using namespace std;


class Video{

protected:
    string tipoVideo;
    string nombreVideo;
    string genero;
    int calificacion;
    int anoLanzamiento;
    int duracion;
public:
    Video(string _tipo,string _nom,string _gen,int _anoLanz,int _dur);
    Video(string _tipo,string _nom,string _gen,int _cal,int _anoLanz,int _dur);

     void calificaVideo(int _cal);
   virtual void muestraDatos();


};

class Pelicula: public Video{
private:
    int nominaciones;
public:
    Pelicula(string,string,string,int,int,int,int);
    void muestraDatos();
    int getCalificacion();



};


class Serie : public Video{
private:
    int temporadas;
public:
    Serie(string,string,string,int,int,int,int);
    void muestraDatos();
    int getCalificacion();

};


#endif // PRH_04_H_INCLUDED
