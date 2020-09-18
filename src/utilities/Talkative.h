//
// Created by waxta on 9/15/20.
//

#pragma once

#include <memory>
#include <functional>

namespace tui
{
    class MainLayout;

    class EchoBox;
}

namespace utils
{
    class Talkative
    {
	 friend class tui::MainLayout;

    public:
	 Talkative();

    protected:
	 static void PrintDebugInfo( const std::string & message );

	 static void PrintDebugInfo( const std::string & message, const std::string & file, int line );

    private:
	 static void SetEchoBox( tui::EchoBox *echoBox );

	 static tui::EchoBox *echoBox_;
    };
}