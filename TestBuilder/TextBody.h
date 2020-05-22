#pragma once
#include "BodyProtocol.h"
#include <iostream>
using namespace std;
class TextBody :
	public BodyProtocol
{
public:
	TextBody(char* text);
	virtual void viewMessage(const std::ostream& out) override;

};

