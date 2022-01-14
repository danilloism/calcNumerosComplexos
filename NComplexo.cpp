#include "NComplexo.h"

namespace dnn {

NComplexo::NComplexo():
    parteReal(0),
    parteImaginaria(0)
{

}

QString NComplexo::get() const
{
    QString saida = QString::number(parteReal);
    saida += " + ";
    saida += QString::number(parteImaginaria);
    saida += "i";
    return saida;
}

void NComplexo::set(int parteReal, int parteImaginaria)
{
    this->parteReal = parteReal;
    this->parteImaginaria = parteImaginaria;
}

NComplexo NComplexo::operator +(NComplexo &objeto) const //(a+bi)+(c+di) = (a+c)+(b+d)i;
{
    int pr = this->parteReal+objeto.parteReal;
    int pi = this->parteImaginaria+objeto.parteImaginaria;

    NComplexo retorno;
    retorno.set(pr,pi);
    return retorno;
}

NComplexo NComplexo::operator -(NComplexo &objeto) const //(a+bi)−(c+di) = (a−c)+(b−d)i;
{
    int pr = this->parteReal-objeto.parteReal;
    int pi = this->parteImaginaria-objeto.parteImaginaria;

    NComplexo retorno;
    retorno.set(pr,pi);
    return retorno;
}

NComplexo NComplexo::operator *(NComplexo &objeto) const //(a+bi)∗(c+di) = (ac−bd)+(ad+bc)i
{
    int pr = (this->parteReal*objeto.parteReal)-(this->parteImaginaria*objeto.parteImaginaria);
    int pi = (this->parteReal*objeto.parteImaginaria)+(this->parteImaginaria*objeto.parteReal);

    NComplexo retorno;
    retorno.set(pr,pi);
    return retorno;
}

NComplexo NComplexo::operator /(NComplexo &objeto) const //(a+bi)/(c+di) = (ac+bd)/(c2+d2) + ((bc-ad)/(c2+d2))i;
{
    int pr = (this->parteReal*objeto.parteReal+this->parteImaginaria*objeto.parteImaginaria)/(objeto.parteReal*objeto.parteReal+objeto.parteImaginaria*objeto.parteImaginaria);
    int pi = (this->parteImaginaria*objeto.parteReal-this->parteReal*objeto.parteImaginaria)/(objeto.parteReal*objeto.parteReal+objeto.parteImaginaria*objeto.parteImaginaria);

    NComplexo retorno;
    retorno.set(pr,pi);
    return retorno;
}

}

