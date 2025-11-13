// 函数: sub_141acfa50
// 地址: 0x141acfa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(arg2)
uint32_t zmm0[0x4]
float zmm1[0x4]

if (arg2 == 0)
    zmm1 = arg3[1]
    *arg1 = *arg3
    zmm0 = arg3[2]
    arg1[1] = zmm1
    arg1[2] = zmm0
else if (rcx == 1 || rcx != 2)
    zmm1 = data_143dbb0d0
    *arg1 = data_143dbb0c0
    zmm0 = data_143dbb0e0
    arg1[1] = zmm1
    arg1[2] = zmm0
else
    float zmm7[0x4] = arg3[2]
    uint32_t zmm12[0x4] = arg4[2]
    float zmm13[0x4] = data_143f2b810
    float zmm14[0x4] = data_143f2b8d0
    zmm13[0].q = zx.o(0) u>> 0x40
    *arg1 = _mm_shuffle_ps(zx.o(0), zmm13, 0xc4)
    arg1[2] = __andps_xmmxud_memxud(zmm13, data_143f2b820)
    zmm0 = _mm_min_ps(zmm12, zmm7)
    arg1[1] = zx.o(0)
    float zmm2[0x4]
    float zmm3[0x4]
    float zmm4[0x4]
    float zmm5[0x4]
    float zmm6[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(zmm0, zmm14, 1)) == 0)
        zmm5 = *arg3
        zmm2 = *arg4
        zmm4 = arg4[1]
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), zmm0)
        zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm6 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        zmm4 = _mm_mul_ps(zmm4, zmm7)
        zmm3 = __mulps_xmmps_memps(zmm3, data_143f2b850)
        zmm0 = _mm_mul_ps(zmm6, zmm2)
        zmm12 = _mm_mul_ps(zmm12, zmm7)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
        zmm1 = __mulps_xmmps_memps(zmm1, data_143f2b840)
        zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
        zmm0 = __mulps_xmmps_memps(zmm0, data_143f2b830)
        zmm3 = _mm_add_ps(zmm3, zmm1)
        arg1[2] = zmm12
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
        *arg1 = zmm3
        zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        zmm0 = _mm_mul_ps(zmm0, zmm3)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        zmm2 = _mm_sub_ps(_mm_mul_ps(zmm2, zmm5), zmm0)
        zmm2 = _mm_add_ps(zmm2, zmm2)
        zmm6 = _mm_mul_ps(zmm6, zmm2)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), zmm5)
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        zmm6 = _mm_add_ps(zmm6, zmm4)
        arg1[1] =
            __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(zmm0, zmm3)), zmm6), arg3[1])
    else
        zmm3 = *arg3
        zmm5 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
        zmm1 = _mm_add_ps(zmm3, zmm3)
        float zmm8[0x4] = arg3[1]
        zmm4 = zmm3
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        zmm4 = _mm_mul_ps(zmm4, zmm1)
        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
        zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(zmm1, zmm1, 0x12))
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1a), _mm_shuffle_ps(zmm4, zmm4, 1))
        float zmm10[0x4] = _mm_add_ps(zmm3, zmm2)
        _mm_mul_ps(zmm12, zmm7)
        zmm2 = _mm_sub_ps(zmm2, zmm3)
        zmm1 = _mm_sub_ps(zmm13, zmm0)
        zmm10 = _mm_mul_ps(zmm10, zmm7)
        zmm5 = _mm_mul_ps(zmm5, zmm2)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm7), data_143f2b820)
        zmm0 = _mm_shuffle_ps(zmm5, zmm1, 0x32)
        float zmm9[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 0), zmm0, 0x82)
        zmm0 = _mm_shuffle_ps(zmm10, zmm1, 0x31)
        zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm1, 0x10), zmm0, 0x88)
        zmm0 = zmm13
        zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm5, 0x12), zmm1, 0xe8)
        zmm1 = *arg4
        zmm0[0].q = zmm8 u>> 0x40
        zmm3 = _mm_add_ps(zmm1, zmm1)
        zmm8 = _mm_shuffle_ps(zmm8, zmm0, 0xc4)
        zmm4 = zmm1
        zmm5 = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        zmm4 = _mm_mul_ps(zmm4, zmm3)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), zmm1)
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1a), _mm_shuffle_ps(zmm4, zmm4, 1))
        zmm6 = _mm_add_ps(zmm3, zmm2)
        zmm2 = _mm_sub_ps(zmm2, zmm3)
        zmm1 = _mm_sub_ps(zmm13, zmm0)
        zmm6 = _mm_mul_ps(zmm6, zmm12)
        zmm5 = _mm_mul_ps(zmm5, zmm2)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm12), data_143f2b820)
        zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1, 0), _mm_shuffle_ps(zmm5, zmm1, 0x32), 0x82)
        zmm4 = _mm_shuffle_ps(zmm5, zmm1, 0x10)
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm6, zmm1, 0x31), 0x88)
        zmm0 = zmm13
        zmm2 = _mm_mul_ps(zmm2, zmm7)
        zmm6 = _mm_shuffle_ps(zmm6, zmm5, 0x12)
        zmm5 = arg4[1]
        zmm6 = _mm_shuffle_ps(zmm6, zmm1, 0xe8)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm10)
        zmm0[0].q = zmm5 u>> 0x40
        zmm5 = _mm_shuffle_ps(zmm5, zmm0, 0xc4)
        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm8)
        zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0, zmm9))
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm9)
        zmm2 = _mm_add_ps(zmm2, zmm1)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm10)
        zmm2 = _mm_add_ps(zmm2, zmm3)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm7)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        float var_d8[0x4] = zmm2
        zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm2 = _mm_mul_ps(zmm2, zmm7)
        zmm4 = _mm_mul_ps(zmm4, zmm8)
        zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm3 = _mm_add_ps(zmm3, zmm1)
        zmm0 = _mm_mul_ps(zmm0, zmm9)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm10)
        zmm3 = _mm_add_ps(zmm3, zmm4)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        zmm2 = _mm_add_ps(zmm2, zmm0)
        zmm6 = _mm_mul_ps(zmm6, zmm8)
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
        int96_t var_c8_1 = zmm3[0].12
        zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm2 = _mm_add_ps(zmm2, zmm1)
        zmm3 = _mm_mul_ps(zmm3, zmm7)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm10)
        zmm0 = _mm_mul_ps(zmm0, zmm9)
        zmm2 = _mm_add_ps(zmm2, zmm6)
        zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm8)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        int96_t var_b8_1 = zmm2[0].12
        int96_t var_a8_1 = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm5)[0].12
        float zmm11_1[0x4]
        int128_t zmm13_1
        float zmm14_1[0x4]
        zmm11_1, zmm13_1, zmm14_1 = sub_1407740e0(&var_d8, 0x322bcc77)
        zmm14_1 =
            _mm_and_ps(_mm_cmpeq_ps(zmm14_1, zmm11_1, 2), data_143f2b8c0 ^ zmm13_1) ^ data_143f2b8c0
        float zmm2_1[0x4] = var_d8[0]
        float zmm1_1 = var_d8[1]
        uint32_t zmm0_1[0x4] = var_d8[2]
        zmm2_1[0] = zmm2_1[0] * zmm14_1[0]
        zmm1_1 = zmm1_1 * zmm14_1[0]
        zmm0_1[0] = zmm0_1[0] f* zmm14_1[0]
        var_d8[0] = zmm2_1[0]
        zmm2_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
        var_d8[1] = zmm1_1
        zmm1_1 = var_c8_1:4.d * zmm2_1[0]
        var_d8[2] = zmm0_1[0]
        zmm0_1 = var_c8_1:8.d
        zmm0_1[0] = zmm0_1[0] f* zmm2_1[0]
        float zmm3_1 = var_c8_1.d * zmm2_1[0]
        zmm2_1 = var_b8_1.d
        var_c8_1:4.d = zmm1_1
        var_c8_1:8.d = zmm0_1[0]
        zmm0_1 = var_b8_1:8.d
        zmm14_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
        zmm1_1 = var_b8_1:4.d * zmm14_1[0]
        zmm0_1[0] = zmm0_1[0] f* zmm14_1[0]
        zmm2_1[0] = zmm2_1[0] * zmm14_1[0]
        var_b8_1:4.d = zmm1_1
        var_b8_1:8.d = zmm0_1[0]
        var_c8_1.d = zmm3_1
        var_b8_1.d = zmm2_1[0]
        uint32_t var_e8[0x4]
        sub_14077e4a0(&var_e8, &var_d8)
        uint32_t zmm6_1[0x4] = var_e8
        float zmm5_1[0x4] = data_143f2b8b0
        uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
        arg1[2] = zmm11_1
        zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
        float zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
        zmm1_2 = _mm_rsqrt_ps(zmm4_1)
        float zmm3_2[0x4] = _mm_mul_ps(zmm4_1, zmm5_1)
        float zmm2_2[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_2)), zmm1_2), 
            zmm1_2)
        zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm2_2, zmm2_2), zmm3_2))
        uint32_t zmm0_2[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
        zmm5_1 = _mm_add_ps(_mm_mul_ps(zmm5_1, zmm2_2), zmm2_2)
        zmm2_2 = _mm_unpacklo_ps(var_a8_1:4.d, 0)
        zmm5_1 = _mm_and_ps(_mm_mul_ps(zmm5_1, zmm6_1) ^ data_143f2b8a0, zmm0_2) ^ data_143f2b8a0
        arg1[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_a8_1.d, var_a8_1:8.d[0].q), zmm2_2[0].q)
        *arg1 = zmm5_1
return arg1
