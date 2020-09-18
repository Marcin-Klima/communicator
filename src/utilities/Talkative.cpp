//
// Created by waxta on 9/15/20.
//

#include "Talkative.h"
#include "../tui/EchoBox.h"

namespace utils
{
    tui::EchoBox *Talkative::echoBox_;

    Talkative::Talkative()
    {

    }

    void Talkative::SetEchoBox( tui::EchoBox *echoBox )
    {
	 echoBox_ = echoBox;
    }

    void Talkative::PrintDebugInfo( const std::string & message, const std::string & file, int line )
    {
#ifdef DEBUG
	 std::string debugMessage = "File: " + file + ", line: " + std::to_string( line ) + ", message: " + message;
	 echoBox_->PrintDebugInfo( debugMessage );
#endif
    }

    void Talkative::PrintDebugInfo( const std::string & message )
    {
#ifdef DEBUG
	 echoBox_->PrintDebugInfo( message );
#endif
    }
}