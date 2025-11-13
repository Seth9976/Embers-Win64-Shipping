// 函数: sub_141d669a0
// 地址: 0x141d669a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg2
int32_t result

if ((*(arg2 + 0x14) | arg2[1].d | *(arg2 + 0xc) | *(arg2 + 8)) != 0)
    void* rcx_22 = *(arg1 + 0x288)
    int64_t zmm1 = arg2[1].q
    int128_t var_88 = *arg2
    int64_t var_78_1 = zmm1
    result = sub_141a375f0(rcx_22, &var_88, arg3, arg4)
    void* rcx_23 = *(arg1 + 0x248)
    
    if (rcx_23 != 0)
        int32_t arg_10 = *rdi
        return sub_141a56940(rcx_23 + 0x30, &rdi[2], &arg_10)
else
    void*** var_a0
    void var_50
    void**** rax_5 = sub_140b9e470(&var_a0, arg1, sub_140a96170(&var_50))
    void*** var_d0 = *rax_5
    int64_t* rcx_3 = rax_5[1]
    
    if (rcx_3 != 0)
        rcx_3[1].d += 1
    
    void var_d8
    sub_140b58170(&var_d8, "PIE", 1)
    void var_68
    int64_t* rax_6 =
        _vfprintf_p_l(&var_68, The specified binding ID is not valid", LevelSequenceActor")
    void var_c0
    void var_b0
    void var_38
    sub_140aced10(*sub_140ae44d0(sub_140accdf0(&var_38, &var_d8), &var_b0, rax_6), &var_c0, &var_d0)
    int64_t* var_b8
    
    if (var_b8 != 0)
        var_b8[1].d -= 1
        
        if (var_b8[1].d == 1)
            (**var_b8)(var_b8)
            int32_t temp3_1 = *(var_b8 + 0xc)
            *(var_b8 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_b8 + 8))(var_b8, 1)
    
    int64_t* var_a8
    
    if (var_a8 != 0)
        var_a8[1].d -= 1
        
        if (var_a8[1].d == 1)
            (**var_a8)(var_a8)
            int32_t temp4_1 = *(var_a8 + 0xc)
            *(var_a8 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_a8 + 8))(var_a8, 1)
    
    result = sub_140acd9c0(&var_38)
    int64_t* var_60
    
    if (var_60 != 0)
        result = var_60[1].d
        var_60[1].d -= 1
        
        if (result == 1)
            (**var_60)(var_60)
            result = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*var_60 + 8))(var_60, 1)
    
    if (rcx_3 != 0)
        rcx_3[1].d -= 1
        
        if (rcx_3[1].d == 1)
            result = (**rcx_3)(rcx_3)
            int32_t temp7_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*(*rcx_3 + 8))(rcx_3, 1)
    
    int64_t* var_98
    
    if (var_98 != 0)
        var_98[1].d -= 1
        
        if (var_98[1].d == 1)
            result = (**var_98)(var_98)
            int32_t temp8_1 = *(var_98 + 0xc)
            *(var_98 + 0xc) -= 1
            
            if (temp8_1 == 1)
                result = (*(*var_98 + 8))(var_98, 1)
    
    int64_t* var_48
    
    if (var_48 != 0)
        result = var_48[1].d
        var_48[1].d -= 1
        
        if (result == 1)
            result = (**var_48)(var_48)
            int32_t rdi_1 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*var_48 + 8))(var_48, zx.q(rdi_1))

return result
