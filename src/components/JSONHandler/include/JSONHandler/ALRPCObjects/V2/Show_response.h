#ifndef NSAPPLINKRPCV2_SHOW_RESPONSE_INCLUDE
#define NSAPPLINKRPCV2_SHOW_RESPONSE_INCLUDE

#include "JSONHandler/ALRPCResponse.h"

/*
  interface Ford Sync RAPI
  version   2.0O
  date      2012-11-02
  generated at  Thu Jan 24 06:36:23 2013
  source stamp  Thu Jan 24 06:35:41 2013
  author    robok0der
*/

namespace NsAppLinkRPCV2
{
    class Show_response : public NsAppLinkRPC::ALRPCResponse
    {
    public:
        Show_response(const Show_response& c);
        Show_response(void);

        virtual ~Show_response(void);

        Show_response& operator =(const Show_response&);

        bool checkIntegrity(void);

    private:
        friend class Show_responseMarshaller;
    };
}

#endif
