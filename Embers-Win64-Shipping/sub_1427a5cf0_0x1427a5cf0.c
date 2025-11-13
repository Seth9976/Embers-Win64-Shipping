// 函数: sub_1427a5cf0
// 地址: 0x1427a5cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void var_e8
uint64_t result

if (*sub_1408f1b50(&arg1[0xb], &var_e8, arg2) != 0xffffffff)
    sub_1408f2170(&arg1[0xb], arg2)
    result.b = 1
else
    void var_78
    int64_t* rax_3 = sub_140aae420(&var_78, arg2)
    void var_a0
    char* var_88
    char** rax_5 = sub_140a96390(&var_88, 
        _vfprintf_p_l(&var_a0, 
            UInteractiveGizmoManager::DeregisterGizmoType: could not find requested type {0}", 
        UInteractiveGizmoManager"))
    int64_t rcx_4 = *rax_3
    int64_t* rcx_5 = rax_3[1]
    int32_t var_60_1 = 4
    
    if (rcx_5 != 0)
        rcx_5[1].d += 1
    
    int32_t rcx_6 = rax_3[2].d
    char var_38_1 = 1
    int32_t* var_f8 = nullptr
    int32_t var_f0_1 = 1
    sub_1405a4b40(&var_f8, 1, 0)
    int32_t* rcx_8 = var_f8
    *rcx_8 = var_60_1
    int64_t var_58
    *(rcx_8 + 8) = var_58
    *(rcx_8 + 8) = var_58
    rcx_8[2] = var_58.d
    *(rcx_8 + 8) = var_58
    rcx_8[0xa].b = 0
    
    if (var_38_1 != 0)
        *(rcx_8 + 0x10) = rcx_4
        *(rcx_8 + 0x18) = rcx_5
        
        if (rcx_5 != 0)
            rcx_5[1].d += 1
        
        rcx_8[8] = rcx_6
        rcx_8[0xa].b = 1
    
    char* var_c8 = *rax_5
    void* rax_13 = rax_5[1]
    void* var_c0_1 = rax_13
    
    if (rax_13 != 0)
        *(rax_13 + 8) += 1
    
    void var_b8
    int64_t* rax_14 = sub_140aac870(&var_b8, &var_c8, &var_f8)
    int64_t var_e0 = *rax_14
    int64_t* rcx_11 = rax_14[1]
    
    if (rcx_11 != 0)
        rcx_11[1].d += 1
    
    int32_t var_d0_1 = rax_14[2].d
    int64_t* var_b0
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            (**var_b0)(var_b0)
            int32_t rax_18 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (rax_18 == 1)
                (*(*var_b0 + 8))(var_b0, 1)
    
    sub_140596f50(&var_f8)
    
    if (var_38_1 != 0)
        char var_38_2 = 0
        
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
    
    (*(*arg1 + 0x2b0))(arg1, &var_e0, 0)
    
    if (rcx_11 != 0)
        rcx_11[1].d -= 1
        
        if (rcx_11[1].d == 1)
            (**rcx_11)(rcx_11)
            int32_t rax_35 = *(rcx_11 + 0xc)
            *(rcx_11 + 0xc) -= 1
            
            if (rax_35 == 1)
                (*(*rcx_11 + 8))(rcx_11, 1)
    
    int64_t* var_98
    
    if (var_98 != 0)
        var_98[1].d -= 1
        
        if (var_98[1].d == 1)
            (**var_98)(var_98)
            int32_t rbx_1 = *(var_98 + 0xc)
            *(var_98 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*var_98 + 8))(var_98, zx.q(rbx_1))
    
    result.b = 0

__security_check_cookie(rax_1 ^ &var_118)
return result
