//
// Created by waxta on 9/15/20.
//

#include "Talkative.h"
#include "tui/EchoBox.h"

namespace client
{
    tui::EchoBox * Talkative::echoBox_;

    Talkative::Talkative()
    {

    }

    void Talkative::SetEchoBox( client::tui::EchoBox *echoBox )
    {
	 echoBox_ = echoBox;
    }

    void Talkative::PrintDebugInfo( std::string message )
    {
	 echoBox_->PrintDebugInfo( message );
    }
}