#pragma once
#ifndef INTERFACE_IOINTERFACEHANDLER_H
#define INTERFACE_IOINTERFACEHANDLER_H
//------------------------------------------------------------------------------
/**
    @class IO::Interface
    
    Platform dependent handler for io interface.
    Needs to register the stream schemes at io server.
    
    (C) 2008 Radon Labs GmbH
*/
#if defined(__WIN32__) || defined(__APPLE__)
#include "interface/base/iointerfacehandlerbase.h"
namespace Interface
{
class IOInterfaceHandler : public Base::IOInterfaceHandlerBase
{
    DeclareClass(IOInterfaceHandler);
    DeclareSingleton(IOInterfaceHandler);
public:
    /// constructor
    IOInterfaceHandler();
    /// destructor
    virtual ~IOInterfaceHandler();
};
}
#elif __XBOX360__
#include "interface/base/iointerfacehandlerbase.h"
namespace Interface
{
class IOInterfaceHandler : public Base::IOInterfaceHandlerBase
{
    DeclareClass(IOInterfaceHandler);
    DeclareSingleton(IOInterfaceHandler);
public:
    /// constructor
    IOInterfaceHandler();
    /// destructor
    virtual ~IOInterfaceHandler();
};
}
#elif __WII__
#include "interface/wii/wiiiointerfacehandler.h"
namespace Interface
{
class IOInterfaceHandler : public Wii::WiiIOInterfaceHandler
{
    DeclareClass(IOInterfaceHandler);
    DeclareSingleton(IOInterfaceHandler);
public:
    /// constructor
    IOInterfaceHandler();
    /// destructor
    virtual ~IOInterfaceHandler();
};
}
#else
#error "IOInterfaceHandler class not implemented on this platform!"
#endif
//------------------------------------------------------------------------------
#endif
    
    