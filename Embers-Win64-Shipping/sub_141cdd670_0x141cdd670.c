// 函数: sub_141cdd670
// 地址: 0x141cdd670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 0 && arg3 s< *(arg1 + 0xa0))
    void* r10_1 = arg1 + 0xa8
    void* rax_1 = *(r10_1 + 0x10)
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg3)
    
    if (test_bit(*(r10_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg3 & 0x1f)
            && arg4 u<= 1)
        *arg2 = *(*(arg1 + 0x98) + ((sx.q(arg4) + sx.q(arg3) * 6) << 2))
        return arg2

*arg2 = data_143a1c6b4
return arg2
