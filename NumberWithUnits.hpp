//
// Created by Yuri Grigorian on 19/04/2021.
//

#ifndef NUMBER_WITH_UNITS_A_NUMBERWITHUNITS_HPP
#define NUMBER_WITH_UNITS_A_NUMBERWITHUNITS_HPP

#include <string>
#include <iostream>

namespace ariel{

    class NumberWithUnits{
        double val;

        public:
            NumberWithUnits(double val, const std::string &unit);
            double get_val() const;

            static void read_units(std::ifstream &ifs);

            friend NumberWithUnits operator+(const NumberWithUnits &n1, const NumberWithUnits &n2);

            friend NumberWithUnits operator+(const NumberWithUnits &n1);
            friend NumberWithUnits& operator+=(NumberWithUnits &n1, const NumberWithUnits &n2);
            friend NumberWithUnits operator-(const NumberWithUnits &n1, const NumberWithUnits &n2);
            friend NumberWithUnits operator-(const NumberWithUnits &n1);
            friend NumberWithUnits& operator-=(NumberWithUnits &n1, const NumberWithUnits &n2);

            friend bool operator==(const NumberWithUnits &n1, const NumberWithUnits &n2);
            friend bool operator!=(const NumberWithUnits &n1, const NumberWithUnits &n2);

            friend bool operator<(const NumberWithUnits &n1, const NumberWithUnits &n2);
            friend bool operator<=(const NumberWithUnits &n1, const NumberWithUnits &n2);
            friend bool operator>(const NumberWithUnits &n1, const NumberWithUnits &n2);
            friend bool operator>=(const NumberWithUnits &n1, const NumberWithUnits &n2);

            friend NumberWithUnits& operator++(NumberWithUnits &n1);
            friend NumberWithUnits& operator--(NumberWithUnits &n1);
            friend NumberWithUnits operator++(const NumberWithUnits &n1, int _);
            friend NumberWithUnits operator--(const NumberWithUnits &n1, int _);

            friend NumberWithUnits operator* (double factor, const NumberWithUnits &n1);

            friend std::ostream& operator<<( std::ostream &output, const NumberWithUnits &n1);
            friend std::istream& operator>>( std::istream  &input, NumberWithUnits &n1);

    };

}
#endif //NUMBER_WITH_UNITS_A_NUMBERWITHUNITS_HPP
