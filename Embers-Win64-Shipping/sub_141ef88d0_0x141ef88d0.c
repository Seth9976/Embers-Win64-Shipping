// 函数: sub_141ef88d0
// 地址: 0x141ef88d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
int64_t rax_1 = __security_cookie ^ &var_438
void* result = arg1[0x29]

if (result != 0 && *(result + 0x280) != 0 && not(arg2.d f<= 0f))
    void var_3a8
    sub_141f2db80(&var_3a8, arg1[0x16], zx.d(arg1[0x3e].b) u>> 7, 1)
    float var_3d8[0x4]
    float zmm7_1[0x4] = sub_141eddef0(arg1, &var_3d8, arg3)
    float zmm6_1[0x4] = var_3d8
    arg1[0xb4].b = 1
    float var_3b8[0x4]
    *(arg1 + 0x5d0) = var_3b8
    float var_3c8[0x4]
    *(arg1 + 0x5c0) = var_3c8
    *(arg1 + 0x5b0) = zmm6_1
    float zmm1[0x4] = data_143a2d2d8
    float zmm3_1[0x4] = data_143a2d2d0
    float temp0_1[0x4] = _mm_unpacklo_ps(data_143a2d2d4, 0)
    *(arg1 + 0x5d0) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, zmm1[0].q), temp0_1[0].q)
    float temp0_4[0x4] = _mm_shuffle_ps(var_3c8, var_3c8, 0x55)
    *(arg1 + 0x5a4) = 0x3f800000
    int64_t rax_2 = *arg1
    float var_400 = var_3c8[0]
    float temp0_5[0x4] = _mm_shuffle_ps(var_3c8, var_3c8, 0xaa)
    float var_3fc_1 = temp0_4[0]
    float var_3f8_1 = temp0_5[0]
    float var_3e8[0x4]
    int64_t* rax_3 = (*(rax_2 + 0xaa8))(arg1, &var_3e8, &var_400, zmm7_1, arg1 + 0xc4)
    arg1[0xbc] = *rax_3
    arg1[0xbd].d = rax_3[1].d
    int64_t* rax_6 = (*(*arg1 + 0xab8))(arg1, &var_3e8, &arg1[0xbc], arg1 + 0xc4)
    bool cond:0_1 = *(arg1 + 0x387) s>= 0
    *(arg1 + 0xc4) = *rax_6
    *(arg1 + 0xcc) = rax_6[1].d
    
    if (not(cond:0_1))
        int64_t r8_5 = *arg1
        (*(r8_5 + 0x5b0))(arg1, zx.q(*(arg1[0x29] + 0x328)), r8_5)
        *(arg1 + 0x387) &= 0x7f
    
    arg1[0x53].d = 0
    (*(*arg1 + 0x620))(arg1, zmm7_1, 0)
    zmm3_1 = data_14399f720
    uint32_t zmm4_2[0x4] = data_143f3a9d0
    float temp0_6[0x4] = _mm_sub_ps(zmm6_1, zmm3_1)
    int32_t var_408_1 = 0x322bcc77
    float temp0_7[0x4] = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_7, _mm_and_ps(temp0_6, zmm4_2), 1)) != 0 &&
            _mm_movemask_ps(_mm_cmpeq_ps(temp0_7, _mm_and_ps(_mm_add_ps(zmm3_1, zmm6_1), zmm4_2), 
            1)) != 0)
        void* rax_12 = arg1[0x16]
        char var_410_1 = 0
        float temp0_15[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0)
        int64_t r9_2
        r9_2.b = 1
        int64_t var_418_2 = 0
        float zmm2_1[0x4] = *(rax_12 + 0x1c0)
        int64_t rax_13 = *arg1
        float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), temp0_15)
        float temp0_18[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
        float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xff), zmm2_1)
        float temp0_21[0x4] = __mulps_xmmps_memps(temp0_17, data_143f3ab50)
        float temp0_22[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
        float temp0_23[0x4] = _mm_add_ps(temp0_21, temp0_20)
        float temp0_25[0x4] = _mm_mul_ps(temp0_18, _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55))
        float temp0_27[0x4] = _mm_mul_ps(temp0_22, _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa))
        float temp0_28[0x4] = __mulps_xmmps_memps(temp0_25, data_143f3ab40)
        float temp0_29[0x4] = __mulps_xmmps_memps(temp0_27, data_143f3ab30)
        var_3e8 = _mm_add_ps(_mm_add_ps(temp0_23, temp0_28), temp0_29)
        (*(rax_13 + 0x478))(arg1, &data_143dbb1f8, &var_3e8, r9_2, var_418_2, var_410_1, var_408_1)
    
    result = sub_141f2f2c0(&var_3a8)

arg1[0xb4].b = 0
*(arg1 + 0x5a4) = 0
__security_check_cookie(rax_1 ^ &var_438)
return result
