// 函数: sub_141d6c2d0
// 地址: 0x141d6c2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if ((*(arg2 + 0x14) | arg2[1].d | *(arg2 + 0xc) | *(arg2 + 8)) != 0)
    int32_t i_1 = arg3[1].d
    int64_t* rbx_7 = *arg3
    int64_t var_98_1 = arg2[1].q
    int64_t* var_108 = nullptr
    int32_t i_2 = i_1
    int128_t var_a8 = *arg2
    
    if (i_1 != 0)
        sub_1405c4a00(&var_108, i_1, 0)
        int64_t* rcx_23 = var_108
        int32_t i
        
        do
            int64_t rax_21 = *rbx_7
            rbx_7 = &rbx_7[1]
            *rcx_23 = rax_21
            rcx_23 = &rcx_23[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    else
        int32_t var_fc_1 = 0
    
    result = sub_141a68290(*(arg1 + 0x288), &var_a8, &var_108, arg4)
    int64_t* rcx_25 = var_108
    
    if (rcx_25 != 0)
        result = sub_140a74f90(rcx_25)
    
    void* rcx_26 = *(arg1 + 0x248)
    
    if (rcx_26 != 0)
        int32_t arg_10 = *arg2
        return sub_141a56940(rcx_26 + 0x30, arg2 + 8, &arg_10)
else
    void*** var_c0
    void var_70
    void**** rax_5 = sub_140b9e470(&var_c0, arg1, sub_140a96170(&var_70))
    void*** var_f0 = *rax_5
    int64_t* rcx_3 = rax_5[1]
    
    if (rcx_3 != 0)
        rcx_3[1].d += 1
    
    void var_f8
    sub_140b58170(&var_f8, "PIE", 1)
    void var_88
    int64_t* rax_6 =
        _vfprintf_p_l(&var_88, The specified binding ID is not valid", LevelSequenceActor")
    void var_e0
    void var_d0
    void var_58
    sub_140aced10(*sub_140ae44d0(sub_140accdf0(&var_58, &var_f8), &var_d0, rax_6), &var_e0, &var_f0)
    int64_t* var_d8
    
    if (var_d8 != 0)
        var_d8[1].d -= 1
        
        if (var_d8[1].d == 1)
            (**var_d8)(var_d8)
            int32_t temp4_1 = *(var_d8 + 0xc)
            *(var_d8 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_d8 + 8))(var_d8, 1)
    
    int64_t* var_c8
    
    if (var_c8 != 0)
        var_c8[1].d -= 1
        
        if (var_c8[1].d == 1)
            (**var_c8)(var_c8)
            int32_t temp5_1 = *(var_c8 + 0xc)
            *(var_c8 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_c8 + 8))(var_c8, 1)
    
    result = sub_140acd9c0(&var_58)
    int64_t* var_80
    
    if (var_80 != 0)
        result = var_80[1].d
        var_80[1].d -= 1
        
        if (result == 1)
            (**var_80)(var_80)
            result = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*var_80 + 8))(var_80, 1)
    
    if (rcx_3 != 0)
        rcx_3[1].d -= 1
        
        if (rcx_3[1].d == 1)
            result = (**rcx_3)(rcx_3)
            int32_t temp8_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp8_1 == 1)
                result = (*(*rcx_3 + 8))(rcx_3, 1)
    
    int64_t* var_b8
    
    if (var_b8 != 0)
        var_b8[1].d -= 1
        
        if (var_b8[1].d == 1)
            result = (**var_b8)(var_b8)
            int32_t temp9_1 = *(var_b8 + 0xc)
            *(var_b8 + 0xc) -= 1
            
            if (temp9_1 == 1)
                result = (*(*var_b8 + 8))(var_b8, 1)
    
    int64_t* var_68
    
    if (var_68 != 0)
        result = var_68[1].d
        var_68[1].d -= 1
        
        if (result == 1)
            result = (**var_68)(var_68)
            int32_t rdi_1 = *(var_68 + 0xc)
            *(var_68 + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*var_68 + 8))(var_68, zx.q(rdi_1))

return result
