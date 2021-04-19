//
// Created by Yuri Grigorian on 19/04/2021.
//

#include "NumberWithUnits.hpp"

using namespace ariel;

NumberWithUnits::NumberWithUnits(double val, const std::string &unit){
    this->val = val;
}

double NumberWithUnits::get_val() const{
    return this->val;
}

void NumberWithUnits::read_units(std::ifstream &ifs) {

}

NumberWithUnits ariel::operator+(const NumberWithUnits &n1, const NumberWithUnits &n2) {
    return NumberWithUnits(0, "dummy");
}

NumberWithUnits ariel::operator+(const NumberWithUnits &n1) {
    return NumberWithUnits(0, "dummy");
}


NumberWithUnits &ariel::operator+=(NumberWithUnits &n1, const NumberWithUnits &n2) {
    return n1;
}

NumberWithUnits ariel::operator-(const NumberWithUnits &n1, const NumberWithUnits &n2) {
    return NumberWithUnits(0, "dummy");
}

NumberWithUnits ariel::operator-(const NumberWithUnits &n1) {
    return n1;
}

NumberWithUnits &ariel::operator-=(NumberWithUnits &n1, const NumberWithUnits &n2) {
    return n1;
}

//
bool ariel::operator==(const NumberWithUnits &n1, const NumberWithUnits &n2) {
    return true;
}

bool ariel::operator!=(const NumberWithUnits &n1, const NumberWithUnits &n2) {
    return true;
}

//
bool ariel::operator<(const NumberWithUnits &n1, const NumberWithUnits &n2) {
    return true;
}

bool ariel::operator<=(const NumberWithUnits &n1, const NumberWithUnits &n2) {
    return true;
}

bool ariel::operator>(const NumberWithUnits &n1, const NumberWithUnits &n2) {
    return true;
}

bool ariel::operator>=(const NumberWithUnits &n1, const NumberWithUnits &n2) {
    return true;
}

//
NumberWithUnits &ariel::operator++(NumberWithUnits &n1) {
    return n1;
}

NumberWithUnits &ariel::operator--(NumberWithUnits &n1) {
    return n1;
}

NumberWithUnits ariel::operator++(const NumberWithUnits &n1, int _) {
    return n1;
}

NumberWithUnits ariel::operator--(const NumberWithUnits &n1, int _) {
    return n1;
}

//
NumberWithUnits ariel::operator*(double factor, const NumberWithUnits &n1) {
    return n1;
}

//
std::ostream &ariel::operator<<(std::ostream &output, const NumberWithUnits &n1) {
    return output;
}

std::istream &ariel::operator>>(std::istream &input, NumberWithUnits &n1) {
    return input;
}
