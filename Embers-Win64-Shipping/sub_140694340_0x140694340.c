// 函数: sub_140694340
// 地址: 0x140694340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    void* rcx_7 = *(arg1 + 8)
    char rax_8 = *(rcx_7 + 0x158)
    
    if (rax_8 == 0)
        sub_140698bd0(rcx_7 + 0x2f0, arg1 + 0x10)
        sub_140699c40(*(arg1 + 8) + 0x2e0, arg1 + 0x10)
        sub_140698c60(*(arg1 + 8))
    else if (rax_8 == 2)
        int64_t var_78
        int64_t var_58
        sub_140a9fca0(&var_58, sub_140b18720(&var_78, arg1 + 0x10, 1))
        int64_t var_40 = var_58
        int64_t* var_50
        int64_t* var_38_1 = var_50
        
        if (var_50 != 0)
            var_50[1].d += 1
        
        int32_t var_48
        int32_t var_30_1 = var_48
        char var_28_1 = 1
        int64_t var_20_1 = 0
        int32_t var_18_1 = 0
        sub_140f17c00(*(*(arg1 + 8) + 0x298), &var_40)
        sub_1406601b0(&var_40)
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                (**var_50)(var_50)
                int32_t rbp_1 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (rbp_1 == 1)
                    (*(*var_50 + 8))(var_50, zx.q(rbp_1))
        
        int64_t rcx_19 = var_78
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
else
    int64_t var_88
    void var_68
    int64_t* rax_1 = sub_14069a5b0(&var_88, sub_140596d10(&var_68, arg1 + 0x10))
    int64_t* r14_2 = *(arg1 + 8) + 0x108
    
    if (r14_2 != rax_1)
        int64_t rcx_2 = *r14_2
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        *r14_2 = *rax_1
        *rax_1 = 0
        r14_2[1].d = rax_1[1].d
        *(r14_2 + 0xc) = *(rax_1 + 0xc)
        rax_1[1] = 0
    
    int64_t rcx_3 = var_88
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t* rcx_4 = *(arg1 + 8)
    (*(*rcx_4 + 0x2a8))(rcx_4, &var_88)
    int64_t* var_80
    
    if (var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            (**var_80)(var_80)
            int32_t temp2_1 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_80 + 8))(var_80, 1)

*arg2 = 1
__builtin_memset(&arg2[0x28], 0, 0x88)
arg2[0x20] = 0
*(arg2 + 0x10) = 0
*(arg2 + 8) = 0
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
