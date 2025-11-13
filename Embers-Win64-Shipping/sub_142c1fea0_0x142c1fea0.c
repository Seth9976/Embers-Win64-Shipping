// 函数: sub_142c1fea0
// 地址: 0x142c1fea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1 + 8
int32_t i = 0
uint32_t rcx = zx.d(*(arg1 + 7))
uint32_t r9_2 = (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)

if (r9_2 != neg.d(rcx))
    do
        if (*(result + 5) == 1)
            result.b = 1
            return result
        
        i += 1
        result = result + zx.q(*(result + 3))
            + (((((zx.q(*result) << 8) + zx.q(*(result + 1))) << 8) + zx.q(*(result + 2))) << 8)
    while (i u< r9_2 + rcx)

result.b = 0
return result
