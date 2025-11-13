// 函数: sub_14263c250
// 地址: 0x14263c250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t result = sub_1405a9f90(&arg1[0xd], 0)

if (*(arg1 + 0x39) != 4)
    int32_t rax = *(arg1 + 0xc)
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
    
    result = (*(rax_7 + 8) u>> 0x1d).b
    
    if ((result & 1) == 0)
        jump(*(*arg1 + 0x2a0))
    
    *(arg1 + 0x39) = 4

return result
