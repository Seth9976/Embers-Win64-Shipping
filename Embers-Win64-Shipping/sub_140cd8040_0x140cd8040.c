// 函数: sub_140cd8040
// 地址: 0x140cd8040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const result

if (arg1 == 0)
    result.b = 0
    return result

if ((arg1[1].d & 0x3400) == 0)
    int32_t rax = *(arg1 + 0xc)
    
    if (rax s>= data_143e1d9b4)
        result = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_1
        result =
            *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18
    
    if ((*(result + 8) & 0x30000000) == 0 && data_143de542d == 0 && arg2 != 0)
        jump(*(*arg1 + 0x240))

result.b = 1
return result
