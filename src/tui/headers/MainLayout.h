//
// Created by waxta on 27.08.2020.
//

#pragma once

#include "cppurses/cppurses.hpp"

using namespace cppurses;

namespace client
{
    class CommunicatorClient;
}

namespace tui
{
    class CommandBox;

    class EchoBox;

    class MainLayout final : public layout::Horizontal
    {
    public:
	 explicit MainLayout( client::CommunicatorClient *communicatorClient );

    private:
	 layout::Vertical & mainPanel_;
	 EchoBox & echoBox_;
	 CommandBox & commandBox_;
    };
}