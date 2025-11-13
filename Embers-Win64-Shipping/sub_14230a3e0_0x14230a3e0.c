// 函数: sub_14230a3e0
// 地址: 0x14230a3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t result = sx.q(arg1[0xf4].d)
int128_t* r15 = arg3

if (result.d != 0xffffffff && result.d s< arg1[0x101].d)
    int64_t (* rbx_1)(int64_t* arg1, int64_t* arg2) = *(arg1[0x100] + (result << 3))
    result = sub_14221b2f0(rbx_1)
    
    if (result.b != 0)
        arg3.b = 1
        float var_88[0x4]
        sub_142218ad0(rbx_1, &var_88, arg3.b, 0)
        float zmm2[0x4] = var_88
        float zmm3[0x4] = *r15
        float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0_1)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
        float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm3)
        float temp0_7[0x4] = __mulps_xmmps_memps(temp0_3, data_143f578d0)
        float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
        float temp0_9[0x4] = _mm_add_ps(temp0_7, temp0_6)
        float temp0_11[0x4] = _mm_mul_ps(temp0_4, _mm_shuffle_ps(zmm2, zmm2, 0x55))
        float temp0_13[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
        float temp0_14[0x4] = __mulps_xmmps_memps(temp0_11, data_143f578c0)
        float var_78[0x4]
        float temp0_15[0x4] = _mm_shuffle_ps(var_78, var_78, 0x55)
        float temp0_16[0x4] = __mulps_xmmps_memps(temp0_13, data_143f578b0)
        temp0_15[0] = temp0_15[0] f+ arg2[1]
        float temp0_17[0x4] = _mm_add_ps(temp0_9, temp0_14)
        float temp0_18[0x4] = _mm_unpacklo_ps(temp0_15, 0)
        float temp0_19[0x4] = _mm_add_ps(temp0_17, temp0_16)
        var_78[0] = var_78[0] f+ *arg2
        float temp0_20[0x4] = _mm_shuffle_ps(var_78, var_78, 0xaa)
        temp0_20[0] = temp0_20[0] f+ arg2[2]
        var_88 = temp0_19
        float var_78_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_78, temp0_20[0].q), temp0_18[0].q)
        sub_1422214a0(rbx_1, &var_88, 1)
        int32_t i = 0
        
        if (arg1[0x101].d s> 0)
            int64_t* r14_1 = nullptr
            
            do
                if (i != arg1[0xf4].d)
                    int64_t (* rbx_2)(int64_t* arg1, int64_t* arg2) = *(r14_1 + arg1[0x100])
                    float var_58[0x4]
                    sub_142218ad0(rbx_2, &var_58, 1, 0)
                    float zmm2_1[0x4] = var_58
                    float zmm3_1[0x4] = *r15
                    float temp0_23[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                    float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b), temp0_23)
                    float temp0_26[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
                    float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm3_1)
                    float temp0_29[0x4] = __mulps_xmmps_memps(temp0_25, data_143f578d0)
                    float temp0_30[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
                    float temp0_31[0x4] = _mm_add_ps(temp0_29, temp0_28)
                    float temp0_33[0x4] = _mm_mul_ps(temp0_26, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55))
                    float temp0_35[0x4] = _mm_mul_ps(temp0_30, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa))
                    float temp0_36[0x4] = __mulps_xmmps_memps(temp0_33, data_143f578c0)
                    float var_48[0x4]
                    float temp0_37[0x4] = _mm_shuffle_ps(var_48, var_48, 0x55)
                    float temp0_38[0x4] = __mulps_xmmps_memps(temp0_35, data_143f578b0)
                    temp0_37[0] = temp0_37[0] f+ arg2[1]
                    float temp0_39[0x4] = _mm_add_ps(temp0_31, temp0_36)
                    float temp0_40[0x4] = _mm_unpacklo_ps(temp0_37, 0)
                    float temp0_41[0x4] = _mm_add_ps(temp0_39, temp0_38)
                    var_48[0] = var_48[0] f+ *arg2
                    float temp0_42[0x4] = _mm_shuffle_ps(var_48, var_48, 0xaa)
                    temp0_42[0] = temp0_42[0] f+ arg2[2]
                    var_58 = temp0_41
                    var_48 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_48, temp0_42[0].q), temp0_40[0].q)
                    sub_1422214a0(rbx_2, &var_58, 1)
                
                i += 1
                r14_1 = &r14_1[1]
            while (i s< arg1[0x101].d)
        
        result = sub_1422aeae0(arg1)

__security_check_cookie(rax_1 ^ &var_a8)
return result
