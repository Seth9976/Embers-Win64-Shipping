// 函数: sub_141de5f60
// 地址: 0x141de5f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t arg_20 = arg4
int32_t arg_28
int32_t r8 = arg_28

if (r8 == 0)
    sub_140ae0920(arg3, arg1)
else if (r8 != 1)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    float zmm8[0x4]
    float var_38_1[0x4] = zmm8
    float zmm9[0x4]
    float var_48_1[0x4] = zmm9
    float zmm10[0x4]
    float var_58_1[0x4] = zmm10
    float zmm11[0x4]
    float var_68_1[0x4] = zmm11
    float zmm12[0x4]
    float var_78_1[0x4] = zmm12
    float zmm13[0x4]
    float var_88_1[0x4] = zmm13
    float zmm14[0x4]
    float var_98_1[0x4] = zmm14
    float zmm15[0x4]
    float var_a8_1[0x4] = zmm15
    float zmm0[0x4]
    float zmm1[0x4]
    float zmm2[0x4]
    float zmm3[0x4]
    float zmm4[0x4]
    float zmm5[0x4]
    
    if (r8 == 2)
        if (arg4 != 0xffffffff)
            result = sub_141ea4020(*(arg2 + 0x10), &arg_28, &arg_20)
            int32_t rdx_2 = arg_28
            
            if (rdx_2 != 0xffffffff)
                result = sub_141ab9f30(arg2, rdx_2)
                zmm14 = arg3[2]
                zmm8 = *(result + 0x20)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), data_143f39140, 1)) == 0)
                    zmm5 = *result
                    zmm2 = *arg3
                    zmm7 = *(result + 0x10)
                    zmm4 = arg3[1]
                    zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), zmm0)
                    zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                    zmm6 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                    zmm4 = _mm_mul_ps(zmm4, zmm8)
                    zmm3 = __mulps_xmmps_memps(zmm3, data_143f39110)
                    zmm0 = _mm_mul_ps(zmm6, zmm2)
                    zmm14 = _mm_mul_ps(zmm14, zmm8)
                    zmm3 = _mm_add_ps(zmm3, zmm0)
                    zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), 
                        _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                    zmm1 = __mulps_xmmps_memps(zmm1, data_143f39100)
                    zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    zmm0 = __mulps_xmmps_memps(zmm0, data_143f390f0)
                    zmm3 = _mm_add_ps(zmm3, zmm1)
                    arg3[2] = zmm14
                    zmm3 = _mm_add_ps(zmm3, zmm0)
                    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    *arg3 = zmm3
                    zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                    zmm0 = _mm_mul_ps(zmm0, zmm3)
                    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                    zmm2 = _mm_sub_ps(_mm_mul_ps(zmm2, zmm5), zmm0)
                    zmm2 = _mm_add_ps(zmm2, zmm2)
                    zmm6 = _mm_mul_ps(zmm6, zmm2)
                    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), zmm5)
                    zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                    zmm6 = _mm_add_ps(zmm6, zmm4)
                    arg3[1] =
                        _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(zmm0, zmm3)), zmm6), zmm7)
                else
                    zmm1 = *result
                    zmm11 = data_143f39070
                    zmm9 = *(result + 0x10)
                    zmm3 = _mm_add_ps(zmm1, zmm1)
                    zmm4 = zmm1
                    zmm5 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
                    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                    zmm4 = _mm_mul_ps(zmm4, zmm3)
                    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x12)
                    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x1a)
                    zmm3 = _mm_mul_ps(zmm3, zmm1)
                    zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 1))
                    _mm_mul_ps(zmm8, zmm14)
                    zmm12 = _mm_add_ps(zmm3, zmm2)
                    zmm2 = _mm_sub_ps(zmm2, zmm3)
                    zmm1 = _mm_sub_ps(zmm11, zmm0)
                    zmm12 = _mm_mul_ps(zmm12, zmm8)
                    zmm1 = _mm_mul_ps(zmm1, zmm8)
                    zmm5 = _mm_mul_ps(zmm5, zmm2)
                    zmm1 = __andps_xmmxud_memxud(zmm1, data_143f39050)
                    zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm1, 0), 
                        _mm_shuffle_ps(zmm5, zmm1, 0x32), 0x82)
                    zmm0 = _mm_shuffle_ps(zmm12, zmm1, 0x31)
                    zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm1, 0x10), zmm0, 0x88)
                    zmm11[0].q = zmm9 u>> 0x40
                    zmm9 = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                    zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm5, 0x12), zmm1, 0xe8)
                    zmm1 = *arg3
                    zmm4 = zmm1
                    zmm3 = _mm_add_ps(zmm1, zmm1)
                    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
                    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                    zmm4 = _mm_mul_ps(zmm4, zmm3)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x29)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x12)
                label_141de6393:
                    zmm2 = _mm_mul_ps(zmm2, zmm0)
                    zmm3 = _mm_mul_ps(zmm3, zmm1)
                    zmm0 =
                        _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1a), _mm_shuffle_ps(zmm4, zmm4, 1))
                    zmm5 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                    zmm7 = _mm_add_ps(zmm3, zmm2)
                    zmm2 = _mm_sub_ps(zmm2, zmm3)
                    zmm1 = _mm_sub_ps(zmm11, zmm0)
                    zmm7 = _mm_mul_ps(zmm7, zmm14)
                    zmm5 = _mm_mul_ps(zmm5, zmm2)
                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm14), data_143f39050)
                    zmm0 = _mm_shuffle_ps(zmm5, zmm1, 0x32)
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1, 0), zmm0, 0x82)
                    zmm0 = _mm_shuffle_ps(zmm7, zmm1, 0x31)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm1, 0x10), zmm0, 0x88)
                    zmm2 = _mm_mul_ps(zmm2, zmm8)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm5, 0x12)
                    zmm5 = arg3[1]
                    zmm7 = _mm_shuffle_ps(zmm7, zmm1, 0xe8)
                    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm12)
                    zmm11[0].q = zmm5 u>> 0x40
                    zmm5 = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
                    zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm9)
                    zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0, zmm10))
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm10)
                    zmm2 = _mm_add_ps(zmm2, zmm1)
                    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm12)
                    zmm2 = _mm_add_ps(zmm2, zmm3)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm8)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    float var_e8[0x4] = zmm2
                    zmm2 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                    zmm3 = _mm_add_ps(zmm3, zmm0)
                    zmm2 = _mm_mul_ps(zmm2, zmm8)
                    zmm4 = _mm_mul_ps(zmm4, zmm9)
                    zmm0 = _mm_shuffle_ps(zmm7, zmm7, 0)
                    zmm3 = _mm_add_ps(zmm3, zmm1)
                    zmm0 = _mm_mul_ps(zmm0, zmm10)
                    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), zmm12)
                    zmm3 = _mm_add_ps(zmm3, zmm4)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                    zmm2 = _mm_add_ps(zmm2, zmm0)
                    zmm7 = _mm_mul_ps(zmm7, zmm9)
                    int96_t var_d8_1 = zmm3[0].12
                    zmm2 = _mm_add_ps(zmm2, zmm1)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x55), zmm8)
                    int96_t var_c8_1 = _mm_add_ps(zmm2, zmm7)[0].12
                    zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
                    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm12)
                    zmm0 = _mm_mul_ps(zmm0, zmm10)
                    zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm9)
                    int96_t var_b8_1 =
                        _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm3, zmm0), zmm1), zmm5)[0].12
                    zmm11, zmm13, zmm15 = sub_1407740e0(&var_e8, 0x322bcc77)
                    float zmm2_1[0x4] = var_e8[0]
                    float zmm1_1 = var_e8[1]
                    zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm13, 2), data_143f39130 ^ zmm11)
                    uint32_t zmm0_1[0x4] = var_e8[2]
                    zmm15 ^= data_143f39130
                    zmm2_1[0] = zmm2_1[0] * zmm15[0]
                    zmm1_1 = zmm1_1 * zmm15[0]
                    zmm0_1[0] = zmm0_1[0] f* zmm15[0]
                    var_e8[0] = zmm2_1[0]
                    zmm2_1 = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                    var_e8[1] = zmm1_1
                    zmm1_1 = var_d8_1:4.d * zmm2_1[0]
                    var_e8[2] = zmm0_1[0]
                    zmm0_1 = var_d8_1:8.d
                    zmm0_1[0] = zmm0_1[0] f* zmm2_1[0]
                    float zmm3_1 = var_d8_1.d * zmm2_1[0]
                    zmm2_1 = var_c8_1.d
                    var_d8_1:4.d = zmm1_1
                    var_d8_1:8.d = zmm0_1[0]
                    zmm0_1 = var_c8_1:8.d
                    zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
                    zmm1_1 = var_c8_1:4.d * zmm15[0]
                    zmm0_1[0] = zmm0_1[0] f* zmm15[0]
                    zmm2_1[0] = zmm2_1[0] * zmm15[0]
                    var_c8_1:4.d = zmm1_1
                    var_c8_1:8.d = zmm0_1[0]
                    var_d8_1.d = zmm3_1
                    var_c8_1.d = zmm2_1[0]
                    uint32_t var_f8[0x4]
                    result = sub_14077e4a0(&var_f8, &var_e8)
                    zmm6 = var_f8
                    float zmm5_1[0x4] = data_143f390d0
                    float zmm1_2[0x4] = _mm_mul_ps(zmm6, zmm6)
                    arg_28 = 0x322bcc77
                    zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
                    float zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
                    zmm1_2 = _mm_rsqrt_ps(zmm4_1)
                    float zmm3_2[0x4] = _mm_mul_ps(zmm4_1, zmm5_1)
                    float zmm2_2[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_2)), 
                            zmm1_2), 
                        zmm1_2)
                    zmm5_1 = _mm_mul_ps(
                        _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm2_2, zmm2_2), zmm3_2)), 
                                zmm2_2), 
                            zmm2_2), 
                        zmm6) ^ data_143f390c0
                    uint32_t zmm0_2[0x4] = arg_28
                    zmm5_1 = _mm_and_ps(zmm5_1, 
                        _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_2, zmm0_2, 0), zmm4_1, 2))
                    zmm2_2 = _mm_unpacklo_ps(var_b8_1:4.d, 0)
                    zmm5_1 ^= data_143f390c0
                    arg3[1] =
                        _mm_unpacklo_ps(_mm_unpacklo_ps(var_b8_1.d, var_b8_1:8.d[0].q), zmm2_2[0].q)
                    arg3[2] = zmm13
                    *arg3 = zmm5_1
    else if (r8 == 3 && arg4 != 0xffffffff)
        int64_t rsi_1 = sx.q(arg4)
        
        if (*(rsi_1 + *(arg2 + 0x18)) == 0)
            sub_141a98300(arg2, arg4)
        
        zmm14 = arg3[2]
        float (* rcx_3)[0x4] = rsi_1 * 0x30 + *arg2
        zmm8 = rcx_3[2]
        result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), data_143f39140, 1)))
        
        if (result.d != 0)
            zmm1 = *rcx_3
            zmm11 = data_143f39070
            zmm9 = rcx_3[1]
            zmm3 = _mm_add_ps(zmm1, zmm1)
            zmm5 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
            _mm_mul_ps(zmm14, zmm8)
            zmm4 = _mm_mul_ps(zmm3, zmm1)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0)
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
            zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x1a)
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), zmm1)
            zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 1))
            zmm12 = _mm_add_ps(zmm3, zmm2)
            zmm2 = _mm_sub_ps(zmm2, zmm3)
            zmm3 = *arg3
            zmm1 = _mm_sub_ps(zmm11, zmm0)
            zmm4 = zmm3
            zmm12 = _mm_mul_ps(zmm12, zmm8)
            zmm5 = _mm_mul_ps(zmm5, zmm2)
            zmm1 = _mm_mul_ps(zmm1, zmm8)
            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
            zmm1 = __andps_xmmxud_memxud(zmm1, data_143f39050)
            zmm0 = _mm_shuffle_ps(zmm5, zmm1, 0x32)
            zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm1, 0), zmm0, 0x82)
            zmm0 = _mm_shuffle_ps(zmm12, zmm1, 0x31)
            zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm1, 0x10), zmm0, 0x88)
            zmm11[0].q = zmm9 u>> 0x40
            zmm9 = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
            zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm5, 0x12), zmm1, 0xe8)
            zmm1 = _mm_add_ps(zmm3, zmm3)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
            zmm4 = _mm_mul_ps(zmm4, zmm1)
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x29)
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
            goto label_141de6393
        
        zmm5 = *rcx_3
        zmm2 = *arg3
        zmm4 = __mulps_xmmps_memps(zmm8, arg3[1])
        zmm7 = rcx_3[1]
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), zmm0)
        zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm6 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        zmm0 = _mm_mul_ps(zmm2, zmm6)
        zmm3 = __mulps_xmmps_memps(zmm3, data_143f39110)
        zmm8 = _mm_mul_ps(zmm8, zmm14)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
        zmm1 = __mulps_xmmps_memps(zmm1, data_143f39100)
        zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
        zmm0 = __mulps_xmmps_memps(zmm0, data_143f390f0)
        zmm3 = _mm_add_ps(zmm3, zmm1)
        arg3[2] = zmm8
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
        *arg3 = zmm3
        zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        zmm0 = _mm_mul_ps(zmm0, zmm3)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        zmm2 = _mm_sub_ps(_mm_mul_ps(zmm2, zmm5), zmm0)
        zmm2 = _mm_add_ps(zmm2, zmm2)
        zmm6 = _mm_mul_ps(zmm6, zmm2)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), zmm5)
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        zmm6 = _mm_add_ps(zmm6, zmm4)
        arg3[1] = _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(zmm0, zmm3)), zmm6), zmm7)

return result
