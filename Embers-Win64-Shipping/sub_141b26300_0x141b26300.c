// 函数: sub_141b26300
// 地址: 0x141b26300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_141aef7d0(arg4, arg5)

if (result != 0)
    int32_t rsi_1 = 0
    int64_t* result_1 = result
    int32_t rdi_1 = 0
    int64_t r13_1 = 0
    int64_t var_48_1 = arg2
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t r15_1 = sx.q(*(arg1 + 0x18)) << 3
    void* var_50_1 = arg1
    int64_t r14_1 = 0
    int64_t var_40_1 = 0
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    uint64_t r15_2 = r15_1 u>> 3
    int64_t var_88_1 = 0
    int32_t var_80_1 = 0
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x18))])
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            int64_t* rdx_1 = *rbx_1
            int64_t* rax_2 = rbx_1
            int64_t* var_a8_1 = &result_1
            int512_t zmm2
            zmm2.o = *(rdx_1 + 0x3c)
            
            if ((rdx_1[4].b & 2) == 0)
                rax_2 = rdx_1
            
            int64_t* rcx_1 = *rax_2
            (*(*rcx_1 + 8))(rcx_1, &var_98, &result_1, zmm2, zx.q(rdx_1[8].b))
            rbx_1 = &rbx_1[1]
            r14_1 += 1
        while (r14_1 != r15_2)
        
        rdi_1 = var_80_1
        rsi_1 = var_90_1
        r13_1 = var_98
    
    int64_t var_78 = 0
    int32_t var_70_1 = rsi_1
    
    if (rsi_1 != 0)
        sub_140874c00(&var_78, rsi_1, 0)
        memcpy(var_78, r13_1, rsi_1 * 0x38)
        rdi_1 = var_80_1
    else
        int32_t var_6c_1 = 0
    
    int64_t var_68 = 0
    int32_t var_60_1 = rdi_1
    
    if (rdi_1 != 0)
        sub_140874c00(&var_68, rdi_1, 0)
        memcpy(var_68, var_88_1, rdi_1 * 0x38)
    else
        int32_t var_5c_1 = 0
    
    result = (*(*result + 0x18))(result, arg3, &var_78, arg1, arg6)
    int64_t rcx_7 = var_68
    
    if (rcx_7 != 0)
        result = sub_140a74f90(rcx_7)
    
    int64_t rcx_8 = var_78
    
    if (rcx_8 != 0)
        result = sub_140a74f90(rcx_8)
    
    if (var_88_1 != 0)
        result = sub_140a74f90(var_88_1)
    
    int64_t rcx_10 = var_98
    
    if (rcx_10 != 0)
        return sub_140a74f90(rcx_10)

return result
