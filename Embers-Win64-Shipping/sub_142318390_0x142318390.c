// 函数: sub_142318390
// 地址: 0x142318390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x430)

if (result != 0)
    int128_t* (* var_68)(int128_t* arg1, int64_t* arg2, int32_t* arg3)
    
    if (arg10 == 0)
        void* arg_8 = result + 0x188
        void** var_60_2 = &arg_8
        var_68 = sub_14230af40
        return sub_1423185e0(arg1, arg2, arg3, arg4, arg5, &var_68, arg6, arg7, arg8, arg9)
    
    int64_t rcx = sx.q(*(result + 0x1c0))
    uint64_t r10_1 = 0
    int32_t rbx_1 = 0
    uint64_t var_88
    __builtin_memset(&var_88, 0, 0x1c)
    int32_t temp0_1 = rcx.d
    int32_t var_80
    int64_t var_78
    int32_t var_70
    
    if (temp0_1 s> 0)
        var_70 = rcx.d
        sub_140638970(&var_78)
        r10_1 = var_88
        rbx_1 = var_80
    else if (temp0_1 s< 0)
        int32_t rdi_2 = neg.d(rcx.d)
        
        if (rdi_2 != 0)
            int32_t rax_1 = neg.d(rdi_2 + rcx.d)
            
            if (rax_1 != 0)
                memmove(rcx * 0x30, nullptr, rax_1 * 0x30)
                r10_1 = zx.q(var_70)
            
            var_70 = r10_1.d - rdi_2
            sub_1407c4120(&var_78)
            r10_1 = var_88
            rbx_1 = var_80
    int64_t rdi_3 = sx.q(*(result + 0x1c0))
    
    if (rdi_3.d s> rbx_1)
        int32_t rdi_4 = rdi_3.d - rbx_1
        int32_t rax_3 = rbx_1 + rdi_4
        int32_t var_80_1 = rax_3
        int32_t var_7c
        
        if (rax_3 s> var_7c)
            sub_140679a80(&var_88)
            r10_1 = var_88
        
        memset(sx.q(rbx_1) + r10_1, 0, sx.q(rdi_4))
    else if (rdi_3.d s< rbx_1)
        int32_t rsi_2 = rbx_1 - rdi_3.d
        
        if (rbx_1 != rdi_3.d)
            int32_t rax_5 = rbx_1 - rsi_2
            
            if (rax_5 != rdi_3.d)
                memmove(r10_1 + rdi_3, sx.q(rsi_2 + rdi_3.d) + r10_1, rax_5 - rdi_3.d)
                rbx_1 = var_80
            
            int32_t var_80_2 = rbx_1 - rsi_2
            sub_1405dac10(&var_88)
    
    int64_t* var_50_1 = &var_78
    void* var_58 = result + 0x188
    int64_t* var_48_1 = &var_88
    void** var_60_1 = &var_58
    var_68 = sub_14230aea0
    result = sub_1423185e0(arg1, arg2, arg3, arg4, arg5, &var_68, arg6, arg7, arg8, arg9)
    uint64_t rcx_11 = var_88
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = var_78
    
    if (rcx_12 != 0)
        return sub_140a74f90(rcx_12)

return result
