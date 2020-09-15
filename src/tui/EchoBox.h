//
// Created by waxta on 9/6/20.
//

#pragma once

#include "cppurses/cppurses.hpp"
#include "boost/thread.hpp"

namespace client
{
    namespace tui
    {
	 class EchoBox final : public cppurses::Textbox
	 {
	 public:
#ifdef DEBUG

	     void PrintDebugInfo( const std::string & string );

	     void PrintDebugInfo( const int number );

#endif
	 private:
	     boost::mutex mutex_;
	 };
    }// namespace tui
}//namespace client