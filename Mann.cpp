#include "Mann.hpp"
#include <stdexcept>
Mann::Mann(float a){
  gewicht = a;
}
float Mann::berechnePromille(){
  float sum = (alkoholgetrunken)/(gewicht * 0.68);
  if(sum < 0){
    throw std::out_of_range("Zu große Eingabe");
  }
  else{
    return sum;
  }
}