//
// Created by Karpenko Anastasiya on 04.03.2024.
//

#include "MarkerText.h"

const char NULL_CHAR = '\0';

MarkerText::MarkerText() : strings(nullptr), length(0) {}

void customSwap(char* &chars1, char* &chars2) {
    // Обмен указателями на chars
    char* temp = chars1;
    chars1 = chars2;
    chars2 = temp;
}

void MarkerText::sort() const {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - i - 1; ++j) {
            if (strings[j].longest_length() > strings[j + 1].longest_length()) {
                customSwap(strings[j].chars, strings[j + 1].chars);
            }
        }
    }
}

void MarkerText::print(std::ofstream &output) const {
    output << length << std::endl;
    for (int index = 0; index < length; ++index)
        strings[index].printBeforeMarker(output);
}

MarkerText::~MarkerText() {
    delete[] strings;
}
