//
// Created by waxta on 9/6/20.
//

#pragma once

#include "cppurses/cppurses.hpp"
#include "boost/thread.hpp"

namespace tui
{
    class EchoBox final : public cppurses::Textbox
    {
    public:
	 void PrintDebugInfo( const std::string & string );

	 void PrintDebugInfo( const int number );

    private:
	 boost::mutex mutex_;
    };
}// namespace tui