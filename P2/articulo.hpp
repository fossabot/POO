
#ifndef ARTICULO_H
#define ARTICULO_H
#include <iostream>
#include "fecha.hpp"
#include "cadena.hpp"

class Articulo {

public:
  Articulo(Cadena r, Cadena tit, Fecha fe, double pr, unsigned s): cod_refer(r),t(tit),f(fe), p(pr),num_ejemplares(s){}
  Fecha f_publi() const {return f;}
  Cadena referencia()const {return cod_refer;}
  Cadena titulo() const {return t;}
  double precio() const {return p;}
  unsigned stock() const {return num_ejemplares;}
  double& precio()  {return p;}
  unsigned& stock() {return num_ejemplares;}
  

private:
    Fecha f;
    Cadena cod_refer;
    Cadena t;
    double p;
    unsigned num_ejemplares;

};

ostream& operator << (ostream& os,const Articulo& art);

#endif
