// 函数: sub_141a1c9a0
// 地址: 0x141a1c9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x6a0)
void** rcx = *(result + 8)

if (rcx != 0)
    result = *rcx
    
    if (result != 0 && arg3 s< rcx[1].d)
        *(arg2 + 0x10) = result
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = muls.dp.d(0x55555556, *(rcx + 0xc))
        *(arg2 + 0x40) = 0
        *(arg2 + 0x44) = temp0_1 + (temp0_1 u>> 0x1f)
        *(arg2 + 0x50) = rcx[2].d
        result = zx.q(*(rcx + 0x14))
        *(arg2 + 0x54) = result.d

return result
