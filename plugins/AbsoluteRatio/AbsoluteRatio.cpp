// PluginAbsoluteRatio.cpp
// Tom Dugovic (tom.dugovic@gmail.com)

#include "SC_PlugIn.hpp"
#include "AbsoluteRatio.hpp"

static InterfaceTable* ft;

namespace AbsoluteRatio {

AbsoluteRatio::AbsoluteRatio() {
    mCalcFunc = make_calc_function<AbsoluteRatio, &AbsoluteRatio::next>();
    next(1);
}

void AbsoluteRatio::next(int nSamples) {
    const float* input = in(0);
    const float* gain = in(1);
    float* outbuf = out(0);

    // simple gain function
    for (int i = 0; i < nSamples; ++i) {
        outbuf[i] = input[i] * gain[i];
    }
}

} // namespace AbsoluteRatio

PluginLoad(AbsoluteRatioUGens) {
    // Plugin magic
    ft = inTable;
    registerUnit<AbsoluteRatio::AbsoluteRatio>(ft, "AbsoluteRatio", false);
}
