// 函数: sub_1419ee190
// 地址: 0x1419ee190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
sub_141ee9830(arg1)
int32_t result = sub_14221b2f0(&arg1[0x55])

if (result.b == 0)
    result = (*(*arg1 + 0x860))(arg1)
    
    if (arg1[0x95] != 0)
        float zmm1[0x4] = *(arg1 + 0x1c0)
        float temp0_1[0x4] = _mm_add_ps(zmm1, zmm1)
        float zmm6[0x4] = *(arg1 + 0x1e0)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        float zmm8[0x4] = *(arg1 + 0x1d0)
        float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), temp0_2)
        float temp0_5[0x4] = _mm_mul_ps(zmm1, temp0_1)
        float temp0_8[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x12), _mm_shuffle_ps(zmm1, zmm1, 0xff))
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x1a)
        float temp0_10[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 1)
        float temp0_11[0x4] = _mm_add_ps(temp0_8, temp0_4)
        float temp0_12[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_13[0x4] = _mm_sub_ps(temp0_4, temp0_8)
        float temp0_14[0x4] = _mm_add_ps(temp0_9, temp0_10)
        float zmm4_1[0x4] = data_143f225d0
        data_143dbb0c0
        float temp0_15[0x4] = _mm_mul_ps(temp0_12, temp0_13)
        float temp0_16[0x4] = _mm_sub_ps(zmm4_1, temp0_14)
        float temp0_17[0x4] = _mm_mul_ps(temp0_11, zmm6)
        zmm4_1[0].q = zmm8 u>> 0x40
        float var_128_1[0x4] = _mm_shuffle_ps(zmm8, zmm4_1, 0xc4)
        float zmm3[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_16, zmm6), data_143f225e0)
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_15, zmm3, 0x32)
        float temp0_22[0x4] = _mm_shuffle_ps(temp0_15, zmm3, 0x10)
        float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, zmm3, 0), temp0_21, 0x82)
        float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, temp0_15, 0x12), zmm3, 0xe8)
        int96_t var_148_1 =
            _mm_shuffle_ps(temp0_22, _mm_shuffle_ps(temp0_17, zmm3, 0x31), 0x88)[0].12
        int96_t var_138_1 = temp0_26[0].12
        data_143dbb0d0
        float var_158[0x4] = temp0_24
        int32_t var_1b8
        sub_1419ed880(&var_158, &var_1b8, 0x322bcc77)
        float zmm0_1 = sub_14062b8d0(&var_158)
        int32_t zmm11_1 = var_1b8
        
        if (not(zmm0_1 < 0f))
            uint128_t zmm1_1
            zmm1_1.d = _mm_cvtepi32_ps(zx.o(neg.d(arg1[0x84].d))).d f* *(arg1 + 0x424)
            zmm1_1.d = zmm1_1.d f* zmm11_1
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm1_1, 0), 0)
        
        int32_t zmm2_1 = var_138_1.d
        int32_t zmm3_1 = var_138_1:4.d
        int32_t zmm4_2 = var_138_1:8.d
        var_138_1.d = var_148_1.d
        var_138_1:8.d = var_148_1:8.d
        var_138_1:4.d = var_148_1:4.d.d
        var_148_1.d = zmm2_1
        var_148_1:4.d = zmm3_1
        var_148_1:8.d = zmm4_2
        float var_d8[0x4]
        uint128_t zmm6_1
        float zmm7_2[0x4]
        int32_t zmm9_1
        int32_t zmm11_2
        float zmm12_1[0x4]
        zmm6_1, zmm7_2, zmm9_1, zmm11_2, zmm12_1 = sub_1407c8dd0(&var_d8, &var_158)
        float zmm2_2[0x4] = var_d8
        int32_t r13_1 = arg1[0x85].d
        float temp0_32[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
        float temp0_33[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
        float var_114_1 = temp0_32[0]
        float var_c8[0x4]
        float temp0_34[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0x55)
        float var_118 = zmm2_2[0]
        float var_108_1 = var_c8[0]
        float temp0_35[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xaa)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
        float var_110_1 = temp0_33[0]
        float zmm1_2[0x4] = *(arg1 + 0x424)
        float var_100_1 = temp0_35[0]
        float var_10c_1 = temp0_36[0]
        float var_104_1 = temp0_34[0]
        
        if (r13_1 s> 0)
            zmm6_1 = _mm_cvtepi32_ps(zx.o(arg1[0x84].d))
            float temp0_38[0x4] = _mm_cvtepi32_ps(zx.o(r13_1))
            zmm6_1.d = zmm6_1.d f* zmm1_2[0]
            zmm6_1.d = zmm6_1.d f/ temp0_38[0]
        
        void* rax_5 = arg1[0x95]
        int32_t var_1b0
        float zmm8_1[0x2] = var_1b0
        zmm8_1[0] = zmm8_1[0] * 0.0078125f
        int64_t rcx_5 = *(rax_5 + 0x30)
        float var_1b4
        zmm1_2[0] = zmm1_2[0] * var_1b4
        int32_t var_f8 = 6
        zmm1_2[0] = zmm1_2[0] f* zmm11_2
        float var_e4_1 = zmm1_2[0]
        float zmm0_2[0x4] = _mm_cvtps_pd(zmm8_1)
        char var_dc_1 = 2
        int16_t var_db_1 = 0
        char var_d9_1 = 0
        float var_e8_1 = zmm8_1[0]
        float var_e0_1 = zmm1_2[0]
        result = _fpclass(zmm0_2[0].q)
        
        if ((result & 0x207) == 0)
            result = _fpclass(_mm_cvtps_pd(var_e4_1[0].q)[0].q)
            
            if ((result & 0x207) == 0)
                result = _fpclass(_mm_cvtps_pd(var_e0_1[0].q)[0].q)
                
                if ((result & 0x207) == 0 && not(var_e4_1[0] f< zmm9_1)
                        && not(var_e0_1[0] f< zmm9_1) && not(var_e8_1[0] < 1.52590218e-09f)
                        && rcx_5 != 0)
                    int64_t* rcx_6 = data_143ef8520
                    int64_t* rax_7 = (*(*rcx_6 + 0xa8))(rcx_6, &var_118)
                    void* rcx_7 = arg1[0x95]
                    int64_t* r10_1 = data_143ef8520
                    char var_1c8 = 0xb
                    char* var_1d0_1 = &var_1c8
                    char var_1d8_1 = 1
                    int64_t* rax_8 = (*(*r10_1 + 0xd8))(r10_1, &var_f8, *(rcx_7 + 0x20), 
                        zx.q(*(rcx_7 + 0x28)), var_1d8_1, var_1d0_1, var_1c8)
                    float var_1a8 = zmm12_1[0]
                    float var_1a4_1 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0x55)[0]
                    int64_t rax_9 = *rax_8
                    float temp0_43[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xff)
                    float temp0_44[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
                    float var_19c_1 = temp0_43[0]
                    float var_1a0_1 = temp0_44[0]
                    float temp0_45[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0x55)
                    float temp0_46[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xaa)
                    float var_194_1 = temp0_45[0]
                    float var_198_1 = zmm7_2[0]
                    float var_190_1 = temp0_46[0]
                    (*(rax_9 + 0x88))(rax_8, &var_1a8)
                    void* rax_10 = arg1[0x14]
                    int32_t rsi_1 = *(arg1 + 0xc)
                    int64_t var_188
                    __builtin_memset(&var_188, 0, 0x20)
                    int32_t rdi_1 = *(rax_10 + 0xc)
                    void* rax_12 = (*(*arg1 + 0x4b0))(arg1)
                    int64_t rdx_6 = *arg1
                    sub_141eb5f10(&var_1b8, (*(rdx_6 + 0x4d8))(arg1, rdx_6), 0, rax_12)
                    int32_t rcx_13 = var_1b8
                    int64_t var_180
                    var_180.d = var_1b4
                    var_188.d = rdi_1
                    var_188:4.d = rcx_13
                    int64_t var_178
                    var_178.d = 0
                    int32_t rax_15
                    rax_15.b = r13_1 s<= 0
                    var_178:4.d = rcx_13
                    int64_t var_170
                    var_170.d = rsi_1
                    int32_t rax_18 = (rax_15 + 2) | var_1b0 | 0x14
                    var_180:4.d = rax_18
                    var_170:4.d = rax_18
                    float var_168[0x4]
                    (*(*rax_8 + 0xa8))(rax_8, sub_140acc970(&var_168, &var_188))
                    (*(*rax_8 + 0x98))(rax_8, sub_140acc970(&var_168, &var_178))
                    int64_t r8_2
                    r8_2.b = 1
                    (*(*rax_8 + 0xf8))(rax_8, 2, r8_2)
                    int64_t r8_3
                    r8_3.b = 1
                    (*(*rax_8 + 0xf8))(rax_8, 1, r8_3)
                    int64_t r8_4
                    r8_4.b = 1
                    (*(*rax_8 + 0xf8))(rax_8, 8, r8_4)
                    (*(*rax_7 + 0xb8))(rax_7, rax_8)
                    (**rax_8)(rax_8)
                    
                    if (r13_1 s> 0)
                        void* r8_5 = arg1[0x95]
                        int64_t* rcx_23 = data_143ef8520
                        var_1c8 = 0xb
                        var_1d0_1 = &var_1c8
                        var_d8[2].q = *(r8_5 + 0x38)
                        var_c8[0] = zmm8_1[0]
                        var_d8[0] = 6
                        var_c8[3] = 0
                        float zmm10_1 = var_1b4 f* zmm6_1.d
                        var_1d8_1 = 1
                        zmm6_1.d = zmm6_1.d f* zmm11_2
                        var_c8[1] = zmm10_1
                        var_c8[2] = zmm6_1.d
                        int64_t* rax_28 = (*(*rcx_23 + 0xd8))(rcx_23, &var_d8, *(r8_5 + 0x20), 
                            zx.q(*(r8_5 + 0x28)), var_1d8_1, var_1d0_1, var_1c8)
                        var_1a8 = zmm12_1[0]
                        float var_1a4_2 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0x55)[0]
                        int64_t rax_29 = *rax_28
                        float temp0_48[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0x55)
                        float temp0_49[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
                        float var_198_2 = zmm7_2[0]
                        float temp0_50[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xaa)
                        float temp0_51[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xff)
                        float var_190_2 = temp0_50[0]
                        float var_1a0_2 = temp0_49[0]
                        float var_19c_2 = temp0_51[0]
                        float var_194_2 = temp0_48[0]
                        (*(rax_29 + 0x88))(rax_28, &var_1a8)
                        zmm0_2 = var_188.o
                        zmm1_2 = var_178.o
                        var_1b8.o = zmm0_2
                        var_168 = zmm1_2
                        int32_t var_1ac_1 =
                            ((_mm_bsrli_si128(zmm0_2, 8)[0].q u>> 0x20).d & 0xfffffffd) | 1
                        var_168[3] = ((_mm_bsrli_si128(zmm1_2, 8)[0].q u>> 0x20).d & 0xfffffffd) | 1
                        (*(*rax_28 + 0xa8))(rax_28, sub_140acc970(&var_1a8, &var_1b8))
                        (*(*rax_28 + 0x98))(rax_28, sub_140acc970(&var_1a8, &var_168))
                        int64_t r8_7
                        r8_7.b = 1
                        (*(*rax_28 + 0xf8))(rax_28, 2, r8_7)
                        int64_t r8_8
                        r8_8.b = 1
                        (*(*rax_28 + 0xf8))(rax_28, 1, r8_8)
                        int64_t r8_9
                        r8_9.b = 1
                        (*(*rax_28 + 0xf8))(rax_28, 8, r8_9)
                        (*(*rax_7 + 0xb8))(rax_7, rax_28)
                        (**rax_28)(rax_28)
                    
                    void* rax_45 = arg1[0x15]
                    
                    if (rax_45 == 0)
                        rax_45 = sub_141ee69e0(arg1)
                    
                    void* rdi_3 = *(rax_45 + 0x1f8)
                    var_168[0] = 1
                    var_168[2].q = &arg1[0x55]
                    *(arg1 + 0x3b8) = var_168
                    sub_140d3a3a0(&arg1[0x74], arg1)
                    arg1[0x73] = rax_7
                    rax_7[2] = &arg1[0x77]
                    int64_t* rax_47 = sub_14226e750(rdi_3)
                    
                    if (rax_47 != 0)
                        int64_t r9_4 = *rax_47
                        (*(r9_4 + 0x358))(rax_47, 
                            "D:"
                        "/Build/++UE4/Sync/Engine/Source/Runtime/Landscape/Private/LandscapeCollision."
                        "cpp", 
                            0x18a, r9_4, var_1d8_1, var_1d0_1)
                    
                    int64_t r8_10 = *rax_47
                    (*(r8_10 + 0x50))(rax_47, rax_7, r8_10)
                    result = (*(*rax_47 + 0x360))(rax_47)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
