#pragma once
#include "Person.hpp"

/**
 * Untertyp der Personenklasse. Spezifiziert im wesentlichen nur den Faktor für den Körperwasseranteil für die Promille-Berechnung.
 */

class Kind : public Person {
  public:
    /**
     * Erstellt ein Objekt vom Typ Kind, mit einem vom Nutzer eingegebenen Gewicht
     * 
     * @see class Mann
     * @see class Frau
     * @param gewicht Gewicht der Person
     */
    Kind(float);

    /**
     * Berechnet den Masseanteil des Alkohols im Körper unter Berücksichtigung des unterschiedlichen Körperwasseranteils zwischen Mann, Frau und Kind
     * 
     * @see class Person
     * @returns Masseanteild es Alkohols im Körper in Promille
     */
    float berechnePromille() override;
};
