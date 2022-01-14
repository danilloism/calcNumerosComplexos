#ifndef NCOMPLEXO_H
#define NCOMPLEXO_H
#include<QString>

namespace dnn{

class NComplexo
{
    //Atributos
private:
    int parteReal;
    int parteImaginaria;
public:
    NComplexo();
    QString get()const;
    void set(int parteReal, int parteImaginaria);
    NComplexo operator +(NComplexo &objeto)const;
    NComplexo operator -(NComplexo &objeto)const;
    NComplexo operator *(NComplexo &objeto)const;
    NComplexo operator /(NComplexo &objeto)const;
    bool operator ==(NComplexo &objeto)const{return (this->parteReal==objeto.parteReal && this->parteImaginaria==objeto.parteImaginaria) ? true : false;}
    bool operator !=(NComplexo &objeto)const{return (this->parteReal!=objeto.parteReal || this->parteImaginaria!=objeto.parteImaginaria) ? true : false;}
};

}

#endif // NCOMPLEXO_H
