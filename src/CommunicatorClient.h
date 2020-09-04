//
// Created by waxta on 29.08.2020.
//

#pragma once

#include "cppurses/cppurses.hpp"
#include "tui/MainLayout.h"

using namespace cppurses;

class CommunicatorClient
{
public:
    CommunicatorClient();
    int Start();
    void Stop();

private:
    std::unique_ptr<MainLayout> mainLayout_;
    System system_;
};


