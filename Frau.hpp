#pragma once
#include "Person.hpp"

/**
 * Untertyp der Personenklasse. Spezifiziert im wesentlichen nur den Faktor für den Körperwasseranteil für die Promille-Berechnung.
 */

class Frau : public Person {
  public:
    /**
     * Erstellt ein Objekt vom Typ Frau
     * @see class Mann
     * @see class Frau
     * @param gewicht Gewicht der Person
     */
    Frau(float gewicht);

    /**
     * Berechnet den Masseanteil des Alkohols im Körper unter Berücksichtigung des unterschiedlichen Körperwasseranteils zwischen Mann, Frau und Kind
     * Wirft out_of_range wenn die Alkoholsumme zu groß für den Datentyp float (ca. 3.4E38) wird.
     * 
     * @see class Person
     * @returns Masseanteil des Alkohols im Körper in Promille
     */
    float berechnePromille() override;
};
