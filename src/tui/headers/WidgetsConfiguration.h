//
// Created by waxta on 27.08.2020.
//

#include <cppurses/cppurses.hpp>

#pragma once

using namespace cppurses;

class WidgetsConfiguration
{
public:
    static const auto backgroundCommandBox = Color::Red;
    static const auto foregroundCommandBox = Color::Black;
    static const auto backgroundEchoBox = Color::Black;
    static const auto foregroundEchoBox = Color::White;
    static const size_t commandBoxHeight = 8;
    static const size_t leftPanelWidth = 15;
};


