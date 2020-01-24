#define RESET "\033[0m" // ANSI-ESCAPE-CODE für farbe zurücksetzen
#define BOLDRED "\033[1m\033[31m" // ANSI-ESCAPE-CODE für rote farbe und fette Schrift

#include <iostream>
#include "Mann.hpp"
#include "Frau.hpp"
#include "Kind.hpp"
#include "Getraenk.hpp"

/**
 * Gibt eine rote Warnmeldung aus, dass der Nutzer möglicherweie in Lebensgefahr schwebt.
 */
void warnmeldung();

int main(){
    int choice0; // Auswahlvariable, die vom Nutzer anhand der Menüoptionen gesetzt wird und mit switch statements überprüft wird
    int exit = 0; // Exitvariable um das Programm auf Wunsch des Nutzers zu terminieren. Das Programm läuft solange in einem Looop, bis der Nutezr das Programm beenden möchte, damit exit = 1 setzt und die Bedingung für die while Schleife ncith mehr erfüllt ist.
    float gewicht; // Gewicht des Nutzers, welches an die Funktionen zur Berechnung weietrer Werte übergeben wird
    float temp;

    while(exit != 1){
        try{
            std::cout << "Es handelt sich um ein/e/n: \n\t1) Mann \n\t2) Frau\n\t3) Kind \n\t4) Programm beenden\n\t";
            choice0 = Person::intEingabePruefen(4);
            if(choice0 != 4){
                std::cout << "Dein Körpergewicht vor dem Konsum: ";
                temp = Person::floatEingabePruefen();
                if (temp >= 0){
                    gewicht = temp;
                }
                else{
                    throw std::invalid_argument( "Falsche Eingabe");
                }
            }
            switch(choice0){
                case 1:{
                    Mann Nutzer(gewicht);
                    Nutzer.drinksAbfragen(Nutzer);
                    std::cout << "Du hast ca. " << Nutzer.berechnePromille() << " Promille Alkohol im Blut." << std::endl;
                    if(Nutzer.berechnePromille() > 3.0){
                        warnmeldung();
                    }
                }
                    break;
                case 2:{
                    Frau Nutzer(gewicht);
                    Nutzer.drinksAbfragen(Nutzer);
                    std::cout << "Du hast ca. " << Nutzer.berechnePromille() << " Promille Alkohol im Blut." << std::endl;
                    if(Nutzer.berechnePromille() > 3.0){
                        warnmeldung();
                    }
                }
                    break;
                case 3:{
                    Kind Nutzer(gewicht);
                    Nutzer.drinksAbfragen(Nutzer);
                    std::cout << "Du hast ca. " << Nutzer.berechnePromille() << " Promille Alkohol im Blut." << std::endl;
                    if(Nutzer.berechnePromille() > 3.0){
                        warnmeldung();
                    }
                }
                    break;
                case 4:
                    std::cout << "Ok. Das Programm wird beendet.\n";
                    exit = 1;
                    break;
                default:
                    std::cout << "Fehler. Falsche Eingabe. Bitte nur Zahlen von 1-4 eingeben";
                    break;
            }
        }
        catch(std::invalid_argument&  ausnahme){
            std::cerr << "Fehler! Überprüfe bitte deine Eingabe\n";           
        }
        
   }

    

}

void warnmeldung(){
    std::cout << BOLDRED << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\nACHTUNG! Suche schnellstens einen Arzt auf. Ab 3.5 Promille \nbesteht bei den meisten Menschen Lebensgefahr!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << RESET << std::endl;
}
