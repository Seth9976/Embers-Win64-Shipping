// 函数: sub_140031bd0
// 地址: 0x140031bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = _mm_div_ps(*arg2 | arg2[1].d.q << 0x40, _mm_shuffle_ps(arg3, arg3, 0xc0))
uint128_t zmm13 = _mm_sub_ps(arg1[8][0].q | (*arg1)[0x22].q << 0x40, 
    zx.o(arg1[0xc][0].q)[0].q | (*arg1)[0x32].q << 0x40)
uint128_t zmm1 = (*arg1)[0x47]
arg3 = arg1[0x12][0]
float zmm4[0x4] = (*arg1)[0x46]
uint128_t zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xd2), *(arg1 + 0x11c) | zmm4[0].q << 0x40)
arg3 = _mm_unpacklo_ps(arg3, zmm4[0].q)[0].q | zmm1.q << 0x40
zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xc9), arg3))
zmm1 = _mm_add_ps(arg1[0x10][0].q | (*arg1)[0x42][0].q << 0x40, zmm6)
float temp0_10[0x4] = _mm_sub_ps(zx.o(*(arg1 + 0x8c))[0].q | (*arg1)[0x25][0].q << 0x40, 
    *(arg1 + 0xcc) | (*arg1)[0x35][0].q << 0x40)
float zmm8[0x4] = (*arg1)[0x4a]
uint128_t zmm5 = (*arg1)[0x4b]
zmm6 = (*arg1)[0x49]
float temp0_12[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd2), *(arg1 + 0x128) | zmm6.q << 0x40)
zmm5 = _mm_unpacklo_ps(zmm5, zmm6.q).q | zmm8[0].q << 0x40
float temp0_16[0x4] =
    _mm_sub_ps(temp0_12, _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xc9), zmm5))
zmm5 = _mm_mul_ps(
    _mm_sub_ps(_mm_add_ps(*(arg1 + 0x10c) | (*arg1)[0x45][0].q << 0x40, temp0_16), zmm1), zmm0)
uint128_t zmm12
zmm12.d = _mm_shuffle_ps(zmm5, zmm5, 0xe5).d f+ zmm5.d
zmm5.q = zmm5 u>> 0x40
zmm12.d = zmm12.d f+ zmm5.d
zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xc0), zmm0)
float zmm10[0x4] = (*arg1)[0x1e]
zmm10[0] = zmm10[0] * arg4[0]
float temp0_23[0x4] = _mm_shuffle_ps(arg4, arg4, 0xc0)
zmm5 = _mm_mul_ps(arg1[6][0].q | (*arg1)[0x1a].q << 0x40, temp0_23)
zmm4 = arg1[0xe]
float temp0_25[0x4] = _mm_add_ps(zmm4, zmm4)
float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_25)
zmm1 = (*arg1)[0x39]
zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_25)
zmm6 = (*arg1)[0x3b]
zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_25)
temp0_25[0].q = temp0_25 u>> 0x40
temp0_25[0] = temp0_25[0] * (*arg1)[0x3a]
uint128_t zmm7 = _mm_shuffle_ps(_mm_unpackhi_pd(zmm1, 0), temp0_27, 0x6c)
zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x78)
zmm0 = _mm_add_ps(zmm6, zmm7)
zmm7 = _mm_sub_ps(zmm7, zmm6)
zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zx.o(0), 0xe5), temp0_27, 0xc)
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x78)
float temp0_43[0x4] = _mm_add_ps(
    _mm_shuffle_ps(temp0_25, _mm_shuffle_ps(zmm1, _mm_shuffle_ps(temp0_25, zx.o(0), 0x40), 0x31), 
        0x80), 
    zmm6)
zmm8 = data_142d3f670
float temp0_44[0x4] = _mm_sub_ps(zmm8, temp0_43)
zmm1.d = zmm5.d
float temp0_46[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zx.o(0), 1), zx.o(0), 0xe2)
zmm6 = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm5, zx.o(0), 0x32), 0x84)
zmm5 = _mm_mul_ps(_mm_shuffle_ps(temp0_44, temp0_44, 0xc0), zmm1)
float temp0_53[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xea), temp0_46), zmm5)
uint128_t zmm14 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xd5), zmm6), temp0_53)
float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xea), zmm1)
zmm5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_44, temp0_44, 0xd5), temp0_46), temp0_58)
uint128_t zmm15 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc0), zmm6), zmm5)
float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xd5), zmm1)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xc0), temp0_46), temp0_66)
float temp0_72[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_44, temp0_44, 0xea), zmm6), zmm1)
zmm5 = _mm_shuffle_ps(zmm0, temp0_44, 2)
zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm5, zx.o(0), 0x22), 0x31), 0x82)
zmm6 = _mm_shuffle_ps(temp0_44, zmm7, 0xa1)
zmm1 = _mm_shuffle_ps(zmm6, zx.o(0), 0x42)
zmm7 = _mm_shuffle_ps(zmm7, zmm0, 0x50)
zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm0, zmm1, 0x30), 0x82)
zmm7 =
    _mm_shuffle_ps(zmm7, _mm_shuffle_ps(temp0_44, _mm_shuffle_ps(zmm7, zx.o(0), 0x42), 0x32), 0x82)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xc0), zmm5)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xd5), zmm6), zmm0)
zmm14 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xea), zmm7), zmm1)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xc0), zmm5)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xd5), zmm6), zmm0)
zmm15 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xea), zmm7), zmm1)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xc0), zmm5)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xd5), zmm6), zmm0)
float temp0_108[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xea), zmm7), zmm1)
int32_t r10 = _mm_shuffle_ps(zmm15, zmm15, 0xe5).d
float r8 = temp0_108[0]
zmm0 = _mm_shuffle_epi32(temp0_108, 0x4e)
float r9 = _mm_shuffle_ps(temp0_108, temp0_108, 0xe5)[0]
zmm4 = arg1[0xf]
float temp0_112[0x4] = _mm_add_ps(zmm4, zmm4)
float temp0_114[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_112)
zmm1 = (*arg1)[0x3d]
zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_112)
zmm5 = (*arg1)[0x3f]
zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_112)
temp0_112[0].q = temp0_112 u>> 0x40
temp0_112[0] = temp0_112[0] * (*arg1)[0x3e]
int32_t r11 = zmm0.d
float temp0_120[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(zmm1, 0), temp0_114, 0x6c)
float temp0_121[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0x78)
zmm0 = _mm_add_ps(zmm5, temp0_121)
float temp0_123[0x4] = _mm_sub_ps(temp0_121, zmm5)
zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zx.o(0), 0xe5), temp0_114, 0xc)
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0x78)
float temp0_131[0x4] = _mm_sub_ps(zmm8, 
    _mm_add_ps(
        _mm_shuffle_ps(temp0_112, 
            _mm_shuffle_ps(zmm1, _mm_shuffle_ps(temp0_112, zx.o(0), 0x40), 0x31), 0x80), 
        zmm5))
zmm5 = (*arg1)[0x1d]
zmm1 = (*arg1)[0x1b]
float temp0_133[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg1[7][0], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_135[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm5, zx.o(0), 0x30), 0x84)
zmm5 = _mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0xc0), zmm1)
zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_123, temp0_123, 0xea), temp0_133), zmm5)
zmm7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xd5), temp0_135), zmm6)
zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xea), zmm1)
zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0xd5), temp0_133), zmm5)
float temp0_151[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_123, temp0_123, 0xc0), temp0_135), zmm6)
zmm5 = _mm_mul_ps(_mm_shuffle_ps(temp0_123, temp0_123, 0xd5), zmm1)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xc0), temp0_133), zmm5)
zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0xea), temp0_135), zmm1)
zmm5 = _mm_shuffle_ps(zmm0, temp0_131, 2)
int32_t var_168[0x4] = zx.o(0)
zmm5 =
    _mm_shuffle_ps(zmm5, _mm_shuffle_ps(temp0_123, _mm_shuffle_ps(zmm5, zx.o(0), 0x22), 0x31), 0x82)
float temp0_164[0x4] = _mm_shuffle_ps(temp0_131, temp0_123, 0xa1)
zmm1 = _mm_shuffle_ps(temp0_164, zx.o(0), 0x42)
float temp0_166[0x4] = _mm_shuffle_ps(temp0_123, zmm0, 0x50)
float temp0_168[0x4] = _mm_shuffle_ps(temp0_164, _mm_shuffle_ps(zmm0, zmm1, 0x30), 0x82)
float temp0_171[0x4] = _mm_shuffle_ps(temp0_166, 
    _mm_shuffle_ps(temp0_131, _mm_shuffle_ps(temp0_166, zx.o(0), 0x42), 0x32), 0x82)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc0), zmm5)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xd5), temp0_168), zmm0)
uint128_t var_118 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xea), temp0_171), zmm1)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_151, temp0_151, 0xc0), zmm5)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_151, temp0_151, 0xd5), temp0_168), zmm0)
zmm7 = *arg6
float temp0_187[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_151, temp0_151, 0xea), temp0_171), zmm1)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc0), zmm5)
zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd5), temp0_168)
uint32_t temp0_192 = _mm_movemask_ps(zmm7)
zmm1 = _mm_add_ps(zmm1, zmm0)
float zmm11[0x4] = _mm_unpackhi_pd(zmm13, zmm13.q)
zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xea), temp0_171)
float temp0_197[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xe5)
uint128_t var_128 = _mm_add_ps(zmm6, zmm1)
uint128_t var_188 = (*arg1)[0x1f]
int32_t rsi = zmm14.d
int32_t r14 = zmm15.d
float var_158[0x4] = zmm10
uint128_t var_178 = zmm12
uint128_t var_148 = zmm14
uint128_t var_e8 = zmm15
char result
float zmm9[0x4]

if (temp0_192 == 0xf)
    zmm0 = zx.o(0)
    bool cond:2_1 = zmm10[0] <= 0f
    zmm1 = zx.o(0)
    zmm12 = zx.o(0)
    zmm5 = zx.o(0)
    zmm14 = zx.o(0)
    zmm10 = zx.o(0)
    
    if (not(cond:2_1))
        arg3 = data_142d3f780
        zmm7 = zmm11 ^ arg3
        arg4 = temp0_197 ^ arg3
        zmm9 = _mm_shuffle_epi32(zmm7, 0xc0)
        zmm8 = zx.o(r10)
        zmm15 = zx.o(r14)
        zmm0 = _mm_mul_ps(_mm_unpacklo_epi64(_mm_unpacklo_epi32(zmm8, zmm15.q), zmm15.q), zmm9)
        zmm14 = zx.o(r9)
        zmm5 = zx.o(r8)
        float temp0_203[0x4] = _mm_shuffle_ps(zmm8, zmm14, 0x10)
        zmm6 = _mm_unpacklo_epi32(zmm14, zmm5.q)
        zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm5, zmm6, 0x30), 0x84)
        zmm1 = _mm_shuffle_ps(zmm13, zmm13, 0xd5)
        zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm1), zmm0)
        zmm7 = _mm_unpacklo_ps(zmm7, zmm11[0].q)
        zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm7, _mm_shuffle_ps(arg4, zmm7, 0x30), 0x84), zmm6)
        zmm0 = zx.o(r11)
        zmm12 = _mm_shuffle_ps(zmm14, zmm0, 0x10)
        zmm6 = zmm0
        zmm0 = _mm_unpacklo_ps(zmm0, zmm14.q)
        zmm14 = _mm_mul_ps(_mm_shuffle_ps(zmm14, temp0_203, 0x80), zmm9)
        arg3 ^= zmm13
        zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm12, 0x80), zmm1), zmm14)
        float temp0_224[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(arg3, temp0_197, 0), zmm13, 0x42), zmm6), zmm7)
        zmm1 = _mm_shuffle_ps(zmm11, zmm11, 0)
        zmm6 = _mm_shuffle_ps(arg4, zmm11, 0x30)
        zmm1 = _mm_shuffle_ps(zmm1, zmm6, 0x82)
        zmm7 = zx.o(rsi)
        zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc0), zmm1)
        float temp0_231[0x4] = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm15, zmm5, 0x10), 0x80)
        float temp0_232[0x4] = _mm_shuffle_ps(arg3, zmm13, 0x40)
        float temp0_234[0x4] = _mm_add_ps(_mm_mul_ps(temp0_231, temp0_232), zmm7)
        float temp0_237[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(arg4, zmm11, 0), zmm6, 0x82), temp0_234)
        zmm5 = _mm_unpacklo_epi32(zmm5, zmm15.q)
        zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm15, zmm5, 0x30), 0x84), zmm1)
        zmm0 = _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm8, zmm0, 0x30), 0x84), temp0_232), 
            zmm5)
        zmm5.d = var_158.d
        zmm10 = _mm_add_ps(temp0_224, zmm5)
        zmm5 = _mm_add_ps(zmm5.q | zmm5.q << 0x40, 
            _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(arg3, zmm13, 0), zmm13, 0xc8), zmm0), 
                temp0_237))
        zmm14 = _mm_shuffle_ps(zmm10, zmm10, 0xe5)
        zmm12 = _mm_unpackhi_pd(zmm10, zmm10[0].q)
        zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xe5)
        zmm0 = _mm_unpackhi_pd(zmm5, zmm5.q)
    
    uint128_t var_108 = zmm5
    uint128_t var_f8 = zmm1
    uint128_t var_168_1 = zmm0
    float temp0_256[0x4] = _mm_sub_ps(zx.o(*(arg1 + 0x8c))[0].q | (*arg1)[0x25].q << 0x40, 
        *(arg1 + 0xcc) | (*arg1)[0x35].q << 0x40)
    zmm4 = data_142d3f780
    zmm0 = temp0_256 ^ zmm4
    zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, temp0_256, 0x50), temp0_256, 0x42)
    zmm5 = _mm_unpackhi_pd(temp0_256, temp0_256[0].q)
    zmm1 = zmm5 ^ zmm4
    zmm11 = _mm_shuffle_epi32(zmm1, 0xc0)
    zmm15 = temp0_187
    float temp0_262[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xc1), zmm11)
    zmm13 = _mm_shuffle_ps(temp0_256, temp0_256, 0xd5)
    zmm9 = var_128
    zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xc1), zmm13), temp0_262)
    float temp0_267[0x4] = _mm_shuffle_ps(zmm0, temp0_256, 0x40)
    zmm8 = _mm_shuffle_ps(temp0_256, temp0_256, 0xe5) ^ zmm4
    float temp0_269[0x4] = _mm_shuffle_ps(zmm8, temp0_256, 0xa0)
    zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, temp0_256, 0), temp0_256, 0xc8)
    float temp0_272[0x4] = _mm_shuffle_ps(temp0_256, zmm8, 0xca)
    float temp0_273[0x4] = _mm_shuffle_ps(temp0_269, zmm8, 0xc2)
    float temp0_274[0x4] = _mm_shuffle_ps(zmm8, zmm1, 0x20)
    zmm1 = _mm_mul_ps(_mm_shuffle_ps(_mm_unpacklo_ps(zmm1, zmm5.q), temp0_274, 0x84), zmm6)
    zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm15, 0xd5), zmm11)
    zmm7 = _mm_add_ps(
        _mm_mul_ps(zmm7, _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xda), zmm13), zmm5)), 
        zmm1)
    zmm5 = _mm_shuffle_ps(zmm9, _mm_shuffle_ps(zmm15, zmm9, 0x30), 0x80)
    zmm1 = _mm_mul_ps(_mm_shuffle_ps(var_118, var_118, 0xc0), temp0_272)
    float temp0_291[0x4] = _mm_mul_ps(temp0_273, _mm_add_ps(_mm_mul_ps(zmm5, temp0_267), zmm1))
    zmm1 = _mm_shuffle_ps(zmm9, zmm15, 0xc)
    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0x78), temp0_272)
    zmm0 = _mm_add_ps(
        _mm_mul_ps(zmm0, 
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm15, 0xd6), temp0_267), zmm1)), 
        temp0_291)
    zmm1.d = var_188[0]
    zmm7 = _mm_add_ps(zmm7, zmm1)
    zmm1 = _mm_add_ps(zmm1.q | zmm1.q << 0x40, zmm0)
    float temp0_302[0x4] = _mm_unpacklo_ps(zmm10, zmm14.q)
    zmm14 = __unpcklps_xmmps_memdq(zmm14, var_108)
    zmm10 = temp0_302[0].q | zmm12.q << 0x40
    zmm12 = __unpcklpd_xmmpd_memdq(_mm_unpacklo_ps(zmm12, var_f8.q), var_168_1)
    float temp0_308[0x4] = _mm_add_ps(_mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1, 5), zmm1, 0xd8), 
        zmm14.q | var_f8.q << 0x40)
    float temp0_309[0x4] = _mm_add_ps(zmm10, zmm7)
    zmm7.q = zmm7 u>> 0x40
    zmm1.d = zmm7.d
    zmm1 = _mm_add_ps(zmm1, zmm12)
    int32_t rbx = zmm1.d
    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
    int32_t rbp = _mm_shuffle_ps(zmm1, zmm1, 0xe5).d
    int32_t rdi_1 = zmm0.d
    result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
        __andps_xmmxud_memxud(
            _mm_shuffle_ps(temp0_309, _mm_shuffle_ps(0x800000, temp0_309, 0x20), 0x24), 
            data_142d3f770), 
        data_142d3f5c0, 2))
    
    if (result == 0xf)
        result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(
                _mm_shuffle_ps(temp0_308, _mm_shuffle_ps(0x800000, temp0_308, 0x20), 0x24), 
                data_142d3f770), 
            data_142d3f5c0, 2))
        
        if (result != 0xf)
            goto label_1400325ae
        
        result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
            _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(rbx), zx.q(rbp)), 
                _mm_unpacklo_epi32(zx.o(rdi_1), 0x800000[0].q).q) & data_142d3f770, 
            data_142d3f5c0, 2))
        
        if (result == 0xf)
            goto label_1400337a0
        
        goto label_1400325ae
    
label_1400325ae:
    zmm0 = _mm_shuffle_ps(temp0_309, temp0_309, 0xe5)
    arg3 = _mm_unpackhi_pd(temp0_309, temp0_309[0].q)
    float temp0_332[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_309, zx.o(0), 0x12), 
        _mm_shuffle_ps(temp0_308, zx.o(0), 0x32), 0x88)
    zmm5 = zx.o(rbx)
    zmm14 = zx.o(rbp)
    arg4 = zmm14
    zmm15 = _mm_unpacklo_epi32(zmm5, zmm14.q)
    zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zmm5, 0), zx.o(0), 0x42)
    zmm1 = zx.o(rdi_1)
    zmm11 = data_142d3f660
    uint128_t var_168_2 = zmm5
    float temp0_338[0x4] =
        _mm_shuffle_ps(_mm_shuffle_ps(arg3, temp0_309, 0), _mm_shuffle_ps(zmm1, zmm5, 0xc0), 0x22)
    zmm7 =
        _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(temp0_308, zmm11, 0x11), zmm11, 0xe8), temp0_338)
    arg3 = zx.o(0)
    arg3[0] = zmm0.d
    float temp0_343[0x4] = _mm_shuffle_ps(arg3, _mm_shuffle_ps(arg4, arg3, 0x30), 0x84)
    zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(_mm_shuffle_ps(temp0_308, zx.o(0), 0xe8), temp0_343))
    zmm12 = _mm_shuffle_ps(zmm7, zmm7, 0)
    zmm13 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
    float temp0_349[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
    zmm6 = 0x3f800000
    zmm0 = zmm15.q << 0x40
    zmm15 = temp0_332
    float temp0_354[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(0x3f800000, zmm1, 0), zmm14), 
        _mm_mul_ps(zmm0, zx.o(0)))
    float temp0_356[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_308, temp0_309, 5), temp0_332)
    zmm0 = _mm_shuffle_ps(temp0_308, zx.o(0), 0x12)
    float temp0_358[0x4] = _mm_shuffle_ps(temp0_309, zx.o(0), 0x32)
    zmm5 = _mm_shuffle_ps(temp0_309, temp0_308, 5)
    float temp0_362[0x4] =
        _mm_sub_ps(temp0_356, _mm_mul_ps(_mm_shuffle_ps(zmm0, temp0_358, 0x88), zmm5))
    float temp0_363[0x4] = _mm_mul_ps(zmm12, zmm7)
    zmm0 = _mm_add_ps(_mm_mul_ps(zmm13, temp0_349), temp0_363)
    float temp0_367[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_354, temp0_354, 0xd8), temp0_362)
    zmm5 = _mm_add_ps(_mm_shuffle_pd(temp0_367, temp0_367, 1), temp0_367)
    zmm0 = _mm_sub_ps(zmm0, _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0x39), zmm5))
    zmm0.d f- 0f
    
    if (not(zmm0.d f!= 0f) && is_ordered.d(zmm0.d, 0f))
        goto label_140032dff
    
    zmm4 = temp0_309[0].q | temp0_308[0].q << 0x40
    zmm5 = _mm_shuffle_ps(temp0_309, temp0_308, 0x20)
    zmm6 = _mm_mul_ps(temp0_354.q | temp0_354[0].q << 0x40, zmm5)
    zmm5 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_354, temp0_354, 0x20), zmm4), zmm6)
    zmm11[0] = zmm1.d
    zmm8 = _mm_sub_ps(_mm_mul_ps(temp0_349, zmm15), zmm5)
    zmm5 = data_142d4cc30
    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm5, 0), zmm5, 0xe2)
    zmm5 = _mm_mul_ps(_mm_shuffle_ps(temp0_362, temp0_362, 0x66), zmm1)
    zmm1 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_362, temp0_362, 0x33), zmm11), zmm5)
    zmm13 = _mm_sub_ps(_mm_mul_ps(zmm13, zmm14), zmm1)
    float temp0_389[0x4] = _mm_mul_ps(zmm11, zmm12)
    zmm1 = _mm_mul_ps(_mm_unpackhi_pd(temp0_362, temp0_362[0].q), zmm14)
    zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(var_168_2, zx.o(0), 0), zx.o(0), 0xe2)
    zmm11 = _mm_sub_ps(temp0_389, 
        _mm_add_ps(_mm_mul_ps(temp0_362[0].q | temp0_362[0].q << 0x40, zmm6), zmm1))
    zmm4 = _mm_mul_ps(zmm4, zmm7)
    zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_354, temp0_354, 0xcc), zmm15)
    float temp0_402[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_309, zx.o(0), 2), 
        _mm_shuffle_ps(temp0_308, zx.o(0), 0x22), 0x22)
    arg3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_354, temp0_354, 0x66), temp0_402), zmm1)
    goto label_140032dcf

uint128_t var_f8_1 = zmm7
zmm1 = zx.o(0)
zmm15 = zx.o(0)
arg4 = zx.o(0)
zmm12 = zx.o(0)
zmm14 = zx.o(0)

if (not(zmm10[0] <= 0f))
    arg3 = data_142d3f780
    zmm0 = zmm11 ^ arg3
    zmm6 = temp0_197 ^ arg3
    zmm8 = _mm_shuffle_epi32(zmm0, 0xc0)
    zmm9 = zx.o(r10)
    zmm15 = zx.o(r14)
    zmm1 = _mm_mul_ps(_mm_unpacklo_epi64(_mm_unpacklo_epi32(zmm9, zmm15.q), zmm15.q), zmm8)
    zmm14 = zx.o(r9)
    zmm7 = zx.o(r8)
    float temp0_410[0x4] = _mm_shuffle_ps(zmm9, zmm14, 0x10)
    arg4 = _mm_unpacklo_epi32(zmm14, zmm7.q)
    float temp0_413[0x4] = _mm_shuffle_ps(arg4, _mm_shuffle_ps(zmm7, arg4, 0x30), 0x84)
    zmm5 = _mm_shuffle_ps(zmm13, zmm13, 0xd5)
    float temp0_416[0x4] = _mm_add_ps(_mm_mul_ps(temp0_413, zmm5), zmm1)
    zmm0 = _mm_unpacklo_ps(zmm0, zmm11[0].q)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm6, zmm0, 0x30), 0x84), temp0_416)
    zmm1 = zx.o(r11)
    zmm12 = _mm_shuffle_ps(zmm14, zmm1, 0x10)
    arg4 = zmm1
    zmm1 = _mm_unpacklo_ps(zmm1, zmm14.q)
    zmm14 = _mm_mul_ps(_mm_shuffle_ps(zmm14, temp0_410, 0x80), zmm8)
    arg3 ^= zmm13
    float temp0_427[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg4, zmm12, 0x80), zmm5), zmm14)
    zmm14 = _mm_add_ps(
        _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(arg3, temp0_197, 0), zmm13, 0x42), temp0_427), 
        zmm0)
    zmm0 = _mm_shuffle_ps(zmm11, zmm11, 0)
    float temp0_433[0x4] = _mm_shuffle_ps(zmm6, zmm11, 0x30)
    zmm0 = _mm_shuffle_ps(zmm0, temp0_433, 0x82)
    zmm4 = zx.o(rsi)
    float temp0_436[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc0), zmm0)
    zmm5 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm15, zmm7, 0x10), 0x80)
    float temp0_439[0x4] = _mm_shuffle_ps(arg3, zmm13, 0x40)
    zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, temp0_439), temp0_436)
    zmm6 = _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm11, 0), temp0_433, 0x82), zmm5)
    zmm7 = _mm_unpacklo_epi32(zmm7, zmm15.q)
    zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm15, zmm7, 0x30), 0x84), zmm0)
    zmm1 = _mm_add_ps(
        _mm_mul_ps(_mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm9, zmm1, 0x30), 0x84), temp0_439), zmm7)
    arg4 = zx.o(0)
    arg4[0] = var_158.d
    zmm14 = _mm_add_ps(zmm14, arg4)
    float temp0_457[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(arg3, zmm13, 0), zmm13, 0xc8), zmm1), zmm6)
    arg4 = _mm_add_ps(arg4[0].q | arg4[0].q << 0x40, temp0_457)
    zmm12 = _mm_shuffle_ps(zmm14, zmm14, 0xe5)
    zmm15 = _mm_unpackhi_pd(zmm14, zmm14.q)
    zmm1 = _mm_shuffle_ps(arg4, arg4, 0xe5)
    var_168 = _mm_unpackhi_pd(arg4, arg4[0].q)

uint128_t var_d8_1 = zmm1
float temp0_463[0x4] = _mm_sub_ps(zx.o(*(arg1 + 0x8c))[0].q | (*arg1)[0x25].q << 0x40, 
    *(arg1 + 0xcc) | (*arg1)[0x35].q << 0x40)
zmm1 = data_142d3f780
zmm0 = temp0_463 ^ zmm1
float temp0_465[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, temp0_463, 0x50), temp0_463, 0x42)
zmm5 = _mm_unpackhi_pd(temp0_463, temp0_463[0].q)
zmm6 = zmm5 ^ zmm1
float temp0_467[0x4] = _mm_shuffle_epi32(zmm6, 0xc0)
zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_187, temp0_187, 0xc1), temp0_467)
zmm13 = _mm_shuffle_ps(temp0_463, temp0_463, 0xd5)
zmm10 = var_128
zmm7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xc1), zmm13), zmm1)
float temp0_474[0x4] = _mm_shuffle_ps(zmm0, temp0_463, 0x40)
zmm8 = _mm_shuffle_ps(temp0_463, temp0_463, 0xe5) ^ data_142d3f780
zmm1 = _mm_shuffle_ps(zmm8, temp0_463, 0xa0)
zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, temp0_463, 0), temp0_463, 0xc8)
float temp0_479[0x4] = _mm_shuffle_ps(temp0_463, zmm8, 0xca)
zmm1 = _mm_shuffle_ps(zmm1, zmm8, 0xc2)
float temp0_481[0x4] = _mm_shuffle_ps(zmm8, zmm6, 0x20)
zmm6 = _mm_mul_ps(_mm_shuffle_ps(_mm_unpacklo_ps(zmm6, zmm5.q), temp0_481, 0x84), zmm7)
zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm10, temp0_187, 0xd5), temp0_467)
float temp0_491[0x4] = _mm_add_ps(
    _mm_mul_ps(temp0_465, _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xda), zmm13), zmm5)), 
    zmm6)
zmm6 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(temp0_187, zmm10, 0x30), 0x80)
zmm5 = _mm_mul_ps(_mm_shuffle_ps(var_118, var_118, 0xc0), temp0_479)
zmm1 = _mm_mul_ps(zmm1, _mm_add_ps(_mm_mul_ps(zmm6, temp0_474), zmm5))
zmm5 = _mm_shuffle_ps(zmm10, temp0_187, 0xc)
zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x78), temp0_479)
zmm0 = _mm_add_ps(
    _mm_mul_ps(zmm0, 
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, temp0_187, 0xd6), temp0_474), zmm5)), 
    zmm1)
arg3 = zx.o(0)
arg3[0] = var_188.d
float temp0_507[0x4] = _mm_add_ps(temp0_491, arg3)
float temp0_508[0x4] = _mm_add_ps(arg3[0].q | arg3[0].q << 0x40, zmm0)
zmm14 = _mm_unpacklo_ps(zmm14, zmm12.q).q | zmm15.q << 0x40
zmm12 = __unpcklps_xmmps_memdq(zmm12, arg4).q | var_d8_1.q << 0x40
zmm15 = __unpcklpd_xmmpd_memdq(_mm_unpacklo_ps(zmm15, var_d8_1.q), var_168)
zmm1 = _mm_add_ps(_mm_shuffle_ps(_mm_shuffle_ps(temp0_507, temp0_508, 5), temp0_508, 0xd8), zmm12)
zmm14 = _mm_add_ps(zmm14, temp0_507)
temp0_507[0].q = temp0_507 u>> 0x40
temp0_508[0] = temp0_507[0]
float temp0_517[0x4] = _mm_add_ps(temp0_508, zmm15)
float rbx_1 = temp0_517[0]
zmm0 = _mm_shuffle_epi32(temp0_517, 0x4e)
float rbp_1 = _mm_shuffle_ps(temp0_517, temp0_517, 0xe5)[0]
int32_t rdi_2 = zmm0.d
float temp0_523[0x4] = __cmpps_xmmps_memps_immb(
    __andps_xmmxud_memxud(_mm_shuffle_ps(zmm14, _mm_shuffle_ps(0x800000, zmm14, 0x20), 0x24), 
        data_142d3f770), 
    data_142d3f5c0, 2)
zmm4 = var_f8_1
zmm0 = _mm_cmpeq_epi32(zmm4, zx.o(0))
result = _mm_movemask_ps(_mm_or_ps(temp0_523, zmm0))

if (result != 0xf)
label_140032bcf:
    zmm0 = _mm_shuffle_ps(zmm14, zmm14, 0xe5)
    arg3 = _mm_unpackhi_pd(zmm14, zmm14.q)
    float temp0_544[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zx.o(0), 0x12), 
        _mm_shuffle_ps(zmm1, zx.o(0), 0x32), 0x88)
    zmm7 = zx.o(rbx_1)
    zmm9 = zx.o(rbp_1)
    zmm15 = _mm_unpacklo_epi32(zmm7, zmm9[0].q)
    float temp0_547[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm7, 0), zx.o(0), 0x42)
    zmm10 = zx.o(rdi_2)
    zmm11 = data_142d3f660
    uint128_t var_168_3 = zmm7
    float temp0_550[0x4] =
        _mm_shuffle_ps(_mm_shuffle_ps(arg3, zmm14, 0), _mm_shuffle_ps(zmm10, zmm7, 0xc0), 0x22)
    zmm7 = _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm11, 0x11), zmm11, 0xe8), temp0_550)
    arg3 = zx.o(0)
    arg3[0] = zmm0.d
    float temp0_555[0x4] = _mm_shuffle_ps(arg3, _mm_shuffle_ps(zmm9, arg3, 0x30), 0x84)
    zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(_mm_shuffle_ps(zmm1, zx.o(0), 0xe8), temp0_555))
    zmm12 = _mm_shuffle_ps(zmm7, zmm7, 0)
    zmm13 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
    float temp0_561[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
    zmm6 = 0x3f800000
    zmm0 = zmm15.q << 0x40
    zmm15 = temp0_544
    float temp0_566[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(0x3f800000, zmm10, 0), temp0_547), 
        _mm_mul_ps(zmm0, zx.o(0)))
    float temp0_568[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm14, 5), temp0_544)
    zmm0 = _mm_shuffle_ps(zmm1, zx.o(0), 0x12)
    float temp0_570[0x4] = _mm_shuffle_ps(zmm14, zx.o(0), 0x32)
    zmm5 = _mm_shuffle_ps(zmm14, zmm1, 5)
    float temp0_574[0x4] =
        _mm_sub_ps(temp0_568, _mm_mul_ps(_mm_shuffle_ps(zmm0, temp0_570, 0x88), zmm5))
    float temp0_575[0x4] = _mm_mul_ps(zmm12, zmm7)
    zmm0 = _mm_add_ps(_mm_mul_ps(zmm13, temp0_561), temp0_575)
    float temp0_579[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_566, temp0_566, 0xd8), temp0_574)
    zmm5 = _mm_add_ps(_mm_shuffle_pd(temp0_579, temp0_579, 1), temp0_579)
    zmm0 = _mm_sub_ps(zmm0, _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0x39), zmm5))
    zmm0.d f- 0f
    
    if (zmm0.d f!= 0f || not(is_ordered.d(zmm0.d, 0f)))
        zmm4 = zmm14[0].q | zmm1.q << 0x40
        zmm5 = _mm_shuffle_ps(zmm14, zmm1, 0x20)
        zmm6 = _mm_mul_ps(temp0_566.q | temp0_566[0].q << 0x40, zmm5)
        zmm5 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_566, temp0_566, 0x20), zmm4), zmm6)
        zmm11[0] = zmm10[0]
        zmm8 = _mm_sub_ps(_mm_mul_ps(temp0_561, zmm15), zmm5)
        zmm5 = data_142d4cc30
        float temp0_593[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm5, 0), zmm5, 0xe2)
        zmm5 = _mm_mul_ps(_mm_shuffle_ps(temp0_574, temp0_574, 0x66), temp0_593)
        zmm6 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_574, temp0_574, 0x33), zmm11), zmm5)
        zmm13 = _mm_sub_ps(_mm_mul_ps(zmm13, temp0_547), zmm6)
        float temp0_601[0x4] = _mm_mul_ps(zmm11, zmm12)
        zmm5 = _mm_mul_ps(_mm_unpackhi_pd(temp0_574, temp0_574[0].q), temp0_547)
        zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(var_168_3, zx.o(0), 0), zx.o(0), 0xe2)
        zmm11 = _mm_sub_ps(temp0_601, 
            _mm_add_ps(_mm_mul_ps(temp0_574[0].q | temp0_574[0].q << 0x40, zmm6), zmm5))
        zmm4 = _mm_mul_ps(zmm4, zmm7)
        float temp0_611[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_566, temp0_566, 0xcc), zmm15)
        zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zx.o(0), 2), 
            _mm_shuffle_ps(zmm1, zx.o(0), 0x22), 0x22)
        arg3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_566, temp0_566, 0x66), zmm14), temp0_611)
    label_140032dcf:
        float temp0_618[0x4] = _mm_sub_ps(zmm4, arg3)
        zmm1 = _mm_div_ps(data_142fc92f0, zmm0)
        float temp0_620[0x4] = _mm_mul_ps(temp0_618, zmm1)
        zmm13 = _mm_mul_ps(zmm13, zmm1)
        zmm8 = _mm_shuffle_ps(_mm_mul_ps(zmm8, zmm1), _mm_mul_ps(zmm1, zmm11), 0x77)
        zmm6 = _mm_shuffle_ps(temp0_620, zmm13, 0x77)
        zmm4 = _mm_shuffle_ps(temp0_620, zmm13, 0x22)
    else
    label_140032dff:
        zmm4 = data_142d4cc20
        zmm8 = data_142d4cc30
    
    zmm14 = var_178
    zmm9 = _mm_shuffle_ps(zmm6, zmm6, 0xe5)
    zmm0 = _mm_unpackhi_pd(zmm6, zmm6.q)
    zmm10 = _mm_shuffle_ps(zmm6, zmm6, 0xe7)
    zmm11 = _mm_shuffle_ps(zmm4, zmm4, 0xe5)
    arg4 = _mm_unpackhi_pd(zmm4, zmm4[0].q)
    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xe7)
    arg3 = _mm_shuffle_ps(zmm8, zmm8, 0xe5)
    zmm5 = _mm_unpackhi_pd(zmm8, zmm8[0].q)
    zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0xe7)
else
    result = _mm_movemask_ps(_mm_or_ps(
        __cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, _mm_shuffle_ps(0x800000, zmm1, 0x20), 0x24), 
                data_142d3f770), 
            data_142d3f5c0, 2), 
        zmm0))
    
    if (result != 0xf)
        goto label_140032bcf
    
    result = _mm_movemask_ps(_mm_or_ps(
        __cmpps_xmmps_memps_immb(
            _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(rbx_1), zx.o(rbp_1)[0].q), 
                _mm_unpacklo_epi32(zx.o(rdi_2), 0x800000[0].q)[0].q) & data_142d3f770, 
            data_142d3f5c0, 2), 
        _mm_cmpeq_epi32(zmm4, zx.o(0))))
    
    if (result != 0xf)
        goto label_140032bcf
    
label_1400337a0:
    zmm5 = 0x3f800000
    zmm7 = zx.o(0)
    arg3 = zx.o(0)
    zmm8 = zx.o(0)
    zmm1 = zx.o(0)
    arg4 = zx.o(0)
    zmm11 = 0x3f800000
    zmm4 = zx.o(0)
    zmm10 = zx.o(0)
    zmm0 = zx.o(0)
    zmm9 = zx.o(0)
    zmm6 = 0x3f800000
    zmm14 = var_178

float temp0_636[0x4] = _mm_unpacklo_ps(zmm8, arg3[0].q)
zmm5 = _mm_unpacklo_ps(zmm5, zmm7.q)
zmm8 = temp0_636[0].q | zmm5.q << 0x40
float temp0_638[0x4] = _mm_unpacklo_ps(zmm4, zmm11[0].q)
float temp0_639[0x4] = _mm_unpacklo_ps(arg4, zmm1.q)
zmm4 = temp0_638[0].q | temp0_639[0].q << 0x40
zmm6 = _mm_unpacklo_ps(zmm6, zmm9[0].q).q | _mm_unpacklo_ps(zmm0, zmm10[0].q).q << 0x40
zmm0 = *arg2
zmm1 = *(arg2 + 4)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm6)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm4), zmm0)
zmm7 = arg2[1].d
zmm7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm8), zmm1)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm6)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0x55), zmm4), zmm0)
zmm14 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xaa), zmm8), zmm1)
zmm1 = arg1[0xc][0].q | (*arg1)[0x32].q << 0x40
uint128_t var_178_1 = zmm1
zmm6 = _mm_sub_ps(arg1[8][0].q | (*arg1)[0x22].q << 0x40, zmm1)
zmm13 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xd2), zmm13)
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
zmm1 = _mm_sub_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc9), zmm6))
zmm11 = var_148
zmm11[0] = rsi
zmm8 = var_e8
zmm8[0].q = (_mm_unpacklo_epi32(zx.o(r14), zx.o(r10)[0].q)).q
zmm10 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(r8), zx.q(r9)), zx.q(r11))
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc0), zmm11)
float temp0_673[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd5), zmm8), zmm0)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xea), zmm10), temp0_673)
zmm5 = *(arg1 + 0x8c) | (*arg1)[0x25].q << 0x40
zmm4 = zx.o(*(arg1 + 0xcc))[0].q | (*arg1)[0x35].q << 0x40
float temp0_677[0x4] = _mm_shuffle_ps(var_158, var_158, 0xc0)
float temp0_678[0x4] = _mm_mul_ps(temp0_677, zmm7)
arg4 = data_142d3f780
zmm12 = arg4
arg4 = _mm_shuffle_epi32(var_188 ^ arg4, 0xc0)
float temp0_680[0x4] = _mm_mul_ps(arg4, zmm7)
zmm5 = _mm_sub_ps(zmm5, zmm4)
float temp0_682[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
zmm7 ^= zmm12
float temp0_684[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm7, 0xd2), temp0_682)
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_688[0x4] = _mm_sub_ps(temp0_684, _mm_mul_ps(_mm_shuffle_epi32(zmm7, 0xc9), zmm5))
zmm7 = _mm_mul_ps(_mm_shuffle_ps(temp0_688, temp0_688, 0xc0), var_118)
zmm0 = _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(temp0_688, temp0_688, 0xd5), temp0_187), zmm7)
float temp0_696[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_688, temp0_688, 0xea), var_128), zmm0)
zmm12 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xd2), zmm13), 
    _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xc9), zmm6))
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xc0), zmm11)
zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xd5), zmm8), zmm0)
zmm12 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xea), zmm10), zmm6)
float temp0_710[0x4] = _mm_mul_ps(temp0_677, zmm14)
uint128_t var_188_2 = _mm_mul_ps(arg4, zmm14)
zmm14 ^= data_142d3f780
zmm13 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm14, 0xd2), temp0_682), 
    _mm_mul_ps(_mm_shuffle_epi32(zmm14, 0xc9), zmm5))
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xc0), var_118)
zmm5 = _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm13, zmm13, 0xd5), temp0_187), zmm0)
zmm13 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xea), var_128), zmm5)
zmm9 = arg5
float temp0_725[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc0)
float temp0_727[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_678, temp0_725), var_178_1)
arg1[0xc][0] = temp0_727[0]
zmm0.q = temp0_727 u>> 0x40
(*arg1)[0x31] = _mm_shuffle_ps(temp0_727, temp0_727, 0xe5)[0]
(*arg1)[0x32] = zmm0.d
float temp0_730[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_680, temp0_725), zmm4)
(*arg1)[0x33] = temp0_730[0]
zmm0.q = temp0_730 u>> 0x40
arg1[0xd][0] = _mm_shuffle_ps(temp0_730, temp0_730, 0xe5)[0]
(*arg1)[0x35] = zmm0.d
arg3 = arg1[0xe]
zmm8 = arg1[0xf]
zmm1 = _mm_mul_ps(zmm1, temp0_725)
float temp0_733[0x4] = _mm_mul_ps(temp0_696, temp0_725)
zmm0 = _mm_mul_ps(arg3, zx.o(0))
float temp0_735[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
zmm6 = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0x1b), temp0_735)
arg4 = data_142d3f7c0
zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, arg4), zmm0)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm7 = _mm_mul_ps(_mm_shuffle_pd(arg3, arg3, 1), zmm0)
zmm10 = data_142d3f7d0
zmm7 = _mm_add_ps(_mm_mul_ps(zmm7, zmm10), zmm6)
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float temp0_747[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0xb1), zmm1)
zmm15 = data_142d3f7b0
float temp0_749[0x4] = _mm_add_ps(_mm_mul_ps(temp0_747, zmm15), zmm7)
zmm1 = data_142d3f640
float temp0_750[0x4] = _mm_mul_ps(temp0_749, zmm1)
zmm5 = _mm_mul_ps(zx.o(0), zmm8)
zmm0 = _mm_shuffle_ps(temp0_733, temp0_733, 0)
zmm6 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0x1b), zmm0), arg4), zmm5)
zmm0 = _mm_shuffle_ps(temp0_733, temp0_733, 0x55)
zmm5 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm8, zmm8, 1), zmm0), zmm10), zmm6)
float temp0_762[0x4] = _mm_shuffle_ps(temp0_733, temp0_733, 0xaa)
zmm6 = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xb1), temp0_762), zmm15), zmm5), 
    zmm1)
float temp0_768[0x4] = _mm_add_ps(temp0_750, arg3)
zmm0 = _mm_mul_ps(temp0_768, temp0_768)
zmm1 = _mm_add_ps(_mm_unpackhi_pd(zmm0, zmm0.q), zmm0)
float temp0_772[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
temp0_772[0] = temp0_772[0] f+ zmm1.d
zmm14 = _mm_cmpeq_ss(0x322bcc77, temp0_772[0], 6)
temp0_772[0] = temp0_772[0] * 0.5f
float temp0_774[0x4] = _mm_rsqrt_ss(temp0_772[0], temp0_772[0])
zmm5.d = temp0_774.d f* temp0_774[0]
zmm5.d = zmm5.d f* temp0_772[0]
zmm1.d = 0.5f f- zmm5.d
zmm1.d = zmm1.d f* temp0_774[0]
zmm1.d = zmm1.d f+ temp0_774[0]
arg3 = zmm1
arg3[0] = arg3[0] f* zmm1.d
arg3[0] = arg3[0] * temp0_772[0]
zmm4 = 0x3f000000
zmm4[0] = 0.5f - arg3[0]
zmm4[0] = zmm4[0] f* zmm1.d
zmm4[0] = zmm4[0] f+ zmm1.d
zmm14 = _mm_andnot_ps(zmm14, 0xffffffff)
float temp0_777[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_768)
zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0)
arg4 = data_142d3f660
zmm4 = _mm_and_ps(temp0_777, zmm14)
zmm14 = _mm_or_ps(_mm_andnot_ps(zmm14, arg4), zmm4)
zmm6 = _mm_add_ps(zmm6, zmm8)
float temp0_783[0x4] = _mm_mul_ps(zmm6, zmm6)
float temp0_785[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_783, temp0_783[0].q), temp0_783)
float temp0_786[0x4] = _mm_shuffle_ps(temp0_785, temp0_785, 0xe5)
temp0_786[0] = temp0_786[0] + temp0_785[0]
zmm0 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_786[0], 6), 0xffffffff)
zmm1.d = temp0_786.d f* 0.5f
float temp0_789[0x4] = _mm_rsqrt_ss(temp0_786[0], temp0_786[0])
temp0_789[0] = temp0_789[0] * temp0_789[0]
temp0_789[0] = temp0_789[0] f* zmm1.d
zmm5.d = 0.5f - temp0_789[0]
zmm5.d = zmm5.d f* temp0_789[0]
zmm5.d = zmm5.d f+ temp0_789[0]
arg3 = zmm5
arg3[0] = arg3[0] f* zmm5.d
arg3[0] = arg3[0] f* zmm1.d
zmm7.d = 0.5f - arg3[0]
zmm7.d = zmm7.d f* zmm5.d
zmm7.d = zmm7.d f+ zmm5.d
zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm6)
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
zmm7 = _mm_and_ps(zmm7, zmm0)
zmm0 = _mm_or_ps(_mm_andnot_ps(zmm0, arg4), zmm7)
zmm1 = _mm_mul_ps(zmm14, zmm0)
float temp0_798[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm1, zmm1.q), zmm1)
zmm1.d = _mm_shuffle_ps(temp0_798, temp0_798, 0xe5).d f+ temp0_798[0]
float temp0_800[0x4] = _mm_cmpeq_ss(0, zmm1.d, 2)
zmm1 = _mm_and_ps(temp0_800, 0x3f800000)
arg3 = _mm_or_ps(_mm_andnot_ps(temp0_800, 0xbf800000), zmm1)
arg1[0xe] = zmm14
arg1[0xf] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), zmm0)
zmm1 = _mm_add_ps(arg1[0x10][0].q | (*arg1)[0x42].q << 0x40, _mm_mul_ps(temp0_710, temp0_725))
arg1[0x10][0] = zmm1.d
zmm0.q = zmm1 u>> 0x40
(*arg1)[0x41] = _mm_shuffle_ps(zmm1, zmm1, 0xe5).d
(*arg1)[0x42] = zmm0.d
zmm0 = *(arg1 + 0x10c) | (*arg1)[0x45].q << 0x40
zmm1 = _mm_shuffle_epi32(zmm14, 0xc9)
zmm0 = _mm_add_ps(zmm0, _mm_mul_ps(var_188_2, temp0_725))
arg3 = zmm0
(*arg1)[0x43] = zmm0.d
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
arg3[0].q = arg3 u>> 0x40
arg1[0x11][0] = zmm0.d
(*arg1)[0x45] = arg3[0]
arg3 = zx.o(*(arg1 + 0x118))[0].q | arg1[0x12][0].q << 0x40
zmm0 = _mm_shuffle_epi32(zmm14, 0xd2)
arg4 = _mm_shuffle_epi32(zmm14, 0xff)
float temp0_816[0x4] = _mm_add_ps(arg3, _mm_mul_ps(zmm12, temp0_725))
(*arg1)[0x46] = temp0_816[0]
float temp0_817[0x4] = _mm_shuffle_ps(temp0_816, temp0_816, 0xe5)
temp0_816[0].q = temp0_816 u>> 0x40
(*arg1)[0x47] = temp0_817[0]
arg1[0x12][0] = temp0_816[0]
float temp0_818[0x4] = _mm_mul_ps(temp0_725, zmm13)
float temp0_819[0x4] =
    _mm_add_ps(zx.o(*(arg1 + 0x124))[0].q | (*arg1)[0x4b][0].q << 0x40, temp0_818)
(*arg1)[0x49] = temp0_819[0]
float temp0_820[0x4] = _mm_shuffle_ps(temp0_819, temp0_819, 0xe5)
temp0_819[0].q = temp0_819 u>> 0x40
(*arg1)[0x4a] = temp0_820[0]
(*arg1)[0x4b] = temp0_819[0]
arg3 = (*arg1)[6]
zmm4 = arg1[1][0]
zmm7 = arg1[1][0].q | arg3[0].q << 0x40
float temp0_824[0x4] = _mm_sub_ps(
    _mm_mul_ps(_mm_unpacklo_ps(arg3, zmm4[0].q)[0].q | (*arg1)[5].q << 0x40, zmm1), 
    _mm_mul_ps(*(arg1 + 0x14) | zmm4[0].q << 0x40, zmm0))
float temp0_825[0x4] = _mm_add_ps(temp0_824, temp0_824)
zmm7 = _mm_add_ps(zmm7, _mm_mul_ps(arg4, temp0_825))
float temp0_833[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_825, temp0_825, 0xd2), zmm1), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_825, temp0_825, 0xc9), zmm0)), 
    zmm7)
zmm1 = _mm_add_ps(arg1[0xc][0].q | (*arg1)[0x32].q << 0x40, temp0_833)
arg1[8][0] = zmm1.d
zmm0.q = zmm1 u>> 0x40
(*arg1)[0x21] = _mm_shuffle_ps(zmm1, zmm1, 0xe5).d
(*arg1)[0x22] = zmm0.d
zmm0 = arg1[0xf][0]
arg3 = (*arg1)[0x3d]
zmm1 = (*arg1)[0x3e]
zmm4 = (*arg1)[0x12]
arg4 = arg1[4][0]
zmm7 = arg1[4][0].q | zmm4[0].q << 0x40
zmm4 = _mm_unpacklo_ps(zmm4, arg4[0].q)[0].q | (*arg1)[0x11].q << 0x40
zmm5 = *(arg1 + 0xf4) | zmm0.q << 0x40
float temp0_837[0x4] = _mm_mul_ps(zmm4, zmm5)
zmm1 = _mm_unpacklo_ps(zmm1, zmm0.q).q | arg3[0].q << 0x40
float temp0_840[0x4] = _mm_sub_ps(temp0_837, _mm_mul_ps(*(arg1 + 0x44) | arg4[0].q << 0x40, zmm1))
float temp0_841[0x4] = _mm_add_ps(temp0_840, temp0_840)
zmm0 = (*arg1)[0x3f]
zmm7 = _mm_add_ps(zmm7, _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xc0), temp0_841))
float temp0_850[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_841, temp0_841, 0xd2), zmm5), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_841, temp0_841, 0xc9), zmm1)), 
    zmm7)
float temp0_851[0x4] = _mm_add_ps(zx.o(*(arg1 + 0xcc))[0].q | (*arg1)[0x35].q << 0x40, temp0_850)
(*arg1)[0x23] = temp0_851[0]
zmm1.q = temp0_851 u>> 0x40
arg1[9][0] = _mm_shuffle_ps(temp0_851, temp0_851, 0xe5)[0]
(*arg1)[0x25] = zmm1.d
arg3 = (*arg1)[0x3b]
float temp0_853[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
arg4 = *arg1
float temp0_854[0x4] = _mm_mul_ps(temp0_853, arg4)
float temp0_855[0x4] = _mm_unpacklo_ps((*arg1)[3], (*arg1)[2].q)
zmm1 = (*arg1)[1]
zmm5 = temp0_855.q | zmm1.q << 0x40
zmm7 = _mm_unpacklo_ps(arg4, zmm1.q)
zmm1 = _mm_unpacklo_ps(zmm1, arg4[0].q)
float temp0_858[0x4] = _mm_shuffle_ps(arg4, zmm5, 0x20)
zmm5 = arg1[0xe][0]
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm1 = zmm1.q | temp0_855[0].q << 0x40
float temp0_861[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_855, temp0_858, 0x24), zmm5)
zmm9 = data_142d3f7c0
float temp0_863[0x4] = _mm_add_ps(_mm_mul_ps(temp0_861, zmm9), temp0_854)
arg3 = (*arg1)[0x39]
float temp0_864[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
float temp0_867[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(zx.o(*(arg1 + 8))[0].q | zmm7.q << 0x40, temp0_864), zmm10), temp0_863)
arg3 = (*arg1)[0x3a]
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(zmm1, _mm_shuffle_ps(arg3, arg3, 0)), zmm15), temp0_867)
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
arg4 = arg1[3]
zmm0 = _mm_mul_ps(zmm0, arg4)
float temp0_874[0x4] = _mm_unpacklo_ps((*arg1)[0xf], (*arg1)[0xe][0].q)
arg3 = (*arg1)[0xd]
zmm5 = temp0_874.q | arg3[0].q << 0x40
zmm7 = _mm_unpacklo_ps(arg4, arg3[0].q)
float temp0_876[0x4] = _mm_unpacklo_ps(arg3, arg4[0].q)
float temp0_877[0x4] = _mm_shuffle_ps(arg4, zmm5, 0x20)
arg3 = temp0_876[0].q | temp0_874[0].q << 0x40
float temp0_878[0x4] = _mm_shuffle_ps(temp0_874, temp0_877, 0x24)
arg4 = arg1[0xf][0]
float temp0_882[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(temp0_878, _mm_shuffle_ps(arg4, arg4, 0)), zmm9), zmm0)
arg4 = (*arg1)[0x3d]
zmm0 = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(*(arg1 + 0x38) | zmm7.q << 0x40, _mm_shuffle_ps(arg4, arg4, 0)), zmm10), 
    temp0_882)
arg4 = (*arg1)[0x3e]
float temp0_890[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(arg3, _mm_shuffle_ps(arg4, arg4, 0)), zmm15), zmm0)
arg1[0xa] = zmm1
zmm1 = _mm_mul_ps(zmm1, temp0_890)
zmm0 = _mm_add_ps(_mm_unpackhi_pd(zmm1, zmm1.q), zmm1)
zmm1.d = _mm_shuffle_ps(zmm0, zmm0, 0xe5).d f+ zmm0.d
zmm0 = _mm_cmpeq_ss(0, zmm1.d, 2)
zmm6 = _mm_and_ps(0x3f800000, zmm0)
zmm0 = _mm_or_ps(_mm_andnot_ps(zmm0, 0xbf800000), zmm6)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_890)
return result
