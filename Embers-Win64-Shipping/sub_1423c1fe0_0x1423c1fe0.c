// 函数: sub_1423c1fe0
// 地址: 0x1423c1fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_1 = zx.d(*(arg2 + 0x5d))
int64_t result

if (r8_1 == 0)
    result.b = 0
    return result

if (r8_1 == 1)
    result.b = 1
    return result

if (r8_1 != 2)
    return zx.q(*(zx.q(*(arg2 + 0x5f)) * 0x54 + *(arg1 + 0x28) + 0x18))

result.b = 2
return result
