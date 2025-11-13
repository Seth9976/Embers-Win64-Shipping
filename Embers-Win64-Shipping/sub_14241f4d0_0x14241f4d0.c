// 函数: sub_14241f4d0
// 地址: 0x14241f4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xcc) = 0
sub_14240c790(arg1 + 0x108, 0)
int32_t rax = *(arg1 + 0x70)
int32_t result = rax - 1
int64_t result_2 = sx.q(result)

if (rax - 1 s>= 0)
    int64_t r14_2 = result_2 << 4
    int64_t result_3
    
    do
        int64_t* rcx_2 = *(arg1 + 0x68) + r14_2
        int64_t var_58
        __builtin_memset(&var_58, 0, 0x20)
        int32_t r8_1 = 0
        int32_t var_38_1 = 0xffb4b4b4
        int64_t var_40_1
        
        if (&var_58 != rcx_2)
            int32_t rbx_1 = rcx_2[1].d
            int64_t r12_1 = *rcx_2
            int64_t var_50_1
            var_50_1.d = rbx_1
            
            if (rbx_1 != 0)
                sub_1405a4c70(&var_58, rbx_1, 0)
                memcpy(var_58, r12_1, rbx_1 * 2)
                r8_1 = var_40_1:4.d
        
        int32_t result_1 = *(*(arg1 + 0x118) + 0x5c)
        int32_t* var_48
        
        if (var_48 != &data_142e5cee4)
            int32_t rdx_3 = 0
            var_40_1.d = 0
            
            if (r8_1 != 2)
                sub_1405947f0(&var_48, 2)
                r8_1 = var_40_1:4.d
                rdx_3 = var_40_1.d
            
            var_40_1.d = rdx_3 + 2
            
            if (rdx_3 + 2 s> r8_1)
                sub_140594770(&var_48)
            
            *var_48 = 0x3e
        
        int64_t rbx_2 = sx.q(*(arg1 + 0x110))
        int32_t rax_3 = (rbx_2 + 1).d
        *(arg1 + 0x110) = rax_3
        
        if (rax_3 s> *(arg1 + 0x114))
            sub_1405c4ec0(arg1 + 0x108)
        
        int64_t* rbx_3 = *(arg1 + 0x108) + rbx_2 * 0x28
        sub_140596d10(rbx_3, &var_58)
        sub_140596d10(&rbx_3[2], &var_48)
        int32_t* rcx_12 = var_48
        result = result_1
        rbx_3[4].d = result
        
        if (rcx_12 != 0)
            result = sub_140a74f90(rcx_12)
        
        int64_t rcx_13 = var_58
        
        if (rcx_13 != 0)
            result = sub_140a74f90(rcx_13)
        
        r14_2 -= 0x10
        result_3 = result_2
        result_2 -= 1
    while (result_3 - 1 s>= 0)

return result
