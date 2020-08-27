//
// Created by waxta on 27.08.2020.
//

#include "cppurses/cppurses.hpp"

#pragma once

using namespace cppurses;

class CommandBox final : public Textbox
{
public:
protected:
    bool key_press_event( const Key::State & keyboard ) override;
};


