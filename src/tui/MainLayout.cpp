//
// Created by waxta on 27.08.2020.
//

#include "MainLayout.h"
#include "WidgetsConfiguration.h"
#include "CommandBox.h"
#include "EchoBox.h"

namespace tui
{
    MainLayout::MainLayout( client::CommunicatorClient *communicatorClient ) :
	     mainPanel_( this->make_child<layout::Vertical>()),
	     echoBox_( mainPanel_.make_child<EchoBox>()),
	     commandBox_( mainPanel_.make_child<CommandBox>( communicatorClient ))
    {
	 commandBox_.height_policy.fixed( WidgetsConfiguration::commandBoxHeight );
	 commandBox_.brush.set_background( WidgetsConfiguration::backgroundCommandBox );
	 commandBox_.brush.set_foreground( WidgetsConfiguration::foregroundCommandBox );

	 echoBox_.brush.set_background( WidgetsConfiguration::backgroundEchoBox );
	 echoBox_.brush.set_foreground( WidgetsConfiguration::foregroundEchoBox );

	 utils::Talkative::SetEchoBox( &echoBox_ );
    }
}