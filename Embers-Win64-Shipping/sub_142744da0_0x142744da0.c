// 函数: sub_142744da0
// 地址: 0x142744da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t result_1 = 0
uint64_t result

if (arg1 != 0)
    void var_f0
    float var_68[0x4]
    sub_1417cbc40(&var_68, (*(*arg1 + 0xa0))(arg1, &var_f0))
    int32_t rax_5 = (*(*arg1 + 0xc8))(arg1)
    int32_t rdx_2 = arg2[1].d
    uint64_t r8 = zx.q(rdx_2)
    
    if (rax_5 u> rdx_2)
        r8 = zx.q(rax_5)
        arg2[1].d = rax_5
        
        if (rax_5 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
            r8 = zx.q(arg2[1].d)
    
    int32_t i_2 = (*(*arg1 + 0xd0))(arg1, *arg2, r8, 0)
    int64_t* rbx_1 = *arg2
    
    if (i_2 != 0)
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            int64_t* rcx_4 = *rbx_1
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x90))(rcx_4, &var_f0)
                float var_98[0x4]
                sub_1417cbc40(&var_98, &var_f0)
                float zmm4_1[0x4] = var_68
                float zmm1_1[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                float zmm0_1[0x4]
                
                if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_mul_ps(zmm1_1, zmm1_1), 
                        data_143f741a0, 1)) != 0)
                    float zmm2_1[0x4] = var_98
                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
                    float zmm3_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), zmm0_1)
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm2_1)
                    zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
                    zmm3_1 = __mulps_xmmps_memps(zmm3_1, data_143f74190)
                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm1_1)
                    zmm1_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm0_1)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm2_1)
                    zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f74180)
                    zmm4_1 = __mulps_xmmps_memps(zmm4_1, data_143f74170)
                    var_98 = _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_1), zmm4_1)
                
                float var_88[0x4]
                float var_58[0x4]
                zmm0_1 = __addps_xmmps_memps(var_88, var_58)
                float var_78[0x4]
                float var_48[0x4]
                zmm1_1 = __mulps_xmmps_memps(var_78, var_48)
                int64_t* rcx_6 = *rbx_1
                var_88 = zmm0_1
                var_78 = zmm1_1
                int32_t rax_10 = (*(*rcx_6 + 0x30))(rcx_6)
                int32_t var_d0
                int32_t var_b4
                char var_a8
                
                if (rax_10 == 4)
                    int64_t* rcx_12 = *rbx_1
                    zmm0_1 = data_142e6da00
                    var_d0 = 4
                    float var_cc_2[0x4] = zmm0_1
                    int64_t var_bc_2 = 0
                    var_b4 = 0x3f800000
                    int64_t var_b0_1 = 0
                    var_a8 = 0
                    int16_t var_a7_1 = 0
                    char var_a5_1 = 0
                    
                    if ((*(*rcx_12 + 0x68))(rcx_12, &var_d0) != 0)
                        int64_t r9_2 = *arg3
                        result_1 += 1
                        (*(r9_2 + 0x18))(arg3, var_b0_1, &var_98, r9_2)
                else if (rax_10 == 5)
                    int64_t* rcx_9 = *rbx_1
                    zmm0_1 = data_142e6da00
                    var_d0 = 5
                    float var_cc_1[0x4] = zmm0_1
                    int64_t var_bc_1 = 0
                    var_b4.q = 0x3f800000
                    var_a8.q = 0
                    
                    if ((*(*rcx_9 + 0x70))(rcx_9, &var_d0) != 0)
                        int64_t* rcx_10 = var_a8.q
                        result_1 += 1
                        void var_f8
                        char* rax_14 = (*(*rcx_10 + 0x58))(rcx_10, &var_f8)
                        int64_t r9_1 = *arg3
                        float (* r8_1)[0x4] = &var_98
                        int64_t rdx_8 = var_a8.q
                        
                        if ((*rax_14 & 2) == 0)
                            (*(r9_1 + 0x10))(arg3, rdx_8, r8_1, r9_1)
                        else
                            (*(r9_1 + 8))(arg3, rdx_8, r8_1, r9_1)
            
            rbx_1 = &rbx_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_118)
return result
