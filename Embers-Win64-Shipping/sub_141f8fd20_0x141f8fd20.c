// 函数: sub_141f8fd20
// 地址: 0x141f8fd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t result

if ((*(arg1 + 0x294) & 4) != 0 || arg1[0x1e].b == 3)
    (*(*arg1 + 0x6c8))()
    result = sub_142498d00(arg1, arg2)
else
    void var_110
    sub_140b58170(&var_110, "PIE", 1)
    int64_t var_118 = arg1[3]
    void var_68
    int64_t* rax_3 = sub_140aae2b0(&var_68, &var_118)
    void var_b8
    char* var_a0
    char** rax_5 = sub_140a96390(&var_a0, 
        _vfprintf_p_l(&var_b8, 
            Possess function should only be used by the network authority for {0}", 
        Controller"))
    int64_t rcx_4 = *rax_3
    int64_t* rcx_5 = rax_3[1]
    int32_t var_50_1 = 4
    
    if (rcx_5 != 0)
        rcx_5[1].d += 1
    
    int32_t rcx_6 = rax_3[2].d
    char var_28_1 = 1
    int32_t* var_128 = nullptr
    int32_t var_120_1 = 1
    sub_1405a4b40(&var_128, 1, 0)
    int32_t* rcx_8 = var_128
    *rcx_8 = var_50_1
    int64_t var_48
    *(rcx_8 + 8) = var_48
    *(rcx_8 + 8) = var_48
    rcx_8[2] = var_48.d
    *(rcx_8 + 8) = var_48
    rcx_8[0xa].b = 0
    
    if (var_28_1 != 0)
        *(rcx_8 + 0x10) = rcx_4
        *(rcx_8 + 0x18) = rcx_5
        
        if (rcx_5 != 0)
            rcx_5[1].d += 1
        
        rcx_8[8] = rcx_6
        rcx_8[0xa].b = 1
    
    char* var_f0 = *rax_5
    void* rax_13 = rax_5[1]
    void* var_e8_1 = rax_13
    
    if (rax_13 != 0)
        *(rax_13 + 8) += 1
    
    void var_d0
    int64_t* rax_14 = sub_140aac870(&var_d0, &var_f0, &var_128)
    int64_t var_108 = *rax_14
    int64_t* rcx_11 = rax_14[1]
    
    if (rcx_11 != 0)
        rcx_11[1].d += 1
    
    int32_t var_f8_1 = rax_14[2].d
    int64_t* var_c8
    
    if (var_c8 != 0)
        var_c8[1].d -= 1
        
        if (var_c8[1].d == 1)
            (**var_c8)(var_c8)
            int32_t rax_18 = *(var_c8 + 0xc)
            *(var_c8 + 0xc) -= 1
            
            if (rax_18 == 1)
                (*(*var_c8 + 8))(var_c8, 1)
    
    sub_140596f50(&var_128)
    
    if (var_28_1 != 0)
        char var_28_2 = 0
        
        if (rcx_5 != 0)
            rcx_5[1].d -= 1
            
            if (rcx_5[1].d == 1)
                (**rcx_5)(rcx_5)
                int32_t rax_22 = *(rcx_5 + 0xc)
                *(rcx_5 + 0xc) -= 1
                
                if (rax_22 == 1)
                    (*(*rcx_5 + 8))(rcx_5, 1)
    
    int64_t* rdi_3 = rax_5[1]
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t rax_26 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rax_26 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* rdi_4 = rax_3[1]
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_30 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_30 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    void var_e0
    void var_90
    sub_140ae44d0(sub_140accdf0(&var_90, &var_110), &var_e0, &var_108)
    int64_t* var_d8
    
    if (var_d8 != 0)
        var_d8[1].d -= 1
        
        if (var_d8[1].d == 1)
            (**var_d8)(var_d8)
            int32_t temp2_1 = *(var_d8 + 0xc)
            *(var_d8 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_d8 + 8))(var_d8, 1)
    
    result = sub_140acd9c0(&var_90)
    
    if (rcx_11 != 0)
        result = rcx_11[1].d
        rcx_11[1].d -= 1
        
        if (result == 1)
            (**rcx_11)(rcx_11)
            result = *(rcx_11 + 0xc)
            *(rcx_11 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*rcx_11 + 8))(rcx_11, 1)
    
    int64_t* var_b0
    
    if (var_b0 != 0)
        result = var_b0[1].d
        var_b0[1].d -= 1
        
        if (result == 1)
            result = (**var_b0)(var_b0)
            int32_t rbx_1 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (rbx_1 == 1)
                result = (*(*var_b0 + 8))(var_b0, zx.q(rbx_1))

__security_check_cookie(rax_1 ^ &var_148)
return result
