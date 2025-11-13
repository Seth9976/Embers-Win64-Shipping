// 函数: sub_141e7e530
// 地址: 0x141e7e530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1

if (arg3 != 0)
    rax_1 = sub_14243ade0(arg3)

if (arg3 != 0 && rax_1 == 0)
    if ((*(arg1 + 0x370) & 4) == 0 || arg6 == 0)
        goto label_141e7e778
    
    goto label_141e7e57f

int32_t* result
float* arg_38

if (arg6 == 0)
label_141e7e778:
    *arg_38 = 1f
    (*(*arg2 + 0x280))(arg2)
    result = arg7
    *result = arg5[0]
else
label_141e7e57f:
    float* rsi_1 = arg_38
    *rsi_1 = 1f
    uint32_t zmm2[0x4] = data_143f39c10
    float zmm7[0x4] = *arg4
    arg5 = zmm2
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm2, data_143f39c20)
    arg5[0].q = zx.o(0) u>> 0x40
    float temp0_2[0x4] = _mm_shuffle_ps(zx.o(0), arg5, 0xc4)
    arg5 = *(arg4 + 8)
    uint32_t var_c8_1[0x4] = temp0_1
    zmm2 = *(arg4 + 4)
    float var_e8[0x4] = temp0_2
    zmm2 = _mm_unpacklo_ps(zmm2, 0)
    float var_d8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, arg5[0].q), zmm2[0].q)
    float zmm0[0x4]
    float zmm7_1[0x4]
    zmm0, zmm7_1 = sub_141e5fae0(arg6)
    *arg7 = zmm0[0]
    
    if (*(arg6 + 9) == 2)
        zmm0[0] = zmm0[0] * 1.41421354f
        *arg7 = zmm0[0]
    
    result = zx.q(*(arg6 + 0xb0))
    
    if ((result.b & 2) != 0 && (result.b & 8) != 0)
        float var_f8 = zmm7_1[0]
        float temp0_6[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
        arg4.b = 1
        float var_f0_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)[0]
        float var_f4_1 = temp0_6[0]
        result = sub_141e7ab30(arg1, &var_f8, &arg_38, arg4.b)
        
        if (result.d != 0xffffffff)
            void var_b8
            sub_141e77da0(&var_b8, arg1, result.d, &var_e8, arg6)
            arg_38.d = 0
            float arg_18 = 0f
            int32_t zmm6_1
            result, zmm6_1 = sub_141e7ce30(arg1, &var_b8, &arg_38, &arg_18)
            float zmm1_1 = (zx.o(0)).d
            float zmm2_1 = *(arg6 + 0x1f0) f* *(arg1 + 0xe0)
            
            if (zmm2_1 f>= zmm6_1)
                zmm2_1 = _mm_min_ss(zmm2_1, 0x43340000)
            else
                zmm2_1 = (zx.o(0)).d
            
            float zmm0_1 = *(arg6 + 0x1f4) f* *(arg1 + 0xe4)
            
            if (zmm0_1 f>= zmm6_1)
                zmm0_1 = _mm_min_ss(zmm0_1, 0x43340000)
            else
                zmm0_1 = (zx.o(0)).d
            
            if (not(zmm2_1 == zmm0_1))
                zmm1_1 = (arg_38.d - zmm2_1) / (zmm0_1 - zmm2_1)
                
                if (not(zmm1_1 f>= zmm6_1))
                    zmm1_1 = (zx.o(0)).d
                else if (not(zmm1_1 < 1f))
                    zmm1_1 = 1f
            else if (not(arg_38.d < zmm2_1))
                zmm1_1 = 1f
            
            *rsi_1 = zmm1_1
return result
