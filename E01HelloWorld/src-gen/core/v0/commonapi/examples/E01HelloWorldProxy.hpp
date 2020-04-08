/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.12.v202004010240.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_COMMONAPI_EXAMPLES_E01_Hello_World_PROXY_HPP_
#define V0_COMMONAPI_EXAMPLES_E01_Hello_World_PROXY_HPP_

#include <v0/commonapi/examples/E01HelloWorldProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v0 {
namespace commonapi {
namespace examples {

template <typename ... _AttributeExtensions>
class E01HelloWorldProxy
    : virtual public E01HelloWorld,
      virtual public E01HelloWorldProxyBase,
      virtual public _AttributeExtensions... {
public:
    E01HelloWorldProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~E01HelloWorldProxy();

    typedef E01HelloWorld InterfaceType;




    /**
     * Calls sayHello with synchronous semantics.
     *
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void sayHello(const std::string &_name, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls sayHello with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> sayHelloAsync(const std::string &_name, SayHelloAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);


    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

 private:
    std::shared_ptr< E01HelloWorldProxyBase> delegate_;
};

typedef E01HelloWorldProxy<> E01HelloWorldProxyDefault;


//
// E01HelloWorldProxy Implementation
//
template <typename ... _AttributeExtensions>
E01HelloWorldProxy<_AttributeExtensions...>::E01HelloWorldProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast< E01HelloWorldProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast< E01HelloWorldProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
E01HelloWorldProxy<_AttributeExtensions...>::~E01HelloWorldProxy() {
}

template <typename ... _AttributeExtensions>
void E01HelloWorldProxy<_AttributeExtensions...>::sayHello(const std::string &_name, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    delegate_->sayHello(_name, _internalCallStatus, _message, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> E01HelloWorldProxy<_AttributeExtensions...>::sayHelloAsync(const std::string &_name, SayHelloAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->sayHelloAsync(_name, _callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &E01HelloWorldProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool E01HelloWorldProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool E01HelloWorldProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& E01HelloWorldProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& E01HelloWorldProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace examples
} // namespace commonapi
} // namespace v0



// Compatibility
namespace v0_1 = v0;

#endif // V0_COMMONAPI_EXAMPLES_E01_Hello_World_PROXY_HPP_
