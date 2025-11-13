// 函数: sub_142b54440
// 地址: 0x142b54440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (boost::math::detail::isnan_impl<long double>(arg1[0xb]) == 0)
    return arg1[0xb]

if (boost::math::detail::isnan_impl<long double>(arg1[4]) != 0)
    arg1[4] = (*arg1 - -210866760000000.0) / 86400000.0

double zmm3 = (arg1[4] f- 2451545.0) / 36525.0
double result = (23.439291999999998 - zmm3 * 0.013004166666666666
    - zmm3 * 1.6666666666666665e-07 * zmm3 + zmm3 * 5.0277777777777778e-07 * zmm3 * zmm3)
    * 0.017453292519943295
arg1[0xb] = result
return result
