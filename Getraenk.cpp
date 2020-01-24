#include "Getraenk.hpp"


Getraenk::Getraenk(float prozent, int volumen){
    AlkoholMasse =  (volumen * 0.8 * prozent)/100;
    volumenprozent = prozent;
}

int Getraenk::getAlkoholMasse(){
    return AlkoholMasse;
}
