/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.12.v202004010240.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_COMMONAPI_EXAMPLES_E01_HELLO_WORLD_HPP_
#define V0_COMMONAPI_EXAMPLES_E01_HELLO_WORLD_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Types.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v0 {
namespace commonapi {
namespace examples {

class E01HelloWorld {
public:
    virtual ~E01HelloWorld() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* E01HelloWorld::getInterface() {
    return ("commonapi.examples.E01HelloWorld:v0_1");
}

CommonAPI::Version E01HelloWorld::getInterfaceVersion() {
    return CommonAPI::Version(0, 1);
}


} // namespace examples
} // namespace commonapi
} // namespace v0

namespace CommonAPI {
}


// Compatibility
namespace v0_1 = v0;

#endif // V0_COMMONAPI_EXAMPLES_E01_HELLO_WORLD_HPP_
