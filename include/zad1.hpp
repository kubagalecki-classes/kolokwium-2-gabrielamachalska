#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Warzywo
class Warzywo
{ 
    std::string nazwa;
    double      cena;
    int         kolor;
    static unsigned liczba_warzyw();

public:
    Warzywo(const std::string& n, double c, int k) : nazwa(n), cena(c), kolor(k) { ++liczba_warzyw; }
    ~Warzywo() { --liczba_warzyw; };
    static unsigned getVeg() { return liczba_warzyw; }
    void            opis(std::ostream& cout) const
    {
        cout << "[" << nazwa << "]: [ " << cena << "], [" << kolor << "]" std::endl;
    }
};
