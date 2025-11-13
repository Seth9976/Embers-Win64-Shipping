// 函数: sub_1428d8a60
// 地址: 0x1428d8a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_2 = *(arg1 + 0x34)

if (rax_2 != 0)
    *(arg1 + 0x34) = rax_2 - 1
    return rax_2 - 1

*(arg1 + 0x28) -= 1
uint64_t result = *(arg1 + 0x20)
int32_t r9 = *(arg1 + 0x30)
int32_t r10 = *(result + (zx.q(*(arg1 + 0x28)) << 2))

if (r10 u< r9)
    int32_t rax_1 = *(arg1 + 0x18)
    int32_t i = r9 - r10
    result = zx.q(rax_1 - i)
    int32_t rdx_2 = (rax_1 - 1) & 0xf
    *(arg1 + 0x18) = result.d
    
    while (i != 0)
        i -= 1
        
        if (rdx_2 != 0)
            rdx_2 -= 1
        else
            result = *(arg1 + 8)
            rdx_2 = 0xf
            *(arg1 + 8) = *(result + 0x180)

*(arg1 + 0x30) = r10
*(arg1 + 0x38) = 0
return result
