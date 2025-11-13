// 函数: sub_141f4ad70
// 地址: 0x141f4ad70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x5a9))

if ((result.b & 4) != 0)
    result.b u>>= 4
    result.b &= 1
    return result

if (*(arg1 + 0x630) != 0 && (sub_141f73df0(arg1).b == 0 || (*(*(arg1 + 0x630) + 2) & 8) == 0))
    result.b = 1
    return result

result.b = 0
return result
