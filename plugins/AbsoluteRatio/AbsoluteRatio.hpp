// PluginAbsoluteRatio.hpp
// Tom Dugovic (tom.dugovic@gmail.com)

#pragma once

#include "SC_PlugIn.hpp"

namespace AbsoluteRatio {

class AbsoluteRatio : public SCUnit {
public:
    AbsoluteRatio();

    // Destructor
    // ~AbsoluteRatio();

private:
    // Calc function
    void next_a(int nSamples);

    // Member variables
};

} // namespace AbsoluteRatio
