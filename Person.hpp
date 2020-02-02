#pragma once
#include "Getraenk.hpp"

/**
 * Obertyp für einzelne Personentypen, z.B.: Frau, Mann , Kind
 */

class Person {
  public:
    /**
     * Fügt die Menge des Alkohols (in g) im angegebenen Getränk der insgesamt getrunkenen Alkoholmenge hinzu
     * 
     * @param a Getränk dessen spezifische Alkoholmasse hinzugefügt werden soll
     * @param menge wie oft eine Einheit (mit vorbestimmter Menge) des Getränks a getrunken wurde
     */
    virtual void drinkHinzufuegen(Getraenk &a, float menge);

    /**
     * Berechnet mit der Formel [Alkoholmasse in g/Körpergewicht in kg * (Körperwassernteilsfaktor (Mann:0.68, Frau:0.55, Kind:0.75))] und gibt die Promille der Person zurück
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
     * Prüft eine Eingabe vom Nutzer. Richtig formatierte Eingaben werden zurückgegeben und bei Zahlen, bei denen nur ein Komma 
     * anstelle eines Punktes verwendet wurde, wird das Komma durch einen Punkt für die Konvertierung zu float ausgetauscht.
     * 
     * @returns korrekte Eingaben (float) oder wirft einen runtime_error bei falschen Formatierungen (Sonderzeichen, mehr als ein Punkt/Komma)
     */
    static float floatEingabePruefen();
    /**
     * Prüft eine Eingabe vom Nutzer. Richtig formatierte Eingaben werden zurückgegeben und bei Zahlen, bei denen nur ein Komma 
     * anstelle eines Punktes verwendet wurde, wird das Komma durch einen Punkt für die Konvertierung zu float ausgetauscht.
     * 
     * @param i Obergrenze für Auswahl.
     * @returns korrekte Eingaben (int) oder wirft einen runtime_error bei falschen Formatierungen (Sonderzeichen) oder zu großer Zahl.
     */
    static int intEingabePruefen(int i);

  protected:
    float gewicht; //!< Gewicht des Nutzers in kg
    float alkoholgetrunken = 0; //!< Menge des getrunkenen Alkohols in g
};
