// 函数: sub_1422711f0
// 地址: 0x1422711f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140962f60(arg3)
int64_t* rbx = nullptr
int64_t* rcx_1 = *result

if (rcx_1 != 0 && rcx_1[1].w == 6)
    rbx = rcx_1

uint32_t zmm6[0x4]

if (arg4[0] f>= 0f)
    zmm6 = __minss_xmmss_memss(arg4[0], 0x3f800000)
else
    zmm6 = zx.o(0)

if (*(arg2 + 0xb0) != 0)
    result = sub_14221b270(arg3)
    
    if (result.b == 0)
        float zmm1[0x4] = *(arg2 + 0x90)
        float zmm5[0x4] = *(arg2 + 0x60)
        zmm5[0] = zmm5[0] - zmm1[0]
        float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
        temp0_2[0] = temp0_2[0] - temp0_3[0]
        zmm5[0] = zmm5[0] f* zmm6[0]
        temp0_2[0] = temp0_2[0] f* zmm6[0]
        zmm5[0] = zmm5[0] + zmm1[0]
        float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        temp0_4[0] = temp0_4[0] - temp0_5[0]
        temp0_2[0] = temp0_2[0] + temp0_3[0]
        float var_78[0x4] = *(arg2 + 0x50)
        temp0_4[0] = temp0_4[0] f* zmm6[0]
        temp0_4[0] = temp0_4[0] + temp0_5[0]
        float temp0_6[0x4] = _mm_unpacklo_ps(temp0_2, 0)
        float var_68[0x4] = *(arg2 + 0x80)
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, temp0_4[0].q), temp0_6[0].q)
        float var_58[0x4]
        float (* rax)[0x4]
        float zmm7_1[0x4]
        rax, zmm7_1 = sub_140ae0e60(&var_58, &var_68, &var_78, zmm6)
        float zmm6_1[0x4] = data_143f522f0
        float zmm5_1[0x4] = *rax
        float var_38_1 = zmm7_1[0]
        float temp0_9[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
        float temp0_11[0x4] = _mm_add_ps(temp0_9, _mm_shuffle_ps(temp0_9, temp0_9, 0x4e))
        float temp0_13[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0x39), temp0_11)
        float temp0_14[0x4] = _mm_rsqrt_ps(temp0_13)
        arg4 = _mm_mul_ps(temp0_13, zmm6_1)
        float temp0_20[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_14, temp0_14), arg4)), 
                temp0_14), 
            temp0_14)
        float temp0_23[0x4] = _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_20, temp0_20), arg4))
        float temp0_25[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_13, 2)
        zmm6_1 = _mm_and_ps(
            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_23, temp0_20), temp0_20), zmm5_1)
                ^ data_143f522e0, 
            temp0_25) ^ data_143f522e0
        float var_48 = zmm6_1[0]
        float var_44_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)[0]
        float temp0_31[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)
        float temp0_32[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
        float temp0_33[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
        float var_34_1 = temp0_32[0]
        float var_40_1 = temp0_31[0]
        float var_3c_1 = temp0_33[0]
        float var_30_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)[0]
        
        if (sub_142257910(&var_48) == 0)
            (*(*rbx + 0x1b8))(rbx, &var_48)
            
            if (sub_142257910(&var_48) == 0)
                float zmm2_2[0x4] = data_143dbb0c0
                float zmm3[0x4] = data_143dbb0d0
                float var_44_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)[0]
                float temp0_36[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                float temp0_37[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
                var_48 = zmm2_2[0]
                float var_38_2 = zmm3[0]
                float temp0_38[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                float temp0_39[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
                float var_30_2 = temp0_38[0]
                float var_40_2 = temp0_37[0]
                float var_3c_2 = temp0_39[0]
                float var_34_2 = temp0_36[0]
        
        return (*(*rbx + 0x1b0))(rbx, &var_48)

return result
