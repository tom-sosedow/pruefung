#include "Getraenk.hpp"


Getraenk::Getraenk(float prozent, float volumen){
    AlkoholMasse =  (volumen * 0.8 * prozent)/100;
    volumenprozent = prozent;
}

const float Getraenk::getAlkoholMasse(){
    return AlkoholMasse;
}
