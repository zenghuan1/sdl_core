#include "../include/JSONHandler/ALRPCObjects/V2/Result.h"
#include "ResetGlobalProperties_responseMarshaller.h"

// TODO(akandul): remove this after new code generation
#include "../include/JSONHandler/ALRPCObjects/V1/Result.h"

namespace
{
    const int PROTOCOL_VERSION = 1;
}

using namespace NsAppLinkRPCV2;

Result::Result() : mInternal(INVALID_ENUM)
{}

Result::Result(ResultInternal e) : mInternal(e)
{}

Result::Result(const Result& result)
{
    mInternal = result.mInternal;
}

Result::ResultInternal Result::get(void) const
{
    return mInternal;
}
void Result::set(ResultInternal e)
{
    mInternal = e;
}

// TODO(akandul): remove this after new code generation
Result::operator NsAppLinkRPC::Result()
{
    return NsAppLinkRPC::Result(
               static_cast<NsAppLinkRPC::Result::ResultInternal>(mInternal));
}

// TODO(akandul): remove this after new code generation
Result& Result::operator= (const Result& result)
{
    mInternal = result.mInternal;
    return *this;
}
