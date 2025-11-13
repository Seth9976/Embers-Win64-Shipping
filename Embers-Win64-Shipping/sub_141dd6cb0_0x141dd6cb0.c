// 函数: sub_141dd6cb0
// 地址: 0x141dd6cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
uint64_t result = __security_cookie ^ &var_188
uint64_t result_1 = result

if (*(arg1 + 0x130) != 0)
    if (_finite(_mm_cvtps_pd((*arg2).q).q) == 0)
    label_141dd6d6b:
        void var_148
        int64_t zmm6_1 = sub_140b58170(&var_148, "Blueprint", 1)
        float zmm0_1[0x2] = *(arg2 + 8)
        _mm_cvtps_pd(*(arg2 + 4))
        float var_168_1[0x2] = _mm_cvtps_pd(zmm0_1)
        int64_t var_100
        sub_140a2e390(&var_100, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm6_1)
        void var_78
        int64_t* rax_5 = sub_140aae2f0(&var_78, &var_100)
        void var_c8
        char* var_b0
        char** rax_7 =
            sub_140a96390(&var_b0, _vfprintf_p_l(&var_c8, Scale '{0}' is not valid.", Actor"))
        int64_t rcx_6 = *rax_5
        int64_t* rcx_7 = rax_5[1]
        int32_t var_60_1 = 4
        
        if (rcx_7 != 0)
            rcx_7[1].d += 1
        
        int32_t rcx_8 = rax_5[2].d
        char var_38_1 = 1
        int32_t* var_158 = nullptr
        int32_t var_150_1 = 1
        sub_1405a4b40(&var_158, 1, 0)
        int32_t* rcx_10 = var_158
        *rcx_10 = var_60_1
        int64_t var_58
        *(rcx_10 + 8) = var_58
        *(rcx_10 + 8) = var_58
        rcx_10[2] = var_58.d
        *(rcx_10 + 8) = var_58
        rcx_10[0xa].b = 0
        
        if (var_38_1 != 0)
            *(rcx_10 + 0x10) = rcx_6
            *(rcx_10 + 0x18) = rcx_7
            
            if (rcx_7 != 0)
                rcx_7[1].d += 1
            
            rcx_10[8] = rcx_8
            rcx_10[0xa].b = 1
        
        char* var_110 = *rax_7
        void* rax_15 = rax_7[1]
        void* var_108_1 = rax_15
        
        if (rax_15 != 0)
            *(rax_15 + 8) += 1
        
        void var_e0
        int64_t* rax_16 = sub_140aac870(&var_e0, &var_110, &var_158)
        int64_t var_128 = *rax_16
        int64_t* rcx_13 = rax_16[1]
        
        if (rcx_13 != 0)
            rcx_13[1].d += 1
        
        int32_t var_118_1 = rax_16[2].d
        int64_t* var_d8
        
        if (var_d8 != 0)
            var_d8[1].d -= 1
            
            if (var_d8[1].d == 1)
                (**var_d8)(var_d8)
                int32_t rax_20 = *(var_d8 + 0xc)
                *(var_d8 + 0xc) -= 1
                
                if (rax_20 == 1)
                    (*(*var_d8 + 8))(var_d8, 1)
        
        sub_140596f50(&var_158)
        
        if (var_38_1 != 0)
            char var_38_2 = 0
            
            if (rcx_7 != 0)
                rcx_7[1].d -= 1
                
                if (rcx_7[1].d == 1)
                    (**rcx_7)(rcx_7)
                    int32_t rax_24 = *(rcx_7 + 0xc)
                    *(rcx_7 + 0xc) -= 1
                    
                    if (rax_24 == 1)
                        (*(*rcx_7 + 8))(rcx_7, 1)
        
        int64_t* rdi_3 = rax_7[1]
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rax_28 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_28 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        int64_t* rdi_4 = rax_5[1]
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t rax_32 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (rax_32 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
        
        void var_f0
        void var_a0
        sub_140ae44d0(sub_140accdf0(&var_a0, &var_148), &var_f0, &var_128)
        int64_t* var_e8
        
        if (var_e8 != 0)
            var_e8[1].d -= 1
            
            if (var_e8[1].d == 1)
                (**var_e8)(var_e8)
                int32_t temp2_1 = *(var_e8 + 0xc)
                *(var_e8 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_e8 + 8))(var_e8, 1)
        
        result = sub_140acd9c0(&var_a0)
        
        if (rcx_13 != 0)
            result = zx.q(rcx_13[1].d)
            rcx_13[1].d -= 1
            
            if (result.d == 1)
                (**rcx_13)(rcx_13)
                result = zx.q(*(rcx_13 + 0xc))
                *(rcx_13 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*(*rcx_13 + 8))(rcx_13, 1)
        
        int64_t* var_c0
        
        if (var_c0 != 0)
            result = zx.q(var_c0[1].d)
            var_c0[1].d -= 1
            
            if (result.d == 1)
                result = (**var_c0)(var_c0)
                int32_t rbx_1 = *(var_c0 + 0xc)
                *(var_c0 + 0xc) -= 1
                
                if (rbx_1 == 1)
                    result = (*(*var_c0 + 8))(var_c0, zx.q(rbx_1))
        
        int64_t rcx_32 = var_100
        
        if (rcx_32 != 0)
            result = sub_140a74f90(rcx_32)
    else
        if (_finite(_mm_cvtps_pd(*(arg2 + 4))) == 0)
            goto label_141dd6d6b
        
        if (_finite(_mm_cvtps_pd(*(arg2 + 8))) == 0)
            goto label_141dd6d6b
        
        int32_t rax_4 = *(arg2 + 8)
        int64_t* rcx = *(arg1 + 0x130)
        double var_138 = *arg2
        int32_t var_130_1 = rax_4
        result = sub_141f48ee0(rcx, &var_138)

__security_check_cookie(result_1 ^ &var_188)
return result
