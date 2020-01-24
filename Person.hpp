#pragma once
#include "Getraenk.hpp"

/**
 * Obertyp für einzelne Personentypen: Frau, Mann , Kind
 */

class Person {
  public:
    /**
     * Fügt die Menge des Alkohols (in g) im angegebenen Getränk der insgesamt getrunkenen Alkoholmenge hinzu
     * 
     * @param a vom Nutzer angegebenes Getränk
     * @param menge vom Nutzer angegebene Menge, wieviel er von der festen Menge des Getränks getrunken hat
     * @returns nichts
     */
    virtual void drinkHinzufuegen(Getraenk &a, float menge);

    /**
     * Berechnet mit der Formel [Alkoholmasse in g/Körpergewicht in kg * (Körperwassernteilsfaktor (Mamm:0.68, Frau:0.55, Kind:0.75))] und gibt die Promille der Person zurück
     * 
     * @returns Masseanteil des Alkohols im Körper in Promille
     */
    virtual float berechnePromille() = 0;

    /**
     * Fragt den Nutzer in einer Schleife alle Getränke ab, die er getrunken hat und addiert die Masse des Alkohols des jeweiligen gewählten Getränkes auf die Masse des getrunkenen Alkohols der Person auf

     * @param a Person, die vorher erstellt wurde, welche die Eingaben tätigt
     * @returns nichts
     */
    void drinksAbfragen(Person &a);

    /**
     * Prüft eine Eingabe vom Nutzer, ob es dem erwarteten Datentyp entspricht. Falls nicht, wirft es eine Ausnahme, beendet die Methode und der Nutzer startet wieder im vorherigen Menü
     * 
     * @returns Eingabe im Falle einer korrekten Eingabe
     */
    float eingabePruefen() const;

  protected:
    float gewicht; //!< Gewicht des Nutzers in kg
    int alkoholgetrunken = 0; //!< Menge des getrunkenen Alkohols in g
};
