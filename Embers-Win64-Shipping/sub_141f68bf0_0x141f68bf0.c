// 函数: sub_141f68bf0
// 地址: 0x141f68bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_d8
uint32_t var_b8[0x4]
uint128_t zmm6_2
float zmm7[0x4]
float zmm8[0x4]
uint128_t zmm9
float zmm10[0x4]
uint128_t zmm11
uint128_t zmm15
zmm6_2, zmm7, zmm8, zmm9, zmm10, zmm11, zmm15 =
    sub_141f64de0(arg1, &var_b8, sub_141a1d730(arg1 + 0x408, &var_d8, arg3, &data_143dbb1f8), 0)
int32_t var_128 = 0x3f800000
int32_t var_124 = 0x3f800000
int32_t var_120 = 0x3f800000
uint32_t var_c8[0x4]
int128_t* rax

if (arg5 == 0)
    rax = &var_128
else
    zmm7, zmm8, zmm9 = sub_141a1d730(arg1 + 0x438, &var_c8, zmm6_2, &var_128)
    rax = &var_c8

uint128_t zmm4 = zx.o(*rax)
float zmm12[0x4] = var_d8
int32_t rax_1 = *(rax + 8)
uint32_t zmm13[0x4] = var_b8
int32_t var_d4
uint128_t zmm2_1 = _mm_unpacklo_ps(var_d4, zx.o(0)[0].q)
int32_t var_d0
float temp0_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm12, var_d0.q), zmm2_1.q)
zmm2_1 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zx.o(0)[0].q)
uint128_t zmm14 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_1[0].q), zmm2_1.q)
arg2[2] = zmm14
*arg2 = zmm13
arg2[1] = temp0_2

if (arg4 == 1)
    zmm4 = *(arg1 + 0x1c0)
    float var_28_1[0x4] = zmm7
    float zmm3[0x4] = zmm4
    zmm7 = *(arg1 + 0x1e0)
    uint128_t var_a8_1 = zmm15
    float zmm5_1[0x4]
    uint128_t zmm0
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm14, zmm7), data_143f3b8f0, 1)) == 0)
        zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm6_2 = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x1b), zmm0)
        float temp0_142[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
        float temp0_143[0x4] = _mm_mul_ps(temp0_2, zmm7)
        zmm6_2 = __mulps_xmmps_memps(zmm6_2, data_143f3b8b0)
        float temp0_145[0x4] = _mm_shuffle_ps(zmm3, zmm4, 0xff)
        zmm15 = _mm_mul_ps(zmm14, zmm7)
        zmm0 = _mm_mul_ps(temp0_145, zmm13)
        zmm2_1 = _mm_shuffle_ps(temp0_143, temp0_143, 0xd2)
        zmm6_2 = _mm_add_ps(zmm6_2, zmm0)
        float temp0_151[0x4] = _mm_mul_ps(temp0_142, _mm_shuffle_ps(zmm13, zmm13, 0x4e))
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm13, zmm13, 0xb1))
        float temp0_155[0x4] = __mulps_xmmps_memps(temp0_151, data_143f3b8a0)
        zmm0 = __mulps_xmmps_memps(zmm0, data_143f3b890)
        zmm6_2 = _mm_add_ps(zmm6_2, temp0_155)
        float temp0_158[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
        zmm2_1 = _mm_mul_ps(zmm2_1, zmm4)
        zmm6_2 = _mm_add_ps(zmm6_2, zmm0)
        zmm2_1 =
            _mm_sub_ps(zmm2_1, _mm_mul_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0xc9), temp0_158))
        zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
        float temp0_166[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
        zmm0 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
        float temp0_168[0x4] = _mm_mul_ps(temp0_166, zmm4)
        zmm0 = _mm_mul_ps(zmm0, temp0_158)
        zmm2_1 = _mm_mul_ps(zmm2_1, temp0_145)
        zmm5_1 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_168, zmm0), _mm_add_ps(zmm2_1, temp0_143)), *(arg1 + 0x1d0))
    else
        zmm0 = _mm_shuffle_ps(zmm4, zmm4, 4)
        zmm2_1 = _mm_add_ps(zmm4, zmm4)
        float var_38_1[0x4] = zmm8
        zmm8 = *(arg1 + 0x1d0)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        uint128_t var_48_1 = zmm9
        _mm_mul_ps(zmm14, zmm7)
        float temp0_14[0x4] = _mm_mul_ps(zmm3, zmm2_1)
        float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x29), zmm0)
        zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x12)
        zmm0 = _mm_shuffle_ps(temp0_14, temp0_14, 0x1a)
        zmm2_1 = _mm_mul_ps(zmm2_1, zmm4)
        zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(temp0_14, temp0_14, 1))
        zmm4 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
        float var_58_1[0x4] = zmm10
        zmm10 = data_143f3b870
        uint128_t var_68_1 = zmm11
        zmm11 = _mm_add_ps(zmm2_1, temp0_16)
        float temp0_24[0x4] = _mm_sub_ps(temp0_16, zmm2_1)
        zmm2_1 = _mm_shuffle_ps(zmm13, zmm13, 4)
        zmm11 = _mm_mul_ps(zmm11, zmm7)
        zmm4 = _mm_mul_ps(zmm4, temp0_24)
        float zmm1[0x4] =
            __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, zmm0), zmm7), data_143f3b880)
        zmm0 = _mm_shuffle_ps(zmm4, zmm1, 0x32)
        zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1, 0), zmm0, 0x82)
        zmm0 = _mm_shuffle_ps(zmm11, zmm1, 0x31)
        float temp0_36[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 0x10), zmm0, 0x88)
        zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm4, 0x12), zmm1, 0xe8)
        float temp0_39[0x4] = _mm_add_ps(zmm13, zmm13)
        zmm0.q = zmm8 u>> 0x40
        float temp0_40[0x4] = _mm_shuffle_ps(zmm8, zmm0, 0xc4)
        zmm4 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
        zmm0 = _mm_shuffle_ps(temp0_39, temp0_39, 0x29)
        float temp0_43[0x4] = _mm_mul_ps(temp0_39, zmm13)
        zmm2_1 = _mm_mul_ps(zmm2_1, zmm0)
        float temp0_45[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x12)
        zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xff)
        zmm0 = _mm_shuffle_ps(temp0_43, temp0_43, 0x1a)
        zmm13 = _mm_mul_ps(zmm13, temp0_45)
        zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(temp0_43, temp0_43, 1))
        zmm6_2 = _mm_add_ps(zmm13, zmm2_1)
        zmm2_1 = _mm_sub_ps(zmm2_1, zmm13)
        float temp0_53[0x4] = _mm_sub_ps(zmm10, zmm0)
        zmm6_2 = _mm_mul_ps(zmm6_2, zmm14)
        zmm4 = _mm_mul_ps(zmm4, zmm2_1)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_53, zmm14), data_143f3b880)
        float temp0_60[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(zmm6_2, zmm1, 0), _mm_shuffle_ps(zmm4, zmm1, 0x32), 0x82)
        float temp0_61[0x4] = _mm_shuffle_ps(zmm4, zmm1, 0x10)
        zmm0 = _mm_shuffle_ps(zmm6_2, zmm1, 0x31)
        zmm2_1 = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
        float temp0_64[0x4] = _mm_shuffle_ps(temp0_61, zmm0, 0x88)
        zmm2_1 = _mm_mul_ps(zmm2_1, temp0_36)
        zmm0.q = temp0_2 u>> 0x40
        float temp0_66[0x4] = _mm_shuffle_ps(temp0_2, zmm0, 0xc4)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0), zmm9)
        zmm6_2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_2, zmm4, 0x12), zmm1, 0xe8)
        float temp0_71[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xaa)
        zmm2_1 = _mm_add_ps(zmm2_1, zmm0)
        float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xff), temp0_40)
        float temp0_75[0x4] = _mm_mul_ps(temp0_71, zmm11)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0), zmm9)
        zmm2_1 = _mm_add_ps(zmm2_1, temp0_75)
        float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), zmm11)
        zmm2_1 = _mm_add_ps(zmm2_1, temp0_74)
        float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0x55), temp0_36)
        float temp0_84[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xff)
        uint128_t var_118 = zmm2_1
        zmm2_1 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
        float temp0_86[0x4] = _mm_add_ps(temp0_83, zmm0)
        zmm2_1 = _mm_mul_ps(zmm2_1, temp0_36)
        float temp0_88[0x4] = _mm_mul_ps(temp0_84, temp0_40)
        zmm0 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0)
        float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_80)
        zmm0 = _mm_mul_ps(zmm0, zmm9)
        float temp0_93[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_2, zmm6_2, 0xaa), zmm11)
        float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_88)
        zmm6_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xff)
        zmm2_1 = _mm_add_ps(zmm2_1, zmm0)
        zmm6_2 = _mm_mul_ps(zmm6_2, temp0_40)
        zmm0 = _mm_shuffle_ps(temp0_66, temp0_66, 0)
        int96_t var_108_1 = temp0_94[0].12
        float temp0_99[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
        zmm2_1 = _mm_add_ps(zmm2_1, temp0_93)
        float temp0_101[0x4] = _mm_mul_ps(temp0_99, temp0_36)
        float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), zmm11)
        zmm0 = _mm_mul_ps(zmm0, zmm9)
        zmm2_1 = _mm_add_ps(zmm2_1, zmm6_2)
        float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), temp0_40)
        int96_t var_f8_1 = zmm2_1.12
        int96_t var_e8_1 =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_101, zmm0), temp0_103), temp0_107)[0].12
        int512_t zmm8_1
        int512_t zmm9_1
        float zmm10_1[0x4]
        int512_t zmm11_1
        zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm15 = sub_1407740e0(&var_118, 0x322bcc77)
        float zmm3_1[0x4] =
            _mm_and_ps(_mm_cmpeq_ps(data_143f3b8f0, zmm15, 2), data_143f3b8e0 ^ zmm10_1)
            ^ data_143f3b8e0
        float zmm1_1 = zmm3_1[0]
        zmm3_1[0] = zmm3_1[0] f* var_118.d
        zmm1_1 = zmm1_1 f* var_118:4.d
        uint32_t zmm0_1[0x4] = zmm3_1
        var_118.d = zmm3_1[0]
        zmm0_1[0] = zmm0_1[0] f* var_118:8.d
        float temp0_113[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
        var_118:4.d = zmm1_1
        zmm1_1 = temp0_113[0] f* var_108_1.d
        var_118:8.d = zmm0_1[0]
        zmm0_1 = temp0_113
        zmm0_1[0] = zmm0_1[0] f* var_108_1:4.d
        temp0_113[0] = temp0_113[0] f* var_108_1:8.d
        float temp0_114[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
        var_108_1:4.d = zmm0_1[0]
        zmm0_1 = temp0_114
        zmm0_1[0] = zmm0_1[0] f* var_f8_1:4.d
        var_108_1.d = zmm1_1
        zmm1_1 = temp0_114[0] f* var_f8_1.d
        temp0_114[0] = temp0_114[0] f* var_f8_1:8.d
        var_f8_1:4.d = zmm0_1[0]
        var_108_1:8.d = temp0_113[0]
        var_f8_1.d = zmm1_1
        var_f8_1:8.d = temp0_114[0]
        sub_14077e4a0(&var_c8, &var_118)
        zmm5_1 = var_c8
        zmm6_2 = data_143f3b8d0
        zmm11_1.o = var_68_1
        zmm9_1.o = var_48_1
        zmm8_1.o = var_38_1
        float temp0_115[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
        arg5.d = 0x322bcc77
        float temp0_117[0x4] = _mm_add_ps(temp0_115, _mm_shuffle_ps(temp0_115, temp0_115, 0x4e))
        float temp0_119[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_117, temp0_117, 0x39), temp0_117)
        float temp0_120[0x4] = _mm_rsqrt_ps(temp0_119)
        float temp0_121[0x4] = _mm_mul_ps(temp0_119, zmm6_2)
        float temp0_126[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_121)), 
                temp0_120), 
            temp0_120)
        zmm6_2 = _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_126, temp0_126), temp0_121))
        float temp0_131[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_119, 2)
        zmm6_2 = _mm_add_ps(_mm_mul_ps(zmm6_2, temp0_126), temp0_126)
        float temp0_134[0x4] = _mm_unpacklo_ps(var_e8_1:4.d, 0)
        zmm6_2 = _mm_and_ps(_mm_mul_ps(zmm6_2, zmm5_1) ^ data_143f3b8c0, temp0_131) ^ data_143f3b8c0
        zmm5_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_e8_1.d, var_e8_1:8.d[0].q), temp0_134[0].q)
    arg2[2] = zmm15
    *arg2 = zmm6_2
    arg2[1] = zmm5_1

return arg2
