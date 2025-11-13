// 函数: sub_1427a77e0
// 地址: 0x1427a77e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result
int32_t r9
result, r9 = sub_1427a6ad0(arg2, arg3, arg4)
char* result_1 = result

if (result != 0)
    float zmm1[0x4] = data_143dbb1fc
    float zmm2[0x4] = data_143dbb200
    float zmm7[0x4] = *(arg1 + 0xb0)
    float zmm8[0x4] = *(arg1 + 0xa0)
    float zmm9[0x4] = *(arg1 + 0x90)
    float zmm10[0x4] = 0x3f800000
    int32_t var_ac_1 = 0x3f800000
    float var_b8[0x4]
    float zmm3[0x4] = var_b8
    zmm3[0] = data_143dbb1f8[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    temp0_1[0] = zmm1[0]
    int64_t var_c8 = 0
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm2[0]
    int32_t var_c0_1 = 0
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    var_b8 = temp0_3
    float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(arg1 + 0x80))
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xaa)
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), zmm9)
    float temp0_9[0x4] = _mm_mul_ps(temp0_6, zmm8)
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xff)
    float zmm6[0x4] =
        _mm_add_ps(_mm_add_ps(temp0_5, temp0_8), _mm_add_ps(temp0_9, _mm_mul_ps(temp0_10, zmm7)))
    float var_e0 = zmm6[0]
    float zmm11[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    float zmm12[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
    float var_dc_1 = zmm11[0]
    float var_d8_1 = zmm12[0]
    zmm6[0] = zmm6[0] f- *(result + 0x630)
    zmm11[0] = zmm11[0] f- *(result + 0x634)
    zmm12[0] = zmm12[0] f- *(result + 0x638)
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm12[0] = zmm12[0] * zmm12[0]
    zmm11[0] = zmm11[0] + zmm6[0]
    zmm11[0] = zmm11[0] + zmm12[0]
    float zmm4[0x4]
    
    if (not(zmm11[0] <= 9.99999994e-09f))
        zmm4 = 0x3f000000
        zmm3 = zx.o(0)
        zmm2 = 0x3f000000
        zmm3[0] = zmm11[0]
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
        temp0_17[0] = temp0_17[0] * zmm6[0]
        temp0_17[0] = temp0_17[0] * zmm11[0]
        temp0_17[0] = temp0_17[0] * zmm12[0]
        zmm6 = temp0_17
        zmm11 = temp0_17
        zmm12 = temp0_17
    
    char* rax_1 = *(arg1 + 0x1a0)
    char rcx_1
    
    if (rax_1 == 0)
        rcx_1 = 0
    else
        rcx_1 = *rax_1
    
    float var_c0_2
    
    if (rcx_1 == 0)
        zmm1 = *(arg1 + 0x164)
        zmm2 = *(arg1 + 0x168)
        int32_t var_ac_2 = 0
        zmm3 = var_b8
        zmm3[0] = (*(arg1 + 0x160))[0]
        var_c8 = 0
        float temp0_18[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        temp0_18[0] = zmm1[0]
        int32_t var_c0_3 = 0
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
        temp0_19[0] = zmm2[0]
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
        var_b8 = temp0_20
        float temp0_22[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0), *(arg1 + 0x80))
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
        float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm9)
        float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xff), zmm7)
        float temp0_31[0x4] = _mm_add_ps(_mm_add_ps(temp0_22, temp0_25), 
            _mm_add_ps(_mm_mul_ps(temp0_24, zmm8), temp0_27))
        var_c8.d = temp0_31[0]
        float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
        var_c0_2 = _mm_shuffle_ps(temp0_31, temp0_31, 0xaa)[0]
        var_c8:4.d = temp0_32[0]
    else
        float rax_2 = *(arg1 + 0x168)
        var_c8 = *(arg1 + 0x160)
        var_c0_2 = rax_2
    
    zmm3 = zx.o(var_c8)
    zmm3[0] = zmm3[0] * zmm6[0]
    float zmm5[0x4] = var_c0_2
    int64_t var_f0 = zmm3.q
    zmm4 = var_f0:4.d
    zmm5[0] = zmm5[0] * zmm12[0]
    zmm4[0] = zmm4[0] * zmm11[0]
    zmm3[0] = zmm3[0] + zmm4[0]
    zmm3[0] = zmm3[0] + zmm5[0]
    bool rdx_1 = zmm3[0] > 0f
    float (* rax_4)[0x4]
    
    if (rdx_1 == 0)
        var_b8[2] = var_c0_2
        rax_4 = &var_b8
        var_b8[0].q = zmm3.q
    else
        rax_4 = &var_c8
        var_c8.d = (zmm3 ^ 0x80000000)[0]
        var_c8:4.d = (zmm4 ^ 0x80000000)[0]
        float var_c0_4 = (zmm5 ^ 0x80000000)[0]
    
    float rax_5 = (*rax_4)[2]
    bool* rax_6 = *(arg1 + 0x180)
    var_f0 = *rax_4
    
    if (rax_6 != 0)
        *rax_6 = rdx_1
    
    char* rcx_2 = *(arg1 + 0x190)
    zmm7 = rax_5
    zmm8 = var_f0:4.d
    zmm9 = var_f0.d
    
    if (rcx_2 != 0)
        zmm9[0] = zmm9[0] * zmm6[0]
        zmm8[0] = zmm8[0] * zmm11[0]
        zmm7[0] = zmm7[0] * zmm12[0]
        zmm9[0] = zmm9[0] + zmm8[0]
        zmm9[0] = zmm9[0] + zmm7[0]
        zmm2 = __andps_xmmxud_memxud(zmm9, data_142d3f770)
        zmm2[0] - 0.964999974f
        rax_6.b = zmm2[0] < 0.964999974f
        *rcx_2 = rax_6.b
        result = *(arg1 + 0x190)
    
    if (rcx_2 == 0 || *result != 0)
        if (*(arg1 + 0x188) != 0)
            float zmm0_1[0x4] = sub_1427a22c0(result_1, &var_e0, result_1.d, r9)
            zmm10 = zmm0_1
            **(arg1 + 0x188) = zmm0_1[0]
        
        result = *(arg1 + 0x198)
        
        if (result == 0 || *result != 1)
            zmm6 = *(arg1 + 0x174)
        else
            zmm6 = *(arg1 + 0x178)
            zmm6[0] = zmm6[0] f* *(arg1 + 0x174)
        
        zmm1 = *(arg1 + 0x16c)
        int32_t i = 0
        zmm1[0] = zmm1[0] f+ *(arg1 + 0x170)
        zmm1[0] = zmm1[0] * zmm10[0]
        zmm1[0] = zmm1[0] * zmm10[0]
        zmm11 = _mm_cvtps_pd(zmm1[0].q)
        float temp0_36[0x4] = _mm_cvtps_pd(zmm1[0].q)
        
        if (arg2[1].d s> 0)
            int32_t rbx_1 = 1
            int64_t r14_1 = 0
            
            do
                if ((arg4 & rbx_1) != 0)
                    void* rax_8 = *(arg5 + 0x60)
                    void* rcx_4 = arg5 + 0x50
                    zmm2 = zx.o(0)
                    zmm2[0] = fconvert.s(zmm11[0].q)
                    
                    if (rax_8 != 0)
                        rcx_4 = rax_8
                    
                    zmm9[0] = zmm9[0] * zmm2[0]
                    int64_t* rcx_5 = *(rcx_4 + r14_1)
                    zmm8[0] = zmm8[0] * zmm2[0]
                    zmm9[0] = zmm9[0] + var_e0
                    float var_110_1 = zmm6[0]
                    zmm8[0] = zmm8[0] + var_dc_1
                    var_f0.d = zmm9[0]
                    zmm7[0] = zmm7[0] * zmm2[0]
                    zmm2 = zx.o(0)
                    var_f0:4.d = zmm8[0]
                    zmm2[0] = fconvert.s(temp0_36[0].q)
                    zmm7[0] = zmm7[0] + var_d8_1
                    zmm8[0] = zmm8[0] * zmm2[0]
                    zmm8[0] = zmm8[0] + var_dc_1
                    float var_e8_3 = zmm7[0]
                    zmm9[0] = zmm9[0] * zmm2[0]
                    var_c8:4.d = zmm8[0]
                    zmm9[0] = zmm9[0] + var_e0
                    var_c8.d = zmm9[0]
                    zmm7[0] = zmm7[0] * zmm2[0]
                    zmm7[0] = zmm7[0] + var_d8_1
                    float var_c0_5 = zmm7[0]
                    result = (*(*rcx_5 + 0x30))(rcx_5, &var_f0, &var_c8, arg1 + 0x150, 1, 
                        var_110_1, 0, 1)
                
                i += 1
                rbx_1 = rol.d(rbx_1, 1)
                r14_1 += 8
            while (i s< arg2[1].d)

return result
