// 函数: sub_141f30850
// 地址: 0x141f30850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_28 = arg5
float var_38[0x4] = arg6
float var_48[0x4] = arg7
int32_t rax = *(arg1 + 0x124)
int32_t rax_1 = arg1[0x26].d
uint64_t var_138 = *(arg1 + 0x11c)
uint128_t zmm0 = zx.o(arg1[0x25])
uint64_t var_148 = zmm0.q
uint128_t zmm2
uint128_t zmm4
uint32_t zmm5[0x4]

if (zmm0.d f!= arg1[0x36].d || var_148:4.d.d f!= *(arg1 + 0x1b4) || not(rax_1.d f== arg1[0x37].d))
    arg6 = data_143f3b410
    zmm4 = zx.o(arg1[0x25])
    zmm5 = data_143f3b3e0
    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    uint32_t temp0_2[0x4] = _mm_and_ps(zmm5, arg6)
    zmm2 = _mm_unpacklo_ps(zmm0, 0)
    arg5 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_1[0].q), zmm2.q)
    zmm2 = data_143f3b420
    var_148 = zmm4.q
    zmm4 = _mm_div_ps(arg5, arg6)
    float temp0_8[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm4))
    arg5 = _mm_sub_ps(arg5, 
        _mm_mul_ps(
            _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(zmm4, data_143f3b3e0), 2), 
                zmm4 ^ temp0_8) ^ temp0_8, 
            arg6))
    zmm2 = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_2), _mm_min_ps(arg5, temp0_2))
    float temp0_17[0x4] = _mm_add_ps(arg6, zmm2)
    arg7 = _mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm2, 2), temp0_17 ^ zmm2) ^ temp0_17
    zmm0 = _mm_cmpeq_ps(data_143f3b400, arg7, 1)
    zmm2 = _mm_and_ps(_mm_sub_ps(arg7, arg6) ^ arg7, zmm0) ^ arg7
    int32_t var_140_2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
    arg1[0x36] = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    arg1[0x37].d = var_140_2
    *(arg1 + 0x1a0) = *sub_140ade170(arg1 + 0x1b0, &var_148)

uint128_t zmm14 = arg2[2]
arg6 = data_142e6da00
float zmm15[0x4] = data_143f3b4e0
arg5 = *(arg1 + 0x1a0)
zmm2 = var_138:4.d
float temp0_26[0x4] = _mm_unpacklo_ps(var_138.d, rax.q)
zmm0 = _mm_min_ps(zmm14, arg6)
zmm2 = _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)
uint32_t temp0_30 = _mm_movemask_ps(_mm_cmpeq_ps(zmm0, zmm15, 1))
float temp0_31[0x4] = _mm_unpacklo_ps(temp0_26, zmm2.q)
float var_e8[0x4]
float zmm3[0x4]

if (temp0_30 == 0)
    zmm3 = *arg2
    zmm4 = arg2[1]
    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x1b)
    float temp0_162[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(arg5, arg5, 0))
    zmm4 = _mm_mul_ps(zmm4, arg6)
    zmm5 = _mm_shuffle_ps(arg5, arg5, 0xff)
    zmm2 = __mulps_xmmps_memps(zmm2, data_143f3b3b0)
    zmm0 = _mm_mul_ps(zmm5, zmm3)
    float temp0_169[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
    float temp0_170[0x4] = _mm_mul_ps(arg6, zmm14)
    zmm2 = _mm_add_ps(zmm2, zmm0)
    float temp0_173[0x4] = _mm_mul_ps(temp0_162, _mm_shuffle_ps(arg5, arg5, 0x55))
    float temp0_175[0x4] = _mm_mul_ps(temp0_169, _mm_shuffle_ps(arg5, arg5, 0xaa))
    float temp0_176[0x4] = __mulps_xmmps_memps(temp0_173, data_143f3b3a0)
    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_178[0x4] = __mulps_xmmps_memps(temp0_175, data_143f3b390)
    float var_c8_1[0x4] = temp0_170
    zmm2 = _mm_add_ps(_mm_add_ps(zmm2, temp0_176), temp0_178)
    float temp0_181[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    var_e8 = zmm2
    zmm2 = _mm_shuffle_ps(arg5, arg5, 0xd2)
    zmm0 = _mm_mul_ps(zmm0, zmm2)
    arg5 = _mm_shuffle_ps(arg5, arg5, 0xc9)
    float temp0_186[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_181, arg5), zmm0)
    float temp0_187[0x4] = _mm_add_ps(temp0_186, temp0_186)
    float temp0_188[0x4] = _mm_shuffle_ps(temp0_187, temp0_187, 0xd2)
    zmm0 = _mm_shuffle_ps(temp0_187, temp0_187, 0xc9)
    float temp0_190[0x4] = _mm_mul_ps(temp0_188, arg5)
    zmm0 = _mm_mul_ps(zmm0, zmm2)
    float temp0_192[0x4] = _mm_mul_ps(temp0_187, zmm5)
    float var_d8_1[0x4] =
        _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_190, zmm0), _mm_add_ps(temp0_192, zmm4)), temp0_31)
else
    zmm0 = _mm_shuffle_ps(arg5, arg5, 4)
    zmm4 = _mm_shuffle_ps(arg6, arg6, 0xc9)
    zmm2 = _mm_add_ps(arg5, arg5)
    float zmm10[0x4] = data_143f3b4b0
    zmm5 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
    float temp0_36[0x4] = _mm_mul_ps(zmm2, arg5)
    float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x29), zmm0)
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x12)
    zmm0 =
        _mm_add_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0x1a), _mm_shuffle_ps(temp0_36, temp0_36, 1))
    arg5 = _mm_shuffle_ps(arg5, arg5, 0xff)
    zmm3 = *arg2
    zmm2 = _mm_mul_ps(zmm2, arg5)
    _mm_mul_ps(arg6, zmm14)
    float temp0_46[0x4] = _mm_add_ps(zmm2, temp0_38)
    float temp0_47[0x4] = _mm_sub_ps(temp0_38, zmm2)
    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
    float temp0_49[0x4] = _mm_mul_ps(temp0_46, arg6)
    zmm4 = _mm_mul_ps(zmm4, temp0_47)
    float zmm1[0x4] =
        __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, zmm0), arg6), data_143f3b4c0)
    zmm0 = _mm_shuffle_ps(zmm4, zmm1, 0x32)
    float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0), zmm0, 0x82)
    zmm0 = _mm_shuffle_ps(temp0_49, zmm1, 0x31)
    float temp0_59[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 0x10), zmm0, 0x88)
    float temp0_61[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm4, 0x12), zmm1, 0xe8)
    float temp0_62[0x4] = _mm_add_ps(zmm3, zmm3)
    zmm0.q = temp0_31 u>> 0x40
    float temp0_63[0x4] = _mm_shuffle_ps(temp0_31, zmm0, 0xc4)
    zmm0 = _mm_shuffle_ps(temp0_62, temp0_62, 0x29)
    zmm4 = _mm_mul_ps(temp0_62, zmm3)
    zmm2 = _mm_mul_ps(zmm2, zmm0)
    float temp0_67[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0x12)
    float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_67)
    zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1a), _mm_shuffle_ps(zmm4, zmm4, 1))
    float temp0_73[0x4] = _mm_add_ps(temp0_69, zmm2)
    zmm2 = _mm_sub_ps(zmm2, temp0_69)
    float temp0_75[0x4] = _mm_sub_ps(zmm10, zmm0)
    float temp0_76[0x4] = _mm_mul_ps(temp0_73, zmm14)
    zmm5 = _mm_mul_ps(zmm5, zmm2)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_75, zmm14), data_143f3b4c0)
    float temp0_82[0x4] =
        _mm_shuffle_ps(_mm_shuffle_ps(temp0_76, zmm1, 0), _mm_shuffle_ps(zmm5, zmm1, 0x32), 0x82)
    zmm2 = _mm_shuffle_ps(temp0_82, temp0_82, 0x55)
    zmm4 =
        _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm1, 0x10), _mm_shuffle_ps(temp0_76, zmm1, 0x31), 0x88)
    zmm2 = _mm_mul_ps(zmm2, temp0_59)
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_76, zmm5, 0x12)
    zmm5 = arg2[1]
    float temp0_89[0x4] = _mm_shuffle_ps(temp0_88, zmm1, 0xe8)
    float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_82, temp0_82, 0xaa), temp0_61)
    zmm0.q = zmm5 u>> 0x40
    zmm5 = _mm_shuffle_ps(zmm5, zmm0, 0xc4)
    zmm0 = _mm_shuffle_ps(temp0_82, temp0_82, 0)
    float temp0_95[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_82, temp0_82, 0xff), temp0_63)
    zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0, temp0_56))
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_56)
    zmm2 = _mm_add_ps(zmm2, temp0_91)
    float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), temp0_61)
    zmm2 = _mm_add_ps(zmm2, temp0_95)
    float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), temp0_59)
    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    uint128_t var_128 = zmm2
    zmm2 = _mm_shuffle_ps(temp0_89, temp0_89, 0x55)
    float temp0_108[0x4] = _mm_add_ps(temp0_105, zmm0)
    zmm2 = _mm_mul_ps(zmm2, temp0_59)
    zmm4 = _mm_mul_ps(zmm4, temp0_63)
    zmm0 = _mm_shuffle_ps(temp0_89, temp0_89, 0)
    float temp0_112[0x4] = _mm_add_ps(temp0_108, temp0_102)
    zmm0 = _mm_mul_ps(zmm0, temp0_56)
    float temp0_115[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0xaa), temp0_61)
    float temp0_116[0x4] = _mm_add_ps(temp0_112, zmm4)
    float temp0_117[0x4] = _mm_shuffle_ps(temp0_89, temp0_89, 0xff)
    zmm2 = _mm_add_ps(zmm2, zmm0)
    float temp0_119[0x4] = _mm_mul_ps(temp0_117, temp0_63)
    zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
    int96_t var_118_1 = temp0_116[0].12
    float temp0_121[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
    zmm2 = _mm_add_ps(zmm2, temp0_115)
    float temp0_123[0x4] = _mm_mul_ps(temp0_121, temp0_59)
    float temp0_125[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), temp0_61)
    zmm0 = _mm_mul_ps(zmm0, temp0_56)
    zmm2 = _mm_add_ps(zmm2, temp0_119)
    zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), temp0_63)
    int96_t var_108_1 = zmm2.12
    int96_t var_f8_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_123, zmm0), temp0_125), zmm5)[0].12
    int128_t zmm10_1
    float zmm12_1[0x4]
    float zmm15_1[0x4]
    zmm10_1, zmm12_1, zmm15_1 = sub_1407740e0(&var_128, 0x322bcc77)
    float zmm2_1[0x4] = var_128.d
    zmm15_1 =
        _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm12_1, 2), data_143f3b4d0 ^ zmm10_1) ^ data_143f3b4d0
    zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
    uint32_t zmm0_1[0x4] = var_128:8.d
    float zmm1_1 = var_128:4.d * zmm15_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm15_1[0]
    var_128.d = zmm2_1[0]
    float temp0_135[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
    var_128:4.d = zmm1_1
    zmm1_1 = var_118_1:4.d * temp0_135[0]
    var_128:8.d = zmm0_1[0]
    zmm0_1 = var_118_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_135[0]
    float zmm3_1 = var_118_1.d * temp0_135[0]
    zmm2_1 = var_108_1.d
    var_118_1:4.d = zmm1_1
    var_118_1:8.d = zmm0_1[0]
    zmm0_1 = var_108_1:8.d
    float temp0_136[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
    zmm1_1 = var_108_1:4.d * temp0_136[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_136[0]
    zmm2_1[0] = zmm2_1[0] * temp0_136[0]
    var_108_1:4.d = zmm1_1
    var_108_1:8.d = zmm0_1[0]
    var_118_1.d = zmm3_1
    var_108_1.d = zmm2_1[0]
    sub_14077e4a0(&var_138, &var_128)
    float zmm6[0x4] = var_138.o
    float zmm5_1[0x4] = data_143f3b3d0
    float temp0_137[0x4] = _mm_mul_ps(zmm6, zmm6)
    float var_c8[0x4] = zmm12_1
    float temp0_139[0x4] = _mm_add_ps(temp0_137, _mm_shuffle_ps(temp0_137, temp0_137, 0x4e))
    float temp0_141[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_139, temp0_139, 0x39), temp0_139)
    float temp0_142[0x4] = _mm_rsqrt_ps(temp0_141)
    float temp0_143[0x4] = _mm_mul_ps(temp0_141, zmm5_1)
    float temp0_148[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_142, temp0_142), temp0_143)), 
            temp0_142), 
        temp0_142)
    float temp0_151[0x4] =
        _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_148, temp0_148), temp0_143))
    float temp0_153[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_141, 2)
    float temp0_155[0x4] = _mm_add_ps(_mm_mul_ps(temp0_151, temp0_148), temp0_148)
    float temp0_156[0x4] = _mm_unpacklo_ps(var_f8_1:4.d, 0)
    zmm5_1 = _mm_and_ps(_mm_mul_ps(temp0_155, zmm6) ^ data_143f3b3c0, temp0_153) ^ data_143f3b3c0
    float var_d8[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(var_f8_1.d, var_f8_1:8.d[0].q), temp0_156[0].q)
    var_e8 = zmm5_1
int64_t result
int512_t zmm6_1
int512_t zmm7
int512_t zmm8
result, zmm6_1, zmm7, zmm8 = sub_141f49090(arg1, &var_e8, arg3, arg4, arg8)
zmm6_1.o = var_28
zmm7.o = var_38
zmm8.o = var_48
return result
