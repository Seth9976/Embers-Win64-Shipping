// 函数: sub_141a1fa60
// 地址: 0x141a1fa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142114600(arg1, arg2)
uint64_t result = *arg2

if (*(*(result + 8) + 0x40) s< 0xf5 && arg1 + 0x40 != arg1 + 0x54)
    int32_t rcx = *(arg1 + 0x50)
    int128_t zmm1 = *(arg1 + 0x40)
    *(arg1 + 0x40) = *(arg1 + 0x54)
    result = zx.q(*(arg1 + 0x64))
    *(arg1 + 0x50) = result.d
    *(arg1 + 0x54) = zmm1
    *(arg1 + 0x64) = rcx

return result
