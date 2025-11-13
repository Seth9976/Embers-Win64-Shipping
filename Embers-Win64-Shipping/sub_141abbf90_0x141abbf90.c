// 函数: sub_141abbf90
// 地址: 0x141abbf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4]
uint32_t var_38[0x4] = zmm6
float zmm7[0x4]
float var_48[0x4] = zmm7
float zmm8[0x4]
float var_58[0x4] = zmm8
float zmm9[0x4]
float var_68[0x4] = zmm9
float zmm10[0x4]
float var_78[0x4] = zmm10
float zmm11[0x4]
float var_88[0x4] = zmm11
float zmm12[0x4]
float var_98[0x4] = zmm12
float zmm13[0x4]
float var_a8[0x4] = zmm13
float zmm14[0x4]
float var_b8[0x4] = zmm14
float zmm15[0x4]
float var_c8[0x4] = zmm15
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
uint32_t rcx = zx.d(arg3)
float (* result_1)[0x4] = arg2
*arg2 = *arg5
arg2[1] = arg5[1]
float zmm0[0x4] = arg5[2]
arg2[2] = zmm0
float (* result)[0x4]
uint32_t var_158[0x4]
float var_148[0x4]
float var_108[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (rcx == 1)
    void* rdx_5 = *arg4
    zmm14 = zmm0
    zmm8 = *(rdx_5 + 0x30)
    float var_f8_3[0x4]
    float var_e8_3[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm0, zmm8), data_143f2b8d0, 1)) == 0)
        zmm5 = *(rdx_5 + 0x10)
        zmm2 = *result_1
        zmm4 = __mulps_xmmps_memps(zmm8, result_1[1])
        zmm7 = *(rdx_5 + 0x20)
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), zmm0)
        zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm6 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        zmm0 = _mm_mul_ps(zmm2, zmm6)
        zmm3 = __mulps_xmmps_memps(zmm3, data_143f2b850)
        zmm14 = _mm_mul_ps(zmm14, zmm8)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
        zmm1 = __mulps_xmmps_memps(zmm1, data_143f2b840)
        zmm2 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        zmm0 = __mulps_xmmps_memps(zmm0, data_143f2b830)
        zmm3 = _mm_add_ps(zmm3, zmm1)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        var_e8_3 = zmm14
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), zmm2)
        var_108 = zmm3
        zmm3 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), zmm5), zmm0)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        zmm1 = _mm_mul_ps(zmm1, zmm5)
        zmm0 = _mm_mul_ps(zmm0, zmm2)
        zmm3 = _mm_mul_ps(zmm3, zmm6)
        var_f8_3 = _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm1, zmm0), _mm_add_ps(zmm3, zmm4)), zmm7)
    else
        zmm3 = *(rdx_5 + 0x10)
        zmm11 = data_143f2b810
        zmm9 = *(rdx_5 + 0x20)
        zmm1 = _mm_add_ps(zmm3, zmm3)
        zmm4 = zmm3
        zmm5 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        zmm4 = _mm_mul_ps(zmm4, zmm1)
        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
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
        zmm1 = __andps_xmmxud_memxud(zmm1, data_143f2b820)
        zmm10 =
            _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm1, 0), _mm_shuffle_ps(zmm5, zmm1, 0x32), 0x82)
        zmm0 = _mm_shuffle_ps(zmm12, zmm1, 0x31)
        zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm1, 0x10), zmm0, 0x88)
        zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm5, 0x12), zmm1, 0xe8)
        zmm1 = *result_1
        zmm11[0].q = zmm9 u>> 0x40
        zmm3 = _mm_add_ps(zmm1, zmm1)
        zmm9 = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
        zmm4 = zmm1
        zmm5 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        zmm4 = _mm_mul_ps(zmm4, zmm3)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), zmm1)
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1a), _mm_shuffle_ps(zmm4, zmm4, 1))
        zmm7 = _mm_add_ps(zmm3, zmm2)
        zmm2 = _mm_sub_ps(zmm2, zmm3)
        zmm1 = _mm_sub_ps(zmm11, zmm0)
        zmm7 = _mm_mul_ps(zmm7, zmm14)
        zmm5 = _mm_mul_ps(zmm5, zmm2)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm14), data_143f2b820)
        zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1, 0), _mm_shuffle_ps(zmm5, zmm1, 0x32), 0x82)
        zmm4 = _mm_shuffle_ps(zmm5, zmm1, 0x10)
        zmm0 = _mm_shuffle_ps(zmm7, zmm1, 0x31)
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x88)
        zmm2 = _mm_mul_ps(zmm2, zmm8)
        zmm7 = _mm_shuffle_ps(zmm7, zmm5, 0x12)
        zmm5 = result_1[1]
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
        var_148 = zmm2
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
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        int96_t var_138_2 = zmm3[0].12
        zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm2 = _mm_add_ps(zmm2, zmm1)
        zmm3 = _mm_mul_ps(zmm3, zmm10)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm12)
        zmm0 = _mm_mul_ps(zmm0, zmm8)
        zmm2 = _mm_add_ps(zmm2, zmm7)
        zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm9)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        int96_t var_128_2 = zmm2[0].12
        int96_t var_118_2 = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm5)[0].12
        zmm11, zmm13, zmm15 = sub_1407740e0(&var_148, 0x322bcc77)
        float zmm2_3[0x4] = var_148[0]
        float zmm1_6 = var_148[1]
        zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm13, 2), data_143f2b8c0 ^ zmm11) ^ data_143f2b8c0
        zmm2_3[0] = zmm2_3[0] * zmm15[0]
        uint32_t zmm0_6[0x4] = var_148[2]
        zmm0_6[0] = zmm0_6[0] f* zmm15[0]
        zmm1_6 = zmm1_6 * zmm15[0]
        var_148[0] = zmm2_3[0]
        zmm2_3 = _mm_shuffle_ps(zmm15, zmm15, 0x55)
        var_148[2] = zmm0_6[0]
        zmm0_6 = var_138_2:8.d
        zmm0_6[0] = zmm0_6[0] f* zmm2_3[0]
        var_148[1] = zmm1_6
        zmm1_6 = var_138_2:4.d * zmm2_3[0]
        float zmm3_3 = var_138_2.d * zmm2_3[0]
        zmm2_3 = var_128_2.d
        var_138_2:8.d = zmm0_6[0]
        zmm0_6 = var_128_2:8.d
        var_138_2:4.d = zmm1_6
        zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
        zmm0_6[0] = zmm0_6[0] f* zmm15[0]
        zmm2_3[0] = zmm2_3[0] * zmm15[0]
        zmm1_6 = var_128_2:4.d * zmm15[0]
        var_128_2:8.d = zmm0_6[0]
        var_138_2.d = zmm3_3
        var_128_2.d = zmm2_3[0]
        var_128_2:4.d = zmm1_6
        sub_14077e4a0(&var_158, &var_148)
        float zmm6_1[0x4] = var_158
        float zmm5_2[0x4] = data_143f2b8b0
        rdx_5 = *arg4
        float zmm1_7[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
        var_e8_3 = zmm13
        zmm1_7 = _mm_add_ps(zmm1_7, _mm_shuffle_ps(zmm1_7, zmm1_7, 0x4e))
        float zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_7, zmm1_7, 0x39), zmm1_7)
        zmm1_7 = _mm_rsqrt_ps(zmm4_2)
        float zmm3_4[0x4] = _mm_mul_ps(zmm4_2, zmm5_2)
        float zmm2_4[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(zmm1_7, zmm1_7), zmm3_4)), zmm1_7), 
            zmm1_7)
        zmm5_2 = _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(zmm2_4, zmm2_4), zmm3_4))
        uint32_t zmm0_7[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
        zmm5_2 = _mm_add_ps(_mm_mul_ps(zmm5_2, zmm2_4), zmm2_4)
        zmm2_4 = _mm_unpacklo_ps(var_118_2:4.d, 0)
        zmm5_2 = _mm_and_ps(_mm_mul_ps(zmm5_2, zmm6_1) ^ data_143f2b8a0, zmm0_7) ^ data_143f2b8a0
        var_f8_3 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_118_2.d, var_118_2:8.d[0].q), zmm2_4[0].q)
        var_108 = zmm5_2
    
    sub_140ae0920(&var_108, rdx_5 + 0x70)
    result = result_1
    *result_1 = var_108
    result_1[2] = var_e8_3
    result_1[1] = var_f8_3
else if (rcx == 2)
    void* rcx_14 = *arg4
    zmm14 = zmm0
    zmm8 = *(rcx_14 + 0x30)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm0, zmm8), data_143f2b8d0, 1)) == 0)
        zmm5 = *(rcx_14 + 0x10)
        zmm2 = *arg2
        zmm4 = __mulps_xmmps_memps(zmm8, arg2[1])
        result = result_1
        zmm7 = *(rcx_14 + 0x20)
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), zmm0)
        zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm6 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        zmm0 = _mm_mul_ps(zmm2, zmm6)
        zmm3 = __mulps_xmmps_memps(zmm3, data_143f2b850)
        zmm8 = _mm_mul_ps(zmm8, zmm14)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
        zmm1 = __mulps_xmmps_memps(zmm1, data_143f2b840)
        zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
        zmm0 = __mulps_xmmps_memps(zmm0, data_143f2b830)
        zmm3 = _mm_add_ps(zmm3, zmm1)
        arg2[2] = zmm8
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
        *arg2 = zmm3
        zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        zmm0 = _mm_mul_ps(zmm0, zmm3)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        zmm2 = _mm_sub_ps(_mm_mul_ps(zmm2, zmm5), zmm0)
        zmm2 = _mm_add_ps(zmm2, zmm2)
        zmm6 = _mm_mul_ps(zmm6, zmm2)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), zmm5)
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        zmm6 = _mm_add_ps(zmm6, zmm4)
        arg2[1] = _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(zmm0, zmm3)), zmm6), zmm7)
    else
        zmm3 = *(rcx_14 + 0x10)
        zmm11 = data_143f2b810
        zmm9 = *(rcx_14 + 0x20)
        zmm1 = _mm_add_ps(zmm3, zmm3)
        zmm4 = zmm3
        zmm5 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        zmm4 = _mm_mul_ps(zmm4, zmm1)
        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
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
        zmm1 = __andps_xmmxud_memxud(zmm1, data_143f2b820)
        zmm10 =
            _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm1, 0), _mm_shuffle_ps(zmm5, zmm1, 0x32), 0x82)
        zmm0 = _mm_shuffle_ps(zmm12, zmm1, 0x31)
        zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm1, 0x10), zmm0, 0x88)
        zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm5, 0x12), zmm1, 0xe8)
        zmm1 = *arg2
        zmm11[0].q = zmm9 u>> 0x40
        zmm3 = _mm_add_ps(zmm1, zmm1)
        zmm9 = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
        zmm4 = zmm1
        zmm5 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        zmm4 = _mm_mul_ps(zmm4, zmm3)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), zmm1)
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1a), _mm_shuffle_ps(zmm4, zmm4, 1))
        zmm7 = _mm_add_ps(zmm3, zmm2)
        zmm2 = _mm_sub_ps(zmm2, zmm3)
        zmm1 = _mm_sub_ps(zmm11, zmm0)
        zmm7 = _mm_mul_ps(zmm7, zmm14)
        zmm5 = _mm_mul_ps(zmm5, zmm2)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm14), data_143f2b820)
        zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1, 0), _mm_shuffle_ps(zmm5, zmm1, 0x32), 0x82)
        zmm4 = _mm_shuffle_ps(zmm5, zmm1, 0x10)
        zmm0 = _mm_shuffle_ps(zmm7, zmm1, 0x31)
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x88)
        zmm2 = _mm_mul_ps(zmm2, zmm8)
        zmm7 = _mm_shuffle_ps(zmm7, zmm5, 0x12)
        zmm5 = arg2[1]
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
        var_148 = zmm2
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
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
        int96_t var_138_1 = zmm3[0].12
        zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm2 = _mm_add_ps(zmm2, zmm1)
        zmm3 = _mm_mul_ps(zmm3, zmm8)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm12)
        zmm0 = _mm_mul_ps(zmm0, zmm10)
        zmm2 = _mm_add_ps(zmm2, zmm7)
        zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm9)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        int96_t var_128_1 = zmm2[0].12
        int96_t var_118_1 = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm5)[0].12
        zmm11, zmm13, zmm15 = sub_1407740e0(&var_148, 0x322bcc77)
        float zmm2_1[0x4] = var_148[0]
        float zmm1_4 = var_148[1]
        zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm13, 2), data_143f2b8c0 ^ zmm11) ^ data_143f2b8c0
        zmm2_1[0] = zmm2_1[0] * zmm15[0]
        uint32_t zmm0_4[0x4] = var_148[2]
        zmm0_4[0] = zmm0_4[0] f* zmm15[0]
        zmm1_4 = zmm1_4 * zmm15[0]
        var_148[0] = zmm2_1[0]
        zmm2_1 = _mm_shuffle_ps(zmm15, zmm15, 0x55)
        var_148[2] = zmm0_4[0]
        zmm0_4 = var_138_1:8.d
        zmm0_4[0] = zmm0_4[0] f* zmm2_1[0]
        var_148[1] = zmm1_4
        zmm1_4 = var_138_1:4.d * zmm2_1[0]
        float zmm3_1 = var_138_1.d * zmm2_1[0]
        zmm2_1 = var_128_1.d
        var_138_1:8.d = zmm0_4[0]
        zmm0_4 = var_128_1:8.d
        var_138_1:4.d = zmm1_4
        zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
        zmm0_4[0] = zmm0_4[0] f* zmm15[0]
        zmm2_1[0] = zmm2_1[0] * zmm15[0]
        zmm1_4 = var_128_1:4.d * zmm15[0]
        var_128_1:8.d = zmm0_4[0]
        var_138_1.d = zmm3_1
        var_128_1.d = zmm2_1[0]
        var_128_1:4.d = zmm1_4
        sub_14077e4a0(&var_158, &var_148)
        zmm6 = var_158
        float zmm5_1[0x4] = data_143f2b8b0
        uint32_t zmm1_5[0x4] = _mm_mul_ps(zmm6, zmm6)
        zmm1_5 = _mm_add_ps(zmm1_5, _mm_shuffle_ps(zmm1_5, zmm1_5, 0x4e))
        uint32_t zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_5, zmm1_5, 0x39), zmm1_5)
        zmm1_5 = _mm_rsqrt_ps(zmm4_1)
        float zmm3_2[0x4] = _mm_mul_ps(zmm4_1, zmm5_1)
        float zmm2_2[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1_5, zmm1_5), zmm3_2)), zmm1_5), 
            zmm1_5)
        zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm2_2, zmm2_2), zmm3_2))
        uint32_t zmm0_5[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
        zmm5_1 = _mm_add_ps(_mm_mul_ps(zmm5_1, zmm2_2), zmm2_2)
        zmm2_2 = _mm_unpacklo_ps(var_118_1:4.d, 0)
        zmm5_1 = _mm_and_ps(_mm_mul_ps(zmm5_1, zmm6) ^ data_143f2b8a0, zmm0_5) ^ data_143f2b8a0
        result_1[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_118_1.d, var_118_1:8.d[0].q), zmm2_2[0].q)
        result_1[2] = zmm13
        *result_1 = zmm5_1
        result = result_1
else if (rcx == 3)
    if (*arg4[4] == 0)
        sub_141a98300(&arg4[1], 0)
    
    float (* rax_11)[0x4] = arg4[1]
    var_108 = *rax_11
    float var_f8_2[0x4] = rax_11[1]
    float var_e8_2[0x4] = rax_11[2]
    float (* rax_12)[0x4] = sub_140ad7d70(result_1, &var_148, &var_108)
    *result_1 = *rax_12
    result_1[1] = rax_12[1]
    result = result_1
    result_1[2] = rax_12[2]
else if (rcx != 4)
    result = result_1
else
    void* r14_1 = arg4[3]
    
    if (sub_141ea6180(arg1 + 0x130, r14_1) != 0)
        int32_t rax_4 = *(arg1 + 0x138)
        int32_t rdx_1
        
        if (rax_4 s>= 0)
            rdx_1 = *(arg1 + 0x13c)
        else
            int32_t rcx_5 = rax_4 * 2
            
            if ((rcx_5 & 0xfffffffe) == 0xfffffffe)
                rdx_1 = -1
            else
                rdx_1 = *(*(r14_1 + 0x80) + (sx.q(rcx_5) s>> 1 << 2))
        
        int128_t* rax_8 = sub_141ab9f30(&arg4[1], rdx_1)
        var_108 = *rax_8
        int128_t var_f8_1 = rax_8[1]
        float var_e8_1[0x4] = rax_8[2]
        float (* rax_9)[0x4] = sub_140ad7d70(result_1, &var_148, &var_108)
        *result_1 = *rax_9
        result_1[1] = rax_9[1]
        result_1[2] = rax_9[2]
    
    result = result_1
__security_check_cookie(rax_1 ^ &var_188)
return result
