// 函数: sub_140d23de0
// 地址: 0x140d23de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg1 != 0 && *(arg1 + 0x10) != 0)
    result = zx.q(*(arg1 + 0xc))
    
    if (result.d != 0xffffffff && result.d s< data_143e1d9b4 && result.d s>= 0)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(result.d)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_1 = temp1_1 + rdx_2
        result =
            *(*(data_143e1d9a0 + (sx.q(rax_1 s>> 0x10) << 3)) + sx.q(zx.d(rax_1.w) - rdx_2) * 0x18)
        
        if (result != 0)
            result.b = result == arg1
            return result

result.b = 0
return result
