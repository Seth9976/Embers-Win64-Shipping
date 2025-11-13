// 函数: src_get_name
// 地址: 0x141c2c4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return "Best Sinc Interpolator"

if (arg1 == 1)
    return "Medium Sinc Interpolator"

if (arg1 == 2)
    return "Fastest Sinc Interpolator"

char const* const result = "ZOH Interpolator"

if (arg1 != 3)
    result = nullptr

if (result != 0)
    return result

if (arg1 != 4)
    return nullptr

return "Linear Interpolator"
