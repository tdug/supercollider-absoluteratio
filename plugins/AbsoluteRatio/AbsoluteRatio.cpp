// PluginAbsoluteRatio.cpp
// Tom Dugovic (tom.dugovic@gmail.com)

#include "SC_PlugIn.hpp"
#include "AbsoluteRatio.hpp"

static InterfaceTable* ft;

namespace AbsoluteRatio {

AbsoluteRatio::AbsoluteRatio() {
    mCalcFunc = make_calc_function<AbsoluteRatio, &AbsoluteRatio::next_a>();
    next_a(1);
}

void AbsoluteRatio::next_a(int nSamples) {
    const float* x = in(0);
    const float* y = in(1);
    float* outbuf = out(0);

    // simple gain function
    for (int i = 0; i < nSamples; ++i) {
        outbuf[i] = x[i] > y[i] ? y[i] / x[i] : x[i] / y[i];
    }
}

} // namespace AbsoluteRatio

PluginLoad(AbsoluteRatioUGens) {
    // Plugin magic
    ft = inTable;
    registerUnit<AbsoluteRatio::AbsoluteRatio>(ft, "AbsoluteRatio", false);
}
