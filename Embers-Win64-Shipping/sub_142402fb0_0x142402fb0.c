// 函数: sub_142402fb0
// 地址: 0x142402fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
*arg3 = 0
char rax_2 = *(arg1 + 0x18c)
int32_t result

if (rax_2 != 4)
    int32_t rdi_2 = 0
    uint32_t rcx_51 = zx.d(rax_2)
    int32_t rax_54
    
    if (rax_2 == 0)
        rax_54 = arg2:4.d
        
        if (arg2.d s<= rax_54)
            rax_54 = arg2.d
        
        rdi_2 = rax_54
    else if (rcx_51 == 1)
        rax_54 = arg2:4.d
        
        if (arg2.d s>= rax_54)
            rax_54 = arg2.d
        
        rdi_2 = rax_54
    else if (rcx_51 == 2)
        rdi_2 = arg2.d
    else if (rcx_51 == 3)
        rdi_2 = arg2:4.d
    result = sub_141f86ef0(sub_141f8b8d0(arg1 + 0x1a8), _mm_cvtepi32_ps(zx.o(rdi_2)), 0x3f800000)
else
    void* rdi = *(arg1 + 0x248)
    
    if (rdi != 0)
    label_14240346d:
        int64_t* rcx_49 = *(arg1 + 0x250)
        
        if (rcx_49 == 0)
            rcx_49 = *(rdi + 0x118)
            
            if (rcx_49 == 0)
                (*(*rdi + 0x390))(rdi)
                rcx_49 = *(rdi + 0x118)
            
            *(arg1 + 0x250) = rcx_49
        
        result = (*(*rcx_49 + 0x260))(rcx_49, arg2)
    else
        void* rax_3 = sub_1423fa5f0(arg1 + 0x190)
        *(arg1 + 0x248) = rax_3
        rdi = rax_3
        
        if (rax_3 != 0)
            goto label_14240346d
        
        int64_t var_108
        void var_78
        int64_t* rax_5 = sub_140aae2f0(&var_78, sub_140d30800(arg1 + 0x190, &var_108))
        void var_c8
        char* var_b0
        char** rax_7 = sub_140a96390(&var_b0, 
            _vfprintf_p_l(&var_c8, 
                Project Settings - User Interface Custom Scaling Rule '{0}' could not be found.", 
            Engine"))
        int64_t rcx_5 = *rax_5
        int64_t* rcx_6 = rax_5[1]
        int32_t var_60_1 = 4
        
        if (rcx_6 != 0)
            rcx_6[1].d += 1
        
        int32_t rcx_7 = rax_5[2].d
        char var_38_1 = 1
        int32_t* var_188 = nullptr
        int32_t var_180_1 = 1
        sub_1405a4b40(&var_188, 1, 0)
        int32_t* rcx_9 = var_188
        *rcx_9 = var_60_1
        int64_t var_58
        *(rcx_9 + 8) = var_58
        *(rcx_9 + 8) = var_58
        rcx_9[2] = var_58.d
        *(rcx_9 + 8) = var_58
        rcx_9[0xa].b = 0
        
        if (var_38_1 != 0)
            *(rcx_9 + 0x10) = rcx_5
            *(rcx_9 + 0x18) = rcx_6
            
            if (rcx_6 != 0)
                rcx_6[1].d += 1
            
            rcx_9[8] = rcx_7
            rcx_9[0xa].b = 1
        
        char* var_148 = *rax_7
        void* rax_15 = rax_7[1]
        void* var_140_1 = rax_15
        
        if (rax_15 != 0)
            *(rax_15 + 8) += 1
        
        void var_f8
        int64_t* rax_16 = sub_140aac870(&var_f8, &var_148, &var_188)
        int64_t var_178 = *rax_16
        int64_t* rcx_12 = rax_16[1]
        
        if (rcx_12 != 0)
            rcx_12[1].d += 1
        
        int32_t var_168_1 = rax_16[2].d
        int64_t* var_f0
        
        if (var_f0 != 0)
            var_f0[1].d -= 1
            
            if (var_f0[1].d == 1)
                (**var_f0)(var_f0)
                int32_t rax_20 = *(var_f0 + 0xc)
                *(var_f0 + 0xc) -= 1
                
                if (rax_20 == 1)
                    (*(*var_f0 + 8))(var_f0, 1)
        
        sub_140596f50(&var_188)
        
        if (var_38_1 != 0)
            char var_38_2 = 0
            
            if (rcx_6 != 0)
                rcx_6[1].d -= 1
                
                if (rcx_6[1].d == 1)
                    (**rcx_6)(rcx_6)
                    int32_t rax_24 = *(rcx_6 + 0xc)
                    *(rcx_6 + 0xc) -= 1
                    
                    if (rax_24 == 1)
                        (*(*rcx_6 + 8))(rcx_6, 1)
        
        int64_t* rbx_3 = rax_7[1]
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_28 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_28 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        int64_t* rbx_4 = rax_5[1]
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t rax_32 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rax_32 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        void*** var_118
        void**** rax_34 = sub_140a005b0(&var_118, &var_178)
        void*** var_158 = *rax_34
        int64_t* rcx_24 = rax_34[1]
        
        if (rcx_24 != 0)
            rcx_24[1].d += 1
        
        void var_160
        sub_140b58170(&var_160, "MapCheck", 1)
        void var_e0
        int64_t* rax_35 = sub_140a96170(&var_e0)
        void var_138
        void var_128
        void var_a0
        sub_140aced10(*sub_140ad3d20(sub_140accdf0(&var_a0, &var_160), &var_128, rax_35), &var_138, 
            &var_158)
        int64_t* var_130
        
        if (var_130 != 0)
            var_130[1].d -= 1
            
            if (var_130[1].d == 1)
                (**var_130)(var_130)
                int32_t temp5_1 = *(var_130 + 0xc)
                *(var_130 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_130 + 8))(var_130, 1)
        
        int64_t* var_120
        
        if (var_120 != 0)
            var_120[1].d -= 1
            
            if (var_120[1].d == 1)
                (**var_120)(var_120)
                int32_t temp6_1 = *(var_120 + 0xc)
                *(var_120 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_120 + 8))(var_120, 1)
        
        int512_t zmm0_2
        result, zmm0_2 = sub_140acd9c0(&var_a0)
        int64_t* var_d8
        
        if (var_d8 != 0)
            result = var_d8[1].d
            var_d8[1].d -= 1
            
            if (result == 1)
                (**var_d8)(var_d8)
                result = *(var_d8 + 0xc)
                *(var_d8 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*var_d8 + 8))(var_d8, 1)
        
        if (rcx_24 != 0)
            rcx_24[1].d -= 1
            
            if (rcx_24[1].d == 1)
                result = (**rcx_24)(rcx_24)
                int32_t temp9_1 = *(rcx_24 + 0xc)
                *(rcx_24 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    result = (*(*rcx_24 + 8))(rcx_24, 1)
        
        int64_t* var_110
        
        if (var_110 != 0)
            var_110[1].d -= 1
            
            if (var_110[1].d == 1)
                result = (**var_110)(var_110)
                int32_t temp10_1 = *(var_110 + 0xc)
                *(var_110 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    result = (*(*var_110 + 8))(var_110, 1)
        
        if (rcx_12 != 0)
            result = rcx_12[1].d
            rcx_12[1].d -= 1
            
            if (result == 1)
                (**rcx_12)(rcx_12)
                result = *(rcx_12 + 0xc)
                *(rcx_12 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rcx_12 + 8))(rcx_12, 1)
        
        int64_t* var_c0
        
        if (var_c0 != 0)
            result = var_c0[1].d
            var_c0[1].d -= 1
            
            if (result == 1)
                result = (**var_c0)(var_c0)
                int32_t rdi_1 = *(var_c0 + 0xc)
                *(var_c0 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    result = (*(*var_c0 + 8))(var_c0, zx.q(rdi_1))
        
        int64_t rcx_46 = var_108
        
        if (rcx_46 != 0)
            result, zmm0_2 = sub_140a74f90(rcx_46)
        
        zmm0_2.o = 0x3f800000
        *arg3 = 1

__security_check_cookie(rax_1 ^ &var_1a8)
return result
