// 函数: sub_141b7c2c0
// 地址: 0x141b7c2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1420afa30(arg1, arg2)
void* rcx = nullptr
*arg1 = &data_143072858
__builtin_memset(&arg1[6], 0, 0x20)

if (((arg1[1].d u>> 4).b & 1) == 0)
    int32_t rax_2 = *(arg1 + 0xc)
    
    if (rax_2 s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_2)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_4 = temp1_1 + rdx_1
        rcx = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_1) * 0x18
    
    *(rcx + 8) |= 0x40000000

return arg1
