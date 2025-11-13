// 函数: sub_141bb6450
// 地址: 0x141bb6450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t* rax_3 = (*(*arg1 + 0x288))()
int32_t result

if (rax_3 == 0)
    void var_118
    sub_140b58170(&var_118, "PIE", 1)
    int64_t var_120 = *(arg1[2] + 0x18)
    void var_70
    int64_t* rax_10 = sub_140aae2b0(&var_70, &var_120)
    void var_c0
    char* var_a8
    char** rax_12 = sub_140a96390(&var_a8, 
        _vfprintf_p_l(&var_c0, 
            Unable to listen to input actions without a player controller in {0}.", 
        &data_14306d0f0))
    int64_t rcx_10 = *rax_10
    int64_t* rcx_11 = rax_10[1]
    int32_t var_58_1 = 4
    
    if (rcx_11 != 0)
        rcx_11[1].d += 1
    
    int32_t rcx_12 = rax_10[2].d
    char var_30_1 = 1
    int32_t* var_130 = nullptr
    int32_t var_128_1 = 1
    sub_1405a4b40(&var_130, 1, 0)
    int32_t* rcx_14 = var_130
    *rcx_14 = var_58_1
    int64_t var_50
    *(rcx_14 + 8) = var_50
    *(rcx_14 + 8) = var_50
    rcx_14[2] = var_50.d
    *(rcx_14 + 8) = var_50
    rcx_14[0xa].b = 0
    
    if (var_30_1 != 0)
        *(rcx_14 + 0x10) = rcx_10
        *(rcx_14 + 0x18) = rcx_11
        
        if (rcx_11 != 0)
            rcx_11[1].d += 1
        
        rcx_14[8] = rcx_12
        rcx_14[0xa].b = 1
    
    char* var_f8 = *rax_12
    void* rax_20 = rax_12[1]
    void* var_f0_1 = rax_20
    
    if (rax_20 != 0)
        *(rax_20 + 8) += 1
    
    void var_d8
    int64_t* rax_21 = sub_140aac870(&var_d8, &var_f8, &var_130)
    int64_t var_110 = *rax_21
    int64_t* rcx_17 = rax_21[1]
    
    if (rcx_17 != 0)
        rcx_17[1].d += 1
    
    int32_t var_100_1 = rax_21[2].d
    int64_t* var_d0
    
    if (var_d0 != 0)
        var_d0[1].d -= 1
        
        if (var_d0[1].d == 1)
            (**var_d0)(var_d0)
            int32_t rax_25 = *(var_d0 + 0xc)
            *(var_d0 + 0xc) -= 1
            
            if (rax_25 == 1)
                (*(*var_d0 + 8))(var_d0, 1)
    
    sub_140596f50(&var_130)
    
    if (var_30_1 != 0)
        char var_30_2 = 0
        
        if (rcx_11 != 0)
            rcx_11[1].d -= 1
            
            if (rcx_11[1].d == 1)
                (**rcx_11)(rcx_11)
                int32_t rax_29 = *(rcx_11 + 0xc)
                *(rcx_11 + 0xc) -= 1
                
                if (rax_29 == 1)
                    (*(*rcx_11 + 8))(rcx_11, 1)
    
    int64_t* rdi_3 = rax_12[1]
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t rax_33 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rax_33 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* rdi_4 = rax_10[1]
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_37 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_37 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    void var_e8
    void var_98
    sub_140ad9270(sub_140accdf0(&var_98, &var_118), &var_e8, &var_110)
    int64_t* var_e0
    
    if (var_e0 != 0)
        var_e0[1].d -= 1
        
        if (var_e0[1].d == 1)
            (**var_e0)(var_e0)
            int32_t temp2_1 = *(var_e0 + 0xc)
            *(var_e0 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_e0 + 8))(var_e0, 1)
    
    result = sub_140acd9c0(&var_98)
    
    if (rcx_17 != 0)
        result = rcx_17[1].d
        rcx_17[1].d -= 1
        
        if (result == 1)
            (**rcx_17)(rcx_17)
            result = *(rcx_17 + 0xc)
            *(rcx_17 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*rcx_17 + 8))(rcx_17, 1)
    
    int64_t* var_b8
    
    if (var_b8 != 0)
        result = var_b8[1].d
        var_b8[1].d -= 1
        
        if (result == 1)
            result = (**var_b8)(var_b8)
            int32_t rbx_1 = *(var_b8 + 0xc)
            *(var_b8 + 0xc) -= 1
            
            if (rbx_1 == 1)
                result = (*(*var_b8 + 8))(var_b8, zx.q(rbx_1))
else
    int64_t var_138_1 = 0
    
    if ((1 & sub_140b5b8a0(0, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_6 = sub_140d2dfc0(sub_1424c7390(), arg1, 0, 0x40, 0, 0, 0, 0, 0)
    uint8_t rcx_2 = *(arg1 + 0x1b4)
    arg1[0x39] = rax_6
    *(rax_6 + 0x134) ^= (rcx_2 u>> 2 ^ *(rax_6 + 0x134)) & 1
    *(arg1[0x39] + 0x130) = arg1[0x36].d
    result = (*(*rax_3 + 0xbd8))(rax_3, arg1[0x39])

__security_check_cookie(rax_1 ^ &var_188)
return result
