//
// Created by waxta on 27.08.2020.
//

#pragma once

#include "cppurses/cppurses.hpp"

class CommunicatorClient;

using namespace cppurses;

class CommandBox final : public Textbox
{
public:
    CommandBox( CommunicatorClient *client );

protected:
    bool key_press_event( const Key::State & keyboard ) override;

private:
    CommunicatorClient *client_;
};