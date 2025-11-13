// 函数: sub_140b7ed00
// 地址: 0x140b7ed00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t var_1e8 = 0
int64_t var_1e0 = 0
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int64_t* rdi_6

if (sub_140b1f370(&var_1e8, rdx, 0, 0) != 0)
    int128_t var_188 = zx.o(0)
    void*** rax_46 = j_sub_140a82f30(0x88)
    void*** rbx_2
    
    if (rax_46 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = sub_1406ca050(rax_46, &var_1e8)
    
    void*** rax_48 = j_sub_140a82f30(0x18)
    
    if (rax_48 == 0)
        rax_48 = nullptr
    else
        rax_48[1].d = 1
        *rax_48 = &data_142d83c20
        *(rax_48 + 0xc) = 1
        rax_48[2] = rbx_2
    
    uint128_t zmm0_1 = rbx_2.o
    uint128_t var_198 = zmm0_1
    void* rax_49 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_49 != 0)
        *(rax_49 + 8) += 1
        
        if (rax_48 != 0)
            rax_48[1].d -= 1
            
            if (rax_48[1].d == 1)
                (**rax_48)(rax_48)
                int32_t temp2_1 = *(rax_48 + 0xc)
                *(rax_48 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rax_48)[1](rax_48, 1)
    
    char rax_52 = sub_1409173d0(&var_198, &var_188, 0)
    int64_t* rdx_7
    
    if (rax_52 != 0)
        rdx_7 = var_188.q
    
    if (rax_52 == 0 || rdx_7 == 0)
        void var_c0
        int64_t* rax_54 = sub_140aae420(&var_c0, var_198.q + 0x38)
        void var_110
        char* var_e8
        char** rax_56 = sub_140a96390(&var_e8, _vfprintf_p_l(&var_110, Failed to read file. {0}", 
            PluginManifest"))
        int64_t rcx_33 = *rax_54
        int64_t* rcx_34 = rax_54[1]
        int32_t var_78_1 = 4
        
        if (rcx_34 != 0)
            rcx_34[1].d += 1
        
        int32_t rax_57 = rax_54[2].d
        char var_50_1 = 1
        int32_t* var_1f8 = nullptr
        int32_t var_1f0_1 = 1
        sub_1405a4b40(&var_1f8, 1, 0)
        int32_t* rcx_36 = var_1f8
        *rcx_36 = var_78_1
        int64_t var_70
        *(rcx_36 + 8) = var_70
        *(rcx_36 + 8) = var_70
        rcx_36[2] = var_70.d
        *(rcx_36 + 8) = var_70
        rcx_36[0xa].b = 0
        
        if (var_50_1 != 0)
            *(rcx_36 + 0x10) = rcx_33
            *(rcx_36 + 0x18) = rcx_34
            
            if (rcx_34 != 0)
                rcx_34[1].d += 1
            
            rcx_36[8] = rax_57
            rcx_36[0xa].b = 1
        
        char* var_168 = *rax_56
        void* rax_65 = rax_56[1]
        void* var_160_1 = rax_65
        
        if (rax_65 != 0)
            *(rax_65 + 8) += 1
        
        void var_128
        int64_t* rax_66 = sub_140aac870(&var_128, &var_168, &var_1f8)
        int64_t rcx_38 = *rax_66
        void* rcx_39 = rax_66[1]
        
        if (rcx_39 != 0)
            *(rcx_39 + 8) += 1
        
        int32_t rax_67 = rax_66[2].d
        int64_t* var_120
        
        if (var_120 != 0)
            var_120[1].d -= 1
            
            if (var_120[1].d == 1)
                (**var_120)(var_120)
                int32_t rax_70 = *(var_120 + 0xc)
                *(var_120 + 0xc) -= 1
                
                if (rax_70 == 1)
                    (*(*var_120 + 8))(var_120, 1)
        
        sub_140596f50(&var_1f8)
        
        if (var_50_1 != 0)
            char var_50_2 = 0
            
            if (rcx_34 != 0)
                rcx_34[1].d -= 1
                
                if (rcx_34[1].d == 1)
                    (**rcx_34)(rcx_34)
                    int32_t rax_74 = *(rcx_34 + 0xc)
                    *(rcx_34 + 0xc) -= 1
                    
                    if (rax_74 == 1)
                        (*(*rcx_34 + 8))(rcx_34, 1)
        
        int64_t* rdi_9 = rax_56[1]
        
        if (rdi_9 != 0)
            rdi_9[1].d -= 1
            
            if (rdi_9[1].d == 1)
                (**rdi_9)(rdi_9)
                int32_t rax_78 = *(rdi_9 + 0xc)
                *(rdi_9 + 0xc) -= 1
                
                if (rax_78 == 1)
                    (*(*rdi_9 + 8))(rdi_9, 1)
        
        int64_t* rdi_10 = rax_54[1]
        
        if (rdi_10 != 0)
            rdi_10[1].d -= 1
            
            if (rdi_10[1].d == 1)
                (**rdi_10)(rdi_10)
                int32_t rax_82 = *(rdi_10 + 0xc)
                *(rdi_10 + 0xc) -= 1
                
                if (rax_82 == 1)
                    (*(*rdi_10 + 8))(rdi_10, 1)
        
        int64_t rcx_49 = *arg3
        *arg3 = rcx_38
        int64_t* rdi_11 = arg3[1]
        arg3[1] = rcx_39
        arg3[2].d = rax_67
        int64_t var_1c0_2 = rcx_49
        int64_t* var_1b8_2 = rdi_11
        
        if (rdi_11 != 0)
            rdi_11[1].d -= 1
            
            if (rdi_11[1].d == 1)
                (**rdi_11)(rdi_11)
                int32_t rax_90 = *(rdi_11 + 0xc)
                *(rdi_11 + 0xc) -= 1
                
                if (rax_90 == 1)
                    (*(*rdi_11 + 8))(rdi_11, 1)
        
        int64_t* var_108
        
        if (var_108 != 0)
            var_108[1].d -= 1
            
            if (var_108[1].d == 1)
                (**var_108)(var_108)
                int32_t rbx_4 = *(var_108 + 0xc)
                *(var_108 + 0xc) -= 1
                
                if (rbx_4 == 1)
                    (*(*var_108 + 8))(var_108, zx.q(rbx_4))
        
        rdi_6.b = 0
    else
        rdi_6 = zx.q(sub_140b85320(arg1, rdx_7, arg3))
    
    int64_t* rbx_5 = var_198:8.q
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp6_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    int64_t* rbx_6 = var_188:8.q
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp9_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)
else
    void var_d8
    int64_t* rax_3 = sub_140aae420(&var_d8, arg2)
    void var_140
    char* var_f8
    char** rax_5 = sub_140a96390(&var_f8, 
        _vfprintf_p_l(&var_140, Failed to open descriptor file '{0}'", PluginManifest"))
    int64_t rcx_4 = *rax_3
    int64_t* rcx_5 = rax_3[1]
    int32_t var_a8_1 = 4
    
    if (rcx_5 != 0)
        rcx_5[1].d += 1
    
    int32_t rax_6 = rax_3[2].d
    char var_80_1 = 1
    int32_t* var_208 = nullptr
    int32_t var_200_1 = 1
    sub_1405a4b40(&var_208, 1, 0)
    int32_t* rcx_7 = var_208
    *rcx_7 = var_a8_1
    int64_t var_a0
    *(rcx_7 + 8) = var_a0
    *(rcx_7 + 8) = var_a0
    rcx_7[2] = var_a0.d
    *(rcx_7 + 8) = var_a0
    rcx_7[0xa].b = 0
    
    if (var_80_1 != 0)
        *(rcx_7 + 0x10) = rcx_4
        *(rcx_7 + 0x18) = rcx_5
        
        if (rcx_5 != 0)
            rcx_5[1].d += 1
        
        rcx_7[8] = rax_6
        rcx_7[0xa].b = 1
    
    char* var_178 = *rax_5
    void* rax_14 = rax_5[1]
    void* var_170_1 = rax_14
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
    
    void var_158
    int64_t* rax_15 = sub_140aac870(&var_158, &var_178, &var_208)
    int64_t rcx_9 = *rax_15
    void* rcx_10 = rax_15[1]
    
    if (rcx_10 != 0)
        *(rcx_10 + 8) += 1
    
    int32_t rax_16 = rax_15[2].d
    int64_t* var_150
    
    if (var_150 != 0)
        var_150[1].d -= 1
        
        if (var_150[1].d == 1)
            (**var_150)(var_150)
            int32_t rax_19 = *(var_150 + 0xc)
            *(var_150 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*var_150 + 8))(var_150, 1)
    
    sub_140596f50(&var_208)
    
    if (var_80_1 != 0)
        char var_80_2 = 0
        
        if (rcx_5 != 0)
            rcx_5[1].d -= 1
            
            if (rcx_5[1].d == 1)
                (**rcx_5)(rcx_5)
                int32_t rax_23 = *(rcx_5 + 0xc)
                *(rcx_5 + 0xc) -= 1
                
                if (rax_23 == 1)
                    (*(*rcx_5 + 8))(rcx_5, 1)
    
    int64_t* rdi_3 = rax_5[1]
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t rax_27 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rax_27 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* rdi_4 = rax_3[1]
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_31 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_31 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    int64_t rcx_20 = *arg3
    *arg3 = rcx_9
    int64_t* rdi_5 = arg3[1]
    arg3[1] = rcx_10
    arg3[2].d = rax_16
    int64_t var_1d8_2 = rcx_20
    int64_t* var_1d0_2 = rdi_5
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t rax_39 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (rax_39 == 1)
                (*(*rdi_5 + 8))(rdi_5, 1)
    
    int64_t* var_138
    
    if (var_138 != 0)
        var_138[1].d -= 1
        
        if (var_138[1].d == 1)
            (**var_138)(var_138)
            int32_t rbx_1 = *(var_138 + 0xc)
            *(var_138 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*var_138 + 8))(var_138, zx.q(rbx_1))
    
    rdi_6.b = 0

int64_t rcx_58 = var_1e8

if (rcx_58 != 0)
    sub_140a74f90(rcx_58)

__security_check_cookie(rax_1 ^ &var_228)
return zx.q(rdi_6.b)
