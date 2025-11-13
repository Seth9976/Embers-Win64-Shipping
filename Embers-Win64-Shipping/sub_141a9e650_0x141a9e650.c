// 函数: sub_141a9e650
// 地址: 0x141a9e650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t result = __security_cookie ^ &var_1b8
int64_t result_1 = result

if (*(arg1 + 0xe8) != 0 || *(arg1 + 0xe9) != 0 || *(arg1 + 0xea) != 0)
    int32_t rax_1 = *(arg1 + 0xd0)
    void* r15_1 = arg2[3]
    int32_t rdi_1
    
    if (rax_1 s>= 0)
        rdi_1 = *(arg1 + 0xd4)
    else
        int32_t rcx = rax_1 * 2
        
        if ((rcx & 0xfffffffe) == 0xfffffffe)
            rdi_1 = -1
        else
            rdi_1 = *(*(r15_1 + 0x80) + (sx.q(rcx) s>> 1 << 2))
    
    int32_t rax_5 = *(arg1 + 0xe0)
    int32_t rbx_1
    
    if (rax_5 s>= 0)
        rbx_1 = *(arg1 + 0xe4)
    else
        int32_t rcx_3 = rax_5 * 2
        
        if ((rcx_3 & 0xfffffffe) == 0xfffffffe)
            rbx_1 = -1
        else
            rbx_1 = *(*(r15_1 + 0x80) + (sx.q(rcx_3) s>> 1 << 2))
    
    int64_t rdx = arg2[4]
    int64_t rax_9 = sx.q(rdi_1)
    
    if (*(rax_9 + rdx) == 0)
        sub_141a98300(&arg2[1], rdi_1)
        rdx = arg2[4]
        rax_9 = sx.q(rdi_1)
    
    int64_t rcx_8 = arg2[1]
    int64_t rax_11 = rax_9 * 6
    float var_108[0x4] = *(rcx_8 + (rax_11 << 3))
    float var_f8_1[0x4] = *(rcx_8 + (rax_11 << 3) + 0x10)
    int64_t rax_12 = sx.q(rbx_1)
    float var_e8_1[0x4] = *(rcx_8 + (rax_11 << 3) + 0x20)
    
    if (*(rax_12 + rdx) == 0)
        sub_141a98300(&arg2[1], rbx_1)
        rcx_8 = arg2[1]
        rax_12 = sx.q(rbx_1)
    
    int32_t var_198_1 = 2
    int64_t rax_14 = rax_12 * 6
    float var_138[0x4] = *(rcx_8 + (rax_14 << 3))
    float var_128_1[0x4] = *(rcx_8 + (rax_14 << 3) + 0x10)
    float var_118_1[0x4] = *(rcx_8 + (rax_14 << 3) + 0x20)
    sub_141de6760(*arg2 + 0x10, &arg2[1], &var_108, rdi_1)
    int32_t var_198_2 = 2
    int128_t zmm9_1
    int128_t zmm10_1
    float zmm11_1[0x4]
    zmm9_1, zmm10_1, zmm11_1 = sub_141de6760(*arg2 + 0x10, &arg2[1], &var_138, rbx_1)
    int32_t rcx_13 = *(arg1 + 0xd0)
    int32_t rdx_5 = rcx_13 * 2
    int32_t rax_16 = rdx_5 s>> 1
    
    if (rax_16 == 0xffffffff)
        rax_16 = -1
    else if (rcx_13 s< 0)
        rax_16 = *(*(r15_1 + 0x50) + (sx.q(rdx_5) s>> 1 << 2))
    
    int128_t var_78_1 = zmm9_1
    int64_t rcx_17 = *(*(r15_1 + 0x48) + 0x30)
    int64_t rdx_7 = sx.q(rax_16) * 6
    int128_t var_d8 = *(rcx_17 + (rdx_7 << 3))
    int128_t var_c8_1 = *(rcx_17 + (rdx_7 << 3) + 0x10)
    int128_t var_b8_1 = *(rcx_17 + (rdx_7 << 3) + 0x20)
    sub_140ae0920(&var_108, &var_d8)
    char rax_19 = *(arg1 + 0xe8)
    float zmm0_2[0x4]
    float zmm1_2[0x4]
    float zmm2_1[0x4]
    float zmm3_1[0x4]
    float zmm4_1[0x4]
    float zmm6_1[0x4]
    
    if (*(arg1 + 0xeb) != 0)
        if (rax_19 != 0)
            zmm0_2 = *(arg1 + 0xec)
            var_f8_1[0] = var_f8_1[0] * zmm0_2[0]
            float temp0_38[0x4] = _mm_shuffle_ps(var_f8_1, var_f8_1, 0x55)
            float temp0_39[0x4] = _mm_shuffle_ps(var_f8_1, var_f8_1, 0xaa)
            temp0_39[0] = temp0_39[0] * zmm0_2[0]
            temp0_38[0] = temp0_38[0] * zmm0_2[0]
            var_128_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_f8_1, temp0_39[0].q), 
                _mm_unpacklo_ps(temp0_38, 0)[0].q)
        
        if (*(arg1 + 0xe9) != 0)
            zmm6_1 = var_108
            int32_t zmm8_1 = 0xbf800000
            int96_t var_188_2 = zmm6_1[0].12
            float temp0_43[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
            
            if (temp0_43[0] >= -1f)
                zmm0_2 = _mm_min_ss(temp0_43[0], 0x3f800000)
            else
                zmm0_2 = 0xbf800000
            
            zmm4_1 = acosf(zmm0_2[0])
            temp0_43[0] = temp0_43[0] * temp0_43[0]
            zmm1_2 = 0x3f800000
            zmm1_2[0] = 1f - temp0_43[0]
            float temp0_46[0x4] = _mm_sqrt_ss(0, _mm_max_ss(zmm1_2[0], 0)[0])
            float zmm5_2
            
            if (temp0_46[0] < 9.99999975e-05f)
                zmm3_1 = 0x3f800000
                zmm5_2 = (zx.o(0)).d
                zmm6_1 = zx.o(0)
            else
                zmm3_1 = var_188_2.d
                zmm1_2 = 0x3f800000
                zmm6_1 = var_188_2:8.d
                zmm1_2[0] = 1f / temp0_46[0]
                zmm3_1[0] = zmm3_1[0] * zmm1_2[0]
                zmm5_2 = var_188_2:4.d * zmm1_2[0]
                zmm6_1[0] = zmm6_1[0] * zmm1_2[0]
            
            zmm4_1[0] = zmm4_1[0] f* *(arg1 + 0xf0)
            bool cond:3_1 = zmm4_1[0] < 0f
            zmm4_1[0] = zmm4_1[0] * 0.159154937f
            
            if (cond:3_1)
                zmm4_1[0] = zmm4_1[0] - 0.5f
            else
                zmm4_1[0] = zmm4_1[0] + 0.5f
            
            float temp0_47[0x4] = _mm_cvtepi32_ps(zx.o(int.d(zmm4_1[0])))
            temp0_47[0] = temp0_47[0] * 6.28318548f
            zmm4_1[0] = zmm4_1[0] - temp0_47[0]
            
            if (not(zmm4_1[0] <= 1.57079637f))
                zmm0_2 = 0x40490fdb
                zmm0_2[0] = 3.14159274f - zmm4_1[0]
                zmm4_1 = zmm0_2
            else if (zmm4_1[0] >= -1.57079637f)
                zmm8_1 = 0x3f800000
            else
                zmm0_2 = 0xc0490fdb
                zmm0_2[0] = -3.14159274f - zmm4_1[0]
                zmm4_1 = zmm0_2
            
            zmm1_2 = 0x3638b88e
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm4_1[0] = zmm4_1[0] * 2.3889859e-08f
            zmm1_2[0] = 2.75255616e-06f - zmm4_1[0]
            zmm4_1[0] = zmm4_1[0] * 2.60516146e-07f
            zmm1_2[0] = zmm1_2[0] * zmm4_1[0]
            zmm1_2[0] = zmm1_2[0] - 0.000198408743f
            zmm1_2[0] = zmm1_2[0] * zmm4_1[0]
            zmm1_2[0] = zmm1_2[0] + 0.00833333097f
            zmm1_2[0] = zmm1_2[0] * zmm4_1[0]
            zmm1_2[0] = zmm1_2[0] - 0.166666672f
            zmm1_2[0] = zmm1_2[0] * zmm4_1[0]
            zmm1_2[0] = zmm1_2[0] + 1f
            zmm1_2[0] = zmm1_2[0] * zmm4_1[0]
            zmm3_1[0] = zmm3_1[0] * zmm1_2[0]
            zmm5_2 = zmm5_2 * zmm1_2[0]
            zmm6_1[0] = zmm6_1[0] * zmm1_2[0]
            zmm1_2 = 0x37cfb4c2
            zmm1_2[0] = 2.47604949e-05f - zmm4_1[0]
            float temp0_48[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
            temp0_48[0] = zmm5_2
            float temp0_49[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0xc6)
            temp0_49[0] = zmm6_1[0]
            float temp0_50[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0x27)
            zmm1_2[0] = zmm1_2[0] * zmm4_1[0]
            zmm1_2[0] = zmm1_2[0] - 0.00138883782f
            zmm1_2[0] = zmm1_2[0] * zmm4_1[0]
            zmm1_2[0] = zmm1_2[0] + 0.0416666381f
            zmm1_2[0] = zmm1_2[0] * zmm4_1[0]
            zmm1_2[0] = zmm1_2[0] - 0.5f
            zmm1_2[0] = zmm1_2[0] * zmm4_1[0]
            zmm1_2[0] = zmm1_2[0] + 1f
            zmm1_2[0] = zmm1_2[0] f* zmm8_1
            temp0_50[0] = zmm1_2[0]
            var_138 = _mm_shuffle_ps(temp0_50, temp0_50, 0x39)
        
        if (*(arg1 + 0xea) != 0)
            zmm0_2 = *(arg1 + 0xf4)
            var_e8_1[0] = var_e8_1[0] * zmm0_2[0]
            zmm2_1 = _mm_shuffle_ps(var_e8_1, var_e8_1, 0x55)
            float temp0_53[0x4] = _mm_shuffle_ps(var_e8_1, var_e8_1, 0xaa)
            temp0_53[0] = temp0_53[0] * zmm0_2[0]
            zmm2_1[0] = zmm2_1[0] * zmm0_2[0]
            var_118_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_e8_1, temp0_53[0].q), 
                _mm_unpacklo_ps(zmm2_1, 0)[0].q)
    else
        if (rax_19 != 0)
            zmm0_2 = *(arg1 + 0xec)
            var_f8_1[0] = var_f8_1[0] * zmm0_2[0]
            float temp0_1[0x4] = _mm_shuffle_ps(var_f8_1, var_f8_1, 0x55)
            temp0_1[0] = temp0_1[0] * zmm0_2[0]
            float temp0_2[0x4] = _mm_shuffle_ps(var_f8_1, var_f8_1, 0xaa)
            temp0_2[0] = temp0_2[0] * zmm0_2[0]
            float temp0_3[0x4] = _mm_unpacklo_ps(temp0_1, 0)
            var_128_1 = _mm_add_ps(var_128_1, 
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_f8_1, temp0_2[0].q), temp0_3[0].q))
        
        if (*(arg1 + 0xe9) != 0)
            zmm6_1 = var_108
            zmm9_1 = 0xbf800000
            int96_t var_188_1 = zmm6_1[0].12
            float temp0_7[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
            float var_98_1[0x4] = zmm11_1
            
            if (temp0_7[0] >= -1f)
                zmm0_2 = _mm_min_ss(temp0_7[0], 0x3f800000)
            else
                zmm0_2 = 0xbf800000
            
            zmm3_1 = acosf(zmm0_2[0])
            temp0_7[0] = temp0_7[0] * temp0_7[0]
            zmm1_2 = 0x3f800000
            zmm1_2[0] = 1f - temp0_7[0]
            float temp0_10[0x4] = _mm_sqrt_ss(0, _mm_max_ss(zmm1_2[0], 0)[0])
            float zmm5_1[0x4]
            
            if (temp0_10[0] < 9.99999975e-05f)
                zmm4_1 = 0x3f800000
                zmm5_1 = zx.o(0)
                zmm6_1 = zx.o(0)
            else
                zmm4_1 = var_188_1.d
                zmm1_2 = 0x3f800000
                zmm5_1 = var_188_1:4.d
                zmm6_1 = var_188_1:8.d
                zmm1_2[0] = 1f / temp0_10[0]
                zmm4_1[0] = zmm4_1[0] * zmm1_2[0]
                zmm5_1[0] = zmm5_1[0] * zmm1_2[0]
                zmm6_1[0] = zmm6_1[0] * zmm1_2[0]
            
            zmm3_1[0] = zmm3_1[0] f* *(arg1 + 0xf0)
            zmm11_1 = var_138
            bool cond:4_1 = zmm3_1[0] < 0f
            zmm3_1[0] = zmm3_1[0] * 0.159154937f
            
            if (cond:4_1)
                zmm3_1[0] = zmm3_1[0] - 0.5f
            else
                zmm3_1[0] = zmm3_1[0] + 0.5f
            
            float temp0_11[0x4] = _mm_cvtepi32_ps(zx.o(int.d(zmm3_1[0])))
            temp0_11[0] = temp0_11[0] * 6.28318548f
            zmm3_1[0] = zmm3_1[0] - temp0_11[0]
            
            if (not(zmm3_1[0] <= 1.57079637f))
                zmm0_2 = 0x40490fdb
                zmm0_2[0] = 3.14159274f - zmm3_1[0]
                zmm3_1 = zmm0_2
            else if (zmm3_1[0] >= -1.57079637f)
                zmm9_1 = 0x3f800000
            else
                zmm0_2 = 0xc0490fdb
                zmm0_2[0] = -3.14159274f - zmm3_1[0]
                zmm3_1 = zmm0_2
            
            zmm1_2 = 0x3638b88e
            zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
            zmm3_1[0] = zmm3_1[0] * 2.3889859e-08f
            zmm1_2[0] = 2.75255616e-06f - zmm3_1[0]
            zmm3_1[0] = zmm3_1[0] * 2.60516146e-07f
            zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
            zmm1_2[0] = zmm1_2[0] - 0.000198408743f
            zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
            zmm1_2[0] = zmm1_2[0] + 0.00833333097f
            zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
            zmm1_2[0] = zmm1_2[0] - 0.166666672f
            zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
            zmm1_2[0] = zmm1_2[0] + 1f
            zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
            zmm4_1[0] = zmm4_1[0] * zmm1_2[0]
            zmm5_1[0] = zmm5_1[0] * zmm1_2[0]
            zmm6_1[0] = zmm6_1[0] * zmm1_2[0]
            zmm1_2 = 0x37cfb4c2
            zmm1_2[0] = 2.47604949e-05f - zmm3_1[0]
            float temp0_12[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
            temp0_12[0] = zmm5_1[0]
            float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
            temp0_13[0] = zmm6_1[0]
            float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x27)
            zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
            zmm1_2[0] = zmm1_2[0] - 0.00138883782f
            zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
            zmm1_2[0] = zmm1_2[0] + 0.0416666381f
            zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
            zmm1_2[0] = zmm1_2[0] - 0.5f
            zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
            float temp0_15[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0x1b)
            zmm1_2[0] = zmm1_2[0] + 1f
            zmm1_2[0] = zmm1_2[0] f* zmm9_1.d
            temp0_14[0] = zmm1_2[0]
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x39)
            float temp0_17[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0x4e)
            float temp0_19[0x4] = _mm_mul_ps(temp0_15, _mm_shuffle_ps(temp0_16, temp0_16, 0))
            float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xff), zmm11_1)
            float temp0_22[0x4] = __mulps_xmmps_memps(temp0_19, data_143f2b850)
            float temp0_23[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xb1)
            float temp0_24[0x4] = _mm_add_ps(temp0_22, temp0_21)
            float temp0_26[0x4] = _mm_mul_ps(temp0_17, _mm_shuffle_ps(temp0_16, temp0_16, 0x55))
            float temp0_28[0x4] = _mm_mul_ps(temp0_23, _mm_shuffle_ps(temp0_16, temp0_16, 0xaa))
            float temp0_29[0x4] = __mulps_xmmps_memps(temp0_26, data_143f2b840)
            float temp0_30[0x4] = __mulps_xmmps_memps(temp0_28, data_143f2b830)
            var_138 = _mm_add_ps(_mm_add_ps(temp0_24, temp0_29), temp0_30)
        
        if (*(arg1 + 0xea) != 0)
            zmm1_2 = *(arg1 + 0xf4)
            zmm2_1 = _mm_shuffle_ps(var_e8_1, var_e8_1, 0x55)
            float temp0_34[0x4] = _mm_shuffle_ps(var_118_1, var_118_1, 0x55)
            float temp0_35[0x4] = _mm_shuffle_ps(var_e8_1, var_e8_1, 0xaa)
            var_e8_1[0] = var_e8_1[0] * zmm1_2[0]
            temp0_35[0] = temp0_35[0] * zmm1_2[0]
            var_e8_1[0] = var_e8_1[0] * var_118_1[0]
            float temp0_36[0x4] = _mm_shuffle_ps(var_118_1, var_118_1, 0xaa)
            temp0_35[0] = temp0_35[0] * temp0_36[0]
            zmm2_1[0] = zmm2_1[0] * zmm1_2[0]
            zmm3_1 = _mm_unpacklo_ps(var_e8_1, temp0_35[0].q)
            zmm2_1[0] = zmm2_1[0] * temp0_34[0]
            var_118_1 = _mm_unpacklo_ps(zmm3_1, _mm_unpacklo_ps(zmm2_1, 0)[0].q)
    int32_t var_198_3 = 2
    int512_t zmm9_2
    int512_t zmm10_2
    zmm9_2, zmm10_2 = sub_141de5f60(*arg2 + 0x10, &arg2[1], &var_138, rbx_1)
    float zmm6_2[0x4] = var_138
    zmm10_2.o = zmm10_1
    zmm9_2.o = var_78_1
    int64_t rbx_2 = sx.q(arg3[1].d)
    int32_t rax_22 = (rbx_2 + 1).d
    arg3[1].d = rax_22
    
    if (rax_22 s> *(arg3 + 0xc))
        sub_1405c4fe0(arg3)
    
    result = *arg3
    int64_t rcx_23 = rbx_2 << 6
    *(rcx_23 + result) = rbx_1.o
    *(rcx_23 + result + 0x10) = zmm6_2
    *(rcx_23 + result + 0x20) = var_128_1
    *(rcx_23 + result + 0x30) = var_118_1

__security_check_cookie(result_1 ^ &var_1b8)
return result
