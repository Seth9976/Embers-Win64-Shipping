// 函数: sub_1427aa080
// 地址: 0x1427aa080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg4
uint64_t result
int32_t r9
result, r9 = sub_1427a6ad0(arg2, arg3, arg4)
uint64_t result_1 = result

if (result != 0)
    float zmm1[0x4] = data_143dbb1fc
    float zmm2[0x4] = data_143dbb200
    float zmm9[0x4] = 0x3f800000
    float zmm10[0x4] = *(arg1 + 0xb0)
    float zmm11[0x4] = *(arg1 + 0xa0)
    float zmm12[0x4] = *(arg1 + 0x90)
    float zmm13[0x4] = *(arg1 + 0x80)
    int32_t var_14c_1 = 0x3f800000
    float var_158[0x4]
    float zmm3[0x4] = var_158
    zmm3[0] = data_143dbb1f8[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    temp0_1[0] = zmm1[0]
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm2[0]
    int64_t var_128 = 0
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    var_158 = temp0_3
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0)
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x55)
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xaa)
    float temp0_7[0x4] = _mm_mul_ps(temp0_4, zmm13)
    int32_t var_120_1 = 0
    float temp0_8[0x4] = _mm_mul_ps(temp0_5, zmm12)
    float temp0_9[0x4] = _mm_mul_ps(temp0_6, zmm11)
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xff)
    float temp0_14[0x4] =
        _mm_add_ps(_mm_add_ps(temp0_7, temp0_8), _mm_add_ps(temp0_9, _mm_mul_ps(temp0_10, zmm10)))
    float var_118 = temp0_14[0]
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
    float var_114_1 = temp0_15[0]
    float var_110_1 = temp0_16[0]
    temp0_14[0] = temp0_14[0] f- *(result + 0x630)
    temp0_15[0] = temp0_15[0] f- *(result + 0x634)
    temp0_16[0] = temp0_16[0] f- *(result + 0x638)
    temp0_14[0] = temp0_14[0] * temp0_14[0]
    temp0_15[0] = temp0_15[0] * temp0_15[0]
    temp0_16[0] = temp0_16[0] * temp0_16[0]
    temp0_15[0] = temp0_15[0] + temp0_14[0]
    temp0_15[0] = temp0_15[0] + temp0_16[0]
    float var_108
    float zmm4[0x4]
    
    if (not(temp0_15[0] <= 9.99999994e-09f))
        zmm4 = 0x3f000000
        zmm3 = zx.o(0)
        zmm2 = 0x3f000000
        zmm3[0] = temp0_15[0]
        float temp0_17[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
        zmm3[0] = zmm3[0] * 0.5f
        temp0_17[0] = temp0_17[0] * temp0_17[0]
        zmm3[0] = zmm3[0] * temp0_17[0]
        zmm2[0] = 0.5f - zmm3[0]
        temp0_17[0] = temp0_17[0] * zmm2[0]
        temp0_17[0] = temp0_17[0] + temp0_17[0]
        temp0_17[0] = temp0_17[0] * temp0_17[0]
        zmm3[0] = zmm3[0] * temp0_17[0]
        zmm4[0] = 0.5f - zmm3[0]
        temp0_17[0] = temp0_17[0] * zmm4[0]
        temp0_17[0] = temp0_17[0] + temp0_17[0]
        var_108 = temp0_17[0]
        temp0_14[0] = temp0_14[0] * temp0_17[0]
        temp0_15[0] = temp0_15[0] * temp0_17[0]
        temp0_16[0] = temp0_16[0] * temp0_17[0]
    
    char* rax_1 = *(arg1 + 0x1c0)
    bool rdx_1
    
    if (rax_1 == 0)
        rdx_1 = false
    else
        rdx_1 = *rax_1
    
    if (rdx_1 == 0)
        zmm1 = *(arg1 + 0x164)
        zmm2 = *(arg1 + 0x168)
        int32_t var_14c_2 = 0
        zmm3 = var_158
        zmm3[0] = (*(arg1 + 0x160))[0]
        var_128 = 0
        float temp0_18[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        temp0_18[0] = zmm1[0]
        int32_t var_120_2 = 0
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
        temp0_19[0] = zmm2[0]
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
        var_158 = temp0_20
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0)
        float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
        float temp0_24[0x4] = _mm_mul_ps(temp0_21, zmm13)
        float temp0_25[0x4] = _mm_mul_ps(temp0_22, zmm12)
        float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xff), zmm10)
        float temp0_31[0x4] = _mm_add_ps(_mm_add_ps(temp0_24, temp0_25), 
            _mm_add_ps(_mm_mul_ps(temp0_23, zmm11), temp0_27))
        var_158[0] = temp0_31[0]
        float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
        var_158[2] = _mm_shuffle_ps(temp0_31, temp0_31, 0xaa)[0]
        var_158[1] = temp0_32[0]
    else
        var_158[0].q = *(arg1 + 0x160)
        var_158[2] = *(arg1 + 0x168)
    
    float zmm0_1[0x4] = zx.o(var_158[0].q)
    float rax_3 = var_158[2]
    float zmm5[0x4] = zmm0_1.d
    float temp0_34[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
    zmm5[0] = zmm5[0] * temp0_14[0]
    temp0_34[0] = temp0_34[0] * temp0_15[0]
    temp0_34[0] = temp0_34[0] + zmm5[0]
    zmm0_1 = rax_3
    zmm0_1[0] = zmm0_1[0] * temp0_16[0]
    temp0_34[0] = temp0_34[0] + zmm0_1[0]
    r9.b = temp0_34[0] > 0f
    float (* rax_4)[0x4]
    
    if (r9.b == 0)
        float var_120_3 = rax_3
        rax_4 = &var_128
        var_128 = var_158[0].q
    else
        rax_4 = &var_158
        var_158[0] = (zmm5 ^ 0x80000000)[0]
        var_158[1] = (temp0_34 ^ 0x80000000)[0]
        var_158[2] = (zmm0_1 ^ 0x80000000)[0]
    
    float rax_5 = (*rax_4)[2]
    char* rax_6 = *(arg1 + 0x198)
    int64_t var_138_2 = *rax_4
    
    if (rax_6 != 0)
        *rax_6 = r9.b
    
    if (rdx_1 == 0)
        zmm1 = *(arg1 + 0x170)
        zmm2 = *(arg1 + 0x174)
        int32_t var_14c_3 = 0
        zmm3 = var_158
        zmm3[0] = (*(arg1 + 0x16c))[0]
        var_128 = 0
        float temp0_35[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        temp0_35[0] = zmm1[0]
        int32_t var_120_4 = 0
        float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc6)
        temp0_36[0] = zmm2[0]
        float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xc9)
        var_158 = temp0_37
        float temp0_39[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_37, temp0_37, 0xff), *(arg1 + 0xb0))
        float temp0_41[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_37, temp0_37, 0xaa), *(arg1 + 0xa0))
        float temp0_43[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_37, temp0_37, 0), *(arg1 + 0x80))
        float temp0_48[0x4] = _mm_add_ps(_mm_add_ps(temp0_39, temp0_41), 
            _mm_add_ps(temp0_43, 
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_37, temp0_37, 0x55), *(arg1 + 0x90))))
        var_158[0] = temp0_48[0]
        float temp0_49[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0x55)
        var_158[2] = _mm_shuffle_ps(temp0_48, temp0_48, 0xaa)[0]
        var_158[1] = temp0_49[0]
    else
        var_158[0].q = *(arg1 + 0x16c)
        var_158[2] = *(arg1 + 0x174)
    
    zmm0_1 = zx.o(var_158[0].q)
    float rax_8 = var_158[2]
    zmm5 = zmm0_1.d
    float temp0_51[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
    zmm5[0] = zmm5[0] * temp0_14[0]
    temp0_51[0] = temp0_51[0] * temp0_15[0]
    temp0_51[0] = temp0_51[0] + zmm5[0]
    zmm0_1 = rax_8
    zmm0_1[0] = zmm0_1[0] * temp0_16[0]
    temp0_51[0] = temp0_51[0] + zmm0_1[0]
    rdx_1 = temp0_51[0] > 0f
    float (* rax_9)[0x4]
    
    if (rdx_1 == 0)
        float var_120_5 = rax_8
        rax_9 = &var_128
        var_128 = var_158[0].q
    else
        rax_9 = &var_158
        var_158[0] = (zmm5 ^ 0x80000000)[0]
        var_158[1] = (temp0_51 ^ 0x80000000)[0]
        var_158[2] = (zmm0_1 ^ 0x80000000)[0]
    
    float rax_10 = (*rax_9)[2]
    bool* rax_11 = *(arg1 + 0x1a0)
    int64_t var_148_2 = *rax_9
    
    if (rax_11 != 0)
        *rax_11 = rdx_1
    
    char* rcx_1 = *(arg1 + 0x1b0)
    float zmm15[0x4] = rax_5
    zmm5 = var_138_2:4.d
    zmm10 = var_138_2.d
    zmm11 = rax_10
    zmm12 = var_148_2:4.d
    zmm4 = var_148_2.d
    
    if (rcx_1 != 0)
        zmm4[0] = zmm4[0] * zmm15[0]
        zmm11[0] = zmm11[0] * zmm10[0]
        zmm11[0] = zmm11[0] * zmm5[0]
        zmm4[0] = zmm4[0] - zmm11[0]
        zmm12[0] = zmm12[0] * zmm10[0]
        zmm12[0] = zmm12[0] * zmm15[0]
        zmm4[0] = zmm4[0] * temp0_15[0]
        zmm11[0] = zmm11[0] - zmm12[0]
        zmm4[0] = zmm4[0] * zmm5[0]
        zmm12[0] = zmm12[0] - zmm4[0]
        zmm11[0] = zmm11[0] * temp0_14[0]
        zmm4[0] = zmm4[0] + zmm11[0]
        zmm12[0] = zmm12[0] * temp0_16[0]
        zmm4[0] = zmm4[0] + zmm12[0]
        rax_11.b = __andps_xmmxud_memxud(zmm4, data_142d3f770)[0] > 0.25f
        *rcx_1 = rax_11.b
        result = *(arg1 + 0x1b0)
    
    if (rcx_1 == 0 || *result != 0)
        if (*(arg1 + 0x1a8) != 0)
            zmm0_1 = sub_1427a22c0(result_1, &var_118, result_1.d, r9)
            zmm9 = zmm0_1
            zmm5 = var_138_2:4.d
            zmm4 = var_148_2.d
            **(arg1 + 0x1a8) = zmm0_1[0]
        
        result = *(arg1 + 0x1b8)
        
        if (result == 0 || *result != 1)
            zmm13 = *(arg1 + 0x188)
        else
            zmm13 = *(arg1 + 0x18c)
            zmm13[0] = zmm13[0] f* *(arg1 + 0x188)
        
        zmm1 = *(arg1 + 0x178)
        int32_t i = 0
        zmm2 = *(arg1 + 0x17c)
        zmm1[0] = zmm1[0] f+ *(arg1 + 0x180)
        zmm1[0] = zmm1[0] * zmm9[0]
        zmm3 = _mm_cvtps_pd(zmm1[0].q)
        zmm1[0] = zmm1[0] * zmm9[0]
        var_108.q = zmm3.q
        int64_t var_d8_1 = (_mm_cvtps_pd(zmm1[0].q)).q
        zmm2[0] = zmm2[0] f+ *(arg1 + 0x184)
        zmm2[0] = zmm2[0] * zmm9[0]
        zmm2[0] = zmm2[0] * zmm9[0]
        zmm0_1 = _mm_cvtps_pd(zmm2[0].q)
        int64_t var_e0_1 = zmm0_1.q
        int64_t var_d0_1 = (_mm_cvtps_pd(zmm2[0].q)).q
        
        if (arg2[1].d s> 0)
            int32_t rsi_1 = 1
            int64_t r12_1 = 0
            
            do
                if ((rdi & rsi_1) != 0)
                    zmm9 = var_118
                    zmm1 = zx.o(0)
                    float zmm8[0x4] = var_114_1
                    float zmm7[0x4] = zmm11
                    zmm2 = var_138_2.d
                    zmm0_1[0] = fconvert.s(zmm0_1[0].q)
                    int64_t* rcx_4 = arg5 + 0x50
                    int64_t* rax_13 = rcx_4[2]
                    zmm11 = zmm5
                    zmm5 = var_110_1
                    zmm4[0] = zmm4[0] * zmm0_1[0]
                    
                    if (rax_13 != 0)
                        rcx_4 = rax_13
                    
                    result = zx.q(*(arg1 + 0x190))
                    zmm12[0] = zmm12[0] * zmm0_1[0]
                    zmm7[0] = zmm7[0] * zmm0_1[0]
                    int64_t* rdi_1 = *(rcx_4 + r12_1)
                    zmm1[0] = fconvert.s(zmm3[0].q)
                    zmm10[0] = zmm10[0] * zmm1[0]
                    zmm11[0] = zmm11[0] * zmm1[0]
                    zmm15[0] = zmm15[0] * zmm1[0]
                    zmm10[0] = zmm10[0] + zmm9[0]
                    zmm11[0] = zmm11[0] + zmm8[0]
                    float temp0_57[0x4] = _mm_cvtpd_ps(zx.o(var_d8_1))
                    zmm15[0] = zmm15[0] + zmm5[0]
                    zmm2[0] = zmm2[0] * temp0_57[0]
                    zmm4[0] = zmm4[0] + zmm10[0]
                    zmm15[0] = zmm15[0] * temp0_57[0]
                    zmm9[0] = zmm9[0] + zmm2[0]
                    zmm2 = var_148_2.d
                    var_128.d = zmm4[0]
                    zmm12[0] = zmm12[0] + zmm11[0]
                    zmm5[0] = zmm5[0] + zmm15[0]
                    zmm3 = var_148_2:4.d
                    var_128:4.d = zmm12[0]
                    zmm7[0] = zmm7[0] + zmm15[0]
                    float var_120_6 = zmm7[0]
                    zmm0_1 = var_138_2:4.d
                    zmm0_1[0] = zmm0_1[0] * temp0_57[0]
                    zmm8[0] = zmm8[0] + zmm0_1[0]
                    zmm9[0] = zmm9[0] + zmm4[0]
                    zmm4 = rax_10
                    float var_100 = zmm9[0]
                    zmm8[0] = zmm8[0] + zmm12[0]
                    zmm5[0] = zmm5[0] + zmm7[0]
                    float var_fc_1 = zmm8[0]
                    float var_f8_1 = zmm5[0]
                    float temp0_58[0x4] = _mm_cvtpd_ps(zx.o(var_d0_1))
                    zmm2[0] = zmm2[0] * temp0_58[0]
                    zmm4[0] = zmm4[0] * temp0_58[0]
                    zmm3[0] = zmm3[0] * temp0_58[0]
                    zmm2[0] = zmm2[0] + zmm9[0]
                    zmm2[0] = zmm2[0] + zmm10[0]
                    zmm3[0] = zmm3[0] + zmm11[0]
                    zmm3[0] = zmm3[0] + zmm8[0]
                    float var_f0 = zmm2[0]
                    var_158[0] = zmm2[0]
                    zmm4[0] = zmm4[0] + zmm5[0]
                    var_158[1] = zmm3[0]
                    zmm4[0] = zmm4[0] + zmm15[0]
                    float var_ec_1 = zmm3[0]
                    float var_e8_1 = zmm4[0]
                    var_158[2] = zmm4[0]
                    
                    if ((result.b & 1) != 0)
                        (*(*rdi_1 + 0x30))(rdi_1, &var_128, &var_100, arg1 + 0x150, 1, zmm13[0], 0, 
                            1)
                        result = zx.q(*(arg1 + 0x190))
                    
                    char rcx_7 = result.b
                    
                    if ((result.b & 2) != 0)
                        (*(*rdi_1 + 0x30))(rdi_1, &var_100, &var_f0, arg1 + 0x150, 1, zmm13[0], 0, 
                            1)
                        result = zx.q(*(arg1 + 0x190))
                        rcx_7 = result.b
                    
                    if ((result.b & 4) != 0)
                        result = (*(*rdi_1 + 0x30))(rdi_1, &var_f0, &var_158, arg1 + 0x150, 1, 
                            zmm13[0], 0, 1)
                        rcx_7 = *(arg1 + 0x190)
                    
                    if ((rcx_7 & 8) != 0)
                        result = (*(*rdi_1 + 0x30))(rdi_1, &var_158, &var_128, arg1 + 0x150, 1, 
                            zmm13[0], 0, 1)
                    
                    rdi = arg4
                    zmm0_1 = zx.o(var_e0_1)
                    zmm3 = zx.o(var_108.q)
                    zmm12 = var_148_2:4.d
                    zmm11 = rax_10
                    zmm10 = var_138_2.d
                
                zmm5 = var_138_2:4.d
                i += 1
                zmm4 = var_148_2.d
                r12_1 += 8
                rsi_1 = rol.d(rsi_1, 1)
            while (i s< arg2[1].d)

return result
