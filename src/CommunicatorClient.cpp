//
// Created by waxta on 29.08.2020.
//

#include "CommunicatorClient.h"

CommunicatorClient::CommunicatorClient() :
	mainLayout_(std::make_unique<MainLayout>(this))
{
	system_.set_head(mainLayout_.get());
}

int CommunicatorClient::Start()
{
	system_.run();
	return 0;
}

void CommunicatorClient::Stop()
{
	system_.exit(0);
}

