#include "Frau.hpp"
#include <stdexcept>

Frau::Frau(float a){
  gewicht = a;
}
float Frau::berechnePromille(){
  float sum = (alkoholgetrunken)/(gewicht * 0.55);
  if(sum < 0){
    throw std::out_of_range("Zu große Eingabe");
  }
  else{
    return sum;
  }
}
