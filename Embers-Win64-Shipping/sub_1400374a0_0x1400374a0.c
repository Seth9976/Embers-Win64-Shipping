// 函数: sub_1400374a0
// 地址: 0x1400374a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm12 = _mm_div_ps(*arg2 | arg2[1].d[0].q << 0x40, _mm_shuffle_ps(arg3, arg3, 0xc0))
uint128_t zmm6 = _mm_sub_ps(arg1[8][0].q | (*arg1)[0x22][0].q << 0x40, 
    arg1[0xc][0].q | (*arg1)[0x32][0].q << 0x40)
float zmm0[0x4] = (*arg1)[0x47]
uint128_t zmm1 = arg1[0x12][0]
arg3 = (*arg1)[0x46]
uint128_t zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), *(arg1 + 0x11c) | arg3[0].q << 0x40)
zmm1 = _mm_unpacklo_ps(zmm1, arg3[0].q).q | zmm0[0].q << 0x40
uint128_t var_168 = zmm6
zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm1))
float temp0_9[0x4] = _mm_add_ps(zx.o(arg1[0x10][0].q)[0].q | (*arg1)[0x42].q << 0x40, zmm5)
float temp0_10[0x4] = _mm_sub_ps(zx.o(*(arg1 + 0x8c))[0].q | (*arg1)[0x25].q << 0x40, 
    *(arg1 + 0xcc) | (*arg1)[0x35].q << 0x40)
zmm1 = (*arg1)[0x4a]
uint128_t zmm4 = (*arg1)[0x4b]
zmm5 = (*arg1)[0x49]
float temp0_12[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd2), *(arg1 + 0x128) | zmm5.q << 0x40)
zmm4 = _mm_unpacklo_ps(zmm4, zmm5.q).q | zmm1.q << 0x40
float temp0_16[0x4] =
    _mm_sub_ps(temp0_12, _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xc9), zmm4))
float temp0_19[0x4] = _mm_mul_ps(
    _mm_sub_ps(_mm_add_ps(zx.o(*(arg1 + 0x10c))[0].q | (*arg1)[0x45].q << 0x40, temp0_16), 
        temp0_9), 
    zmm12)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xe5)
temp0_20[0] = temp0_20[0] + temp0_19[0]
temp0_19[0].q = temp0_19 u>> 0x40
temp0_20[0] = temp0_20[0] + temp0_19[0]
uint128_t zmm14
zmm14.d = (*arg1)[0x1e].d f* arg4[0]
float temp0_21[0x4] = _mm_shuffle_ps(arg4, arg4, 0xc0)
zmm5 = arg1[6][0].q | (*arg1)[0x1a][0].q << 0x40
zmm4 = arg1[0xe]
zmm6 = _mm_add_ps(zmm4, zmm4)
zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm6)
arg3 = (*arg1)[0x39]
float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), zmm6)
float zmm7[0x4] = (*arg1)[0x3b]
float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm6)
zmm6.q = zmm6 u>> 0x40
zmm6.d = zmm6.d f* (*arg1)[0x3a]
zmm5 = _mm_mul_ps(zmm5, temp0_21)
float zmm8[0x4] = zx.o(0)
zmm1 = _mm_shuffle_ps(_mm_unpackhi_pd(temp0_26, 0), zmm4, 0x6c)
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x78)
float temp0_33[0x4] = _mm_add_ps(temp0_28, zmm1)
zmm1 = _mm_sub_ps(zmm1, temp0_28)
float temp0_36[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, zx.o(0), 0xe5), zmm4, 0xc)
float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x78)
zmm6 = _mm_add_ps(
    _mm_shuffle_ps(zmm6, _mm_shuffle_ps(temp0_26, _mm_shuffle_ps(zmm6, zx.o(0), 0x40), 0x31), 
        0x80), 
    temp0_37)
float zmm11[0x4] = data_142d3f670
zmm4 = _mm_sub_ps(zmm11, zmm6)
arg3 = zx.o(0)
arg3[0] = zmm5.d
float temp0_44[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zx.o(0), 1), zx.o(0), 0xe2)
zmm6 = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm5, zx.o(0), 0x32), 0x84)
zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc0), arg3)
float temp0_51[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xea), temp0_44), zmm5)
uint128_t zmm13 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xd5), zmm6), temp0_51)
float temp0_56[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xea), arg3)
zmm5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd5), temp0_44), temp0_56)
float temp0_62[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc0), zmm6), zmm5)
float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd5), arg3)
float temp0_67[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xc0), temp0_44), temp0_64)
float temp0_70[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xea), zmm6), temp0_67)
zmm5 = _mm_shuffle_ps(temp0_33, zmm4, 2)
zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm5, zx.o(0), 0x22), 0x31), 0x82)
zmm6 = _mm_shuffle_ps(zmm4, zmm1, 0xa1)
float temp0_76[0x4] = _mm_shuffle_ps(zmm6, zx.o(0), 0x42)
zmm1 = _mm_shuffle_ps(zmm1, temp0_33, 0x50)
zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(temp0_33, temp0_76, 0x30), 0x82)
zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zx.o(0), 0x42), 0x32), 0x82)
float temp0_84[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xc0), zmm5)
float temp0_87[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xd5), zmm6), temp0_84)
zmm13 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xea), zmm1), temp0_87)
float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xc0), zmm5)
float temp0_95[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xd5), zmm6), temp0_92)
float temp0_98[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xea), zmm1), temp0_95)
float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xc0), zmm5)
float temp0_103[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xd5), zmm6), temp0_100)
float temp0_106[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xea), zmm1), temp0_103)
float r11 = _mm_shuffle_ps(temp0_98, temp0_98, 0xe5)[0]
float r8 = temp0_106[0]
zmm0 = _mm_shuffle_epi32(temp0_106, 0x4e)
float r10 = _mm_shuffle_ps(temp0_106, temp0_106, 0xe5)[0]
float r9 = zmm0[0]
zmm4 = arg1[0xf]
float temp0_110[0x4] = _mm_add_ps(zmm4, zmm4)
zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_110)
arg3 = (*arg1)[0x3d]
float temp0_114[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_110)
zmm5 = (*arg1)[0x3f]
zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_110)
temp0_110[0].q = temp0_110 u>> 0x40
temp0_110[0] = temp0_110[0] * (*arg1)[0x3e]
float temp0_118[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(temp0_114, 0), zmm4, 0x6c)
float temp0_119[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0x78)
zmm1 = _mm_add_ps(zmm5, temp0_119)
float temp0_121[0x4] = _mm_sub_ps(temp0_119, zmm5)
zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_114, zx.o(0), 0xe5), zmm4, 0xc)
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0x78)
float temp0_129[0x4] = _mm_sub_ps(zmm11, 
    _mm_add_ps(
        _mm_shuffle_ps(temp0_110, 
            _mm_shuffle_ps(temp0_114, _mm_shuffle_ps(temp0_110, zx.o(0), 0x40), 0x31), 0x80), 
        zmm5))
zmm5 = (*arg1)[0x1d]
arg3 = (*arg1)[0x1b]
float temp0_131[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg1[7][0], zx.o(0), 0), zx.o(0), 0xe2)
zmm4 = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm5, zx.o(0), 0x30), 0x84)
zmm5 = _mm_mul_ps(_mm_shuffle_ps(temp0_129, temp0_129, 0xc0), arg3)
zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_121, temp0_121, 0xea), temp0_131), zmm5)
float temp0_141[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd5), zmm4), zmm6)
zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xea), arg3)
zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_129, temp0_129, 0xd5), temp0_131), zmm5)
float temp0_149[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_121, temp0_121, 0xc0), zmm4), zmm6)
zmm5 = _mm_mul_ps(_mm_shuffle_ps(temp0_121, temp0_121, 0xd5), arg3)
float temp0_154[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc0), temp0_131), zmm5)
zmm5 = temp0_20
float temp0_157[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_129, temp0_129, 0xea), zmm4), temp0_154)
float temp0_158[0x4] = _mm_shuffle_ps(zmm1, temp0_129, 2)
float temp0_161[0x4] = _mm_shuffle_ps(temp0_158, 
    _mm_shuffle_ps(temp0_121, _mm_shuffle_ps(temp0_158, zx.o(0), 0x22), 0x31), 0x82)
zmm4 = _mm_shuffle_ps(temp0_129, temp0_121, 0xa1)
float temp0_163[0x4] = _mm_shuffle_ps(zmm4, zx.o(0), 0x42)
float temp0_164[0x4] = _mm_shuffle_ps(temp0_121, zmm1, 0x50)
zmm1 = _mm_shuffle_ps(zmm1, temp0_163, 0x30)
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc0)
zmm4 = _mm_shuffle_ps(zmm4, zmm1, 0x82)
float temp0_170[0x4] = _mm_shuffle_ps(temp0_164, 
    _mm_shuffle_ps(temp0_129, _mm_shuffle_ps(temp0_164, zx.o(0), 0x42), 0x32), 0x82)
zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_141, temp0_141, 0xc0), temp0_161)
float temp0_175[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_141, temp0_141, 0xd5), zmm4), zmm1)
float temp0_178[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_141, temp0_141, 0xea), temp0_170), temp0_175)
zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_149, temp0_149, 0xc0), temp0_161)
float temp0_183[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_149, temp0_149, 0xd5), zmm4), zmm1)
uint128_t var_158 = (*arg1)[0x1f]
uint128_t var_d8 = zmm13
int32_t rsi = zmm13.d
float r14 = temp0_98[0]
float zmm9[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_149, temp0_149, 0xea), temp0_170), temp0_183)
zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_157, temp0_157, 0xc0), temp0_161)
float temp0_191[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_157, temp0_157, 0xd5), zmm4), zmm1)
float zmm10[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_157, temp0_157, 0xea), temp0_170), temp0_191)
arg3 = zmm12
uint128_t var_138 = zmm14
float var_178[0x4] = zx.o(0)
bool cond:0 = zmm14.d f<= 0f
zmm1 = zx.o(0)
zmm12 = zx.o(0)
zmm4 = zx.o(0)
zmm13 = zx.o(0)
zmm14 = zx.o(0)
float var_f8[0x4] = zmm9
float var_108[0x4] = zmm10

if (not(cond:0))
    zmm6 = _mm_unpackhi_pd(var_168, var_168.q)
    float temp0_196[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe5)
    zmm1 = data_142d3f780
    zmm0 = zmm6 ^ zmm1
    zmm11 = temp0_196 ^ zmm1
    zmm4 = _mm_shuffle_epi32(zmm0, 0xc0)
    uint128_t var_128_1 = zmm4
    arg4 = zx.o(r11)
    uint128_t var_118_1 = zmm5
    zmm5 = zx.o(r14)
    float temp0_200[0x4] =
        _mm_mul_ps(_mm_unpacklo_epi64(_mm_unpacklo_epi32(arg4, zmm5.q), zmm5.q), zmm4)
    zmm14 = zx.o(r10)
    zmm9 = zx.o(r8)
    zmm10 = arg4
    zmm12 = _mm_shuffle_ps(arg4, zmm14, 0x10)
    arg4 = _mm_unpacklo_epi32(zmm14, zmm9[0].q)
    float temp0_204[0x4] = _mm_shuffle_ps(arg4, _mm_shuffle_ps(zmm9, arg4, 0x30), 0x84)
    zmm4 = _mm_shuffle_ps(var_168, var_168, 0xd5)
    float temp0_207[0x4] = _mm_add_ps(_mm_mul_ps(temp0_204, zmm4), temp0_200)
    float temp0_208[0x4] = _mm_unpacklo_ps(zmm0, zmm6.q)
    float temp0_211[0x4] = _mm_mul_ps(
        _mm_shuffle_ps(temp0_208, _mm_shuffle_ps(zmm11, temp0_208, 0x30), 0x84), temp0_207)
    arg4 = zx.o(r9)
    float temp0_212[0x4] = _mm_shuffle_ps(zmm14, arg4, 0x10)
    float temp0_213[0x4] = _mm_unpacklo_ps(arg4, zmm14.q)
    zmm14 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm14, zmm12, 0x80), var_128_1)
    zmm1 ^= var_168
    float temp0_218[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg4, temp0_212, 0x80), zmm4), zmm14)
    zmm14 = _mm_add_ps(
        _mm_mul_ps(_mm_shuffle_ps(__shufps_xmmps_memps_immb(zmm1, temp0_196, 0), var_168, 0x42), 
            temp0_218), 
        temp0_211)
    float temp0_223[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
    float temp0_224[0x4] = _mm_shuffle_ps(zmm11, zmm6, 0x30)
    float temp0_225[0x4] = _mm_shuffle_ps(temp0_223, temp0_224, 0x82)
    zmm7 = zx.o(rsi)
    float temp0_227[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc0), temp0_225)
    zmm4 = _mm_shuffle_ps(zmm9, _mm_shuffle_ps(zmm5, zmm9, 0x10), 0x80)
    zmm12 = _mm_shuffle_ps(zmm1, var_168, 0x40)
    zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, zmm12), temp0_227)
    float temp0_235[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm6, 0), temp0_224, 0x82), zmm4)
    zmm9 = _mm_unpacklo_epi32(zmm9, zmm5.q)
    float temp0_238[0x4] = _mm_shuffle_ps(zmm9, _mm_shuffle_ps(zmm5, zmm9, 0x30), 0x84)
    zmm5 = var_118_1
    float temp0_239[0x4] = _mm_mul_ps(temp0_238, temp0_225)
    float temp0_243[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_shuffle_ps(temp0_213, _mm_shuffle_ps(zmm10, temp0_213, 0x30), 0x84), zmm12), 
        temp0_239)
    zmm9 = var_f8
    zmm10 = var_108
    zmm4.d = var_138[0]
    zmm14 = _mm_add_ps(zmm14, zmm4)
    zmm4 = _mm_add_ps(zmm4.q | zmm4.q << 0x40, 
        _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(zmm1, var_168, 0), var_168, 0xc8), temp0_243), 
            temp0_235))
    zmm13 = _mm_shuffle_ps(zmm14, zmm14, 0xe5)
    zmm12 = _mm_unpackhi_pd(zmm14, zmm14.q)
    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xe5)
    var_178 = _mm_unpackhi_pd(zmm4, zmm4.q)

uint128_t var_118_2 = zmm1
uint128_t var_168_1 = zmm4
float temp0_254[0x4] = _mm_mul_ps(arg3, zmm5)
zmm4 = _mm_sub_ps(*(arg1 + 0x8c) | (*arg1)[0x25][0].q << 0x40, 
    *(arg1 + 0xcc) | (*arg1)[0x35][0].q << 0x40)
zmm11 = data_142d3f780
arg4 = zmm4 ^ zmm11
zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(arg4, zmm4, 0x50), zmm4, 0x42)
zmm1 = _mm_unpackhi_pd(zmm4, zmm4.q)
arg3 = zmm1 ^ zmm11
zmm6 = _mm_shuffle_epi32(arg3, 0xc0)
uint128_t var_128_2 = zmm6
float temp0_261[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xc1), zmm6)
float temp0_262[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd5)
float temp0_265[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xc1), temp0_262), temp0_261)
float temp0_266[0x4] = _mm_shuffle_ps(arg4, zmm4, 0x40)
zmm6 = _mm_shuffle_ps(zmm4, zmm4, 0xe5) ^ zmm11
float temp0_268[0x4] = _mm_shuffle_ps(zmm6, zmm4, 0xa0)
float temp0_270[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg4, zmm4, 0), zmm4, 0xc8)
zmm4 = _mm_shuffle_ps(zmm4, zmm6, 0xca)
float temp0_272[0x4] = _mm_shuffle_ps(temp0_268, zmm6, 0xc2)
zmm6 = _mm_shuffle_ps(zmm6, arg3, 0x20)
float temp0_276[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(_mm_unpacklo_ps(arg3, zmm1.q), zmm6, 0x84), temp0_265)
zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm10, zmm9, 0xd5), var_128_2)
zmm5 = _mm_add_ps(
    _mm_mul_ps(zmm5, _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xda), temp0_262), zmm1)), 
    temp0_276)
float temp0_285[0x4] = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm9, zmm10, 0x30), 0x80)
zmm1 = temp0_178
zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc0), zmm4)
float temp0_290[0x4] = _mm_mul_ps(temp0_272, _mm_add_ps(_mm_mul_ps(temp0_285, temp0_266), zmm1))
zmm1 = _mm_shuffle_ps(zmm10, zmm9, 0xc)
zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0x78), zmm4)
float temp0_298[0x4] = _mm_add_ps(
    _mm_mul_ps(temp0_270, 
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm9, 0xd6), temp0_266), zmm1)), 
    temp0_290)
float zmm15[0x4] = var_158
zmm8[0] = zmm15[0]
zmm5 = _mm_add_ps(zmm5, zmm8)
float temp0_300[0x4] = _mm_add_ps(zmm8[0].q | zmm8[0].q << 0x40, temp0_298)
zmm14 = _mm_unpacklo_ps(zmm14, zmm13.q).q | zmm12.q << 0x40
zmm0 = var_118_2
zmm13 = __unpcklps_xmmps_memdq(zmm13, var_168_1).q | zmm0[0].q << 0x40
zmm12 = __unpcklpd_xmmpd_memdq(_mm_unpacklo_ps(zmm12, zmm0[0].q), var_178)
float temp0_307[0x4] =
    _mm_add_ps(_mm_shuffle_ps(_mm_shuffle_ps(zmm5, temp0_300, 5), temp0_300, 0xd8), zmm13)
zmm14 = _mm_add_ps(zmm14, zmm5)
zmm5.q = zmm5 u>> 0x40
temp0_300[0] = zmm5.d
float temp0_309[0x4] = _mm_add_ps(temp0_300, zmm12)
float rbx = temp0_309[0]
zmm0 = _mm_shuffle_epi32(temp0_309, 0x4e)
float rbp = _mm_shuffle_ps(temp0_309, temp0_309, 0xe5)[0]
float temp0_315[0x4] = __cmpps_xmmps_memps_immb(
    __andps_xmmxud_memxud(_mm_shuffle_ps(zmm14, _mm_shuffle_ps(0x800000, zmm14, 0x20), 0x24), 
        data_142d3f770), 
    data_142d3f5c0, 2)
float rdi = zmm0[0]
char result = _mm_movemask_ps(temp0_315)

if (result != 0xf)
label_140037ec7:
    zmm1 = _mm_shuffle_ps(zmm14, zmm14, 0xe5)
    arg3 = _mm_unpackhi_pd(zmm14, zmm14.q)
    zmm7 = zmm14
    zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zx.o(0), 0x12), 
        _mm_shuffle_ps(temp0_307, zx.o(0), 0x32), 0x88)
    zmm5 = zx.o(rbx)
    zmm8 = zx.o(rbp)
    arg4 = _mm_unpacklo_epi32(zmm5, zmm8[0].q)
    float temp0_334[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm5, 0), zx.o(0), 0x42)
    zmm12 = zx.o(rdi)
    zmm9 = data_142d3f660
    uint128_t var_168_2 = zmm5
    float temp0_337[0x4] =
        _mm_shuffle_ps(_mm_shuffle_ps(arg3, zmm7, 0), _mm_shuffle_ps(zmm12, zmm5, 0xc0), 0x22)
    float temp0_340[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(temp0_307, zmm9, 0x11), zmm9, 0xe8), temp0_337)
    arg3 = zx.o(0)
    arg3[0] = zmm1.d
    float temp0_342[0x4] = _mm_shuffle_ps(arg3, _mm_shuffle_ps(zmm8, arg3, 0x30), 0x84)
    float temp0_345[0x4] =
        _mm_sub_ps(temp0_340, _mm_mul_ps(_mm_shuffle_ps(temp0_307, zx.o(0), 0xe8), temp0_342))
    zmm4 = _mm_shuffle_ps(temp0_345, temp0_345, 0)
    zmm1 = _mm_shuffle_ps(temp0_345, temp0_345, 0x55)
    zmm6 = _mm_shuffle_ps(temp0_345, temp0_345, 0xaa)
    float temp0_349[0x4] = _mm_shuffle_ps(temp0_345, temp0_345, 0xff)
    zmm11 = 0x3f800000
    zmm5 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(0x3f800000, zmm12, 0), temp0_334), 
        _mm_mul_ps(arg4[0].q << 0x40, zx.o(0)))
    uint128_t var_178_2 = zmm14
    zmm13 = _mm_mul_ps(_mm_shuffle_ps(temp0_307, zmm7, 5), zmm14)
    zmm14 = zmm4
    float temp0_356[0x4] = _mm_shuffle_ps(zmm7, temp0_307, 5)
    zmm13 = _mm_sub_ps(zmm13, 
        _mm_mul_ps(
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_307, zx.o(0), 0x12), 
                _mm_shuffle_ps(zmm7, zx.o(0), 0x32), 0x88), 
            temp0_356))
    float temp0_362[0x4] = _mm_mul_ps(zmm14, temp0_349)
    float temp0_364[0x4] = _mm_add_ps(_mm_mul_ps(zmm1, zmm6), temp0_362)
    float temp0_366[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd8), zmm13)
    float temp0_368[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_366, temp0_366, 1), temp0_366)
    float temp0_371[0x4] =
        _mm_sub_ps(temp0_364, _mm_add_ps(_mm_shuffle_ps(temp0_368, temp0_368, 0x39), temp0_368))
    temp0_371[0] - 0f
    
    if (temp0_371[0] != 0f || not(is_ordered.d(temp0_371[0], 0f)))
        float temp0_372[0x4] = _mm_shuffle_ps(zmm7, temp0_307, 0x20)
        float temp0_373[0x4] = _mm_mul_ps(zmm5[0].q | zmm5.q << 0x40, temp0_372)
        arg3 = zmm7[0].q | temp0_307[0].q << 0x40
        zmm4 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x20), arg3), temp0_373)
        zmm9[0] = zmm12.d
        zmm11 = var_178_2
        zmm6 = _mm_sub_ps(_mm_mul_ps(zmm6, zmm11), zmm4)
        arg4 = data_142d4cc30
        zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, arg4, 0), arg4, 0xe2)
        float temp0_382[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x66), zmm12)
        zmm4 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x33), zmm9), temp0_382)
        zmm1 = _mm_sub_ps(_mm_mul_ps(zmm1, temp0_334), zmm4)
        float temp0_388[0x4] = _mm_mul_ps(zmm9, zmm14)
        float temp0_390[0x4] = _mm_mul_ps(_mm_unpackhi_pd(zmm13, zmm13.q), temp0_334)
        float temp0_395[0x4] = _mm_sub_ps(temp0_388, 
            _mm_add_ps(
                _mm_mul_ps(zmm13.q | zmm13.q << 0x40, 
                    _mm_shuffle_ps(_mm_shuffle_ps(var_168_2, zx.o(0), 0), zx.o(0), 0xe2)), 
                temp0_390))
        float temp0_396[0x4] = _mm_mul_ps(arg3, temp0_349)
        float temp0_398[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xcc), zmm11)
        float temp0_401[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zx.o(0), 2), 
            _mm_shuffle_ps(temp0_307, zx.o(0), 0x22), 0x22)
        float temp0_405[0x4] = _mm_sub_ps(temp0_396, 
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x66), temp0_401), temp0_398))
        float temp0_406[0x4] = _mm_div_ps(data_142fc92f0, temp0_371)
        float temp0_407[0x4] = _mm_mul_ps(temp0_405, temp0_406)
        zmm1 = _mm_mul_ps(zmm1, temp0_406)
        zmm6 = _mm_shuffle_ps(_mm_mul_ps(zmm6, temp0_406), _mm_mul_ps(temp0_406, temp0_395), 0x77)
        zmm11 = _mm_shuffle_ps(temp0_407, zmm1, 0x77)
        arg3 = _mm_shuffle_ps(temp0_407, zmm1, 0x22)
    else
        arg3 = data_142d4cc20
        zmm6 = data_142d4cc30
    
    zmm7 = temp0_254
    zmm13 = temp0_178
    zmm15 = var_158
    zmm8 = _mm_shuffle_ps(zmm11, zmm11, 0xe5)
    zmm0 = _mm_unpackhi_pd(zmm11, zmm11[0].q)
    zmm9 = _mm_shuffle_ps(zmm11, zmm11, 0xe7)
    zmm10 = _mm_shuffle_ps(arg3, arg3, 0xe5)
    zmm5 = _mm_unpackhi_pd(arg3, arg3[0].q)
    zmm12 = _mm_shuffle_ps(arg3, arg3, 0xe7)
    zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xe5)
    zmm1 = _mm_unpackhi_pd(zmm6, zmm6.q)
    arg4 = _mm_shuffle_ps(zmm6, zmm6, 0xe7)
else
    result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
        __andps_xmmxud_memxud(
            _mm_shuffle_ps(temp0_307, _mm_shuffle_ps(0x800000, temp0_307, 0x20), 0x24), 
            data_142d3f770), 
        data_142d3f5c0, 2))
    
    if (result != 0xf)
        goto label_140037ec7
    
    result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
        _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(rbx), zx.q(rbp)), 
            _mm_unpacklo_epi32(zx.o(rdi), 0x800000[0].q).q) & data_142d3f770, 
        data_142d3f5c0, 2))
    
    if (result != 0xf)
        goto label_140037ec7
    
    zmm1 = 0x3f800000
    arg4 = zx.o(0)
    zmm4 = zx.o(0)
    zmm6 = zx.o(0)
    zmm12 = zx.o(0)
    zmm5 = zx.o(0)
    zmm10 = 0x3f800000
    arg3 = zx.o(0)
    zmm9 = zx.o(0)
    zmm0 = zx.o(0)
    zmm8 = zx.o(0)
    zmm11 = 0x3f800000
    zmm7 = temp0_254
    zmm13 = temp0_178

zmm6 = _mm_unpacklo_ps(zmm6, zmm4.q).q | _mm_unpacklo_ps(zmm1, arg4[0].q).q << 0x40
arg3 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(arg3, zmm10[0].q), _mm_unpacklo_ps(zmm5, zmm12.q).q)
float temp0_428[0x4] = _mm_unpacklo_ps(zmm11, zmm8[0].q)
float temp0_429[0x4] = _mm_unpacklo_ps(zmm0, zmm9[0].q)
zmm11 = temp0_428[0].q | temp0_429[0].q << 0x40
zmm0 = *arg2
zmm1 = *(arg2 + 4)
float temp0_431[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm11)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), arg3), temp0_431)
arg4 = arg2[1].d
float temp0_437[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), zmm6), zmm1)
float temp0_439[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm11)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0x55), arg3), temp0_439)
float temp0_445[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), zmm6), zmm1)
zmm1 = arg1[0xc][0].q | (*arg1)[0x32][0].q << 0x40
uint128_t var_158_1 = zmm1
float temp0_446[0x4] = _mm_sub_ps(zx.o(arg1[8][0].q)[0].q | (*arg1)[0x22][0].q << 0x40, zmm1)
float temp0_447[0x4] = _mm_shuffle_ps(temp0_446, temp0_446, 0xc9)
zmm4 = _mm_mul_ps(_mm_shuffle_ps(temp0_437, temp0_437, 0xd2), temp0_447)
float temp0_450[0x4] = _mm_shuffle_ps(temp0_446, temp0_446, 0xd2)
zmm4 = _mm_sub_ps(zmm4, _mm_mul_ps(_mm_shuffle_ps(temp0_437, temp0_437, 0xc9), temp0_450))
zmm9 = var_d8
zmm9[0] = zx.o(rsi)[0]
temp0_98[0].q = (_mm_unpacklo_epi32(zx.o(r14), zx.q(r11))).q
zmm14 = temp0_445
zmm12 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(r8), zx.o(r10)[0].q), zx.o(r9)[0].q)
float temp0_458[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc0), zmm9)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd5), temp0_98), temp0_458)
zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xea), zmm12), zmm1)
zmm1 = *(arg1 + 0x8c) | (*arg1)[0x25][0].q << 0x40
zmm6 = *(arg1 + 0xcc) | (*arg1)[0x35][0].q << 0x40
uint128_t var_178_3 = zmm6
zmm5 = _mm_shuffle_ps(var_138, var_138, 0xc0)
uint128_t var_138_1 = zmm5
zmm5 = _mm_mul_ps(zmm5, temp0_437)
zmm0 = data_142d3f780
zmm7 = _mm_shuffle_epi32(zmm15 ^ zmm0, 0xc0)
float temp0_468[0x4] = _mm_mul_ps(zmm7, temp0_437)
zmm1 = _mm_sub_ps(zmm1, zmm6)
float temp0_470[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
arg4 = temp0_437 ^ zmm0
zmm6 = _mm_mul_ps(_mm_shuffle_epi32(arg4, 0xd2), temp0_470)
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_shuffle_epi32(arg4, 0xc9), zmm1))
float temp0_478[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc0), zmm13)
float temp0_481[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd5), var_f8), temp0_478)
zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xea), var_108), temp0_481)
zmm13 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xd2), temp0_447), 
    _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xc9), temp0_450))
float temp0_491[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xc0), zmm9)
float temp0_494[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xd5), temp0_98), temp0_491)
zmm13 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xea), zmm12), temp0_494)
float temp0_498[0x4] = _mm_mul_ps(var_138_1, zmm14)
float temp0_499[0x4] = _mm_mul_ps(zmm7, zmm14)
zmm14 ^= data_142d3f780
zmm12 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm14, 0xd2), temp0_470), 
    _mm_mul_ps(_mm_shuffle_epi32(zmm14, 0xc9), zmm1))
float temp0_506[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm12, zmm12, 0xc0), temp0_178)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xd5), var_f8), temp0_506)
zmm12 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xea), var_108), zmm1)
zmm15 = arg5
float temp0_513[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc0)
zmm5 = __addps_xmmps_memps(_mm_mul_ps(zmm5, temp0_513), var_158_1)
zmm0 = zmm5
arg1[0xc][0] = zmm5.d
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xe5)
zmm0[0].q = zmm0 u>> 0x40
(*arg1)[0x31] = zmm5.d
(*arg1)[0x32] = zmm0[0]
float temp0_518[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_468, temp0_513), var_178_3)
(*arg1)[0x33] = temp0_518[0]
float temp0_519[0x4] = _mm_shuffle_ps(temp0_518, temp0_518, 0xe5)
temp0_518[0].q = temp0_518 u>> 0x40
arg1[0xd][0] = temp0_519[0]
(*arg1)[0x35] = temp0_518[0]
arg4 = arg1[0xe]
zmm8 = arg1[0xf]
zmm4 = _mm_mul_ps(zmm4, temp0_513)
zmm6 = _mm_mul_ps(zmm6, temp0_513)
float temp0_522[0x4] = _mm_mul_ps(arg4, zx.o(0))
float temp0_523[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_525[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0x1b), temp0_523)
arg3 = data_142d3f7c0
float temp0_527[0x4] = _mm_add_ps(_mm_mul_ps(temp0_525, arg3), temp0_522)
float temp0_528[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
zmm5 = _mm_mul_ps(_mm_shuffle_pd(arg4, arg4, 1), temp0_528)
zmm9 = data_142d3f7d0
zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, zmm9), temp0_527)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
float temp0_535[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xb1), zmm4)
zmm10 = data_142d3f7b0
float temp0_537[0x4] = _mm_add_ps(_mm_mul_ps(temp0_535, zmm10), zmm5)
zmm4 = data_142d3f640
float temp0_538[0x4] = _mm_mul_ps(temp0_537, zmm4)
zmm1 = _mm_mul_ps(zx.o(0), zmm8)
float temp0_540[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
zmm5 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0x1b), temp0_540), arg3), zmm1)
float temp0_545[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm8, zmm8, 1), temp0_545), zmm9), zmm5)
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
float temp0_555[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xb1), zmm6), zmm10), zmm1), zmm4)
float temp0_556[0x4] = _mm_add_ps(temp0_538, arg4)
float temp0_557[0x4] = _mm_mul_ps(temp0_556, temp0_556)
zmm1 = _mm_add_ps(_mm_unpackhi_pd(temp0_557, temp0_557[0].q), temp0_557)
float temp0_560[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
temp0_560[0] = temp0_560[0] f+ zmm1.d
uint128_t temp0_561 = _mm_cmpeq_ss(0x322bcc77, temp0_560[0], 6)
zmm1.d = temp0_560.d f* 0.5f
float temp0_562[0x4] = _mm_rsqrt_ss(temp0_560[0], temp0_560[0])
zmm6.d = temp0_562.d f* temp0_562[0]
zmm6.d = zmm6.d f* zmm1.d
zmm4.d = 0.5f f- zmm6.d
zmm4.d = zmm4.d f* temp0_562[0]
zmm4.d = zmm4.d f+ temp0_562[0]
arg4 = zmm4
arg4[0] = arg4[0] f* zmm4.d
arg4[0] = arg4[0] f* zmm1.d
zmm6.d = 0.5f - arg4[0]
zmm6.d = zmm6.d f* zmm4.d
zmm6.d = zmm6.d f+ zmm4.d
zmm14 = _mm_andnot_ps(temp0_561, 0xffffffff)
zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_556)
zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0)
zmm1 = data_142d3f660
zmm6 = _mm_and_ps(zmm6, zmm14)
zmm14 = _mm_or_ps(_mm_andnot_ps(zmm14, zmm1), zmm6)
float temp0_570[0x4] = _mm_add_ps(temp0_555, zmm8)
float temp0_571[0x4] = _mm_mul_ps(temp0_570, temp0_570)
zmm4 = _mm_add_ps(_mm_unpackhi_pd(temp0_571, temp0_571[0].q), temp0_571)
float temp0_574[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe5)
temp0_574[0] = temp0_574[0] f+ zmm4.d
zmm0 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_574[0], 6), 0xffffffff)
temp0_574[0] = temp0_574[0] * 0.5f
float temp0_577[0x4] = _mm_rsqrt_ss(temp0_574[0], temp0_574[0])
zmm4.d = temp0_577.d f* temp0_577[0]
zmm4.d = zmm4.d f* temp0_574[0]
zmm6.d = 0.5f f- zmm4.d
zmm6.d = zmm6.d f* temp0_577[0]
zmm6.d = zmm6.d f+ temp0_577[0]
arg3 = zmm6
arg3[0] = arg3[0] f* zmm6.d
arg3[0] = arg3[0] * temp0_574[0]
zmm5.d = 0.5f - arg3[0]
zmm5.d = zmm5.d f* zmm6.d
zmm5.d = zmm5.d f+ zmm6.d
zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_570)
float temp0_580[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
zmm5 = _mm_and_ps(zmm5, temp0_580)
zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_580, zmm1), zmm5)
zmm1 = _mm_mul_ps(zmm14, zmm0)
float temp0_586[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm1, zmm1.q), zmm1)
zmm1.d = _mm_shuffle_ps(temp0_586, temp0_586, 0xe5).d f+ temp0_586[0]
float temp0_588[0x4] = _mm_cmpeq_ss(0, zmm1.d, 2)
zmm1 = _mm_and_ps(temp0_588, 0x3f800000)
arg3 = _mm_or_ps(_mm_andnot_ps(temp0_588, 0xbf800000), zmm1)
arg1[0xe] = zmm14
arg1[0xf] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), zmm0)
zmm1 = _mm_add_ps(arg1[0x10][0].q | (*arg1)[0x42][0].q << 0x40, _mm_mul_ps(temp0_498, temp0_513))
zmm0 = zmm1
arg1[0x10][0] = zmm1.d
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
zmm0[0].q = zmm0 u>> 0x40
(*arg1)[0x41] = zmm1.d
(*arg1)[0x42] = zmm0[0]
zmm0 = zx.o(*(arg1 + 0x10c))[0].q | (*arg1)[0x45].q << 0x40
zmm1 = _mm_shuffle_epi32(zmm14, 0xc9)
float temp0_599[0x4] = _mm_add_ps(zmm0, _mm_mul_ps(temp0_499, temp0_513))
(*arg1)[0x43] = temp0_599[0]
float temp0_600[0x4] = _mm_shuffle_ps(temp0_599, temp0_599, 0xe5)
temp0_599[0].q = temp0_599 u>> 0x40
arg1[0x11][0] = temp0_600[0]
(*arg1)[0x45] = temp0_599[0]
arg3 = zx.o(*(arg1 + 0x118))[0].q | arg1[0x12][0][0].q << 0x40
zmm0 = _mm_shuffle_epi32(zmm14, 0xd2)
arg4 = _mm_shuffle_epi32(zmm14, 0xff)
float temp0_604[0x4] = _mm_add_ps(arg3, _mm_mul_ps(zmm13, temp0_513))
(*arg1)[0x46] = temp0_604[0]
zmm4.q = temp0_604 u>> 0x40
(*arg1)[0x47] = _mm_shuffle_ps(temp0_604, temp0_604, 0xe5)[0]
arg1[0x12][0] = zmm4.d
float temp0_606[0x4] = _mm_mul_ps(temp0_513, zmm12)
zmm4 = _mm_add_ps(*(arg1 + 0x124) | (*arg1)[0x4b][0].q << 0x40, temp0_606)
arg3 = zmm4
(*arg1)[0x49] = zmm4.d
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xe5)
arg3[0].q = arg3 u>> 0x40
(*arg1)[0x4a] = zmm4.d
(*arg1)[0x4b] = arg3[0]
arg3 = (*arg1)[6]
zmm4 = arg1[1][0]
zmm7 = zx.o(arg1[1][0].q)[0].q | arg3[0].q << 0x40
float temp0_612[0x4] = _mm_sub_ps(
    _mm_mul_ps(_mm_unpacklo_ps(arg3, zmm4.q)[0].q | (*arg1)[5].q << 0x40, zmm1), 
    _mm_mul_ps(*(arg1 + 0x14) | zmm4.q << 0x40, zmm0))
float temp0_613[0x4] = _mm_add_ps(temp0_612, temp0_612)
float temp0_615[0x4] = _mm_add_ps(zmm7, _mm_mul_ps(arg4, temp0_613))
float temp0_621[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_613, temp0_613, 0xd2), zmm1), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_613, temp0_613, 0xc9), zmm0)), 
    temp0_615)
zmm1 = _mm_add_ps(arg1[0xc][0].q | (*arg1)[0x32][0].q << 0x40, temp0_621)
zmm0 = zmm1
arg1[8][0] = zmm1.d
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
zmm0[0].q = zmm0 u>> 0x40
(*arg1)[0x21] = zmm1.d
(*arg1)[0x22] = zmm0[0]
zmm0 = arg1[0xf][0]
arg3 = (*arg1)[0x3d]
zmm1 = (*arg1)[0x3e]
zmm4 = (*arg1)[0x12]
arg4 = arg1[4][0]
zmm7 = zx.o(arg1[4][0].q)[0].q | zmm4.q << 0x40
zmm4 = _mm_unpacklo_ps(zmm4, arg4[0].q).q | (*arg1)[0x11].q << 0x40
zmm5 = *(arg1 + 0xf4) | zmm0[0].q << 0x40
zmm4 = _mm_mul_ps(zmm4, zmm5)
zmm1 = _mm_unpacklo_ps(zmm1, zmm0[0].q).q | arg3[0].q << 0x40
zmm4 = _mm_sub_ps(zmm4, _mm_mul_ps(zx.o(*(arg1 + 0x44))[0].q | arg4[0].q << 0x40, zmm1))
zmm4 = _mm_add_ps(zmm4, zmm4)
zmm0 = (*arg1)[0x3f]
float temp0_632[0x4] = _mm_add_ps(zmm7, _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xc0), zmm4))
float temp0_638[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), zmm5), 
        _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), zmm1)), 
    temp0_632)
float temp0_639[0x4] = _mm_add_ps(zx.o(*(arg1 + 0xcc))[0].q | (*arg1)[0x35].q << 0x40, temp0_638)
(*arg1)[0x23] = temp0_639[0]
zmm1.q = temp0_639 u>> 0x40
arg1[9][0] = _mm_shuffle_ps(temp0_639, temp0_639, 0xe5)[0]
(*arg1)[0x25] = zmm1.d
arg3 = (*arg1)[0x3b]
float temp0_641[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
arg4 = *arg1
float temp0_642[0x4] = _mm_mul_ps(temp0_641, arg4)
zmm4 = _mm_unpacklo_ps((*arg1)[3], (*arg1)[2].q)
zmm1 = (*arg1)[1]
zmm5 = zmm4.q | zmm1.q << 0x40
float temp0_644[0x4] = _mm_unpacklo_ps(arg4, zmm1.q)
zmm1 = _mm_unpacklo_ps(zmm1, arg4[0].q)
float temp0_646[0x4] = _mm_shuffle_ps(arg4, zmm5, 0x20)
zmm5 = arg1[0xe][0]
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm1 = zmm1.q | zmm4.q << 0x40
zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm4, temp0_646, 0x24), zmm5)
zmm9 = data_142d3f7c0
zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, zmm9), temp0_642)
arg3 = (*arg1)[0x39]
float temp0_652[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
float temp0_653[0x4] = _mm_mul_ps(zx.o(*(arg1 + 8))[0].q | temp0_644[0].q << 0x40, temp0_652)
zmm11 = data_142d3f7d0
float temp0_655[0x4] = _mm_add_ps(_mm_mul_ps(temp0_653, zmm11), zmm4)
arg3 = (*arg1)[0x3a]
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(zmm1, _mm_shuffle_ps(arg3, arg3, 0)), zmm10), temp0_655)
float temp0_660[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
arg4 = arg1[3]
float temp0_661[0x4] = _mm_mul_ps(temp0_660, arg4)
zmm4 = _mm_unpacklo_ps((*arg1)[0xf], (*arg1)[0xe][0].q)
arg3 = (*arg1)[0xd]
zmm5 = zmm4.q | arg3[0].q << 0x40
float temp0_663[0x4] = _mm_unpacklo_ps(arg4, arg3[0].q)
float temp0_664[0x4] = _mm_unpacklo_ps(arg3, arg4[0].q)
float temp0_665[0x4] = _mm_shuffle_ps(arg4, zmm5, 0x20)
arg3 = temp0_664[0].q | zmm4.q << 0x40
zmm4 = _mm_shuffle_ps(zmm4, temp0_665, 0x24)
arg4 = arg1[0xf][0]
zmm4 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(zmm4, _mm_shuffle_ps(arg4, arg4, 0)), zmm9), temp0_661)
arg4 = (*arg1)[0x3d]
float temp0_674[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(zx.o(*(arg1 + 0x38))[0].q | temp0_663[0].q << 0x40, 
            _mm_shuffle_ps(arg4, arg4, 0)), 
        zmm11), 
    zmm4)
arg4 = (*arg1)[0x3e]
float temp0_678[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(arg3, _mm_shuffle_ps(arg4, arg4, 0)), zmm10), temp0_674)
arg1[0xa] = zmm1
zmm1 = _mm_mul_ps(zmm1, temp0_678)
float temp0_681[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm1, zmm1.q), zmm1)
zmm1.d = _mm_shuffle_ps(temp0_681, temp0_681, 0xe5).d f+ temp0_681[0]
float temp0_683[0x4] = _mm_cmpeq_ss(0, zmm1.d, 2)
zmm6 = _mm_and_ps(0x3f800000, temp0_683)
zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_683, 0xbf800000), zmm6)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_678)
return result
