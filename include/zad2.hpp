#pragma once

#include "catch.hpp"
#include "chrup.hpp"

// tutaj klasy Ogorek, Zielony i Kiszony
class Ogorek
{
public: 
	virtual std::string chrup() = 0;

};

class Zielony : public Ogorek
{
    std::string chrup() {return chrupZielony}
};

class Kiszony : public Ogorek
{
    std::string chrup() {return chrupKiszony}
};

