// 函数: sub_141cdf710
// 地址: 0x141cdf710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 0 && arg3 s< *(arg1 + 0x30))
    void* rax_1 = *(arg1 + 0x48)
    void* rsi_1 = arg1 + 0x38
    
    if (rax_1 != 0)
        rsi_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg3)
    
    if (test_bit(*(rsi_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg3 & 0x1f)
            && arg4 s>= 0 && arg4 s< *(arg1 + 0x30))
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(arg4)
        
        if (test_bit(*(rsi_1 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)), arg4 & 0x1f))
            sub_141cdf680(arg1 + 0x28, arg2, arg3, arg4)
            return arg2

*arg2 = data_143a1c6bc
return arg2
