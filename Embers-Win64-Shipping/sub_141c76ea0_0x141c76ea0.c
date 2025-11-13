// 函数: sub_141c76ea0
// 地址: 0x141c76ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x40)
uint128_t zmm1 = *(arg1 + 0xb0)
*(arg1 + 0x68) = *(arg1 + 0xa0)
int128_t zmm0 = *(arg1 + 0xc0)
*(arg1 + 0x78) = zmm1
zmm1 = zx.o(*(arg1 + 0xd0))
*(arg1 + 0x88) = zmm0
*(arg1 + 0x98) = zmm1.q

if (arg1 == -0x40)
    return result

return LeaveCriticalSection(arg1 + 0x40)
