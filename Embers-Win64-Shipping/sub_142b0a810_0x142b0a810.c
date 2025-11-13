// 函数: sub_142b0a810
// 地址: 0x142b0a810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_2 = *(arg1 + 0x38)
char result = rdx_2.b & 0xf

if (result u> 1)
    *arg3 = 1
    return result

*(arg1 + 0x48) = 0x1000000
*(arg1 + 0x50) = rdx_2 << 0x1c | 0x1000000
*(arg1 + 0x40) = 0
return result
