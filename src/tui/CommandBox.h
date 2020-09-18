//
// Created by waxta on 27.08.2020.
//

#pragma once

#include "cppurses/cppurses.hpp"
#include "../utilities/Talkative.h"

namespace client
{
    class CommunicatorClient;
}

namespace tui
{
    class CommandBox final : public cppurses::Textbox, public utils::Talkative
    {
    public:
	 explicit CommandBox( client::CommunicatorClient *client );

    protected:
	 bool key_press_event( const cppurses::Key::State & keyboard ) override;

    private:
	 client::CommunicatorClient *client_;

	 void InterpretCommand();
    };
}