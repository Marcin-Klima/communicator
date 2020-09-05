//
// Created by waxta on 29.08.2020.
//

#include "CommunicatorClient.h"

namespace client
{
    CommunicatorClient::CommunicatorClient() :
	     mainLayout_( std::make_unique<tui::MainLayout>( this ))
    {
	    System::set_head( mainLayout_.get());
    }

    int CommunicatorClient::Start()
    {
	    system_.run();
	    return 0;
    }

    void CommunicatorClient::Stop()
    {
	    System::exit( 0 );
    }
}

