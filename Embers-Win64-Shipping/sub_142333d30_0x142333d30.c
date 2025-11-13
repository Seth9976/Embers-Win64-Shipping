// 函数: sub_142333d30
// 地址: 0x142333d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0x98)
float var_118[0x4][0x4]
float (* result)[0x4]
int32_t zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
int32_t zmm11[0x4]
float zmm12[0x4]
int128_t zmm13
float zmm14[0x4]
float zmm15[0x4]
result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
    sub_1408041d0(arg3, &var_118)
int32_t result_1 = 0
float var_1f8 = (*result)[0]
float var_1f4 = result[1][0][0]
float var_1f0 = result[2][0][0]
float var_1ec = result[3][0][0]
float var_1e8 = (*result)[1][0]
float var_1e4 = (*result)[5][0]
float var_1e0 = (*result)[9][0]
float var_1dc = (*result)[0xd][0]
float var_1d4 = (*result)[6][0]
float var_1d0 = (*result)[0xa][0]
float var_1cc = (*result)[0xe][0]
float var_1c4 = (*result)[7][0]
float var_1c0 = (*result)[0xb][0]
float var_1bc = (*result)[0xf][0]

if (rsi != 0)
    float zmm4_1[0x4] = var_1e8.o
    float zmm5_1[0x4] = var_1f8.o
    int32_t var_48_1[0x4] = zmm6
    float var_58_1[0x4] = zmm7
    zmm7 = zx.o(0)
    float var_68_1[0x4] = zmm8
    float var_78_1[0x4] = zmm9
    float var_88_1[0x4] = zmm10
    int32_t var_98_1[0x4] = zmm11
    zmm11 = data_142dd3f80
    float var_a8_1[0x4] = zmm12
    zmm12 = data_142dd3fd0
    int128_t var_b8_1 = zmm13
    float var_c8_1[0x4] = zmm14
    zmm14 = (*result)[3][0].o
    float var_d8_1[0x4] = zmm15
    zmm15 = (*result)[2][0].o
    int32_t var_16c_1 = 0x3f800000
    
    do
        result = sx.q(result_1)
        int64_t var_218 = 0
        float (* rcx_2)[0x4] = result * 0x1c + *(arg1 + 0x90)
        int32_t var_210_1 = 0
        float zmm1[0x4] = (*rcx_2)[1]
        float var_178[0x4]
        var_178[0] = (*rcx_2)[0]
        float zmm2_1[0x4] = (*rcx_2)[2]
        float temp0_1[0x4] = _mm_shuffle_ps(var_178, var_178, 0xe1)
        temp0_1[0] = zmm1[0]
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        temp0_2[0] = zmm2_1[0]
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
        var_178 = temp0_3
        float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), arg3[2])
        float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), arg3[3])
        float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *arg3)
        zmm8 = _mm_add_ps(_mm_add_ps(temp0_5, temp0_7), 
            _mm_add_ps(temp0_9, 
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), arg3[1])))
        float var_228 = zmm8[0]
        zmm9 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        float var_224_1 = zmm9[0]
        zmm10 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
        float var_220_1 = zmm10[0]
        zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(rcx_2[1][0]), zmm7[0].q), zmm7[0].q)
        float zmm0[0x4] = (_mm_cmpgt_epi32(zmm1, zmm11) & zmm12) | zmm1
        zmm1 = zx.o((*rcx_2)[3])
        float temp0_20[0x4] = _mm_cvtepi32_ps(zmm0)
        zmm1 = _mm_unpacklo_epi8(zmm1, zmm7[0].q)
        float temp0_22[0x4] = __mulps_xmmps_memps(temp0_20, data_142dd3fb0)
        zmm1 = _mm_unpacklo_epi16(zmm1, zmm7[0].q)
        zmm0 = (_mm_cmpgt_epi32(zmm1, zmm11) & zmm12) | zmm1
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
        zmm11 = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm0), data_142dd3fb0)
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
        int32_t var_138_1[0x4] = zmm11
        zmm12 = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
        float temp0_30[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
        zmm12[0] = zmm12[0] * temp0_28[0]
        float var_1b8[0x4] = temp0_30
        float var_128_1[0x4] = zmm12
        zmm6 = zmm12[0]
        temp0_30[0] = temp0_30[0] * temp0_25[0]
        temp0_30[0] = temp0_30[0] * temp0_22[0]
        zmm6[0] = zmm6[0] f- temp0_30[0]
        zmm12[0] = zmm12[0] * temp0_22[0]
        float arg_8 = zmm6[0]
        zmm11[0] = zmm11[0] f* temp0_25[0]
        zmm11[0] = zmm11[0] f- zmm12[0]
        int32_t var_208_1 = zmm11[0]
        zmm0 = zmm11
        zmm0[0] = zmm0[0] * temp0_28[0]
        temp0_30[0] = temp0_30[0] - zmm0[0]
        float var_204_1 = temp0_30[0]
        float zmm3_1[0x4]
        
        if (arg4 != 0)
            int32_t var_15c_1 = 0
            float var_168[0x4]
            var_168[0] = temp0_22[0]
            var_218 = 0
            float temp0_31[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe1)
            temp0_31[0] = temp0_28[0]
            int32_t var_210_2 = 0
            float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc6)
            temp0_32[0] = temp0_25[0]
            float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc9)
            var_168 = temp0_33
            float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xff)
            float temp0_35[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xaa)
            float temp0_36[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x55)
            float temp0_37[0x4] = _mm_mul_ps(temp0_35, zmm15)
            float temp0_38[0x4] = _mm_mul_ps(temp0_36, zmm4_1)
            float temp0_39[0x4] = _mm_mul_ps(temp0_34, zmm14)
            float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0), zmm5_1)
            zmm7 = _mm_add_ps(_mm_add_ps(temp0_39, temp0_37), _mm_add_ps(temp0_38, temp0_41))
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm11 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm12 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm1 = zmm11
            zmm1[0] = zmm1[0] f* zmm11[0]
            zmm1[0] = zmm1[0] + zmm7[0]
            zmm12[0] = zmm12[0] * zmm12[0]
            zmm1[0] = zmm1[0] + zmm12[0]
            
            if (zmm1[0] <= 9.99999994e-09f)
                zmm7 = zx.o(0)
                zmm11 = zx.o(0)
                zmm12 = zx.o(0)
            else
                zmm3_1 = zx.o(0)
                zmm4_1 = zx.o(0)
                zmm4_1[0] = 0x3f000000
                zmm3_1[0] = zmm1[0]
                float temp0_47[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                zmm3_1[0] = zmm3_1[0] * 0.5f
                temp0_47[0] = temp0_47[0] * temp0_47[0]
                zmm3_1[0] = zmm3_1[0] * temp0_47[0]
                zmm4_1[0] = zmm4_1[0] - zmm3_1[0]
                temp0_47[0] = temp0_47[0] * zmm4_1[0]
                temp0_47[0] = temp0_47[0] + temp0_47[0]
                temp0_47[0] = temp0_47[0] * temp0_47[0]
                zmm3_1[0] = zmm3_1[0] * temp0_47[0]
                zmm4_1[0] = 0.5f - zmm3_1[0]
                temp0_47[0] = temp0_47[0] * zmm4_1[0]
                temp0_47[0] = temp0_47[0] + temp0_47[0]
                zmm7[0] = zmm7[0] * temp0_47[0]
                zmm11[0] = zmm11[0] f* temp0_47[0]
                zmm12[0] = zmm12[0] * temp0_47[0]
            
            zmm0 = data_142ee7660
            zmm8[0] = zmm8[0] + zmm7[0]
            int64_t rax = *arg2
            zmm9[0] = zmm9[0] f+ zmm11[0]
            zmm10[0] = zmm10[0] + zmm12[0]
            float var_1a8 = zmm8[0]
            float var_1a4_1 = zmm9[0]
            float var_1a0_1 = zmm10[0]
            var_218.o = zmm0
            result = (*(rax + 0x30))(arg2, &var_228, &var_1a8, &var_218, 0, 0, 0, 0)
            zmm4_1 = var_1e8.o
            zmm5_1 = var_1f8.o
            zmm10 = var_220_1
            zmm9 = var_224_1
            zmm8 = var_228
            zmm11 = var_138_1
            zmm12 = var_128_1
        
        if (arg5 != 0)
            zmm0 = var_1b8
            int32_t var_14c_1 = 0
            float var_158[0x4]
            var_158[0] = zmm11[0]
            var_218 = 0
            float temp0_48[0x4] = _mm_shuffle_ps(var_158, var_158, 0xe1)
            temp0_48[0] = zmm0[0]
            int32_t var_210_3 = 0
            float temp0_49[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0xc6)
            temp0_49[0] = zmm12[0]
            float temp0_50[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xc9)
            var_158 = temp0_50
            float temp0_51[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xff)
            float temp0_52[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xaa)
            float temp0_53[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0x55)
            float temp0_54[0x4] = _mm_mul_ps(temp0_52, zmm15)
            float temp0_55[0x4] = _mm_mul_ps(temp0_53, zmm4_1)
            float temp0_56[0x4] = _mm_mul_ps(temp0_51, zmm14)
            float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0), zmm5_1)
            zmm7 = _mm_add_ps(_mm_add_ps(temp0_56, temp0_54), _mm_add_ps(temp0_55, temp0_58))
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm11 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm12 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm1 = zmm11
            zmm1[0] = zmm1[0] f* zmm11[0]
            zmm1[0] = zmm1[0] + zmm7[0]
            zmm12[0] = zmm12[0] * zmm12[0]
            zmm1[0] = zmm1[0] + zmm12[0]
            
            if (zmm1[0] <= 9.99999994e-09f)
                zmm7 = zx.o(0)
                zmm11 = zx.o(0)
                zmm12 = zx.o(0)
            else
                zmm3_1 = zx.o(0)
                zmm4_1 = zx.o(0)
                zmm4_1[0] = 0x3f000000
                zmm3_1[0] = zmm1[0]
                float temp0_64[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                zmm3_1[0] = zmm3_1[0] * 0.5f
                temp0_64[0] = temp0_64[0] * temp0_64[0]
                zmm3_1[0] = zmm3_1[0] * temp0_64[0]
                zmm4_1[0] = zmm4_1[0] - zmm3_1[0]
                temp0_64[0] = temp0_64[0] * zmm4_1[0]
                temp0_64[0] = temp0_64[0] + temp0_64[0]
                temp0_64[0] = temp0_64[0] * temp0_64[0]
                zmm3_1[0] = zmm3_1[0] * temp0_64[0]
                zmm4_1[0] = 0.5f - zmm3_1[0]
                temp0_64[0] = temp0_64[0] * zmm4_1[0]
                temp0_64[0] = temp0_64[0] + temp0_64[0]
                zmm7[0] = zmm7[0] * temp0_64[0]
                zmm11[0] = zmm11[0] f* temp0_64[0]
                zmm12[0] = zmm12[0] * temp0_64[0]
            
            zmm0 = data_142d8c9b0
            zmm8[0] = zmm8[0] + zmm7[0]
            int64_t rax_1 = *arg2
            zmm9[0] = zmm9[0] f+ zmm11[0]
            zmm10[0] = zmm10[0] + zmm12[0]
            float var_19c = zmm8[0]
            float var_198_1 = zmm9[0]
            float var_194_1 = zmm10[0]
            var_1b8 = zmm0
            result = (*(rax_1 + 0x30))(arg2, &var_228, &var_19c, &var_1b8, 0, 0, 0, 0)
            zmm10 = var_220_1
            zmm9 = var_224_1
            zmm8 = var_228
        
        if (arg6 != 0)
            int32_t var_13c_1 = 0
            float var_148[0x4]
            var_148[0] = arg_8[0]
            var_218 = 0
            float temp0_65[0x4] = _mm_shuffle_ps(var_148, var_148, 0xe1)
            temp0_65[0] = var_208_1[0]
            int32_t var_210_4 = 0
            float temp0_66[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xc6)
            temp0_66[0] = var_204_1[0]
            float temp0_67[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xc9)
            var_148 = temp0_67
            float temp0_68[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
            float temp0_69[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xaa)
            float temp0_71[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_67, temp0_67, 0x55), var_1e8.o)
            float temp0_72[0x4] = _mm_mul_ps(temp0_69, zmm15)
            float temp0_73[0x4] = _mm_mul_ps(temp0_68, zmm14)
            float temp0_75[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_67, temp0_67, 0), var_1f8.o)
            zmm7 = _mm_add_ps(_mm_add_ps(temp0_73, temp0_72), _mm_add_ps(temp0_71, temp0_75))
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm11 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm12 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm1 = zmm11
            zmm1[0] = zmm1[0] f* zmm11[0]
            zmm1[0] = zmm1[0] + zmm7[0]
            zmm12[0] = zmm12[0] * zmm12[0]
            zmm1[0] = zmm1[0] + zmm12[0]
            
            if (zmm1[0] <= 9.99999994e-09f)
                zmm7 = zx.o(0)
                zmm11 = zx.o(0)
                zmm12 = zx.o(0)
            else
                zmm3_1 = zx.o(0)
                zmm4_1 = zx.o(0)
                zmm4_1[0] = 0x3f000000
                zmm3_1[0] = zmm1[0]
                float temp0_81[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                zmm3_1[0] = zmm3_1[0] * 0.5f
                temp0_81[0] = temp0_81[0] * temp0_81[0]
                zmm3_1[0] = zmm3_1[0] * temp0_81[0]
                zmm4_1[0] = zmm4_1[0] - zmm3_1[0]
                temp0_81[0] = temp0_81[0] * zmm4_1[0]
                temp0_81[0] = temp0_81[0] + temp0_81[0]
                temp0_81[0] = temp0_81[0] * temp0_81[0]
                zmm3_1[0] = zmm3_1[0] * temp0_81[0]
                zmm4_1[0] = 0.5f - zmm3_1[0]
                temp0_81[0] = temp0_81[0] * zmm4_1[0]
                temp0_81[0] = temp0_81[0] + temp0_81[0]
                arg_8 = temp0_81[0]
                zmm7[0] = zmm7[0] * temp0_81[0]
                zmm11[0] = zmm11[0] f* temp0_81[0]
                zmm12[0] = zmm12[0] * temp0_81[0]
            
            zmm0 = data_142d5beb0
            zmm8[0] = zmm8[0] + zmm7[0]
            int64_t rax_2 = *arg2
            zmm9[0] = zmm9[0] f+ zmm11[0]
            zmm10[0] = zmm10[0] + zmm12[0]
            float var_190 = zmm8[0]
            float var_18c_1 = zmm9[0]
            float var_188_1 = zmm10[0]
            var_1b8 = zmm0
            result = (*(rax_2 + 0x30))(arg2, &var_228, &var_190, &var_1b8, 0, 0, 0, 0)
        
        zmm4_1 = var_1e8.o
        result_1 += 1
        zmm5_1 = var_1f8.o
        zmm7 = zx.o(0)
        zmm11 = data_142dd3f80
        zmm12 = data_142dd3fd0
    while (result_1 u< rsi)

return result
