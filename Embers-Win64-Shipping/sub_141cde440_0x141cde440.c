// 函数: sub_141cde440
// 地址: 0x141cde440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 0 && arg3 s< *(arg1 + 0x110))
    void* r9_1 = arg1 + 0x118
    void* rax_1 = *(r9_1 + 0x10)
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg3)
    
    if (test_bit(*(r9_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg3 & 0x1f))
        *arg2 = *(*(arg1 + 0x108) + sx.q(arg3) * 0x28 + 0x20)
        return arg2

*arg2 = data_143a1c6c4
return arg2
