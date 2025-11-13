// 函数: sub_14263c2d0
// 地址: 0x14263c2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x12].d

if ((rax.b & 3) == 0)
    sub_1405a9f90(&arg1[0xf], 0)
    rax = arg1[0x12].d

uint32_t result = rax | 1
arg1[0x12].d = result

if (*(arg1 + 0x39) != 4)
    int32_t rax_1 = *(arg1 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    result = *(rax_8 + 8) u>> 0x1d
    
    if ((result.b & 1) == 0)
        jump(*(*arg1 + 0x2a0))
    
    *(arg1 + 0x39) = 4

return result
