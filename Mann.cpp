#include "Mann.hpp"

Mann::Mann(float a){
  gewicht = a;
}
float Mann::berechnePromille(){
  return (alkoholgetrunken)/(gewicht * 0.68);
}