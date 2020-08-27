//
// Created by waxta on 27.08.2020.
//

#include "MainLayout.h"

MainLayout::MainLayout() :
	 rightPanel( this->make_child<layout::Vertical>()),
	 echoTextBox( rightPanel.make_child<Textbox>()),
	 commandTextBox( rightPanel.make_child<CommandBox>())
{
	commandTextBox.height_policy.fixed( WidgetsConfiguration::commandBoxHeight );
	commandTextBox.brush.set_background( WidgetsConfiguration::backgroundCommandBox );
	commandTextBox.brush.set_foreground( WidgetsConfiguration::foregroundCommandBox );

	echoTextBox.brush.set_background( WidgetsConfiguration::backgroundEchoBox );
	echoTextBox.brush.set_foreground( WidgetsConfiguration::foregroundEchoBox );
}
