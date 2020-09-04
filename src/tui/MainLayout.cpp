//
// Created by waxta on 27.08.2020.
//

#include "MainLayout.h"
#include "WidgetsConfiguration.h"
#include "CommandBox.h"

MainLayout::MainLayout( CommunicatorClient *communicatorClient ) :
	 rightPanel( this->make_child<layout::Vertical>()),
	 echoTextBox( rightPanel.make_child<Textbox>()),
	 commandBox( rightPanel.make_child<CommandBox>( communicatorClient ))
{
	commandBox.height_policy.fixed( WidgetsConfiguration::commandBoxHeight );
	commandBox.brush.set_background( WidgetsConfiguration::backgroundCommandBox );
	commandBox.brush.set_foreground( WidgetsConfiguration::foregroundCommandBox );

	echoTextBox.brush.set_background( WidgetsConfiguration::backgroundEchoBox );
	echoTextBox.brush.set_foreground( WidgetsConfiguration::foregroundEchoBox );
}