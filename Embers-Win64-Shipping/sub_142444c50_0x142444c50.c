// 函数: sub_142444c50
// 地址: 0x142444c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x78) = arg2
*(arg1 + 0x88) = arg3

if (arg3 == 0)
    return 

int32_t rax_1 = *(arg3 + 0xc)

if (rax_1 s< data_143e1d9b4)
    int16_t temp0
    int32_t temp1
    temp0:temp1 = sx.q(rax_1)
    uint32_t rdx_1 = zx.d(temp0)
    int32_t rax_3 = temp1 + rdx_1
    int64_t rdx_2 = sx.q(zx.d(rax_3.w) - rdx_1) * 3
    int64_t rcx_3 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3))
    *(rcx_3 + (rdx_2 << 3) + 8) |= 0x40000000
    return 

*8 |= 0x40000000
