//
// Created by waxta on 9/15/20.
//

#pragma once

#include <memory>

namespace client
{
    namespace tui
    {
        class MainLayout;
	 class EchoBox;
    }

    class Talkative
    {
        friend class tui::MainLayout;

    public:
	 Talkative();

    protected:
	 static void PrintDebugInfo( std::string message );

    private:
	 static void SetEchoBox( tui::EchoBox *echoBox );

	 static tui::EchoBox *echoBox_;
    };
}



