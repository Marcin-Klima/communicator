//
// Created by waxta on 27.08.2020.
//

#pragma once

#include "cppurses/cppurses.hpp"

using namespace cppurses;

class CommandBox;
class CommunicatorClient;

class MainLayout final : public layout::Horizontal
{
public:
    MainLayout( CommunicatorClient *communicatorClient );

private:
    layout::Vertical & rightPanel;
    Textbox & echoTextBox;
    CommandBox & commandBox;
};


