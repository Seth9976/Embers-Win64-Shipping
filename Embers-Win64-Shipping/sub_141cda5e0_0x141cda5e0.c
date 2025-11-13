// 函数: sub_141cda5e0
// 地址: 0x141cda5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 0 && arg3 s< *(arg1 + 0x148))
    void* r8 = arg1 + 0x150
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg3)
    
    if (test_bit(*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg3 & 0x1f))
        int64_t rbp = *arg4
        int64_t var_38
        __builtin_memset(&var_38, 0, 0x20)
        int32_t r14 = arg4[1].d
        int32_t var_18 = data_143a1c6c4
        *arg2 = sub_14090b0b0(arg1 + 0x108, &var_38)
        int64_t var_28
        
        if (var_28 != 0)
            sub_140a74f90(var_28)
        
        int64_t rcx_4 = var_38
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int32_t rdx_4 = *arg2
        int64_t var_48 = rbp
        int32_t var_40 = r14
        var_48.o = var_48.o
        sub_141cda990(arg1 + 0x28, rdx_4, arg3, &var_48, arg5)
        return arg2

*arg2 = data_143a1c6c8
return arg2
