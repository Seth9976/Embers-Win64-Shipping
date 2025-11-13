// 函数: sub_141850ab0
// 地址: 0x141850ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x80)
uint64_t result = zx.q(*arg2)
int32_t zmm0 = *arg3

if (not(zmm0 f== *(arg1 + (result << 2) + 8)))
    *(arg1 + (result << 2) + 8) = zmm0
    result = sub_141851f90(arg1)

if (arg1 == -0x80)
    return result

return LeaveCriticalSection(arg1 + 0x80)
