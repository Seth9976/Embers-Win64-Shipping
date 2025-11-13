// 函数: sub_141ceefa0
// 地址: 0x141ceefa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 0 || arg3 s>= *(arg1 + 0x68))
    *arg2 = data_143dbb1f0
else
    void* r8 = arg1 + 0x70
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg3)
    
    if (not(test_bit(*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg3 & 0x1f)))
        *arg2 = data_143dbb1f0
    else if (sub_141cdf960(arg1 + 0x1d0, data_143f360f0) == 0)
        *arg2 = data_143dbb1f0
    else
        sub_141ce8ce0(arg1 + 0x1d0, arg2, arg3, data_143f360f0, arg4)

return arg2
