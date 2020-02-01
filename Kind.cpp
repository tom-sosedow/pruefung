#include "Kind.hpp"
#include <stdexcept>

Kind::Kind(float a){
  gewicht = a;
}
float Kind::berechnePromille(){
  float sum = (alkoholgetrunken)/(gewicht * 0.75);
  if(sum < 0){
    throw std::out_of_range("Zu große Eingabe");
  }
  else{
    return sum;
  }
}

