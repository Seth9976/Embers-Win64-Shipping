// 函数: sub_141cdea40
// 地址: 0x141cdea40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 0 && arg3 s< *(arg1 + 0xd8))
    void* r9_1 = arg1 + 0xe0
    void* rax_1 = *(r9_1 + 0x10)
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg3)
    
    if (test_bit(*(r9_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg3 & 0x1f))
        *arg2 = *(*(arg1 + 0xd0) + sx.q(arg3) * 0x10 + 0xc)
        return arg2

*arg2 = data_143a1c6c8
return arg2
