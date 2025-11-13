// 函数: sub_141c76f10
// 地址: 0x141c76f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x40)
int32_t result = *(arg1 + 0xcc)
int128_t zmm1 = *(arg1 + 0xac)
*(arg1 + 0x68) = *(arg1 + 0x9c)
int128_t zmm0 = *(arg1 + 0xbc)
*(arg1 + 0x78) = zmm1
*(arg1 + 0x88) = zmm0
*(arg1 + 0x98) = result

if (arg1 == -0x40)
    return result

return LeaveCriticalSection(arg1 + 0x40)
