// 函数: sub_14231c1c0
// 地址: 0x14231c1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t result = sx.q(arg1[0xf4].d)

if (result.d != 0xffffffff && result.d s< arg1[0x101].d)
    int64_t (* rbx_1)(int64_t* arg1, int64_t* arg2) = *(arg1[0x100] + (result << 3))
    result = sub_14221b2f0(rbx_1)
    
    if (result.b != 0)
        float var_88[0x4]
        sub_142218ad0(rbx_1, &var_88, 1, 0)
        float zmm3[0x4] = var_88
        float zmm4_1[0x4] = *arg2
        float zmm5_1[0x4] = zmm3 ^ 0x80000000
        float zmm1_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55) ^ 0x80000000
        float temp0_2[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
        temp0_2[0] = zmm1_1[0]
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
        float zmm2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa) ^ 0x80000000
        float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        temp0_3[0] = zmm2[0]
        float temp0_6[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1b)
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
        temp0_7[0] = temp0_5[0]
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
        float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0), temp0_6)
        float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xff), zmm4_1)
        float temp0_13[0x4] = __mulps_xmmps_memps(temp0_10, data_143f578d0)
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x55)
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xaa)
        float temp0_16[0x4] = _mm_add_ps(temp0_13, temp0_12)
        float temp0_18[0x4] = _mm_mul_ps(temp0_14, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x4e))
        float zmm0_1[0x4] = *arg2
        float temp0_20[0x4] = _mm_mul_ps(temp0_15, _mm_shuffle_ps(zmm4_1, zmm4_1, 0xb1))
        float temp0_21[0x4] = __mulps_xmmps_memps(temp0_18, data_143f578c0)
        var_88 = zmm0_1
        float temp0_22[0x4] = __mulps_xmmps_memps(temp0_20, data_143f578b0)
        _mm_add_ps(_mm_add_ps(temp0_16, temp0_21), temp0_22)
        float zmm6_1[0x4] = sub_1422214a0(rbx_1, &var_88, 1)
        int32_t i = 0
        
        if (arg1[0x101].d s> 0)
            int64_t* r14_1 = nullptr
            
            do
                if (i != arg1[0xf4].d)
                    int64_t (* rbx_2)(int64_t* arg1, int64_t* arg2) = *(r14_1 + arg1[0x100])
                    float var_58[0x4]
                    sub_142218ad0(rbx_2, &var_58, 1, 0)
                    float zmm2_1[0x4] = var_58
                    float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), 
                        _mm_shuffle_ps(zmm6_1, zmm6_1, 0x1b))
                    float temp0_28[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                    float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
                    float temp0_31[0x4] = __mulps_xmmps_memps(temp0_27, data_143f578d0)
                    float temp0_32[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                    float temp0_33[0x4] = _mm_add_ps(temp0_31, temp0_30)
                    float temp0_35[0x4] = _mm_mul_ps(temp0_28, _mm_shuffle_ps(zmm6_1, zmm6_1, 0x4e))
                    float temp0_37[0x4] = _mm_mul_ps(temp0_32, _mm_shuffle_ps(zmm6_1, zmm6_1, 0xb1))
                    float temp0_38[0x4] = __mulps_xmmps_memps(temp0_35, data_143f578c0)
                    float temp0_39[0x4] = __mulps_xmmps_memps(temp0_37, data_143f578b0)
                    var_58 = _mm_add_ps(_mm_add_ps(temp0_33, temp0_38), temp0_39)
                    zmm6_1 = sub_1422214a0(rbx_2, &var_58, 1)
                
                i += 1
                r14_1 = &r14_1[1]
            while (i s< arg1[0x101].d)
        
        result = sub_1422aeae0(arg1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
