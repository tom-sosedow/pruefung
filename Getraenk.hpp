#pragma once

/**
 * Klasse für einzelne Getränke, die Eigenschaften beinhaltet, die ein Getränk formal für die Berechnungen beschreiben: Masse des Alkohols für eine bestimmte Menge an Getränk  und einem bestimmten Volumenprozentanteil
 */

class Getraenk {
  public:
    /**
     * Erstellt ein Objekt/Getränk mit einem bestimmten Volumenprozentgehalt und einem Volumen. Beispiel: ein typisches Bier hat 5% und wird in einem 250ml Gefäß serviert.
     * Berechnet die Masse des Alkohols in einer "Einheit" des Getränks anhand des Volumenprozent des Getränks und der totalen Menge mit der Formel [(volumen * 0.8 * prozent)/100]
     * 
     * @param prozent Volumenprozent des Alkohols im Getränk
     * @param volumen Größe einer "Einheit", beispielsweise einer Dose oder eines Shot-Glässchens
     */
    Getraenk(float prozent, int volumen);
    
    /**
     * @returns Masse des Alkohols im gewählten Getränk in g
     */
    int getAlkoholMasse();
    
  protected:
    float volumenprozent; //!< Volumenprozent des Alkohols im Getränk
    float AlkoholMasse; //!< Masse des Alkohols in der gewählten Menge des Getränks
  private:
    
};


