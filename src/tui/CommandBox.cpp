//
// Created by waxta on 27.08.2020.
//

#include "CommandBox.h"

bool CommandBox::key_press_event( const Key::State & keyboard )
{
	if ( keyboard.key == Key::Enter )
	{
		set_contents( "" );
		return true;
	}
	return Textbox::key_press_event( keyboard );
}
