// 函数: sub_142aa7fe0
// 地址: 0x142aa7fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x28)
int32_t result

if (((rdx - 1) & 0xfffffffa) == 0 && rdx != 6)
    result.b = 1
    return result

result.b = 0
return result
