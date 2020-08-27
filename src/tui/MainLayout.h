//
// Created by waxta on 27.08.2020.
//
#include <cppurses/cppurses.hpp>
#include "WidgetsConfiguration.h"
#include "CommandBox.h"

#pragma once

using namespace cppurses;

class MainLayout final : public layout::Horizontal
{
public:
    MainLayout();

private:
    layout::Vertical & rightPanel;
    Textbox & echoTextBox;
    CommandBox & commandTextBox;
};


