//
// Created by waxta on 9/6/20.
//

#include "EchoBox.h"

namespace tui
{
    void EchoBox::PrintDebugInfo( const std::string & string )
    {
	 boost::lock_guard<boost::mutex> guard( mutex_ );

	 append( "DEBUG> " );
	 append( string );
	 append( '\n' );
    }

    void EchoBox::PrintDebugInfo( const int number )
    {
	 boost::lock_guard<boost::mutex> guard( mutex_ );
	 append( "DEBUG> " );
	 append( number );
	 append( '\n' );
    }
}