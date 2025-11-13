// 函数: sub_1413ab090
// 地址: 0x1413ab090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*arg1)
uint64_t result

if (((*(r8 * 0x14 + &data_143f025fc) u>> 0x13).b & 1) != 0 && test_bit(data_143f13cd8, zx.q(r8.d)))
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = muls.dp.d(0x66666667, arg1[1])
    int32_t rdx_2 = temp0_1 s>> 1
    int32_t rdx_4 = (rdx_2 + (rdx_2 u>> 0x1f)) & 0x80000001
    
    if (rdx_4 s< 0)
        rdx_4 = ((rdx_4 - 1) | 0xfffffffe) + 1
    
    if (rdx_4 != 1 || (rdx_4.b & (*(r8 * 0x14 + &data_143f025fc) u>> 0x1d).b) != 0)
        result.b = 1
        return result

result.b = 0
return result
