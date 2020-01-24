#include "Frau.hpp"
Frau::Frau(float a){
  gewicht = a;
}
float Frau::berechnePromille(){
  return (alkoholgetrunken)/(gewicht * 0.55);
}
