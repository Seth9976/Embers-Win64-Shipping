// 函数: sub_1400302c0
// 地址: 0x1400302c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_d8[0x4] = arg3
float zmm3[0x4] = arg1[0xe]
float temp0[0x4] = _mm_add_ps(zmm3, zmm3)
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0)
arg3 = (*arg1)[0x39]
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0)
float zmm5[0x4] = (*arg1)[0x3b]
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0)
temp0[0].q = temp0 u>> 0x40
temp0[0] = temp0[0] * (*arg1)[0x3a]
float temp0_8[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(temp0_4, 0), temp0_2, 0x6c)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x78)
float temp0_10[0x4] = _mm_add_ps(temp0_6, temp0_9)
float temp0_11[0x4] = _mm_sub_ps(temp0_9, temp0_6)
float temp0_13[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_4, zx.o(0), 0xe5), temp0_2, 0xc)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x78)
float temp0_18[0x4] = _mm_add_ps(
    _mm_shuffle_ps(temp0, _mm_shuffle_ps(temp0_4, _mm_shuffle_ps(temp0, zx.o(0), 0x40), 0x31), 
        0x80), 
    temp0_14)
float zmm9[0x4] = data_142d3f670
float temp0_19[0x4] = _mm_sub_ps(zmm9, temp0_18)
float zmm6[0x4] = arg1[6][0]
float zmm7[0x4] = (*arg1)[0x1a]
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg1)[0x19], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_23[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm7, zx.o(0), 0x30), 0x84)
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc0), zmm6)
float temp0_28[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), temp0_21), temp0_25)
float temp0_31[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd5), temp0_23), temp0_28)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xea), zmm6)
float temp0_36[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd5), temp0_21), temp0_33)
float temp0_39[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_23), temp0_36)
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), zmm6)
float temp0_44[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xc0), temp0_21), temp0_41)
float temp0_47[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xea), temp0_23), temp0_44)
float temp0_48[0x4] = _mm_shuffle_ps(temp0_10, temp0_19, 2)
float temp0_51[0x4] = _mm_shuffle_ps(temp0_48, 
    _mm_shuffle_ps(temp0_11, _mm_shuffle_ps(temp0_48, zx.o(0), 0x22), 0x31), 0x82)
float temp0_52[0x4] = _mm_shuffle_ps(temp0_19, temp0_11, 0xa1)
float temp0_53[0x4] = _mm_shuffle_ps(temp0_52, zx.o(0), 0x42)
float temp0_54[0x4] = _mm_shuffle_ps(temp0_11, temp0_10, 0x50)
float temp0_56[0x4] = _mm_shuffle_ps(temp0_52, _mm_shuffle_ps(temp0_10, temp0_53, 0x30), 0x82)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_54, 
    _mm_shuffle_ps(temp0_19, _mm_shuffle_ps(temp0_54, zx.o(0), 0x42), 0x32), 0x82)
float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xc0), temp0_51)
float temp0_64[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xd5), temp0_56), temp0_61)
float temp0_67[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xea), temp0_59), temp0_64)
float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xc0), temp0_51)
float temp0_72[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xd5), temp0_56), temp0_69)
float temp0_75[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xea), temp0_59), temp0_72)
float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xc0), temp0_51)
float temp0_80[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xd5), temp0_56), temp0_77)
float temp0_83[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xea), temp0_59), temp0_80)
float r11 = _mm_shuffle_ps(temp0_67, temp0_67, 0xe5)[0]
float r10 = _mm_shuffle_epi32(temp0_67, 0x4e)[0]
float r8 = _mm_shuffle_epi32(temp0_75, 0x4e)[0]
float zmm4[0x4] = arg1[0xf]
float temp0_87[0x4] = _mm_add_ps(zmm4, zmm4)
float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_87)
arg3 = (*arg1)[0x3d]
float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_87)
zmm7 = (*arg1)[0x3f]
float temp0_93[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_87)
temp0_87[0].q = temp0_87 u>> 0x40
temp0_87[0] = temp0_87[0] * (*arg1)[0x3e]
float temp0_95[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(temp0_91, 0), temp0_89, 0x6c)
float temp0_96[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0x78)
float temp0_97[0x4] = _mm_add_ps(temp0_93, temp0_96)
float temp0_98[0x4] = _mm_sub_ps(temp0_96, temp0_93)
float temp0_100[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_91, zx.o(0), 0xe5), temp0_89, 0xc)
float temp0_101[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0x78)
float temp0_106[0x4] = _mm_sub_ps(zmm9, 
    _mm_add_ps(
        _mm_shuffle_ps(temp0_87, 
            _mm_shuffle_ps(temp0_91, _mm_shuffle_ps(temp0_87, zx.o(0), 0x40), 0x31), 0x80), 
        temp0_101))
zmm7 = (*arg1)[0x1d]
zmm4 = (*arg1)[0x1b]
float temp0_108[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg1[7][0], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_110[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm7, zx.o(0), 0x30), 0x84)
float temp0_112[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_106, temp0_106, 0xc0), zmm4)
float temp0_115[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0xea), temp0_108), temp0_112)
float temp0_118[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_97, temp0_97, 0xd5), temp0_110), temp0_115)
float temp0_120[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_97, temp0_97, 0xea), zmm4)
float temp0_123[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_106, temp0_106, 0xd5), temp0_108), temp0_120)
float temp0_126[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0xc0), temp0_110), temp0_123)
float temp0_128[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0xd5), zmm4)
float temp0_131[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_97, temp0_97, 0xc0), temp0_108), temp0_128)
float temp0_134[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_106, temp0_106, 0xea), temp0_110), temp0_131)
float temp0_135[0x4] = _mm_shuffle_ps(temp0_97, temp0_106, 2)
float temp0_138[0x4] = _mm_shuffle_ps(temp0_135, 
    _mm_shuffle_ps(temp0_98, _mm_shuffle_ps(temp0_135, zx.o(0), 0x22), 0x31), 0x82)
float temp0_139[0x4] = _mm_shuffle_ps(temp0_106, temp0_98, 0xa1)
float temp0_140[0x4] = _mm_shuffle_ps(temp0_139, zx.o(0), 0x42)
float temp0_141[0x4] = _mm_shuffle_ps(temp0_98, temp0_97, 0x50)
float temp0_143[0x4] = _mm_shuffle_ps(temp0_139, _mm_shuffle_ps(temp0_97, temp0_140, 0x30), 0x82)
float temp0_146[0x4] = _mm_shuffle_ps(temp0_141, 
    _mm_shuffle_ps(temp0_106, _mm_shuffle_ps(temp0_141, zx.o(0), 0x42), 0x32), 0x82)
float temp0_148[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0xc0), temp0_138)
float temp0_151[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0xd5), temp0_143), temp0_148)
float temp0_154[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0xea), temp0_146), temp0_151)
float temp0_156[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0xc0), temp0_138)
float temp0_159[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0xd5), temp0_143), temp0_156)
float temp0_162[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0xea), temp0_146), temp0_159)
float temp0_164[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_134, temp0_134, 0xc0), temp0_138)
float temp0_167[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_134, temp0_134, 0xd5), temp0_143), temp0_164)
float temp0_170[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_134, temp0_134, 0xea), temp0_146), temp0_167)
float temp0_171[0x4] = _mm_sub_ps(zx.o(arg1[8][0].q)[0].q | (*arg1)[0x22][0].q << 0x40, 
    zx.o(arg1[0xc][0].q)[0].q | (*arg1)[0x32][0].q << 0x40)
arg3 = data_142d3f780
zmm3 = _mm_unpackhi_pd(temp0_171, temp0_171[0].q)
float zmm0[0x4] = zmm3 ^ arg3
uint32_t temp0_173[0x4] = _mm_shuffle_epi32(zmm0, 0xc0)
float temp0_175[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xc1), temp0_173)
float temp0_176[0x4] = _mm_shuffle_ps(temp0_171, temp0_171, 0xd5)
float temp0_179[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_83, temp0_83, 0xc1), temp0_176), temp0_175)
zmm7 = temp0_171 ^ arg3
float temp0_181[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, temp0_171, 0x50), temp0_171, 0x42)
float temp0_182[0x4] = _mm_shuffle_ps(zmm7, temp0_171, 0x40)
arg3 ^= _mm_shuffle_ps(temp0_171, temp0_171, 0xe5)
float temp0_184[0x4] = _mm_shuffle_ps(arg3, temp0_171, 0xa0)
float temp0_186[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, temp0_171, 0), temp0_171, 0xc8)
float temp0_187[0x4] = _mm_shuffle_ps(temp0_171, arg3, 0xca)
float temp0_188[0x4] = _mm_shuffle_ps(temp0_184, arg3, 0xc2)
float temp0_189[0x4] = _mm_shuffle_ps(arg3, zmm0, 0x20)
float temp0_192[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(_mm_unpacklo_ps(zmm0, zmm3[0].q), temp0_189, 0x84), temp0_179)
float temp0_194[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_83, temp0_75, 0xd5), temp0_173)
float temp0_199[0x4] = _mm_add_ps(
    _mm_mul_ps(temp0_181, 
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_83, temp0_83, 0xda), temp0_176), temp0_194)), 
    temp0_192)
float temp0_201[0x4] = _mm_shuffle_ps(temp0_83, _mm_shuffle_ps(temp0_75, temp0_83, 0x30), 0x80)
float temp0_203[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xc0), temp0_187)
float temp0_205[0x4] = _mm_add_ps(_mm_mul_ps(temp0_201, temp0_182), temp0_203)
arg3 = (*arg1)[0x1e]
float temp0_206[0x4] = _mm_add_ps(temp0_199, arg3)
float temp0_207[0x4] = _mm_mul_ps(temp0_188, temp0_205)
float temp0_208[0x4] = _mm_shuffle_ps(temp0_83, temp0_75, 0xc)
float temp0_210[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_208, temp0_208, 0x78), temp0_187)
float temp0_215[0x4] = _mm_add_ps(
    _mm_mul_ps(temp0_186, 
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_83, temp0_75, 0xd6), temp0_182), temp0_210)), 
    temp0_207)
float temp0_218[0x4] =
    _mm_add_ps(_mm_shuffle_ps(arg3, _mm_shuffle_ps(arg3, arg3, 0x30), 0x84), temp0_215)
zmm3 = (*arg1)[0x35]
float var_108[0x4] = zmm3
float temp0_219[0x4] = _mm_sub_ps(zx.o(*(arg1 + 0x8c))[0].q | (*arg1)[0x25][0].q << 0x40, 
    zx.o(*(arg1 + 0xcc))[0].q | zmm3[0].q << 0x40)
float zmm10[0x4] = _mm_unpackhi_pd(temp0_219, temp0_219[0].q)
zmm7 = data_142d3f780
zmm3 = zmm10 ^ zmm7
float temp0_221[0x4] = _mm_shuffle_ps(temp0_162, temp0_162, 0xc1)
zmm9 = _mm_shuffle_epi32(zmm3, 0xc0)
float temp0_223[0x4] = _mm_mul_ps(temp0_221, zmm9)
float temp0_224[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0xd5)
float temp0_227[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_170, temp0_170, 0xc1), temp0_224), temp0_223)
zmm6 = temp0_219 ^ zmm7
float temp0_229[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, temp0_219, 0x50), temp0_219, 0x42)
uint32_t zmm12[0x4] = _mm_shuffle_ps(zmm6, temp0_219, 0x40)
zmm4 = _mm_shuffle_ps(temp0_219, temp0_219, 0xe5) ^ zmm7
float temp0_232[0x4] = _mm_shuffle_ps(zmm4, temp0_219, 0xa0)
float temp0_234[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, temp0_219, 0), temp0_219, 0xc8)
float temp0_235[0x4] = _mm_shuffle_ps(temp0_219, zmm4, 0xca)
float temp0_236[0x4] = _mm_shuffle_ps(temp0_232, zmm4, 0xc2)
float temp0_237[0x4] = _mm_shuffle_ps(zmm4, zmm3, 0x20)
float temp0_240[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(_mm_unpacklo_ps(zmm3, zmm10[0].q), temp0_237, 0x84), temp0_227)
float temp0_242[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_170, temp0_162, 0xd5), zmm9)
float temp0_247[0x4] = _mm_add_ps(
    _mm_mul_ps(temp0_229, 
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_170, temp0_170, 0xda), temp0_224), temp0_242)), 
    temp0_240)
float temp0_249[0x4] = _mm_shuffle_ps(temp0_170, _mm_shuffle_ps(temp0_162, temp0_170, 0x30), 0x80)
float temp0_251[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_154, temp0_154, 0xc0), temp0_235)
float temp0_254[0x4] = _mm_mul_ps(temp0_236, _mm_add_ps(_mm_mul_ps(temp0_249, zmm12), temp0_251))
float temp0_255[0x4] = _mm_shuffle_ps(temp0_170, temp0_162, 0xc)
float temp0_257[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_255, temp0_255, 0x78), temp0_235)
float temp0_261[0x4] = _mm_mul_ps(temp0_234, 
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_170, temp0_162, 0xd6), zmm12), temp0_257))
float zmm8[0x4] = (*arg1)[0x1f]
float temp0_262[0x4] = _mm_add_ps(temp0_261, temp0_254)
float temp0_265[0x4] =
    _mm_add_ps(_mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm8, zmm8, 0x30), 0x84), temp0_262)
float temp0_267[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_206, temp0_218, 5), temp0_218, 0xd8)
temp0_218[0] = _mm_unpackhi_pd(temp0_206, temp0_206[0].q)[0]
float temp0_269[0x4] = _mm_add_ps(temp0_247, zmm8)
float temp0_272[0x4] =
    _mm_add_ps(_mm_shuffle_ps(_mm_shuffle_ps(temp0_269, temp0_265, 5), temp0_265, 0xd8), temp0_267)
float temp0_273[0x4] = _mm_add_ps(temp0_206, temp0_269)
temp0_269[0].q = temp0_269 u>> 0x40
temp0_265[0] = temp0_269[0]
zmm0 = *arg4
uint32_t temp0_274 = _mm_movemask_ps(zmm0)
float temp0_275[0x4] = _mm_add_ps(temp0_265, temp0_218)
float rdi = temp0_272[0]
float zmm1[0x4] = _mm_shuffle_epi32(temp0_272, 0x4e)
float rbx = _mm_shuffle_ps(temp0_272, temp0_272, 0xe5)[0]
float temp0_278[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0xe5)
float rbp = zmm1[0]
float r14 = temp0_275[0]
zmm1 = _mm_shuffle_epi32(temp0_275, 0x4e)
float rsi = _mm_shuffle_ps(temp0_275, temp0_275, 0xe5)[0]
float r9 = zmm1[0]
float temp0_282[0x4] = _mm_shuffle_ps(temp0_273, _mm_shuffle_ps(0x800000, temp0_273, 0x20), 0x24)
float temp0_283[0x4] = _mm_shuffle_ps(temp0_273, temp0_273, 0xe5)
zmm6 = _mm_unpackhi_pd(temp0_273, temp0_273[0].q)
float var_118[0x4] = zmm8
float temp0_286[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(temp0_282, data_142d3f770), data_142d3f5c0, 2)
char result
float zmm11[0x4]
float zmm13[0x4]
float zmm14[0x4]
float zmm15[0x4]

if (temp0_274 != 0xf)
    result = _mm_movemask_ps(_mm_cmpeq_epi32(zx.o(0), zmm0) | temp0_286)
    zmm4 = zx.o(rdi)
    zmm10 = zx.o(rbx)
    zmm7 = zx.o(rbp)
    
    if (result != 0xf)
    label_140030e1f:
        zmm1 = zx.o(0)
        zmm1[0] = zmm6[0]
        float var_178_2[0x4] = zmm1
        float temp0_398[0x4] = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm7, zmm1, 0x30), 0x84)
        zmm15 = zmm4
        zmm4 = zx.o(r14)
        zmm11 = zx.o(rsi)
        zmm1 = _mm_unpacklo_epi32(zmm4, zmm11[0].q)
        float temp0_401[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm4, 0), zx.o(0), 0x42)
        zmm14 = zx.o(r9)
        zmm12 = data_142d3f660
        float temp0_404[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, temp0_273, 0), 
            _mm_shuffle_ps(zmm14, zmm4, 0xc0), 0x22)
        zmm12[0] = zmm10[0]
        zmm12 = _mm_mul_ps(zmm12, temp0_404)
        arg3 = zx.o(0)
        arg3[0] = temp0_283[0]
        float temp0_407[0x4] = _mm_shuffle_ps(arg3, _mm_shuffle_ps(zmm11, arg3, 0x30), 0x84)
        zmm12 = _mm_sub_ps(zmm12, 
            _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm15, 0), zx.o(0), 0x42), temp0_407))
        float temp0_412[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
        float temp0_413[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
        zmm9 = 0x3f800000
        float temp0_417[0x4] = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(0x3f800000, zmm14, 0), temp0_401), 
            _mm_mul_ps(zmm1[0].q << 0x40, zx.o(0)))
        zmm1 = zx.o(0)
        zmm1[0] = zmm7[0]
        float temp0_419[0x4] = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(temp0_273, zmm1, 0x32), 0x84)
        float temp0_420[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
        zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
        float temp0_423[0x4] = _mm_mul_ps(temp0_419, _mm_shuffle_ps(temp0_283, zmm15, 0))
        float temp0_426[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, temp0_273, 0), temp0_398), temp0_423)
        float temp0_427[0x4] = _mm_mul_ps(temp0_412, zmm12)
        float temp0_429[0x4] = _mm_add_ps(_mm_mul_ps(temp0_413, temp0_420), temp0_427)
        float temp0_431[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_417, temp0_417, 0xd8), temp0_426)
        float temp0_433[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_431, temp0_431, 1), temp0_431)
        float temp0_436[0x4] =
            _mm_sub_ps(temp0_429, _mm_add_ps(_mm_shuffle_ps(temp0_433, temp0_433, 0x39), temp0_433))
        temp0_436[0] - 0f
        
        if (temp0_436[0] != 0f || not(is_ordered.d(temp0_436[0], 0f)))
            float temp0_439[0x4] = _mm_shuffle_ps(temp0_273, 
                _mm_shuffle_ps(zmm10, _mm_shuffle_ps(temp0_273, zmm15, 0x84), 0x20), 0x24)
            float temp0_440[0x4] = _mm_shuffle_ps(temp0_273, zmm15, 0)
            float temp0_441[0x4] = _mm_mul_ps(temp0_417[0].q | temp0_417[0].q << 0x40, temp0_440)
            float temp0_444[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_417, temp0_417, 0x20), temp0_439), temp0_441)
            zmm8 = zmm1
            zmm1 = data_142d3f660
            zmm1[0] = zmm14[0]
            float temp0_446[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_420, temp0_398), temp0_444)
            arg3 = data_142d4cc30
            float temp0_448[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, arg3, 0), arg3, 0xe2)
            float temp0_450[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_426, temp0_426, 0x66), temp0_448)
            float temp0_453[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_426, temp0_426, 0x33), zmm1), temp0_450)
            float temp0_455[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_413, temp0_401), temp0_453)
            float temp0_456[0x4] = __mulps_xmmps_memps(zmm1, temp0_412)
            float temp0_458[0x4] = _mm_mul_ps(_mm_unpackhi_pd(temp0_426, temp0_426[0].q), temp0_401)
            float temp0_460[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zx.o(0), 0), zx.o(0), 0xe2)
            float temp0_463[0x4] = _mm_sub_ps(temp0_456, 
                _mm_add_ps(_mm_mul_ps(temp0_426[0].q | temp0_426[0].q << 0x40, temp0_460), 
                    temp0_458))
            float temp0_464[0x4] = _mm_mul_ps(temp0_439, zmm12)
            float temp0_466[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_417, temp0_417, 0xcc), temp0_398)
            float temp0_467[0x4] = _mm_shuffle_ps(var_178_2, zmm8, 0x11)
            float temp0_471[0x4] = _mm_sub_ps(temp0_464, 
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_417, temp0_417, 0x66), temp0_467), 
                    temp0_466))
            float temp0_472[0x4] = _mm_div_ps(data_142fc92f0, temp0_436)
            float temp0_473[0x4] = _mm_mul_ps(temp0_471, temp0_472)
            float temp0_474[0x4] = _mm_mul_ps(temp0_455, temp0_472)
            zmm5 = _mm_shuffle_ps(_mm_mul_ps(temp0_446, temp0_472), 
                _mm_mul_ps(temp0_472, temp0_463), 0x77)
            zmm9 = _mm_shuffle_ps(temp0_473, temp0_474, 0x77)
            zmm3 = _mm_shuffle_ps(temp0_473, temp0_474, 0x22)
        else
            zmm3 = data_142d4cc20
            zmm5 = data_142d4cc30
        
        zmm13 = temp0_75
        zmm12 = temp0_67
        zmm15 = temp0_170
        zmm14 = data_142d3f780
        zmm8 = _mm_shuffle_ps(zmm9, zmm9, 0xe5)
        zmm1 = _mm_unpackhi_pd(zmm9, zmm9[0].q)
        zmm10 = _mm_shuffle_ps(zmm9, zmm9, 0xe7)
        zmm11 = _mm_shuffle_ps(zmm3, zmm3, 0xe5)
        zmm4 = _mm_unpackhi_pd(zmm3, zmm3[0].q)
        zmm6 = _mm_shuffle_ps(zmm3, zmm3, 0xe7)
        arg3 = _mm_shuffle_ps(zmm5, zmm5, 0xe5)
        zmm7 = _mm_unpackhi_pd(zmm5, zmm5[0].q)
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xe7)
    else
        arg3 = _mm_unpacklo_epi32(zmm7, 0x800000[0].q)
        float temp0_387[0x4] = __cmpps_xmmps_memps_immb(
            _mm_unpacklo_epi64(_mm_unpacklo_epi32(zmm4, zmm10[0].q), arg3[0].q) & data_142d3f770, 
            data_142d3f5c0, 2)
        zmm0 = _mm_cmpeq_epi32(zmm0, zx.o(0))
        result = _mm_movemask_ps(_mm_or_ps(temp0_387, zmm0))
        
        if (result != 0xf)
            goto label_140030e1f
        
        result = _mm_movemask_ps(_mm_or_ps(
            __cmpps_xmmps_memps_immb(
                _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(r14), zx.o(rsi)[0].q), 
                    _mm_unpacklo_epi32(zx.o(r9), 0x800000[0].q)[0].q) & data_142d3f770, 
                data_142d3f5c0, 2), 
            zmm0))
        
        if (result != 0xf)
            goto label_140030e1f
        
        zmm7 = 0x3f800000
        zmm0 = zx.o(0)
        arg3 = zx.o(0)
        zmm5 = zx.o(0)
        zmm6 = zx.o(0)
        zmm4 = zx.o(0)
        zmm11 = 0x3f800000
        zmm3 = zx.o(0)
        zmm10 = zx.o(0)
        zmm1 = zx.o(0)
        zmm8 = zx.o(0)
        zmm9 = 0x3f800000
        zmm13 = temp0_75
        zmm12 = temp0_67
        zmm15 = temp0_170
        zmm14 = data_142d3f780
    
    zmm5 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zmm5, arg3[0].q), 
        _mm_unpacklo_ps(zmm7, zmm0[0].q)[0].q)
    float temp0_585[0x4] = _mm_unpacklo_ps(zmm3, zmm11[0].q)
    zmm4 = _mm_unpacklo_epi32(zmm4, zmm6[0].q)
    zmm3 = temp0_585[0].q | zmm4[0].q << 0x40
    float temp0_587[0x4] = _mm_unpacklo_ps(zmm9, zmm8[0].q)
    float temp0_588[0x4] = _mm_unpacklo_ps(zmm1, zmm10[0].q)
    zmm0 = *arg2
    zmm1 = (*arg2)[1]
    float temp0_590[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_587[0].q | temp0_588[0].q << 0x40)
    float temp0_593[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3), temp0_590)
    arg3 = (*arg2)[2]
    float temp0_596[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), zmm5), temp0_593)
    zmm1 = zx.o(arg1[0xc][0].q)[0].q | (*arg1)[0x32][0].q << 0x40
    float temp0_597[0x4] = _mm_sub_ps(zx.o(arg1[8][0].q)[0].q | (*arg1)[0x22][0].q << 0x40, zmm1)
    float temp0_598[0x4] = _mm_shuffle_ps(temp0_597, temp0_597, 0xc9)
    float temp0_600[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_596, temp0_596, 0xd2), temp0_598)
    float temp0_601[0x4] = _mm_shuffle_ps(temp0_597, temp0_597, 0xd2)
    float temp0_604[0x4] =
        _mm_sub_ps(temp0_600, _mm_mul_ps(_mm_shuffle_ps(temp0_596, temp0_596, 0xc9), temp0_601))
    float temp0_607[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(r11), zmm12, 0), 
        _mm_shuffle_ps(zx.o(r10), zmm12, 0x30), 0x82)
    zmm12 = (*arg1)[0x1e]
    zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xc0), temp0_596)
    float temp0_611[0x4] = _mm_mul_ps(_mm_shuffle_epi32(var_118 ^ zmm14, 0xc0), temp0_596)
    zmm13 = _mm_unpacklo_epi64(__punpckldq_xmmdq_memdq(zmm13, temp0_278), zx.o(r8)[0].q)
    float temp0_615[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_604, temp0_604, 0xc0), temp0_607)
    float temp0_618[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_604, temp0_604, 0xd5), zmm13), temp0_615)
    float temp0_621[0x4] =
        _mm_add_ps(_mm_mul_ps(temp0_83, _mm_shuffle_ps(temp0_604, temp0_604, 0xea)), temp0_618)
    zmm11 = zx.o(*(arg1 + 0xcc))
    float temp0_624[0x4] = _mm_sub_ps(zx.o(*(arg1 + 0x8c))[0].q | (*arg1)[0x25][0].q << 0x40, 
        _mm_shuffle_ps(zmm11, _mm_shuffle_ps(var_108, zmm11, 0x30), 0x84))
    float temp0_625[0x4] = _mm_shuffle_ps(temp0_624, temp0_624, 0xc9)
    arg3 = temp0_596 ^ zmm14
    float temp0_627[0x4] = _mm_mul_ps(_mm_shuffle_epi32(arg3, 0xd2), temp0_625)
    float temp0_628[0x4] = _mm_shuffle_ps(temp0_624, temp0_624, 0xd2)
    float temp0_631[0x4] =
        _mm_sub_ps(temp0_627, _mm_mul_ps(_mm_shuffle_epi32(arg3, 0xc9), temp0_628))
    float temp0_633[0x4] = _mm_mul_ps(temp0_154, _mm_shuffle_ps(temp0_631, temp0_631, 0xc0))
    float temp0_636[0x4] =
        _mm_add_ps(_mm_mul_ps(temp0_162, _mm_shuffle_ps(temp0_631, temp0_631, 0xd5)), temp0_633)
    float temp0_639[0x4] =
        _mm_add_ps(_mm_mul_ps(zmm15, _mm_shuffle_ps(temp0_631, temp0_631, 0xea)), temp0_636)
    float temp0_640[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xc0)
    zmm12 = _mm_add_ps(_mm_mul_ps(zmm12, temp0_640), zmm1)
    float temp0_643[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xe5)
    zmm1 = _mm_unpackhi_pd(zmm12, zmm12[0].q)
    arg1[0xc][0] = zmm12[0]
    (*arg1)[0x31] = temp0_643[0]
    (*arg1)[0x32] = zmm1[0]
    float temp0_645[0x4] = _mm_mul_ps(temp0_611, temp0_640)
    zmm11 = _mm_add_ps(_mm_shuffle_ps(zmm11, _mm_shuffle_ps((*arg1)[0x35], zmm11, 0x30), 0x84), 
        temp0_645)
    float temp0_649[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xe5)
    zmm1 = _mm_unpackhi_pd(zmm11, zmm11[0].q)
    (*arg1)[0x33] = zmm11[0]
    arg1[0xd][0] = temp0_649[0]
    (*arg1)[0x35] = zmm1[0]
    zmm0 = arg1[0xe]
    zmm13 = arg1[0xf]
    float temp0_651[0x4] = _mm_mul_ps(temp0_621, temp0_640)
    zmm7 = _mm_mul_ps(temp0_640, temp0_639)
    zmm1 = zx.o(0)
    float temp0_653[0x4] = _mm_mul_ps(zmm0, zx.o(0))
    float temp0_654[0x4] = _mm_shuffle_ps(temp0_651, temp0_651, 0)
    float temp0_656[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x1b), temp0_654)
    zmm8 = data_142d3f7c0
    float temp0_658[0x4] = _mm_add_ps(_mm_mul_ps(temp0_656, zmm8), temp0_653)
    float temp0_659[0x4] = _mm_shuffle_ps(temp0_651, temp0_651, 0x55)
    float temp0_661[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm0, zmm0, 1), temp0_659)
    zmm9 = data_142d3f7d0
    zmm4 = _mm_add_ps(_mm_mul_ps(temp0_661, zmm9), temp0_658)
    float temp0_664[0x4] = _mm_shuffle_ps(temp0_651, temp0_651, 0xaa)
    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xb1), temp0_664)
else
    result = _mm_movemask_ps(temp0_286)
    zmm12 = zx.o(rdi)
    zmm10 = zx.o(rbx)
    zmm14 = zx.o(rbp)
    
    if (result != 0xf)
    label_140030b15:
        zmm1 = zx.o(0)
        zmm1[0] = zmm6[0]
        float var_138_1[0x4] = zmm1
        float temp0_299[0x4] = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm14, zmm1, 0x30), 0x84)
        zmm1 = zx.o(r14)
        zmm11 = zx.o(rsi)
        zmm4 = _mm_unpacklo_epi32(zmm1, zmm11[0].q)
        float temp0_302[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1, 0), zx.o(0), 0x42)
        arg3 = zx.o(r9)
        zmm5 = data_142d3f660
        float var_148_1[0x4] = zmm1
        float temp0_305[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, temp0_273, 0), 
            _mm_shuffle_ps(arg3, zmm1, 0xc0), 0x22)
        zmm5[0] = zmm10[0]
        float temp0_306[0x4] = _mm_mul_ps(zmm5, temp0_305)
        zmm6 = zx.o(0)
        zmm6[0] = temp0_283[0]
        float temp0_308[0x4] = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm11, zmm6, 0x30), 0x84)
        float temp0_312[0x4] = _mm_sub_ps(temp0_306, 
            _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(zmm14, zmm12, 0), zx.o(0), 0x42), temp0_308))
        float temp0_313[0x4] = _mm_shuffle_ps(temp0_312, temp0_312, 0)
        float temp0_314[0x4] = _mm_shuffle_ps(temp0_312, temp0_312, 0x55)
        zmm6 = zmm10
        zmm10 = 0x3f800000
        float temp0_319[0x4] = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(0x3f800000, arg3, 0), temp0_302), 
            _mm_mul_ps(_mm_unpacklo_epi64(zx.o(0), zmm4[0].q), zx.o(0)))
        zmm5 = zx.o(0)
        zmm5[0] = zmm14[0]
        float temp0_321[0x4] = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(temp0_273, zmm5, 0x32), 0x84)
        float temp0_322[0x4] = _mm_shuffle_ps(temp0_312, temp0_312, 0xaa)
        float temp0_323[0x4] = _mm_shuffle_ps(temp0_312, temp0_312, 0xff)
        float temp0_325[0x4] = _mm_mul_ps(temp0_321, _mm_shuffle_ps(temp0_283, zmm12, 0))
        float temp0_328[0x4] = _mm_sub_ps(
            __mulps_xmmps_memps(_mm_shuffle_ps(zmm6, temp0_273, 0), temp0_299), temp0_325)
        float temp0_329[0x4] = _mm_mul_ps(temp0_313, temp0_323)
        float temp0_331[0x4] = _mm_add_ps(_mm_mul_ps(temp0_314, temp0_322), temp0_329)
        float temp0_333[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_319, temp0_319, 0xd8), temp0_328)
        float temp0_335[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_333, temp0_333, 1), temp0_333)
        float temp0_338[0x4] =
            _mm_sub_ps(temp0_331, _mm_add_ps(_mm_shuffle_ps(temp0_335, temp0_335, 0x39), temp0_335))
        temp0_338[0] - 0f
        
        if (temp0_338[0] != 0f || not(is_ordered.d(temp0_338[0], 0f)))
            zmm0 = zmm12
            float temp0_341[0x4] = _mm_shuffle_ps(temp0_273, 
                _mm_shuffle_ps(zmm6, _mm_shuffle_ps(temp0_273, zmm0, 0x84), 0x20), 0x24)
            float temp0_342[0x4] = _mm_shuffle_ps(temp0_273, zmm0, 0)
            float temp0_343[0x4] = _mm_mul_ps(temp0_319[0].q | temp0_319[0].q << 0x40, temp0_342)
            float temp0_346[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_319, temp0_319, 0x20), temp0_341), temp0_343)
            zmm13 = zmm5
            zmm5 = data_142d3f660
            zmm5[0] = arg3[0]
            zmm12 = temp0_299
            float temp0_348[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_322, zmm12), temp0_346)
            zmm1 = data_142d4cc30
            float temp0_350[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg3, zmm1, 0), zmm1, 0xe2)
            float temp0_352[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_328, temp0_328, 0x66), temp0_350)
            float temp0_355[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_328, temp0_328, 0x33), zmm5), temp0_352)
            float temp0_357[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_314, temp0_302), temp0_355)
            float temp0_358[0x4] = _mm_mul_ps(zmm5, temp0_313)
            float temp0_360[0x4] = _mm_mul_ps(_mm_unpackhi_pd(temp0_328, temp0_328[0].q), temp0_302)
            float temp0_362[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(var_148_1, zx.o(0), 0), zx.o(0), 0xe2)
            float temp0_365[0x4] = _mm_sub_ps(temp0_358, 
                _mm_add_ps(_mm_mul_ps(temp0_328[0].q | temp0_328[0].q << 0x40, temp0_362), 
                    temp0_360))
            float temp0_366[0x4] = _mm_mul_ps(temp0_341, temp0_323)
            float temp0_368[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_319, temp0_319, 0xcc), zmm12)
            float temp0_369[0x4] = _mm_shuffle_ps(var_138_1, zmm13, 0x11)
            float temp0_373[0x4] = _mm_sub_ps(temp0_366, 
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_319, temp0_319, 0x66), temp0_369), 
                    temp0_368))
            float temp0_374[0x4] = _mm_div_ps(data_142fc92f0, temp0_338)
            float temp0_375[0x4] = _mm_mul_ps(temp0_373, temp0_374)
            float temp0_376[0x4] = _mm_mul_ps(temp0_357, temp0_374)
            zmm14 = _mm_shuffle_ps(_mm_mul_ps(temp0_348, temp0_374), 
                _mm_mul_ps(temp0_374, temp0_365), 0x77)
            zmm10 = _mm_shuffle_ps(temp0_375, temp0_376, 0x77)
            zmm3 = _mm_shuffle_ps(temp0_375, temp0_376, 0x22)
        else
            zmm3 = data_142d4cc20
            zmm14 = data_142d4cc30
        
        zmm11 = temp0_75
        zmm12 = temp0_67
        zmm15 = temp0_170
        zmm13 = temp0_154
        zmm9 = _mm_shuffle_ps(zmm10, zmm10, 0xe5)
        arg3 = _mm_unpackhi_pd(zmm10, zmm10[0].q)
        zmm8 = _mm_shuffle_ps(zmm10, zmm10, 0xe7)
        zmm6 = _mm_shuffle_ps(zmm3, zmm3, 0xe5)
        zmm5 = _mm_unpackhi_pd(zmm3, zmm3[0].q)
        zmm7 = _mm_shuffle_ps(zmm3, zmm3, 0xe7)
        zmm0 = _mm_shuffle_ps(zmm14, zmm14, 0xe5)
        zmm1 = _mm_unpackhi_pd(zmm14, zmm14[0].q)
        zmm4 = _mm_shuffle_ps(zmm14, zmm14, 0xe7)
    else
        arg3 = _mm_unpacklo_epi32(zmm14, 0x800000[0].q)
        result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
            _mm_unpacklo_epi64(_mm_unpacklo_epi32(zmm12, zmm10[0].q), arg3[0].q) & data_142d3f770, 
            data_142d3f5c0, 2))
        
        if (result != 0xf)
            goto label_140030b15
        
        result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
            _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(r14), zx.o(rsi)[0].q), 
                _mm_unpacklo_epi32(zx.o(r9), 0x800000[0].q)[0].q) & data_142d3f770, 
            data_142d3f5c0, 2))
        
        if (result != 0xf)
            goto label_140030b15
        
        zmm1 = 0x3f800000
        zmm4 = zx.o(0)
        zmm0 = zx.o(0)
        zmm14 = zx.o(0)
        zmm7 = zx.o(0)
        zmm5 = zx.o(0)
        zmm6 = 0x3f800000
        zmm3 = zx.o(0)
        zmm8 = zx.o(0)
        arg3 = zx.o(0)
        zmm9 = zx.o(0)
        zmm10 = 0x3f800000
        zmm11 = temp0_75
        zmm12 = temp0_67
        zmm15 = temp0_170
        zmm13 = temp0_154
    
    float temp0_489[0x4] = _mm_unpacklo_ps(zmm14, zmm0[0].q)
    float temp0_490[0x4] = _mm_unpacklo_ps(zmm1, zmm4[0].q)
    zmm14 = temp0_489[0].q | temp0_490[0].q << 0x40
    float temp0_491[0x4] = _mm_unpacklo_ps(zmm3, zmm6[0].q)
    float temp0_492[0x4] = _mm_unpacklo_ps(zmm5, zmm7[0].q)
    zmm3 = temp0_491[0].q | temp0_492[0].q << 0x40
    float temp0_493[0x4] = _mm_unpacklo_ps(zmm10, zmm9[0].q)
    arg3 = _mm_unpacklo_epi32(arg3, zmm8[0].q)
    zmm0 = *arg2
    zmm1 = (*arg2)[1]
    float temp0_496[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_493[0].q | arg3[0].q << 0x40)
    float temp0_499[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3), temp0_496)
    arg3 = (*arg2)[2]
    float temp0_502[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), zmm14), temp0_499)
    zmm1 = zx.o(arg1[0xc][0].q)[0].q | (*arg1)[0x32][0].q << 0x40
    float temp0_503[0x4] = _mm_sub_ps(zx.o(arg1[8][0].q)[0].q | (*arg1)[0x22][0].q << 0x40, zmm1)
    float temp0_504[0x4] = _mm_shuffle_ps(temp0_503, temp0_503, 0xc9)
    float temp0_506[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_502, temp0_502, 0xd2), temp0_504)
    float temp0_507[0x4] = _mm_shuffle_ps(temp0_503, temp0_503, 0xd2)
    float temp0_510[0x4] =
        _mm_sub_ps(temp0_506, _mm_mul_ps(_mm_shuffle_ps(temp0_502, temp0_502, 0xc9), temp0_507))
    float temp0_513[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(r11), zmm12, 0), 
        _mm_shuffle_ps(zx.o(r10), zmm12, 0x30), 0x82)
    zmm12 = (*arg1)[0x1e]
    zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xc0), temp0_502)
    zmm6 = data_142d3f780
    float temp0_517[0x4] = _mm_mul_ps(_mm_shuffle_epi32(var_118 ^ zmm6, 0xc0), temp0_502)
    zmm11 = _mm_unpacklo_epi64(__punpckldq_xmmdq_memdq(zmm11, temp0_278), zx.o(r8)[0].q)
    float temp0_521[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_510, temp0_510, 0xc0), temp0_513)
    float temp0_524[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_510, temp0_510, 0xd5), zmm11), temp0_521)
    float temp0_527[0x4] =
        _mm_add_ps(_mm_mul_ps(temp0_83, _mm_shuffle_ps(temp0_510, temp0_510, 0xea)), temp0_524)
    zmm11 = zx.o(*(arg1 + 0xcc))
    float temp0_530[0x4] = _mm_sub_ps(zx.o(*(arg1 + 0x8c))[0].q | (*arg1)[0x25][0].q << 0x40, 
        _mm_shuffle_ps(zmm11, _mm_shuffle_ps(var_108, zmm11, 0x30), 0x84))
    float temp0_531[0x4] = _mm_shuffle_ps(temp0_530, temp0_530, 0xc9)
    arg3 = temp0_502 ^ zmm6
    float temp0_533[0x4] = _mm_mul_ps(_mm_shuffle_epi32(arg3, 0xd2), temp0_531)
    float temp0_534[0x4] = _mm_shuffle_ps(temp0_530, temp0_530, 0xd2)
    float temp0_537[0x4] =
        _mm_sub_ps(temp0_533, _mm_mul_ps(_mm_shuffle_epi32(arg3, 0xc9), temp0_534))
    float temp0_539[0x4] = _mm_mul_ps(zmm13, _mm_shuffle_ps(temp0_537, temp0_537, 0xc0))
    float temp0_542[0x4] =
        _mm_add_ps(_mm_mul_ps(temp0_162, _mm_shuffle_ps(temp0_537, temp0_537, 0xd5)), temp0_539)
    float temp0_545[0x4] =
        _mm_add_ps(_mm_mul_ps(zmm15, _mm_shuffle_ps(temp0_537, temp0_537, 0xea)), temp0_542)
    float temp0_546[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xc0)
    zmm12 = _mm_add_ps(_mm_mul_ps(zmm12, temp0_546), zmm1)
    float temp0_549[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xe5)
    zmm1 = _mm_unpackhi_pd(zmm12, zmm12[0].q)
    arg1[0xc][0] = zmm12[0]
    (*arg1)[0x31] = temp0_549[0]
    (*arg1)[0x32] = zmm1[0]
    float temp0_551[0x4] = _mm_mul_ps(temp0_517, temp0_546)
    zmm11 = _mm_add_ps(_mm_shuffle_ps(zmm11, _mm_shuffle_ps((*arg1)[0x35], zmm11, 0x30), 0x84), 
        temp0_551)
    float temp0_555[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xe5)
    zmm1 = _mm_unpackhi_pd(zmm11, zmm11[0].q)
    (*arg1)[0x33] = zmm11[0]
    arg1[0xd][0] = temp0_555[0]
    (*arg1)[0x35] = zmm1[0]
    zmm0 = arg1[0xe]
    zmm13 = arg1[0xf]
    float temp0_557[0x4] = _mm_mul_ps(temp0_527, temp0_546)
    zmm7 = _mm_mul_ps(temp0_546, temp0_545)
    zmm1 = zx.o(0)
    float temp0_559[0x4] = _mm_mul_ps(zmm0, zx.o(0))
    float temp0_560[0x4] = _mm_shuffle_ps(temp0_557, temp0_557, 0)
    float temp0_562[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x1b), temp0_560)
    zmm8 = data_142d3f7c0
    float temp0_564[0x4] = _mm_add_ps(_mm_mul_ps(temp0_562, zmm8), temp0_559)
    float temp0_565[0x4] = _mm_shuffle_ps(temp0_557, temp0_557, 0x55)
    float temp0_567[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm0, zmm0, 1), temp0_565)
    zmm9 = data_142d3f7d0
    zmm4 = _mm_add_ps(_mm_mul_ps(temp0_567, zmm9), temp0_564)
    float temp0_570[0x4] = _mm_shuffle_ps(temp0_557, temp0_557, 0xaa)
    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xb1), temp0_570)
zmm10 = data_142d3f7b0
float temp0_668[0x4] = _mm_add_ps(_mm_mul_ps(zmm3, zmm10), zmm4)
zmm6 = data_142d3f640
float temp0_669[0x4] = _mm_mul_ps(temp0_668, zmm6)
float temp0_670[0x4] = _mm_mul_ps(zmm1, zmm13)
float temp0_671[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_675[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x1b), temp0_671), zmm8), temp0_670)
float temp0_676[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
float temp0_680[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm13, zmm13, 1), temp0_676), zmm9), temp0_675)
float temp0_681[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
float temp0_686[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xb1), temp0_681), zmm10), 
        temp0_680), 
    zmm6)
float temp0_687[0x4] = _mm_add_ps(temp0_669, zmm0)
float temp0_688[0x4] = _mm_mul_ps(temp0_687, temp0_687)
float temp0_690[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_688, temp0_688[0].q), temp0_688)
float temp0_691[0x4] = _mm_shuffle_ps(temp0_690, temp0_690, 0xe5)
temp0_691[0] = temp0_691[0] + temp0_690[0]
float temp0_692[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_691[0], 6)
zmm1 = 0x3f000000
temp0_691[0] = temp0_691[0] * 0.5f
float temp0_693[0x4] = _mm_rsqrt_ss(temp0_691[0], temp0_691[0])
temp0_693[0] = temp0_693[0] * temp0_693[0]
temp0_693[0] = temp0_693[0] * temp0_691[0]
zmm0 = 0x3f000000
zmm0[0] = 0.5f - temp0_693[0]
zmm0[0] = zmm0[0] * temp0_693[0]
zmm0[0] = zmm0[0] + temp0_693[0]
zmm0[0] = zmm0[0] * zmm0[0]
zmm0[0] = zmm0[0] * temp0_691[0]
zmm5 = 0x3f000000
zmm5[0] = 0.5f - zmm0[0]
zmm6 = _mm_andnot_ps(temp0_692, 0xffffffff)
zmm5[0] = zmm5[0] * zmm0[0]
zmm5[0] = zmm5[0] + zmm0[0]
float temp0_696[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_687)
float temp0_697[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
zmm3 = data_142d3f660
zmm5 = _mm_and_ps(temp0_696, temp0_697)
zmm6 = _mm_or_ps(_mm_andnot_ps(temp0_697, zmm3), zmm5)
float temp0_701[0x4] = _mm_add_ps(temp0_686, zmm13)
float temp0_702[0x4] = _mm_mul_ps(temp0_701, temp0_701)
float temp0_704[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_702, temp0_702[0].q), temp0_702)
float temp0_705[0x4] = _mm_shuffle_ps(temp0_704, temp0_704, 0xe5)
temp0_705[0] = temp0_705[0] + temp0_704[0]
zmm14 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_705[0], 6), 0xffffffff)
temp0_705[0] = temp0_705[0] * 0.5f
float temp0_708[0x4] = _mm_rsqrt_ss(temp0_705[0], temp0_705[0])
temp0_708[0] = temp0_708[0] * temp0_708[0]
temp0_708[0] = temp0_708[0] * temp0_705[0]
zmm7 = 0x3f000000
zmm7[0] = 0.5f - temp0_708[0]
zmm7[0] = zmm7[0] * temp0_708[0]
zmm7[0] = zmm7[0] + temp0_708[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] * temp0_705[0]
zmm1[0] = 0.5f - zmm7[0]
zmm1[0] = zmm1[0] * zmm7[0]
zmm1[0] = zmm1[0] + zmm7[0]
float temp0_710[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_701)
float temp0_711[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
zmm1 = _mm_and_ps(temp0_710, temp0_711)
zmm14 = _mm_or_ps(_mm_andnot_ps(temp0_711, zmm3), zmm1)
arg1[0xe] = zmm6
zmm1 = _mm_shuffle_epi32(zmm6, 0xc9)
float temp0_716[0x4] = _mm_mul_ps(zmm6, zmm14)
float temp0_718[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_716, temp0_716[0].q), temp0_716)
float temp0_719[0x4] = _mm_shuffle_ps(temp0_718, temp0_718, 0xe5)
temp0_719[0] = temp0_719[0] + temp0_718[0]
float temp0_720[0x4] = _mm_cmpeq_ss(0, temp0_719[0], 2)
zmm3 = _mm_and_ps(temp0_720, 0x3f800000)
zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_720, 0xbf800000), zmm3)
float temp0_725[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm14)
arg1[0xf] = temp0_725
zmm3 = (*arg1)[6]
zmm5 = arg1[1][0]
zmm4 = zx.o(arg1[1][0].q)[0].q | zmm3[0].q << 0x40
zmm3 = _mm_unpacklo_ps(zmm3, zmm5[0].q)[0].q | (*arg1)[5][0].q << 0x40
zmm7 = zx.o(*(arg1 + 0x14))[0].q | zmm5[0].q << 0x40
zmm5 = _mm_shuffle_epi32(zmm6, 0xd2)
float temp0_730[0x4] = _mm_sub_ps(_mm_mul_ps(zmm3, zmm1), _mm_mul_ps(zmm7, zmm5))
zmm6 = _mm_shuffle_epi32(zmm6, 0xff)
float temp0_732[0x4] = _mm_add_ps(temp0_730, temp0_730)
float temp0_734[0x4] = _mm_add_ps(zmm4, _mm_mul_ps(zmm6, temp0_732))
float temp0_741[0x4] = _mm_add_ps(
    _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_732, temp0_732, 0xd2), zmm1), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_732, temp0_732, 0xc9), zmm5)), 
        temp0_734), 
    zmm12)
arg1[8][0] = temp0_741[0]
float temp0_742[0x4] = _mm_shuffle_ps(temp0_741, temp0_741, 0xe5)
temp0_741[0].q = temp0_741 u>> 0x40
(*arg1)[0x21] = temp0_742[0]
(*arg1)[0x22] = temp0_741[0]
zmm3 = (*arg1)[0x12]
zmm4 = arg1[4][0]
zmm5 = (*arg1)[0x11]
float temp0_743[0x4] = _mm_shuffle_ps(temp0_725, temp0_725, 0xc9)
zmm6 = zx.o(arg1[4][0].q)[0].q | zmm3[0].q << 0x40
float temp0_745[0x4] =
    _mm_mul_ps(_mm_unpacklo_ps(zmm3, zmm4[0].q)[0].q | zmm5[0].q << 0x40, temp0_743)
zmm5 = zx.o(*(arg1 + 0x44))[0].q | zmm4[0].q << 0x40
float temp0_746[0x4] = _mm_shuffle_ps(temp0_725, temp0_725, 0xd2)
float temp0_748[0x4] = _mm_sub_ps(temp0_745, _mm_mul_ps(zmm5, temp0_746))
float temp0_749[0x4] = _mm_add_ps(temp0_748, temp0_748)
float temp0_752[0x4] =
    _mm_add_ps(zmm6, _mm_mul_ps(_mm_shuffle_ps(temp0_725, temp0_725, 0xff), temp0_749))
float temp0_759[0x4] = _mm_add_ps(
    _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_749, temp0_749, 0xd2), temp0_743), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_749, temp0_749, 0xc9), temp0_746)), 
        temp0_752), 
    zmm11)
(*arg1)[0x23] = temp0_759[0]
float temp0_760[0x4] = _mm_shuffle_ps(temp0_759, temp0_759, 0xe5)
temp0_759[0].q = temp0_759 u>> 0x40
arg1[9][0] = temp0_760[0]
(*arg1)[0x25] = temp0_759[0]
zmm0 = (*arg1)[0x3b]
float temp0_761[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
zmm3 = *arg1
float temp0_762[0x4] = _mm_mul_ps(temp0_761, zmm3)
zmm5 = arg1[0xe][0]
float temp0_763[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_764[0x4] = _mm_unpacklo_ps((*arg1)[3], (*arg1)[2][0].q)
zmm1 = (*arg1)[1]
zmm4 = temp0_764[0].q | zmm1[0].q << 0x40
float temp0_765[0x4] = _mm_unpacklo_ps(zmm3, zmm1[0].q)
float temp0_766[0x4] = _mm_unpacklo_ps(zmm1, zmm3[0].q)
float temp0_767[0x4] = _mm_shuffle_ps(zmm3, zmm4, 0x20)
zmm1 = temp0_766[0].q | temp0_764[0].q << 0x40
float temp0_771[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_764, temp0_767, 0x24), temp0_763), zmm8), temp0_762)
zmm0 = (*arg1)[0x39]
float temp0_772[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_775[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(zx.o(*(arg1 + 8))[0].q | temp0_765[0].q << 0x40, temp0_772), zmm9), 
    temp0_771)
zmm0 = (*arg1)[0x3a]
float temp0_779[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0)), zmm10), temp0_775)
zmm3 = (*arg1)[0x3f]
float temp0_780[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
zmm5 = arg1[3]
float temp0_781[0x4] = _mm_mul_ps(temp0_780, zmm5)
float temp0_782[0x4] = _mm_unpacklo_ps((*arg1)[0xf], (*arg1)[0xe][0].q)
zmm0 = (*arg1)[0xd]
zmm4 = temp0_782[0].q | zmm0[0].q << 0x40
float temp0_783[0x4] = _mm_unpacklo_ps(zmm5, zmm0[0].q)
float temp0_784[0x4] = _mm_unpacklo_ps(zmm0, zmm5[0].q)
float temp0_785[0x4] = _mm_shuffle_ps(zmm5, zmm4, 0x20)
zmm0 = temp0_784[0].q | temp0_782[0].q << 0x40
float temp0_786[0x4] = _mm_shuffle_ps(temp0_782, temp0_785, 0x24)
zmm4 = arg1[0xf][0]
float temp0_790[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(temp0_786, _mm_shuffle_ps(zmm4, zmm4, 0)), zmm8), temp0_781)
zmm4 = (*arg1)[0x3d]
float temp0_794[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(zx.o(*(arg1 + 0x38))[0].q | temp0_783[0].q << 0x40, 
            _mm_shuffle_ps(zmm4, zmm4, 0)), 
        zmm9), 
    temp0_790)
zmm4 = (*arg1)[0x3e]
float temp0_798[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 0)), zmm10), temp0_794)
arg1[0xa] = temp0_779
float temp0_799[0x4] = _mm_mul_ps(temp0_779, temp0_798)
float temp0_801[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_799, temp0_799[0].q), temp0_799)
float temp0_802[0x4] = _mm_shuffle_ps(temp0_801, temp0_801, 0xe5)
temp0_802[0] = temp0_802[0] + temp0_801[0]
float temp0_803[0x4] = _mm_cmpeq_ss(0, temp0_802[0], 2)
arg3 = _mm_and_ps(0x3f800000, temp0_803)
zmm3 = _mm_or_ps(_mm_andnot_ps(temp0_803, 0xbf800000), arg3)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_798)
return result
