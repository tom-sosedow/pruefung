#include "Kind.hpp"
Kind::Kind(float a){
  gewicht = a;
}
float Kind::berechnePromille(){
  return (alkoholgetrunken)/(gewicht * 0.75);
}

