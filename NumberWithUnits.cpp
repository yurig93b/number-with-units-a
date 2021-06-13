//
// Created by Yuri Grigorian on 19/04/2021.
//

#include "NumberWithUnits.hpp"

using namespace ariel;

NumberWithUnits::NumberWithUnits(int val, const std::string &unit){
    this->val = (double)val;
}

NumberWithUnits::NumberWithUnits(double val, const std::string &unit){
    this->val = val;
}

double NumberWithUnits::get_val() const{
    return this->val;
}

void NumberWithUnits::read_units(std::ifstream &ifs) {

}

NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits &n2) {
    return NumberWithUnits(0, "dummy");
}

NumberWithUnits NumberWithUnits::operator+() {
    return NumberWithUnits(0, "dummy");
}


NumberWithUnits &NumberWithUnits::operator+=(const NumberWithUnits &n2) {
    return *this;
}

NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits &n2) {
    return NumberWithUnits(0, "dummy");
}

NumberWithUnits NumberWithUnits::operator-() {
    return *this;
}

NumberWithUnits &NumberWithUnits::operator-=(const NumberWithUnits &n2) {
    return *this;
}

//
bool NumberWithUnits::operator==(const NumberWithUnits &n2) const{
    return true;
}

bool NumberWithUnits::operator!=(const NumberWithUnits &n2) const{
    return true;
}

//
bool NumberWithUnits::operator<(const NumberWithUnits &n2) const{
    return true;
}

bool NumberWithUnits::operator<=(const NumberWithUnits &n2) const{
    return true;
}

bool NumberWithUnits::operator>(const NumberWithUnits &n2) const{
    return true;
}

bool NumberWithUnits::operator>=(const NumberWithUnits &n2) const{
    return true;
}

//
NumberWithUnits &NumberWithUnits::operator++() {
    return *this;
}

NumberWithUnits &NumberWithUnits::operator--() {
    return *this;
}

NumberWithUnits NumberWithUnits::operator++(int _) {
    return *this;
}

NumberWithUnits NumberWithUnits::operator--(int _) {
    return *this;
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
