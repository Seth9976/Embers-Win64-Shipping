// 函数: sub_141ab9f70
// 地址: 0x141ab9f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_38[0x4] = zmm6
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
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
uint32_t rcx = zx.d(arg3)
*arg2 = *arg5
arg2[1] = arg5[1]
float zmm0[0x4] = arg5[2]
arg2[2] = zmm0
uint32_t var_168[0x4]
float var_118[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (rcx == 1)
    zmm7 = arg7[2]
    zmm14 = zmm0
    float var_108_3[0x4]
    float var_f8_3[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm0, zmm7), data_143f2b8d0, 1)) == 0)
        zmm5 = *arg7
        zmm2 = *arg2
        zmm4 = arg2[1]
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), zmm0)
        zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm4 = _mm_mul_ps(zmm4, zmm7)
        zmm3 = __mulps_xmmps_memps(zmm3, data_143f2b850)
        zmm6 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        zmm0 = _mm_mul_ps(zmm2, zmm6)
        zmm14 = _mm_mul_ps(zmm14, zmm7)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
        zmm1 = __mulps_xmmps_memps(zmm1, data_143f2b840)
        zmm2 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        zmm0 = __mulps_xmmps_memps(zmm0, data_143f2b830)
        zmm3 = _mm_add_ps(zmm3, zmm1)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        var_f8_3 = zmm14
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), zmm2)
        var_118 = zmm3
        zmm3 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), zmm5), zmm0)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        zmm1 = _mm_mul_ps(zmm1, zmm5)
        zmm0 = _mm_mul_ps(zmm0, zmm2)
        zmm3 = _mm_mul_ps(zmm3, zmm6)
        var_108_3 =
            __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm1, zmm0), _mm_add_ps(zmm3, zmm4)), arg7[1])
    else
        zmm3 = *arg7
        zmm11 = data_143f2b810
        zmm9 = arg7[1]
        zmm1 = _mm_add_ps(zmm3, zmm3)
        zmm4 = zmm3
        zmm5 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        zmm4 = _mm_mul_ps(zmm4, zmm1)
        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
        zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x1a)
        zmm3 = _mm_mul_ps(zmm3, zmm1)
        zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 1))
        _mm_mul_ps(zmm7, zmm14)
        zmm12 = _mm_add_ps(zmm3, zmm2)
        zmm2 = _mm_sub_ps(zmm2, zmm3)
        zmm1 = _mm_sub_ps(zmm11, zmm0)
        zmm12 = _mm_mul_ps(zmm12, zmm7)
        zmm1 = _mm_mul_ps(zmm1, zmm7)
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
        zmm5 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
        zmm4 = _mm_mul_ps(zmm3, zmm1)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x1a)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), zmm1)
        zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 1))
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
        float var_158[0x4] = zmm2
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
        int96_t var_148_1 = zmm3[0].12
        zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm2 = _mm_add_ps(zmm2, zmm1)
        zmm3 = _mm_mul_ps(zmm3, zmm8)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm12)
        zmm0 = _mm_mul_ps(zmm0, zmm10)
        zmm2 = _mm_add_ps(zmm2, zmm7)
        zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm9)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        int96_t var_138_1 = zmm2[0].12
        int96_t var_128_1 = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm5)[0].12
        zmm11, zmm13, zmm15 = sub_1407740e0(&var_158, 0x322bcc77)
        float zmm2_5[0x4] = var_158[0]
        float zmm1_5 = var_158[1]
        zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm13, 2), data_143f2b8c0 ^ zmm11) ^ data_143f2b8c0
        zmm2_5[0] = zmm2_5[0] * zmm15[0]
        uint32_t zmm0_5[0x4] = var_158[2]
        zmm0_5[0] = zmm0_5[0] f* zmm15[0]
        zmm1_5 = zmm1_5 * zmm15[0]
        var_158[0] = zmm2_5[0]
        zmm2_5 = _mm_shuffle_ps(zmm15, zmm15, 0x55)
        var_158[2] = zmm0_5[0]
        zmm0_5 = var_148_1:8.d
        zmm0_5[0] = zmm0_5[0] f* zmm2_5[0]
        var_158[1] = zmm1_5
        zmm1_5 = var_148_1:4.d * zmm2_5[0]
        float zmm3_5 = var_148_1.d * zmm2_5[0]
        zmm2_5 = var_138_1.d
        var_148_1:8.d = zmm0_5[0]
        zmm0_5 = var_138_1:8.d
        var_148_1:4.d = zmm1_5
        zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
        zmm0_5[0] = zmm0_5[0] f* zmm15[0]
        zmm2_5[0] = zmm2_5[0] * zmm15[0]
        zmm1_5 = var_138_1:4.d * zmm15[0]
        var_138_1:8.d = zmm0_5[0]
        var_148_1.d = zmm3_5
        var_138_1.d = zmm2_5[0]
        var_138_1:4.d = zmm1_5
        sub_14077e4a0(&var_168, &var_158)
        float zmm6_1[0x4] = var_168
        float zmm5_3[0x4] = data_143f2b8b0
        float zmm1_6[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
        var_f8_3 = zmm13
        zmm1_6 = _mm_add_ps(zmm1_6, _mm_shuffle_ps(zmm1_6, zmm1_6, 0x4e))
        float zmm4_3[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_6, zmm1_6, 0x39), zmm1_6)
        zmm1_6 = _mm_rsqrt_ps(zmm4_3)
        float zmm3_6[0x4] = _mm_mul_ps(zmm4_3, zmm5_3)
        float zmm2_6[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_3, _mm_mul_ps(_mm_mul_ps(zmm1_6, zmm1_6), zmm3_6)), zmm1_6), 
            zmm1_6)
        zmm5_3 = _mm_sub_ps(zmm5_3, _mm_mul_ps(_mm_mul_ps(zmm2_6, zmm2_6), zmm3_6))
        uint32_t zmm0_6[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_3, 2)
        zmm5_3 = _mm_add_ps(_mm_mul_ps(zmm5_3, zmm2_6), zmm2_6)
        zmm2_6 = _mm_unpacklo_ps(var_128_1:4.d, 0)
        zmm5_3 = _mm_and_ps(_mm_mul_ps(zmm5_3, zmm6_1) ^ data_143f2b8a0, zmm0_6) ^ data_143f2b8a0
        var_108_3 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_128_1.d, var_128_1:8.d[0].q), zmm2_6[0].q)
        var_118 = zmm5_3
    
    sub_140ae0920(&var_118, arg6)
    *arg2 = var_118
    arg2[2] = var_f8_3
    arg2[1] = var_108_3
else if (rcx == 2)
    zmm6 = arg6[2]
    zmm2 = data_143f2b9a0
    zmm3 = data_143f2b990
    zmm1 = _mm_and_ps(zmm6, zmm2)
    zmm13 = data_143f2b820
    zmm15 = data_143f2b810
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3, zmm1, 1)) == 0)
        zmm7 = data_143dbb0c0
        zmm11 = data_143dbb0d0
        zmm6 = data_143dbb0e0
    else
        zmm7 = __mulps_xmmps_memps(*arg6, data_143f2b8e0)
        zmm5 = arg6[1]
        zmm15[0].q = zmm6 u>> 0x40
        zmm6 = _mm_shuffle_ps(zmm6, zmm15, 0xc4)
        zmm1 = _mm_rcp_ps(zmm6)
        zmm0 = _mm_mul_ps(zmm1, zmm1)
        zmm1 = _mm_sub_ps(_mm_add_ps(zmm1, zmm1), _mm_mul_ps(zmm0, zmm6))
        zmm0 = _mm_mul_ps(zmm1, zmm1)
        zmm1 = _mm_add_ps(zmm1, zmm1)
        zmm0 = _mm_mul_ps(zmm0, zmm6)
        zmm6 = _mm_cmpeq_ps(_mm_and_ps(zmm6, zmm2), zmm3, 2)
        zmm3 = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
        zmm1 = _mm_sub_ps(zmm1, zmm0)
        zmm6 = _mm_and_ps(zmm6, zx.o(0) ^ zmm1) ^ zmm1
        zmm1 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
        zmm6 = _mm_and_ps(zmm6, zmm13)
        zmm5 = _mm_mul_ps(zmm5, zmm6)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm3)
        zmm4 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), zmm1), zmm0)
        zmm4 = _mm_add_ps(zmm4, zmm4)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), zmm1)
        zmm1 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
        zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
        zmm1 = _mm_mul_ps(zmm1, zmm4)
        zmm0 = _mm_mul_ps(zmm0, zmm3)
        zmm1 = _mm_add_ps(zmm1, zmm5)
        zmm11 = _mm_and_ps(_mm_sub_ps(zx.o(0), _mm_add_ps(_mm_sub_ps(zmm2, zmm0), zmm1)), zmm13)
    
    zmm12 = arg2[2]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm12, zmm6), data_143f2b8d0, 1)) == 0)
        zmm3 = *arg2
        zmm4 = arg2[1]
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x1b)
        zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm7, zmm7, 0))
        zmm0 = zmm3
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
        zmm4 = _mm_mul_ps(zmm4, zmm6)
        zmm2 = __mulps_xmmps_memps(zmm2, data_143f2b850)
        zmm5 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
        zmm0 = _mm_mul_ps(zmm0, zmm5)
        zmm6 = _mm_mul_ps(zmm6, zmm12)
        zmm2 = _mm_add_ps(zmm2, zmm0)
        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm7, zmm7, 0x55))
        zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(zmm7, zmm7, 0xaa))
        zmm1 = __mulps_xmmps_memps(zmm1, data_143f2b840)
        zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
        zmm3 = __mulps_xmmps_memps(zmm3, data_143f2b830)
        zmm2 = _mm_add_ps(zmm2, zmm1)
        arg2[2] = zmm6
        zmm2 = _mm_add_ps(zmm2, zmm3)
        zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
        *arg2 = zmm2
        zmm2 = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
        zmm0 = _mm_mul_ps(zmm0, zmm2)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
        zmm3 = _mm_sub_ps(_mm_mul_ps(zmm3, zmm7), zmm0)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        zmm1 = _mm_mul_ps(zmm1, zmm7)
        zmm0 = _mm_mul_ps(zmm0, zmm2)
        zmm3 = _mm_mul_ps(zmm3, zmm5)
        arg2[1] = _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm1, zmm0), _mm_add_ps(zmm3, zmm4)), zmm11)
    else
        zmm1 = _mm_add_ps(zmm7, zmm7)
        zmm2 = _mm_shuffle_ps(zmm7, zmm7, 4)
        zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        zmm5 = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
        _mm_mul_ps(zmm6, zmm12)
        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
        zmm3 = _mm_mul_ps(zmm1, zmm7)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
        zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xff), zmm1)
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), _mm_shuffle_ps(zmm3, zmm3, 1))
        zmm3 = *arg2
        zmm9 = _mm_add_ps(zmm7, zmm2)
        zmm2 = _mm_sub_ps(zmm2, zmm7)
        zmm1 = _mm_sub_ps(zmm15, zmm0)
        zmm9 = _mm_mul_ps(zmm9, zmm6)
        zmm4 = _mm_mul_ps(zmm4, zmm2)
        zmm1 = _mm_mul_ps(zmm1, zmm6)
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
        zmm1 = _mm_and_ps(zmm1, zmm13)
        zmm0 = _mm_shuffle_ps(zmm4, zmm1, 0x32)
        zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm1, 0), zmm0, 0x82)
        zmm0 = _mm_shuffle_ps(zmm9, zmm1, 0x31)
        zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 0x10), zmm0, 0x88)
        zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm4, 0x12), zmm1, 0xe8)
        zmm1 = _mm_add_ps(zmm3, zmm3)
        zmm15[0].q = zmm11 u>> 0x40
        zmm11 = _mm_shuffle_ps(zmm11, zmm15, 0xc4)
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x29)
        zmm4 = _mm_mul_ps(zmm1, zmm3)
        zmm2 = _mm_mul_ps(zmm2, zmm0)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm1)
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1a), _mm_shuffle_ps(zmm4, zmm4, 1))
        zmm6 = _mm_add_ps(zmm3, zmm2)
        zmm2 = _mm_sub_ps(zmm2, zmm3)
        zmm1 = _mm_sub_ps(zmm15, zmm0)
        zmm6 = _mm_mul_ps(zmm6, zmm12)
        zmm5 = _mm_mul_ps(zmm5, zmm2)
        zmm1 = _mm_and_ps(_mm_mul_ps(zmm1, zmm12), zmm13)
        zmm0 = _mm_shuffle_ps(zmm5, zmm1, 0x32)
        zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1, 0), zmm0, 0x82)
        zmm0 = _mm_shuffle_ps(zmm6, zmm1, 0x31)
        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm1, 0x10), zmm0, 0x88)
        zmm6 = _mm_shuffle_ps(zmm6, zmm5, 0x12)
        zmm5 = arg2[1]
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        zmm6 = _mm_shuffle_ps(zmm6, zmm1, 0xe8)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm9)
        zmm2 = _mm_mul_ps(zmm2, zmm7)
        zmm15[0].q = zmm5 u>> 0x40
        zmm5 = _mm_shuffle_ps(zmm5, zmm15, 0xc4)
        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm11)
        zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0, zmm8))
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm8)
        zmm2 = _mm_add_ps(zmm2, zmm1)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm9)
        zmm2 = _mm_add_ps(zmm2, zmm3)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm7)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        var_118 = zmm2
        zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm2 = _mm_mul_ps(zmm2, zmm7)
        zmm4 = _mm_mul_ps(zmm4, zmm11)
        zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm3 = _mm_add_ps(zmm3, zmm1)
        zmm0 = _mm_mul_ps(zmm0, zmm8)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm9)
        zmm3 = _mm_add_ps(zmm3, zmm4)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        zmm2 = _mm_add_ps(zmm2, zmm0)
        zmm6 = _mm_mul_ps(zmm6, zmm11)
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
        int96_t var_108_2 = zmm3[0].12
        zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm2 = _mm_add_ps(zmm2, zmm1)
        zmm3 = _mm_mul_ps(zmm3, zmm7)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm9)
        zmm0 = _mm_mul_ps(zmm0, zmm8)
        zmm2 = _mm_add_ps(zmm2, zmm6)
        zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm11)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        int96_t var_f8_2 = zmm2[0].12
        int96_t var_e8_2 = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm5)[0].12
        zmm10, zmm14, zmm15 = sub_1407740e0(&var_118, 0x322bcc77)
        float zmm2_3[0x4] = var_118[0]
        float zmm1_3 = var_118[1]
        zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zmm10, 2), data_143f2b8c0 ^ zmm15)
        uint32_t zmm0_3[0x4] = var_118[2]
        zmm14 ^= data_143f2b8c0
        zmm2_3[0] = zmm2_3[0] * zmm14[0]
        zmm1_3 = zmm1_3 * zmm14[0]
        zmm0_3[0] = zmm0_3[0] f* zmm14[0]
        var_118[0] = zmm2_3[0]
        var_118[1] = zmm1_3
        zmm2_3 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
        zmm1_3 = var_108_2:4.d * zmm2_3[0]
        var_118[2] = zmm0_3[0]
        zmm0_3 = var_108_2:8.d
        zmm0_3[0] = zmm0_3[0] f* zmm2_3[0]
        float zmm3_3 = var_108_2.d * zmm2_3[0]
        zmm2_3 = var_f8_2.d
        var_108_2:4.d = zmm1_3
        var_108_2:8.d = zmm0_3[0]
        zmm0_3 = var_f8_2:8.d
        zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
        zmm1_3 = var_f8_2:4.d * zmm14[0]
        zmm0_3[0] = zmm0_3[0] f* zmm14[0]
        zmm2_3[0] = zmm2_3[0] * zmm14[0]
        var_f8_2:4.d = zmm1_3
        var_f8_2:8.d = zmm0_3[0]
        var_108_2.d = zmm3_3
        var_f8_2.d = zmm2_3[0]
        sub_14077e4a0(&var_168, &var_118)
        zmm6 = var_168
        float zmm5_2[0x4] = data_143f2b8b0
        float zmm1_4[0x4] = _mm_mul_ps(zmm6, zmm6)
        zmm1_4 = _mm_add_ps(zmm1_4, _mm_shuffle_ps(zmm1_4, zmm1_4, 0x4e))
        float zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_4, zmm1_4, 0x39), zmm1_4)
        zmm1_4 = _mm_rsqrt_ps(zmm4_2)
        float zmm3_4[0x4] = _mm_mul_ps(zmm4_2, zmm5_2)
        float zmm2_4[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(zmm1_4, zmm1_4), zmm3_4)), zmm1_4), 
            zmm1_4)
        zmm5_2 = _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(zmm2_4, zmm2_4), zmm3_4))
        uint32_t zmm0_4[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
        zmm5_2 = _mm_add_ps(_mm_mul_ps(zmm5_2, zmm2_4), zmm2_4)
        zmm2_4 = _mm_unpacklo_ps(var_e8_2:4.d, 0)
        zmm5_2 = _mm_and_ps(_mm_mul_ps(zmm5_2, zmm6) ^ data_143f2b8a0, zmm0_4) ^ data_143f2b8a0
        arg2[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_e8_2.d, var_e8_2:8.d[0].q), zmm2_4[0].q)
        arg2[2] = zmm10
        *arg2 = zmm5_2
else if (rcx == 3)
    if (**(arg4 + 0x20) == 0)
        sub_141a98300(arg4 + 8, 0)
    
    float (* rax_11)[0x4] = *(arg4 + 8)
    zmm13 = arg2[2]
    zmm8 = rax_11[2]
    zmm5 = *rax_11
    zmm15 = rax_11[1]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13, zmm8), data_143f2b8d0, 1)) == 0)
        zmm2 = *arg2
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), zmm0)
        zmm0 = zmm2
        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
        zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        zmm6 = _mm_add_ps(__mulps_xmmps_memps(zmm6, data_143f2b850), _mm_mul_ps(zmm0, zmm4))
        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm5, zmm5, 0x55))
        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm5, zmm5, 0xaa))
        zmm1 = __mulps_xmmps_memps(zmm1, data_143f2b840)
        zmm2 = __mulps_xmmps_memps(zmm2, data_143f2b830)
        zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm1), zmm2)
    label_141aba4c4:
        zmm3 = _mm_mul_ps(arg2[1], zmm8)
        zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        zmm12 = _mm_mul_ps(zmm8, zmm13)
        *arg2 = zmm6
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        zmm2 = _mm_mul_ps(zmm2, zmm5)
        zmm0 = _mm_mul_ps(zmm0, zmm1)
        arg2[2] = zmm12
        zmm2 = _mm_sub_ps(zmm2, zmm0)
        zmm2 = _mm_add_ps(zmm2, zmm2)
        zmm7 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        zmm7 = _mm_mul_ps(zmm7, zmm5)
        zmm0 = _mm_mul_ps(zmm0, zmm1)
        zmm2 = _mm_mul_ps(zmm2, zmm4)
        arg2[1] = _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm7, zmm0), _mm_add_ps(zmm2, zmm3)), zmm15)
    else
        zmm10 = data_143f2b810
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 4)
        zmm2 = _mm_add_ps(zmm5, zmm5)
        zmm4 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
        _mm_mul_ps(zmm8, zmm13)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x29), zmm0)
        zmm3 = _mm_mul_ps(zmm2, zmm5)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x12), _mm_shuffle_ps(zmm5, zmm5, 0xff))
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), _mm_shuffle_ps(zmm3, zmm3, 1))
        zmm3 = *arg2
        zmm11 = _mm_add_ps(zmm2, zmm1)
        zmm1 = _mm_sub_ps(zmm1, zmm2)
        zmm11 = _mm_mul_ps(zmm11, zmm8)
        zmm4 = _mm_mul_ps(zmm4, zmm1)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, zmm0), zmm8), data_143f2b820)
        zmm0 = _mm_shuffle_ps(zmm4, zmm1, 0x32)
        zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1, 0), zmm0, 0x82)
        zmm0 = zmm11
        zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm4, 0x12), zmm1, 0xe8)
        zmm8 = _mm_shuffle_ps(zmm4, zmm1, 0x10)
        zmm0 = _mm_shuffle_ps(zmm0, zmm1, 0x31)
        zmm1 = _mm_add_ps(zmm3, zmm3)
        zmm4 = _mm_mul_ps(zmm3, zmm1)
    label_141aba16c:
        zmm8 = _mm_shuffle_ps(zmm8, zmm0, 0x88)
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        zmm5 = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
        zmm10[0].q = zmm15 u>> 0x40
        zmm15 = _mm_shuffle_ps(zmm15, zmm10, 0xc4)
        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
        zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x1a)
        zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(zmm1, zmm1, 0x12))
        zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 1))
        zmm7 = _mm_add_ps(zmm3, zmm2)
        zmm2 = _mm_sub_ps(zmm2, zmm3)
        zmm1 = _mm_sub_ps(zmm10, zmm0)
        zmm7 = _mm_mul_ps(zmm7, zmm13)
        zmm5 = _mm_mul_ps(zmm5, zmm2)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm13), data_143f2b820)
        zmm0 = _mm_shuffle_ps(zmm5, zmm1, 0x32)
        zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1, 0), zmm0, 0x82)
        zmm0 = _mm_shuffle_ps(zmm7, zmm1, 0x31)
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm1, 0x10), zmm0, 0x88)
        zmm2 = _mm_mul_ps(zmm2, zmm8)
        zmm7 = _mm_shuffle_ps(zmm7, zmm5, 0x12)
        zmm5 = arg2[1]
        zmm7 = _mm_shuffle_ps(zmm7, zmm1, 0xe8)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm11)
        zmm10[0].q = zmm5 u>> 0x40
        zmm5 = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm9)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm15)
        zmm2 = _mm_add_ps(zmm2, zmm0)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm9)
        zmm2 = _mm_add_ps(zmm2, zmm1)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm11)
        zmm2 = _mm_add_ps(zmm2, zmm3)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm8)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        var_118 = zmm2
        zmm2 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm4 = _mm_mul_ps(zmm4, zmm15)
        zmm2 = _mm_mul_ps(zmm2, zmm8)
        zmm0 = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm3 = _mm_add_ps(zmm3, zmm1)
        zmm0 = _mm_mul_ps(zmm0, zmm9)
        zmm3 = _mm_add_ps(zmm3, zmm4)
        zmm2 = _mm_add_ps(zmm2, zmm0)
        int96_t var_108_1 = zmm3[0].12
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), zmm11)
        zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm3 = _mm_mul_ps(zmm3, zmm8)
        zmm2 = _mm_add_ps(zmm2, zmm1)
        zmm0 = _mm_mul_ps(zmm0, zmm9)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm11)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm15)
        zmm7 = _mm_mul_ps(zmm7, zmm15)
        zmm3 = _mm_add_ps(zmm3, zmm1)
        zmm2 = _mm_add_ps(zmm2, zmm7)
        zmm3 = _mm_add_ps(zmm3, zmm5)
        int96_t var_f8_1 = zmm2[0].12
        int96_t var_e8_1 = zmm3[0].12
        zmm10, zmm12, zmm14 = sub_1407740e0(&var_118, 0x322bcc77)
        float zmm2_1[0x4] = var_118[0]
        float zmm1_1 = var_118[1]
        zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zmm12, 2), data_143f2b8c0 ^ zmm10)
        uint32_t zmm0_1[0x4] = var_118[2]
        zmm14 ^= data_143f2b8c0
        zmm2_1[0] = zmm2_1[0] * zmm14[0]
        zmm1_1 = zmm1_1 * zmm14[0]
        zmm0_1[0] = zmm0_1[0] f* zmm14[0]
        var_118[0] = zmm2_1[0]
        zmm2_1 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
        var_118[1] = zmm1_1
        zmm1_1 = var_108_1:4.d * zmm2_1[0]
        var_118[2] = zmm0_1[0]
        zmm0_1 = var_108_1:8.d
        zmm0_1[0] = zmm0_1[0] f* zmm2_1[0]
        float zmm3_1 = var_108_1.d * zmm2_1[0]
        zmm2_1 = var_f8_1.d
        var_108_1:4.d = zmm1_1
        var_108_1:8.d = zmm0_1[0]
        zmm0_1 = var_f8_1:8.d
        zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
        zmm1_1 = var_f8_1:4.d * zmm14[0]
        zmm0_1[0] = zmm0_1[0] f* zmm14[0]
        zmm2_1[0] = zmm2_1[0] * zmm14[0]
        var_f8_1:4.d = zmm1_1
        var_f8_1:8.d = zmm0_1[0]
        var_108_1.d = zmm3_1
        var_f8_1.d = zmm2_1[0]
        sub_14077e4a0(&var_168, &var_118)
        float zmm5_1[0x4] = var_168
        zmm6 = data_143f2b8b0
        float zmm1_2[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
        zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
        float zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
        zmm1_2 = _mm_rsqrt_ps(zmm4_1)
        float zmm3_2[0x4] = _mm_mul_ps(zmm4_1, zmm6)
        float zmm2_2[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_2)), zmm1_2), 
            zmm1_2)
        zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm2_2, zmm2_2), zmm3_2))
        uint32_t zmm0_2[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
        zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm2_2), zmm2_2)
        zmm2_2 = _mm_unpacklo_ps(var_e8_1:4.d, 0)
        zmm6 = _mm_and_ps(_mm_mul_ps(zmm6, zmm5_1) ^ data_143f2b8a0, zmm0_2) ^ data_143f2b8a0
        arg2[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_e8_1.d, var_e8_1:8.d[0].q), zmm2_2[0].q)
        *arg2 = zmm6
        arg2[2] = zmm12
else if (rcx == 4)
    void* rdi_1 = *(arg4 + 0x18)
    
    if (sub_141ea6180(arg1 + 0x130, rdi_1) != 0)
        int32_t rax_4 = *(arg1 + 0x138)
        int32_t rdx_2
        
        if (rax_4 s>= 0)
            rdx_2 = *(arg1 + 0x13c)
        else
            int32_t rcx_5 = rax_4 * 2
            
            if ((rcx_5 & 0xfffffffe) == 0xfffffffe)
                rdx_2 = -1
            else
                rdx_2 = *(*(rdi_1 + 0x80) + (sx.q(rcx_5) s>> 1 << 2))
        
        int128_t* rax_8 = sub_141ab9f30(arg4 + 8, rdx_2)
        zmm13 = arg2[2]
        zmm8 = rax_8[2]
        zmm5 = *rax_8
        zmm15 = rax_8[1]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13, zmm8), data_143f2b8d0, 1)) == 0)
            zmm2 = *arg2
            zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), _mm_shuffle_ps(zmm2, zmm2, 0x1b))
            zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            zmm0 = _mm_mul_ps(zmm2, zmm4)
            zmm6 = _mm_add_ps(__mulps_xmmps_memps(zmm6, data_143f2b850), zmm0)
            zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
            zmm1 = __mulps_xmmps_memps(zmm1, data_143f2b840)
            zmm0 = __mulps_xmmps_memps(zmm0, data_143f2b830)
            zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm1), zmm0)
            goto label_141aba4c4
        
        zmm10 = data_143f2b810
        zmm4 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
        zmm2 = _mm_add_ps(zmm5, zmm5)
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 4)
        _mm_mul_ps(zmm8, zmm13)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x29), zmm0)
        zmm3 = _mm_mul_ps(zmm2, zmm5)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x12), _mm_shuffle_ps(zmm5, zmm5, 0xff))
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), _mm_shuffle_ps(zmm3, zmm3, 1))
        zmm3 = *arg2
        zmm11 = _mm_add_ps(zmm2, zmm1)
        zmm1 = _mm_sub_ps(zmm1, zmm2)
        zmm11 = _mm_mul_ps(zmm11, zmm8)
        zmm4 = _mm_mul_ps(zmm4, zmm1)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, zmm0), zmm8), data_143f2b820)
        zmm0 = _mm_shuffle_ps(zmm4, zmm1, 0x32)
        zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1, 0), zmm0, 0x82)
        zmm0 = zmm11
        zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm4, 0x12), zmm1, 0xe8)
        zmm8 = _mm_shuffle_ps(zmm4, zmm1, 0x10)
        zmm0 = _mm_shuffle_ps(zmm0, zmm1, 0x31)
        zmm1 = _mm_add_ps(zmm3, zmm3)
        zmm4 = _mm_mul_ps(zmm1, zmm3)
        goto label_141aba16c
__security_check_cookie(rax_1 ^ &var_198)
return arg2
