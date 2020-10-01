//
// Created by waxta on 29.08.2020.
//

#pragma once

#include "cppurses/cppurses.hpp"
#include "MainLayout.h"

using namespace cppurses;

namespace client
{
    class CommunicatorClient
    {
    public:
	 CommunicatorClient();

	 int Start();

	 void Stop();

    private:
	 std::unique_ptr<tui::MainLayout> mainLayout_;
	 System system_;
    };
}


