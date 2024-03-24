//
// Created by Karpenko Anastasia on 04.03.2024.
//

#ifndef MARKET_TEXT_H
#define MARKET_TEXT_H

#include <fstream>

#include "MarkerString.h"

struct MarkerText {
    MarkerString *strings;
    int length;

    MarkerText();
    void sort() const;
    ~MarkerText();
    void print(std::ofstream &output) const;
};

#endif  // MARKET_TEXT_H

