#include "../include/JSONHandler/ALRPCObjects/V2/AddCommand_response.h"
#include "AddCommand_responseMarshaller.h"

namespace
{
    const int PROTOCOL_VERSION = 2;
}

/*
  interface Ford Sync RAPI
  version   2.0O
  date      2012-11-02
  generated at  Thu Jan 24 06:36:23 2013
  source stamp  Thu Jan 24 06:35:41 2013
  author    robok0der
*/

using namespace NsAppLinkRPCV2;
AddCommand_response& AddCommand_response::operator =(const AddCommand_response& c)
{
    success = c.success;
    resultCode = c.resultCode;
    info = c.info ? new std::string(c.info[0]) : 0;

    return *this;
}

AddCommand_response::~AddCommand_response(void)
{}

AddCommand_response::AddCommand_response(const AddCommand_response& c)
{
    *this = c;
}


bool AddCommand_response::checkIntegrity(void)
{
    return AddCommand_responseMarshaller::checkIntegrity(*this);
}

AddCommand_response::AddCommand_response(void) : NsAppLinkRPC::ALRPCResponse(PROTOCOL_VERSION)
{}
