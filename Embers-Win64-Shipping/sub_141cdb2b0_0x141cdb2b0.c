// 函数: sub_141cdb2b0
// 地址: 0x141cdb2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 0 && arg3 s< *(arg1 + 0x30))
    void* rax_1 = *(arg1 + 0x48)
    void* r8 = arg1 + 0x38
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg3)
    
    if (test_bit(*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg3 & 0x1f))
        int32_t var_28 = data_143a1c6b4
        int64_t var_20 = 0
        int64_t var_18 = 0
        *arg2 = sub_14090b490(arg1 + 0x60, &var_28)
        
        if (var_20 != 0)
            sub_140a74f90(var_20)
        
        sub_141cdb490(arg1 + 0x28, *arg2, arg3)
        return arg2

*arg2 = data_143a1c6b8
return arg2
