//
// Created by waxta on 27.08.2020.
//

#include "CommandBox.h"
#include "../CommunicatorClient.h"

bool CommandBox::key_press_event( const Key::State & keyboard )
{
	if ( keyboard.key == Key::Ctrl_e )
	{
		if ( not contents().empty() and contents().at( 0 ) == "/" )
		{
			client_->Stop();
			return true;
		}
	}
	return Textbox::key_press_event( keyboard );
}

CommandBox::CommandBox( CommunicatorClient *client ) :
	 client_( client )
{
}
