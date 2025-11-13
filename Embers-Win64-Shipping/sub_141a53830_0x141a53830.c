// 函数: sub_141a53830
// 地址: 0x141a53830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const result = sub_140d226f0(arg1, sub_142452380())

if (result != 0 && *(result + 0xf0) == 3)
    int32_t rax_1 = *(arg1 + 0xc)
    
    if (rax_1 s>= data_143e1d9b4)
        result = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        result =
            *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    if ((*(result + 8) & 0x30000000) == 0)
        result.b = 1
        return result

result.b = 0
return result
