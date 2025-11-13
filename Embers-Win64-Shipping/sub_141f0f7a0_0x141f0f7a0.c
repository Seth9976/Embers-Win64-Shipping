// 函数: sub_141f0f7a0
// 地址: 0x141f0f7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t* result = sub_140d3c6e0(&arg3[7])
uint128_t* result_1 = result

if (result != 0)
    sub_141dbf430(arg2, arg1, result, 1, arg3)
    int32_t rax = *(result_1 + 0xc)
    void* const rax_7
    
    if (rax s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_2
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18
    
    result = zx.q(*(rax_7 + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0)
        result = sub_140d3c6e0(arg3 + 0x68)
        
        if (result != 0)
            return sub_141dbf430(result, result_1, arg1, 0, arg3)

return result
