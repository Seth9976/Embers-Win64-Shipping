// 函数: sub_141c76e20
// 地址: 0x141c76e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x40)
int128_t zmm1 = *(arg1 + 0xc8)
*(arg1 + 0x68) = *(arg1 + 0xb8)
int128_t zmm0 = *(arg1 + 0xd8)
*(arg1 + 0x78) = zmm1
zmm1 = *(arg1 + 0xe8)
*(arg1 + 0x88) = zmm0
zmm0 = *(arg1 + 0xf8)
*(arg1 + 0x98) = zmm1
*(arg1 + 0xa8) = zmm0

if (arg1 == -0x40)
    return result

return LeaveCriticalSection(arg1 + 0x40)
