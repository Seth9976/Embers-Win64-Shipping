// 函数: sub_141cdeb30
// 地址: 0x141cdeb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 0 && arg3 s< *(arg1 + 0xd8))
    void* r10_1 = arg1 + 0xe0
    void* rax_1 = *(r10_1 + 0x10)
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg3)
    
    if (test_bit(*(r10_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg3 & 0x1f)
            && arg4 u<= 2)
        *arg2 = *(*(arg1 + 0xd0) + ((sx.q(arg4) + (sx.q(arg3) << 2)) << 2))
        return arg2

*arg2 = data_143a1c6b8
return arg2
