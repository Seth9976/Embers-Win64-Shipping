// 函数: sub_142a853b0
// 地址: 0x142a853b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg1 + 0x38))

if (r9.d s>= *(arg1 + 0x3c))
    return 0

int64_t result = *(*(arg1 + 8) + (r9 << 3))
*(arg1 + 0x38) = (r9 + 1).d

if (arg2 != 0)
    *arg2 = std::_WChar_traits<wchar_t>::length(result)

return result
