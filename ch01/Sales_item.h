#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>


struct Sales_item {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;


    std::string isbn() const { return bookNo; }
};


inline std::istream& operator>>(std::istream& in, Sales_item& s) {
    double price;
    in >> s.bookNo >> s.units_sold >> price;
    s.revenue = s.units_sold * price;
    return in;
}


inline std::ostream& operator<<(std::ostream& out, const Sales_item& s) {
    out << s.bookNo << " " << s.units_sold << " " << s.revenue;
    return out;
}


inline Sales_item operator+(const Sales_item& lhs, const Sales_item& rhs) {
    Sales_item result = lhs;
    result.units_sold += rhs.units_sold;
    result.revenue += rhs.revenue;
    return result;
}

#endif