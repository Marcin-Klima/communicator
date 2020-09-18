//
// Created by waxta on 27.08.2020.
//

#include "CommandBox.h"
#include "../CommunicatorClient.h"
#include <boost/tokenizer.hpp>

namespace client::tui
{
    bool CommandBox::key_press_event( const Key::State & keyboard )
    {
	 if ( keyboard.key == Key::Enter )
	 {
	     if ( not contents().empty() and contents().at( 0 ) == "/" )
	     {
		  InterpretCommand();
	     }
	     return true;
	 }
	 else if ( keyboard.key == Key::Ctrl_e )
	 {
	     append( '\n' );
	     return true;
	 }
	 return Textbox::key_press_event( keyboard );
    }

    CommandBox::CommandBox( client::CommunicatorClient *client ) :
	     client_( client )
    {
    }

    void CommandBox::InterpretCommand()
    {
	 const std::string command = contents().str();
	 std::vector<char *> tokens;

	 using Tokenizer = boost::tokenizer<boost::char_separator<char>>;
	 boost::char_separator<char> separator( " " );
	 Tokenizer tokenizer( command, separator );
	 for ( Tokenizer::iterator tok = tokenizer.begin(); tok != tokenizer.end(); ++tok )
	 {
	     PrintDebugInfo( tok.current_token());
	     tok->size();
	 }
	 PrintDebugInfo("Dupa XD", __FILE__, __LINE__);

	 if ( command == "/exit" )
	 {
	     client_->Stop();
	 }
	 else if ( command == "/connect" )
	 {
	 }
    }
}
