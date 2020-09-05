//
// Created by waxta on 27.08.2020.
//

#pragma once

#include "cppurses/cppurses.hpp"

using namespace cppurses;

namespace client
{
    class CommunicatorClient;

    namespace tui
    {
	 class CommandBox final : public Textbox
	 {
	 public:
	     explicit CommandBox( client::CommunicatorClient *client );

	 protected:
	     bool key_press_event( const Key::State & keyboard ) override;

	 private:
	     client::CommunicatorClient *client_;

	     void InterpretCommand();
	 };
    }
}