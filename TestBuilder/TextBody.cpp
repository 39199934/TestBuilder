#include "TextBody.h"

TextBody::TextBody(char* text)
{
	this->body = text;
}

void TextBody::viewMessage(const std::ostream& out)
{
	printf("the text is:%s", body);
	//out << "in the text message" << body << endl;;
}
