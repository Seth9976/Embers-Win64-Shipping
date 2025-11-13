// 函数: sub_141a80470
// 地址: 0x141a80470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
float (* result)[0x4] = __security_cookie ^ &var_108
float (* result_1)[0x4] = result
*(arg1 + 0x20) = data_143dbb0c0
float zmm1[0x4] = data_143dbb0d0
*(arg1 + 0x30) = zmm1
*(arg1 + 0x40) = data_143dbb0e0

if (*(arg1 + 0x14) != 0)
    int64_t* rcx = *(arg1 + 8)
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
    
    if (rcx == 0 || result.b == 0)
        int64_t* rcx_3 = *(arg1 + 8)
        float zmm6[0x4]
        float var_38_1[0x4] = zmm6
        
        if (rcx_3 != 0)
            result = (*(*rcx_3 + 0x18))(rcx_3)
            
            if (result.b != 0)
                zmm1 = arg3[1]
                float zmm4_1[0x4] = arg2[1]
                float temp0_1[0x4] = __mulps_xmmps_memps(data_143f2b5b0, *arg4)
                zmm4_1[0] = zmm4_1[0] - zmm1[0]
                float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                float temp0_3[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                temp0_3[0] = temp0_3[0] - temp0_2[0]
                float temp0_4[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                temp0_4[0] = temp0_4[0] - temp0_5[0]
                float temp0_6[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
                float temp0_7[0x4] = _mm_unpacklo_ps(temp0_3, 0)
                float temp0_8[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xd2)
                float temp0_10[0x4] =
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, temp0_4[0].q), temp0_7[0].q)
                float temp0_11[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
                float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xc9), temp0_8)
                float temp0_16[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd2), temp0_6), temp0_13)
                float temp0_17[0x4] = _mm_add_ps(temp0_16, temp0_16)
                float temp0_18[0x4] = _mm_mul_ps(temp0_11, temp0_17)
                float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc9), temp0_8)
                float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xd2)
                float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_10)
                arg6 = zx.o(0)
                float temp0_25[0x4] =
                    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_21, temp0_6), temp0_20), temp0_22)
                arg5 = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
                float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
                float temp0_28[0x4] = _mm_unpacklo_ps(temp0_25, arg5[0].q)
                zmm1 = _mm_unpacklo_ps(temp0_27, 0)
                *(arg1 + 0x30) = _mm_unpacklo_ps(temp0_28, zmm1[0].q)
        
        int64_t* rcx_4 = *(arg1 + 8)
        float zmm7[0x4]
        float var_48_1[0x4] = zmm7
        int128_t zmm8
        int128_t var_58_1 = zmm8
        float zmm9[0x4]
        float var_68_1[0x4] = zmm9
        float var_e8[0x4]
        float zmm0[0x4]
        
        if (rcx_4 != 0)
            result = (*(*rcx_4 + 0x10))(rcx_4, zmm1, arg5, arg6)
            
            if (result.b != 0)
                arg5 = *arg3
                zmm6 = *arg2
                arg6 = arg5 ^ 0x80000000
                float temp0_31[0x4] = _mm_shuffle_ps(arg6, arg6, 0xe1)
                float temp0_32[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x1b)
                zmm0 = _mm_shuffle_ps(arg5, arg5, 0x55) ^ 0x80000000
                float temp0_34[0x4] = _mm_shuffle_ps(arg5, arg5, 0xaa)
                temp0_31[0] = zmm0[0]
                float temp0_35[0x4] = _mm_shuffle_ps(arg5, arg5, 0xff)
                float temp0_36[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc6)
                temp0_36[0] = (temp0_34 ^ 0x80000000)[0]
                float temp0_37[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x4e)
                float temp0_38[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x27)
                temp0_38[0] = temp0_35[0]
                arg5 = *arg4
                float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x39)
                float var_e8_1[0x4] = temp0_39
                float temp0_41[0x4] = _mm_mul_ps(temp0_32, _mm_shuffle_ps(temp0_39, temp0_39, 0))
                float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xff), zmm6)
                float temp0_44[0x4] = __mulps_xmmps_memps(temp0_41, data_143f2b4e0)
                float temp0_45[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xb1)
                float temp0_46[0x4] = _mm_add_ps(temp0_44, temp0_43)
                float temp0_48[0x4] = _mm_mul_ps(temp0_37, _mm_shuffle_ps(temp0_39, temp0_39, 0x55))
                float temp0_50[0x4] = _mm_mul_ps(temp0_45, _mm_shuffle_ps(temp0_39, temp0_39, 0xaa))
                arg6 = arg5 ^ 0x80000000
                float temp0_51[0x4] = _mm_shuffle_ps(arg5, arg5, 0x55)
                float temp0_52[0x4] = __mulps_xmmps_memps(temp0_48, data_143f2b4d0)
                float temp0_53[0x4] = __mulps_xmmps_memps(temp0_50, data_143f2b4c0)
                float temp0_54[0x4] = _mm_shuffle_ps(arg6, arg6, 0xe1)
                temp0_54[0] = (temp0_51 ^ 0x80000000)[0]
                float temp0_55[0x4] = _mm_add_ps(temp0_46, temp0_52)
                float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xc6)
                zmm1 = _mm_shuffle_ps(arg5, arg5, 0xaa) ^ 0x80000000
                float temp0_58[0x4] = _mm_shuffle_ps(arg5, arg5, 0xff)
                temp0_56[0] = zmm1[0]
                float temp0_59[0x4] = _mm_add_ps(temp0_55, temp0_53)
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x27)
                temp0_60[0] = temp0_58[0]
                float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x39)
                var_e8 = temp0_61
                float temp0_62[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
                float temp0_63[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
                float temp0_65[0x4] = _mm_mul_ps(temp0_62, _mm_shuffle_ps(temp0_59, temp0_59, 0x1b))
                float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xff), temp0_59)
                float temp0_68[0x4] = __mulps_xmmps_memps(temp0_65, data_143f2b4e0)
                float temp0_69[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xaa)
                float temp0_70[0x4] = _mm_add_ps(temp0_68, temp0_67)
                float temp0_72[0x4] = _mm_mul_ps(temp0_63, _mm_shuffle_ps(temp0_59, temp0_59, 0x4e))
                float temp0_74[0x4] = _mm_mul_ps(temp0_69, _mm_shuffle_ps(temp0_59, temp0_59, 0xb1))
                float temp0_75[0x4] = __mulps_xmmps_memps(temp0_72, data_143f2b4d0)
                float temp0_76[0x4] = __mulps_xmmps_memps(temp0_74, data_143f2b4c0)
                float temp0_78[0x4] = _mm_add_ps(_mm_add_ps(temp0_70, temp0_75), temp0_76)
                *(arg1 + 0x20) = temp0_78
                uint32_t zmm5_2[0x4] = data_143f2b570
                float temp0_79[0x4] = _mm_mul_ps(temp0_78, temp0_78)
                float temp0_81[0x4] = _mm_add_ps(temp0_79, _mm_shuffle_ps(temp0_79, temp0_79, 0x4e))
                float temp0_83[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0x39), temp0_81)
                zmm1 = _mm_rsqrt_ps(temp0_83)
                arg6 = _mm_mul_ps(temp0_83, zmm5_2)
                arg5 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), arg6)), zmm1), 
                    zmm1)
                zmm5_2 = _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(arg5, arg5), arg6))
                float temp0_94[0x4] = _mm_cmpeq_ps(data_143f2b580, temp0_83, 2)
                *(arg1 + 0x20) = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_2, arg5), arg5), temp0_78)
                        ^ data_143f2b560, 
                    temp0_94) ^ data_143f2b560
        
        int64_t* rcx_5 = *(arg1 + 8)
        
        if (rcx_5 != 0)
            result = (*(*rcx_5 + 0x20))(rcx_5, zmm1, arg5, arg6, var_e8)
            
            if (result.b != 0)
                arg5 = arg3[2]
                bool cond:0_1 = _mm_and_ps(arg5, 0x7fffffff)[0] > 9.99999994e-09f
                zmm1 = 0x3f800000
                int96_t var_e8_2 = arg5[0].12
                
                if (cond:0_1)
                    arg6 = 0x3f800000
                    arg6[0] = 1f / arg5[0]
                else
                    arg6 = zx.o(0)
                
                arg5 = var_e8_2:4.d
                
                if (_mm_and_ps(arg5, 0x7fffffff)[0] > 9.99999994e-09f)
                    zmm7 = 0x3f800000
                    zmm7[0] = 1f / arg5[0]
                else
                    zmm7 = zx.o(0)
                
                arg5 = var_e8_2:8.d
                
                if (_mm_and_ps(arg5, 0x7fffffff)[0] > 9.99999994e-09f)
                    zmm0 = 0x3f800000
                    zmm0[0] = 1f / arg5[0]
                else
                    zmm0 = zx.o(0)
                
                arg5 = arg2[2]
                arg5[0] = arg5[0] * arg6[0]
                float temp0_102[0x4] = _mm_shuffle_ps(arg5, arg5, 0x55)
                temp0_102[0] = temp0_102[0] * zmm7[0]
                zmm7 = arg4[2]
                float temp0_103[0x4] = _mm_shuffle_ps(arg5, arg5, 0xaa)
                temp0_103[0] = temp0_103[0] * zmm0[0]
                zmm0 = _mm_and_ps(zmm7, 0x7fffffff)
                int96_t var_e8_3 = zmm7[0].12
                
                if (zmm0[0] > 9.99999994e-09f)
                    zmm8.d = 1f / zmm7[0]
                else
                    zmm8 = zx.o(0)
                
                zmm9 = var_e8_3:4.d
                
                if (_mm_and_ps(zmm9, 0x7fffffff)[0] > 9.99999994e-09f)
                    zmm7 = 0x3f800000
                    zmm7[0] = 1f / zmm9[0]
                else
                    zmm7 = zx.o(0)
                
                zmm9 = var_e8_3:8.d
                
                if (_mm_and_ps(zmm9, 0x7fffffff)[0] > 9.99999994e-09f)
                    zmm1[0] = 1f / zmm9[0]
                else
                    zmm1 = zx.o(0)
                
                temp0_103[0] = temp0_103[0] * zmm1[0]
                temp0_102[0] = temp0_102[0] * zmm7[0]
                arg5[0] = arg5[0] f* zmm8.d
                float temp0_107[0x4] = _mm_unpacklo_ps(temp0_102, 0)
                *(arg1 + 0x40) =
                    _mm_unpacklo_ps(_mm_unpacklo_ps(arg5, temp0_103[0].q), temp0_107[0].q)
    else
        float var_d8[0x3][0x4]
        sub_140ad7d70(arg2, &var_d8, arg3)
        float var_a8[0x3][0x4]
        result = sub_140ad7d70(&var_d8, &var_a8, arg4)
        *(arg1 + 0x20) = *result
        *(arg1 + 0x30) = result[1]
        *(arg1 + 0x40) = result[2]

__security_check_cookie(result_1 ^ &var_108)
return result
