#include "Person.hpp"
//#include "Ausnahmen.hpp"
#include <iostream>
void Person::drinkHinzufuegen(Getraenk &a, float menge){
    
  alkoholgetrunken = alkoholgetrunken + (a.getAlkoholMasse() * menge);
}

void Person::drinksAbfragen(Person &a){
  
  Getraenk Bier(5, 250);
  Getraenk SektWein(11, 250);
  Getraenk Schnaps(38, 20);
  Getraenk Likoer(20, 20);
  Getraenk Cidre(4, 250);
  Getraenk WodkaTequila(40, 20);
  Getraenk Rum(70, 20);
  int choice1;
  float volprozent;
  float menge;
  int exit = 0;
  
  while(exit != 1){
    try{
      std::cout << "\nWas hast du alles getrunken?\n\t1) Bier\t\t\t(05 VOL%, 250ml)\n\t2) Sekt/Wein\t\t(11 VOL%, 250ml)\n\t3) Schnaps\t\t(38 VOL%, 20ml)\n\t4) Likör\t\t(20 VOL%, 20ml)\n\t5) Cidre/Apfelwein\t(04 VOL%, 250ml)\n\t6) Wodka/Tequila\t(40 VOL%, 20ml)\n\t7) Original Rum\t\t(70 VOL%, 20ml)\n\t8) Eigenes Getränk\n\t9) Fertig\n\t";
      if(!(std::cin >> choice1)){
        std::cin.clear();
        std::cin.ignore(INT8_MAX, '\n');
        throw std::runtime_error("Falsche Eingabe");
      }
    
      switch(choice1){
        case 1:{
          std::cout << "Wieviele Gläser á 250ml hast du getrunken?\n";
          menge = eingabePruefen();
          a.drinkHinzufuegen(Bier, menge);
          break;
        }
        case 2:{
          std::cout << "Wieviele Gläser á 250ml hast du getrunken?\n";
          menge = eingabePruefen();
          a.drinkHinzufuegen(SektWein, menge);
        }
          break;
        case 3:{
          std::cout << "Wieviele Gläser á 20ml hast du getrunken?\n";
          menge = eingabePruefen();
          a.drinkHinzufuegen(Schnaps, menge);
        }
          break;
        case 4:{
          std::cout << "Wieviele Gläser á 20ml hast du getrunken?\n";
          menge = eingabePruefen();
          a.drinkHinzufuegen(Likoer, menge);
        }
          break;
        case 5:{
          std::cout << "Wieviele Gläser á 250ml hast du getrunken?\n";
          menge = eingabePruefen();
          a.drinkHinzufuegen(Cidre, menge);
        }
          break;
        case 6:{
          std::cout << "Wieviele Gläser á 20ml hast du getrunken?\n";
          menge = eingabePruefen();
          a.drinkHinzufuegen(WodkaTequila, menge);
        }
          break;
        case 7:{
          std::cout << "Wieviele Gläser á 20ml hast du getrunken?\n";
          menge = eingabePruefen();
          a.drinkHinzufuegen(Rum, menge);
        }
          break;
        case 8:{
          std::cout << "Volumenprozent des Getränks: ";
          volprozent = eingabePruefen();
          if(volprozent > 0 && volprozent <= 100){
            std::cout << "Wieviel ml hast du davon getrunken? ";
            menge = eingabePruefen();
            if(menge > 0){
              Getraenk eigenes(volprozent, menge);
              a.drinkHinzufuegen(eigenes, 1);
            }
            else{
              throw std::runtime_error("Falsche Eingabe");
            }
          }
          else{
            throw std::runtime_error("Falsche Eingabe");
          }
        }
          break;
        case 9:
          std::cout << "Ok.\n";
          exit = 1;
          break;
        default:
          throw std::runtime_error("Falsche Eingabe");
          break;
      }
    }
    catch(std::runtime_error& ausnahme){
            std::cerr << "Fehler! Überprüfe bitte deine Eingabe.\n";          
        }
  }
  
}

float Person::eingabePruefen() const{
  float eingabe;
  if(!(std::cin >> eingabe) || eingabe <= 0){
            std::cin.clear();
            std::cin.ignore(INT8_MAX, '\n');
            throw std::runtime_error("Falsche Eingabe");
          }
  else{
    return eingabe;
  }
}
