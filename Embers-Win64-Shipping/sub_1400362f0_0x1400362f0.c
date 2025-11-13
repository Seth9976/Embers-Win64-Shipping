// 函数: sub_1400362f0
// 地址: 0x1400362f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_b8[0x4] = arg3
float zmm4[0x4] = arg1[0xe]
float temp0[0x4] = _mm_add_ps(zmm4, zmm4)
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0)
float zmm1[0x4] = (*arg1)[0x39]
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0)
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
float zmm8[0x4] = data_142d3f670
float temp0_19[0x4] = _mm_sub_ps(zmm8, temp0_18)
zmm1 = arg1[6][0]
float zmm7[0x4] = (*arg1)[0x1a]
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg1)[0x19], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_23[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm7, zx.o(0), 0x30), 0x84)
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc0), zmm1)
float temp0_28[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), temp0_21), temp0_25)
float temp0_31[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd5), temp0_23), temp0_28)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xea), zmm1)
float temp0_36[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd5), temp0_21), temp0_33)
float temp0_39[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_23), temp0_36)
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), zmm1)
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
float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xea), temp0_59)
zmm5 = arg1[0xf]
float temp0_83[0x4] = _mm_add_ps(zmm5, zmm5)
float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_83)
zmm4 = (*arg1)[0x3d]
float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_83)
zmm1 = (*arg1)[0x3f]
float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_83)
temp0_83[0].q = temp0_83 u>> 0x40
temp0_83[0] = temp0_83[0] * (*arg1)[0x3e]
float temp0_90[0x4] = _mm_add_ps(temp0_82, temp0_80)
float temp0_92[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(temp0_87, 0), temp0_85, 0x6c)
float temp0_93[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0x78)
float temp0_94[0x4] = _mm_add_ps(temp0_89, temp0_93)
float temp0_95[0x4] = _mm_sub_ps(temp0_93, temp0_89)
float temp0_97[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_87, zx.o(0), 0xe5), temp0_85, 0xc)
float temp0_98[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0x78)
float temp0_103[0x4] = _mm_sub_ps(zmm8, 
    _mm_add_ps(
        _mm_shuffle_ps(temp0_83, 
            _mm_shuffle_ps(temp0_87, _mm_shuffle_ps(temp0_83, zx.o(0), 0x40), 0x31), 0x80), 
        temp0_98))
zmm1 = (*arg1)[0x1d]
zmm5 = (*arg1)[0x1b]
float temp0_105[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg1[7][0], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_107[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm1, zx.o(0), 0x30), 0x84)
float temp0_109[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xc0), zmm5)
float temp0_112[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xea), temp0_105), temp0_109)
float temp0_115[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xd5), temp0_107), temp0_112)
float temp0_117[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xea), zmm5)
float temp0_120[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xd5), temp0_105), temp0_117)
float temp0_123[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xc0), temp0_107), temp0_120)
float temp0_125[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xd5), zmm5)
float temp0_128[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xc0), temp0_105), temp0_125)
float temp0_131[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xea), temp0_107), temp0_128)
float temp0_132[0x4] = _mm_shuffle_ps(temp0_94, temp0_103, 2)
float temp0_135[0x4] = _mm_shuffle_ps(temp0_132, 
    _mm_shuffle_ps(temp0_95, _mm_shuffle_ps(temp0_132, zx.o(0), 0x22), 0x31), 0x82)
float temp0_136[0x4] = _mm_shuffle_ps(temp0_103, temp0_95, 0xa1)
float temp0_137[0x4] = _mm_shuffle_ps(temp0_136, zx.o(0), 0x42)
float temp0_138[0x4] = _mm_shuffle_ps(temp0_95, temp0_94, 0x50)
float temp0_140[0x4] = _mm_shuffle_ps(temp0_136, _mm_shuffle_ps(temp0_94, temp0_137, 0x30), 0x82)
float temp0_143[0x4] = _mm_shuffle_ps(temp0_138, 
    _mm_shuffle_ps(temp0_103, _mm_shuffle_ps(temp0_138, zx.o(0), 0x42), 0x32), 0x82)
float temp0_145[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_115, temp0_115, 0xc0), temp0_135)
float temp0_148[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_115, temp0_115, 0xd5), temp0_140), temp0_145)
float temp0_151[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_115, temp0_115, 0xea), temp0_143), temp0_148)
float temp0_153[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_123, temp0_123, 0xc0), temp0_135)
float temp0_156[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_123, temp0_123, 0xd5), temp0_140), temp0_153)
float temp0_159[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_123, temp0_123, 0xea), temp0_143), temp0_156)
float temp0_161[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0xc0), temp0_135)
float temp0_164[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0xd5), temp0_140), temp0_161)
float temp0_167[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0xea), temp0_143), temp0_164)
float temp0_168[0x4] = _mm_sub_ps(zx.o(arg1[8][0].q)[0].q | (*arg1)[0x22][0].q << 0x40, 
    zx.o(arg1[0xc][0].q)[0].q | (*arg1)[0x32][0].q << 0x40)
zmm1 = data_142d3f780
zmm5 = _mm_unpackhi_pd(temp0_168, temp0_168[0].q)
float zmm3[0x4] = zmm5 ^ zmm1
zmm8 = _mm_shuffle_epi32(zmm3, 0xc0)
float temp0_172[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xc1), zmm8)
float temp0_173[0x4] = _mm_shuffle_ps(temp0_168, temp0_168, 0xd5)
float temp0_176[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_90, temp0_90, 0xc1), temp0_173), temp0_172)
arg3 = temp0_168 ^ zmm1
float temp0_178[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg3, temp0_168, 0x50), temp0_168, 0x42)
float temp0_179[0x4] = _mm_shuffle_ps(arg3, temp0_168, 0x40)
zmm1 ^= _mm_shuffle_ps(temp0_168, temp0_168, 0xe5)
float temp0_181[0x4] = _mm_shuffle_ps(zmm1, temp0_168, 0xa0)
float temp0_183[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg3, temp0_168, 0), temp0_168, 0xc8)
float temp0_184[0x4] = _mm_shuffle_ps(temp0_168, zmm1, 0xca)
float temp0_185[0x4] = _mm_shuffle_ps(temp0_181, zmm1, 0xc2)
float temp0_186[0x4] = _mm_shuffle_ps(zmm1, zmm3, 0x20)
float temp0_189[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(_mm_unpacklo_ps(zmm3, zmm5[0].q), temp0_186, 0x84), temp0_176)
float temp0_191[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_90, temp0_75, 0xd5), zmm8)
float temp0_196[0x4] = _mm_add_ps(
    _mm_mul_ps(temp0_178, 
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_90, temp0_90, 0xda), temp0_173), temp0_191)), 
    temp0_189)
float temp0_198[0x4] = _mm_shuffle_ps(temp0_90, _mm_shuffle_ps(temp0_75, temp0_90, 0x30), 0x80)
float temp0_200[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xc0), temp0_184)
float temp0_203[0x4] =
    _mm_mul_ps(temp0_185, _mm_add_ps(_mm_mul_ps(temp0_198, temp0_179), temp0_200))
float temp0_204[0x4] = _mm_shuffle_ps(temp0_90, temp0_75, 0xc)
float temp0_206[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_204, temp0_204, 0x78), temp0_184)
float temp0_208[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_90, temp0_75, 0xd6), temp0_179)
zmm1 = (*arg1)[0x1e]
float temp0_209[0x4] = _mm_add_ps(temp0_196, zmm1)
float temp0_212[0x4] =
    _mm_add_ps(_mm_mul_ps(temp0_183, _mm_add_ps(temp0_208, temp0_206)), temp0_203)
float temp0_215[0x4] =
    _mm_add_ps(_mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x30), 0x84), temp0_212)
float temp0_216[0x4] = _mm_sub_ps(zx.o(*(arg1 + 0x8c))[0].q | (*arg1)[0x25][0].q << 0x40, 
    zx.o(*(arg1 + 0xcc))[0].q | (*arg1)[0x35][0].q << 0x40)
float zmm10[0x4] = _mm_unpackhi_pd(temp0_216, temp0_216[0].q)
zmm5 = data_142d3f780
zmm3 = zmm10 ^ zmm5
float temp0_218[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc1)
zmm8 = _mm_shuffle_epi32(zmm3, 0xc0)
float temp0_220[0x4] = _mm_mul_ps(temp0_218, zmm8)
float temp0_221[0x4] = _mm_shuffle_ps(temp0_216, temp0_216, 0xd5)
float temp0_224[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_167, temp0_167, 0xc1), temp0_221), temp0_220)
arg3 = temp0_216 ^ zmm5
float temp0_226[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg3, temp0_216, 0x50), temp0_216, 0x42)
float temp0_227[0x4] = _mm_shuffle_ps(arg3, temp0_216, 0x40)
zmm5 ^= _mm_shuffle_ps(temp0_216, temp0_216, 0xe5)
float temp0_229[0x4] = _mm_shuffle_ps(zmm5, temp0_216, 0xa0)
float temp0_231[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg3, temp0_216, 0), temp0_216, 0xc8)
float temp0_232[0x4] = _mm_shuffle_ps(temp0_216, zmm5, 0xca)
float temp0_233[0x4] = _mm_shuffle_ps(temp0_229, zmm5, 0xc2)
float temp0_234[0x4] = _mm_shuffle_ps(zmm5, zmm3, 0x20)
float temp0_237[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(_mm_unpacklo_ps(zmm3, zmm10[0].q), temp0_234, 0x84), temp0_224)
float temp0_239[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_167, temp0_159, 0xd5), zmm8)
float temp0_244[0x4] = _mm_add_ps(
    _mm_mul_ps(temp0_226, 
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_167, temp0_167, 0xda), temp0_221), temp0_239)), 
    temp0_237)
float temp0_246[0x4] = _mm_shuffle_ps(temp0_167, _mm_shuffle_ps(temp0_159, temp0_167, 0x30), 0x80)
float temp0_248[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_151, temp0_151, 0xc0), temp0_232)
float temp0_251[0x4] =
    _mm_mul_ps(temp0_233, _mm_add_ps(_mm_mul_ps(temp0_246, temp0_227), temp0_248))
float temp0_252[0x4] = _mm_shuffle_ps(temp0_167, temp0_159, 0xc)
float temp0_254[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_252, temp0_252, 0x78), temp0_232)
float temp0_258[0x4] = _mm_mul_ps(temp0_231, 
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_167, temp0_159, 0xd6), temp0_227), temp0_254))
float zmm14[0x4] = (*arg1)[0x1f]
float temp0_259[0x4] = _mm_add_ps(temp0_258, temp0_251)
float temp0_262[0x4] =
    _mm_add_ps(_mm_shuffle_ps(zmm14, _mm_shuffle_ps(zmm14, zmm14, 0x30), 0x84), temp0_259)
float temp0_264[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_209, temp0_215, 5), temp0_215, 0xd8)
temp0_215[0] = _mm_unpackhi_pd(temp0_209, temp0_209[0].q)[0]
float temp0_266[0x4] = _mm_add_ps(temp0_244, zmm14)
float temp0_269[0x4] =
    _mm_add_ps(_mm_shuffle_ps(_mm_shuffle_ps(temp0_266, temp0_262, 5), temp0_262, 0xd8), temp0_264)
float temp0_270[0x4] = _mm_add_ps(temp0_209, temp0_266)
temp0_266[0].q = temp0_266 u>> 0x40
temp0_262[0] = temp0_266[0]
float temp0_271[0x4] = _mm_add_ps(temp0_262, temp0_215)
float r9 = temp0_271[0]
float zmm0[0x4] = _mm_shuffle_epi32(temp0_271, 0x4e)
float r10 = _mm_shuffle_ps(temp0_271, temp0_271, 0xe5)[0]
float r8 = zmm0[0]
char result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
    __andps_xmmxud_memxud(
        _mm_shuffle_ps(temp0_270, _mm_shuffle_ps(0x800000, temp0_270, 0x20), 0x24), 
        data_142d3f770), 
    data_142d3f5c0, 2))
float zmm6[0x4]
float zmm9[0x4]
float zmm11[0x4]
float zmm13[0x4]
float zmm15[0x4]

if (result != 0xf)
label_140036aaa:
    float var_138_1[0x4] = zmm14
    float temp0_289[0x4] = _mm_shuffle_ps(temp0_270, temp0_270, 0xe5)
    arg3 = _mm_unpackhi_pd(temp0_270, temp0_270[0].q)
    float temp0_293[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_270, zx.o(0), 0x12), 
        _mm_shuffle_ps(temp0_269, zx.o(0), 0x32), 0x88)
    zmm5 = zx.o(r9)
    zmm14 = zx.o(r10)
    zmm6 = _mm_unpacklo_epi32(zmm5, zmm14[0].q)
    float temp0_296[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zmm5, 0), zx.o(0), 0x42)
    zmm0 = zx.o(r8)
    zmm10 = data_142d3f660
    float temp0_299[0x4] =
        _mm_shuffle_ps(_mm_shuffle_ps(arg3, temp0_270, 0), _mm_shuffle_ps(zmm0, zmm5, 0xc0), 0x22)
    float temp0_302[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(temp0_269, zmm10, 0x11), zmm10, 0xe8), temp0_299)
    arg3 = zx.o(0)
    arg3[0] = temp0_289[0]
    float temp0_304[0x4] = _mm_shuffle_ps(arg3, _mm_shuffle_ps(zmm14, arg3, 0x30), 0x84)
    float temp0_307[0x4] =
        _mm_sub_ps(temp0_302, _mm_mul_ps(_mm_shuffle_ps(temp0_269, zx.o(0), 0xe8), temp0_304))
    float temp0_308[0x4] = _mm_shuffle_ps(temp0_307, temp0_307, 0)
    float temp0_309[0x4] = _mm_shuffle_ps(temp0_307, temp0_307, 0x55)
    float temp0_310[0x4] = _mm_shuffle_ps(temp0_307, temp0_307, 0xaa)
    float temp0_311[0x4] = _mm_shuffle_ps(temp0_307, temp0_307, 0xff)
    zmm3 = 0x3f800000
    float temp0_315[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(0x3f800000, zmm0, 0), temp0_296), 
        _mm_mul_ps(zmm6[0].q << 0x40, zx.o(0)))
    float temp0_317[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_269, temp0_270, 5), temp0_293)
    float temp0_318[0x4] = _mm_shuffle_ps(temp0_269, zx.o(0), 0x12)
    float temp0_319[0x4] = _mm_shuffle_ps(temp0_270, zx.o(0), 0x32)
    float temp0_320[0x4] = _mm_shuffle_ps(temp0_270, temp0_269, 5)
    float temp0_323[0x4] =
        _mm_sub_ps(temp0_317, _mm_mul_ps(_mm_shuffle_ps(temp0_318, temp0_319, 0x88), temp0_320))
    float temp0_324[0x4] = _mm_mul_ps(temp0_308, temp0_311)
    float temp0_326[0x4] = _mm_add_ps(_mm_mul_ps(temp0_309, temp0_310), temp0_324)
    float temp0_328[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_315, temp0_315, 0xd8), temp0_323)
    float temp0_330[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_328, temp0_328, 1), temp0_328)
    float temp0_333[0x4] =
        _mm_sub_ps(temp0_326, _mm_add_ps(_mm_shuffle_ps(temp0_330, temp0_330, 0x39), temp0_330))
    temp0_333[0] - 0f
    
    if (temp0_333[0] != 0f || not(is_ordered.d(temp0_333[0], 0f)))
        zmm6 = temp0_270[0].q | temp0_269[0].q << 0x40
        float temp0_334[0x4] = _mm_shuffle_ps(temp0_270, temp0_269, 0x20)
        float temp0_335[0x4] = _mm_mul_ps(temp0_315[0].q | temp0_315[0].q << 0x40, temp0_334)
        float temp0_338[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_315, temp0_315, 0x20), zmm6), temp0_335)
        zmm10[0] = zmm0[0]
        float temp0_340[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_310, temp0_293), temp0_338)
        zmm1 = data_142d4cc30
        float temp0_342[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm1, 0), zmm1, 0xe2)
        float temp0_344[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_323, temp0_323, 0x66), temp0_342)
        float temp0_347[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_323, temp0_323, 0x33), zmm10), temp0_344)
        float temp0_349[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_309, temp0_296), temp0_347)
        float temp0_350[0x4] = _mm_mul_ps(zmm10, temp0_308)
        float temp0_352[0x4] = _mm_mul_ps(_mm_unpackhi_pd(temp0_323, temp0_323[0].q), temp0_296)
        float temp0_354[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zx.o(0), 0), zx.o(0), 0xe2)
        float temp0_357[0x4] = _mm_sub_ps(temp0_350, 
            _mm_add_ps(_mm_mul_ps(temp0_323[0].q | temp0_323[0].q << 0x40, temp0_354), temp0_352))
        float temp0_358[0x4] = _mm_mul_ps(zmm6, temp0_311)
        float temp0_360[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_315, temp0_315, 0xcc), temp0_293)
        float temp0_363[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_270, zx.o(0), 2), 
            _mm_shuffle_ps(temp0_269, zx.o(0), 0x22), 0x22)
        float temp0_367[0x4] = _mm_sub_ps(temp0_358, 
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_315, temp0_315, 0x66), temp0_363), 
                temp0_360))
        float temp0_368[0x4] = _mm_div_ps(data_142fc92f0, temp0_333)
        float temp0_369[0x4] = _mm_mul_ps(temp0_367, temp0_368)
        float temp0_370[0x4] = _mm_mul_ps(temp0_349, temp0_368)
        zmm11 =
            _mm_shuffle_ps(_mm_mul_ps(temp0_340, temp0_368), _mm_mul_ps(temp0_368, temp0_357), 0x77)
        zmm3 = _mm_shuffle_ps(temp0_369, temp0_370, 0x77)
        zmm6 = _mm_shuffle_ps(temp0_369, temp0_370, 0x22)
    else
        zmm6 = data_142d4cc20
        zmm11 = data_142d4cc30
    
    zmm15 = temp0_90
    zmm13 = data_142d3f780
    zmm14 = var_138_1
    zmm8 = _mm_shuffle_ps(zmm3, zmm3, 0xe5)
    arg3 = _mm_unpackhi_pd(zmm3, zmm3[0].q)
    zmm9 = _mm_shuffle_ps(zmm3, zmm3, 0xe7)
    zmm10 = _mm_shuffle_ps(zmm6, zmm6, 0xe5)
    zmm4 = _mm_unpackhi_pd(zmm6, zmm6[0].q)
    zmm5 = _mm_shuffle_ps(zmm6, zmm6, 0xe7)
    zmm0 = _mm_shuffle_ps(zmm11, zmm11, 0xe5)
    zmm1 = _mm_unpackhi_pd(zmm11, zmm11[0].q)
    zmm7 = _mm_shuffle_ps(zmm11, zmm11, 0xe7)
else
    result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
        __andps_xmmxud_memxud(
            _mm_shuffle_ps(temp0_269, _mm_shuffle_ps(0x800000, temp0_269, 0x20), 0x24), 
            data_142d3f770), 
        data_142d3f5c0, 2))
    
    if (result != 0xf)
        goto label_140036aaa
    
    result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
        _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(r9), zx.o(r10)[0].q), 
            _mm_unpacklo_epi32(zx.o(r8), 0x800000[0].q)[0].q) & data_142d3f770, 
        data_142d3f5c0, 2))
    
    if (result != 0xf)
        goto label_140036aaa
    
    zmm1 = 0x3f800000
    zmm7 = zx.o(0)
    zmm0 = zx.o(0)
    zmm11 = zx.o(0)
    zmm5 = zx.o(0)
    zmm4 = zx.o(0)
    zmm10 = 0x3f800000
    zmm6 = zx.o(0)
    zmm9 = zx.o(0)
    arg3 = zx.o(0)
    zmm8 = zx.o(0)
    zmm3 = 0x3f800000
    zmm15 = temp0_90
    zmm13 = data_142d3f780

float temp0_385[0x4] = _mm_unpacklo_ps(zmm11, zmm0[0].q)
float temp0_386[0x4] = _mm_unpacklo_ps(zmm1, zmm7[0].q)
zmm11 = temp0_385[0].q | temp0_386[0].q << 0x40
float temp0_387[0x4] = _mm_unpacklo_ps(zmm6, zmm10[0].q)
float temp0_388[0x4] = _mm_unpacklo_ps(zmm4, zmm5[0].q)
zmm6 = temp0_387[0].q | temp0_388[0].q << 0x40
float temp0_389[0x4] = _mm_unpacklo_ps(zmm3, zmm8[0].q)
arg3 = _mm_unpacklo_epi32(arg3, zmm9[0].q)
zmm0 = *arg2
zmm1 = (*arg2)[1]
float temp0_392[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_389[0].q | arg3[0].q << 0x40)
float temp0_395[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm6), temp0_392)
zmm0 = (*arg2)[2]
float temp0_398[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm11), temp0_395)
float zmm12[0x4] = (*arg1)[0x1e]
float temp0_400[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xc0), temp0_398)
float temp0_402[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm14 ^ zmm13, 0xc0), temp0_398)
arg3 = zx.o(arg1[0xc][0].q)[0].q | (*arg1)[0x32][0].q << 0x40
float temp0_403[0x4] = _mm_sub_ps(zx.o(arg1[8][0].q)[0].q | (*arg1)[0x22][0].q << 0x40, arg3)
float temp0_404[0x4] = _mm_shuffle_ps(temp0_403, temp0_403, 0xc9)
float temp0_406[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_398, temp0_398, 0xd2), temp0_404)
float temp0_407[0x4] = _mm_shuffle_ps(temp0_403, temp0_403, 0xd2)
float temp0_410[0x4] =
    _mm_sub_ps(temp0_406, _mm_mul_ps(_mm_shuffle_ps(temp0_398, temp0_398, 0xc9), temp0_407))
float temp0_412[0x4] = _mm_mul_ps(temp0_67, _mm_shuffle_ps(temp0_410, temp0_410, 0xc0))
float temp0_415[0x4] =
    _mm_add_ps(_mm_mul_ps(temp0_75, _mm_shuffle_ps(temp0_410, temp0_410, 0xd5)), temp0_412)
float temp0_418[0x4] =
    _mm_add_ps(_mm_mul_ps(zmm15, _mm_shuffle_ps(temp0_410, temp0_410, 0xea)), temp0_415)
zmm3 = zx.o(*(arg1 + 0xcc))[0].q | (*arg1)[0x35][0].q << 0x40
float temp0_419[0x4] = _mm_sub_ps(zx.o(*(arg1 + 0x8c))[0].q | (*arg1)[0x25][0].q << 0x40, zmm3)
float temp0_420[0x4] = _mm_shuffle_ps(temp0_419, temp0_419, 0xc9)
zmm0 = temp0_398 ^ zmm13
float temp0_422[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0xd2), temp0_420)
float temp0_423[0x4] = _mm_shuffle_ps(temp0_419, temp0_419, 0xd2)
float temp0_426[0x4] = _mm_sub_ps(temp0_422, _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0xc9), temp0_423))
float temp0_428[0x4] = _mm_mul_ps(temp0_151, _mm_shuffle_ps(temp0_426, temp0_426, 0xc0))
float temp0_431[0x4] =
    _mm_add_ps(_mm_mul_ps(temp0_159, _mm_shuffle_ps(temp0_426, temp0_426, 0xd5)), temp0_428)
float temp0_434[0x4] =
    _mm_add_ps(_mm_mul_ps(temp0_167, _mm_shuffle_ps(temp0_426, temp0_426, 0xea)), temp0_431)
float temp0_435[0x4] = _mm_shuffle_ps(var_b8, var_b8, 0xc0)
float temp0_437[0x4] = _mm_add_ps(_mm_mul_ps(temp0_400, temp0_435), arg3)
float temp0_438[0x4] = _mm_shuffle_ps(temp0_437, temp0_437, 0xe5)
arg3 = _mm_unpackhi_pd(temp0_437, temp0_437[0].q)
arg1[0xc][0] = temp0_437[0]
(*arg1)[0x31] = temp0_438[0]
(*arg1)[0x32] = arg3[0]
float temp0_441[0x4] = _mm_add_ps(_mm_mul_ps(temp0_402, temp0_435), zmm3)
float temp0_442[0x4] = _mm_shuffle_ps(temp0_441, temp0_441, 0xe5)
arg3 = _mm_unpackhi_pd(temp0_441, temp0_441[0].q)
(*arg1)[0x33] = temp0_441[0]
arg1[0xd][0] = temp0_442[0]
(*arg1)[0x35] = arg3[0]
zmm14 = arg1[0xe]
zmm13 = arg1[0xf]
float temp0_444[0x4] = _mm_mul_ps(temp0_418, temp0_435)
float temp0_445[0x4] = _mm_mul_ps(temp0_435, temp0_434)
float temp0_446[0x4] = _mm_mul_ps(zmm14, zx.o(0))
float temp0_447[0x4] = _mm_shuffle_ps(temp0_444, temp0_444, 0)
float temp0_449[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0x1b), temp0_447)
zmm8 = data_142d3f7c0
float temp0_451[0x4] = _mm_add_ps(_mm_mul_ps(temp0_449, zmm8), temp0_446)
float temp0_452[0x4] = _mm_shuffle_ps(temp0_444, temp0_444, 0x55)
float temp0_454[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm14, zmm14, 1), temp0_452)
zmm9 = data_142d3f7d0
float temp0_456[0x4] = _mm_add_ps(_mm_mul_ps(temp0_454, zmm9), temp0_451)
float temp0_457[0x4] = _mm_shuffle_ps(temp0_444, temp0_444, 0xaa)
float temp0_459[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xb1), temp0_457)
zmm10 = data_142d3f7b0
float temp0_461[0x4] = _mm_add_ps(_mm_mul_ps(temp0_459, zmm10), temp0_456)
zmm4 = data_142d3f640
float temp0_462[0x4] = _mm_mul_ps(temp0_461, zmm4)
float temp0_463[0x4] = _mm_mul_ps(zx.o(0), zmm13)
float temp0_464[0x4] = _mm_shuffle_ps(temp0_445, temp0_445, 0)
float temp0_468[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x1b), temp0_464), zmm8), temp0_463)
float temp0_469[0x4] = _mm_shuffle_ps(temp0_445, temp0_445, 0x55)
float temp0_473[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm13, zmm13, 1), temp0_469), zmm9), temp0_468)
float temp0_474[0x4] = _mm_shuffle_ps(temp0_445, temp0_445, 0xaa)
float temp0_479[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xb1), temp0_474), zmm10), 
        temp0_473), 
    zmm4)
float temp0_480[0x4] = _mm_add_ps(temp0_462, zmm14)
float temp0_481[0x4] = _mm_mul_ps(temp0_480, temp0_480)
float temp0_483[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_481, temp0_481[0].q), temp0_481)
float temp0_484[0x4] = _mm_shuffle_ps(temp0_483, temp0_483, 0xe5)
temp0_484[0] = temp0_484[0] + temp0_483[0]
float temp0_485[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_484[0], 6)
zmm4 = 0x3f000000
temp0_484[0] = temp0_484[0] * 0.5f
float temp0_486[0x4] = _mm_rsqrt_ss(temp0_484[0], temp0_484[0])
temp0_486[0] = temp0_486[0] * temp0_486[0]
temp0_486[0] = temp0_486[0] * temp0_484[0]
zmm0 = 0x3f000000
zmm0[0] = 0.5f - temp0_486[0]
zmm0[0] = zmm0[0] * temp0_486[0]
zmm0[0] = zmm0[0] + temp0_486[0]
zmm0[0] = zmm0[0] * zmm0[0]
zmm0[0] = zmm0[0] * temp0_484[0]
zmm5 = 0x3f000000
zmm5[0] = 0.5f - zmm0[0]
zmm6 = _mm_andnot_ps(temp0_485, 0xffffffff)
zmm5[0] = zmm5[0] * zmm0[0]
zmm5[0] = zmm5[0] + zmm0[0]
float temp0_489[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_480)
float temp0_490[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
zmm3 = data_142d3f660
zmm5 = _mm_and_ps(temp0_489, temp0_490)
zmm6 = _mm_or_ps(_mm_andnot_ps(temp0_490, zmm3), zmm5)
float temp0_494[0x4] = _mm_add_ps(temp0_479, zmm13)
float temp0_495[0x4] = _mm_mul_ps(temp0_494, temp0_494)
float temp0_497[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_495, temp0_495[0].q), temp0_495)
float temp0_498[0x4] = _mm_shuffle_ps(temp0_497, temp0_497, 0xe5)
temp0_498[0] = temp0_498[0] + temp0_497[0]
zmm14 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_498[0], 6), 0xffffffff)
temp0_498[0] = temp0_498[0] * 0.5f
float temp0_501[0x4] = _mm_rsqrt_ss(temp0_498[0], temp0_498[0])
temp0_501[0] = temp0_501[0] * temp0_501[0]
temp0_501[0] = temp0_501[0] * temp0_498[0]
zmm7 = 0x3f000000
zmm7[0] = 0.5f - temp0_501[0]
zmm7[0] = zmm7[0] * temp0_501[0]
zmm7[0] = zmm7[0] + temp0_501[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] * temp0_498[0]
zmm4[0] = 0.5f - zmm7[0]
zmm4[0] = zmm4[0] * zmm7[0]
zmm4[0] = zmm4[0] + zmm7[0]
float temp0_503[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_494)
float temp0_504[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
zmm4 = _mm_and_ps(temp0_503, temp0_504)
zmm14 = _mm_or_ps(_mm_andnot_ps(temp0_504, zmm3), zmm4)
arg1[0xe] = zmm6
zmm1 = _mm_shuffle_epi32(zmm6, 0xc9)
float temp0_509[0x4] = _mm_mul_ps(zmm6, zmm14)
float temp0_511[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_509, temp0_509[0].q), temp0_509)
float temp0_512[0x4] = _mm_shuffle_ps(temp0_511, temp0_511, 0xe5)
temp0_512[0] = temp0_512[0] + temp0_511[0]
float temp0_513[0x4] = _mm_cmpeq_ss(0, temp0_512[0], 2)
zmm3 = _mm_and_ps(temp0_513, 0x3f800000)
zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_513, 0xbf800000), zmm3)
float temp0_518[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm14)
arg1[0xf] = temp0_518
zmm3 = (*arg1)[6]
zmm4 = arg1[1][0]
zmm5 = zx.o(arg1[1][0].q)[0].q | zmm3[0].q << 0x40
zmm3 = _mm_unpacklo_ps(zmm3, zmm4[0].q)[0].q | (*arg1)[5][0].q << 0x40
zmm7 = zx.o(*(arg1 + 0x14))[0].q | zmm4[0].q << 0x40
zmm4 = _mm_shuffle_epi32(zmm6, 0xd2)
float temp0_523[0x4] = _mm_sub_ps(_mm_mul_ps(zmm3, zmm1), _mm_mul_ps(zmm7, zmm4))
zmm6 = _mm_shuffle_epi32(zmm6, 0xff)
float temp0_525[0x4] = _mm_add_ps(temp0_523, temp0_523)
float temp0_527[0x4] = _mm_add_ps(zmm5, _mm_mul_ps(zmm6, temp0_525))
float temp0_534[0x4] = _mm_add_ps(
    _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_525, temp0_525, 0xd2), zmm1), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_525, temp0_525, 0xc9), zmm4)), 
        temp0_527), 
    temp0_437)
arg1[8][0] = temp0_534[0]
float temp0_535[0x4] = _mm_shuffle_ps(temp0_534, temp0_534, 0xe5)
temp0_534[0].q = temp0_534 u>> 0x40
(*arg1)[0x21] = temp0_535[0]
(*arg1)[0x22] = temp0_534[0]
zmm3 = (*arg1)[0x12]
zmm4 = arg1[4][0]
zmm5 = (*arg1)[0x11]
float temp0_536[0x4] = _mm_shuffle_ps(temp0_518, temp0_518, 0xc9)
zmm6 = zx.o(arg1[4][0].q)[0].q | zmm3[0].q << 0x40
float temp0_538[0x4] =
    _mm_mul_ps(_mm_unpacklo_ps(zmm3, zmm4[0].q)[0].q | zmm5[0].q << 0x40, temp0_536)
zmm5 = zx.o(*(arg1 + 0x44))[0].q | zmm4[0].q << 0x40
float temp0_539[0x4] = _mm_shuffle_ps(temp0_518, temp0_518, 0xd2)
float temp0_541[0x4] = _mm_sub_ps(temp0_538, _mm_mul_ps(zmm5, temp0_539))
float temp0_542[0x4] = _mm_add_ps(temp0_541, temp0_541)
float temp0_545[0x4] =
    _mm_add_ps(zmm6, _mm_mul_ps(_mm_shuffle_ps(temp0_518, temp0_518, 0xff), temp0_542))
float temp0_552[0x4] = _mm_add_ps(
    _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_542, temp0_542, 0xd2), temp0_536), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_542, temp0_542, 0xc9), temp0_539)), 
        temp0_545), 
    temp0_441)
(*arg1)[0x23] = temp0_552[0]
float temp0_553[0x4] = _mm_shuffle_ps(temp0_552, temp0_552, 0xe5)
temp0_552[0].q = temp0_552 u>> 0x40
arg1[9][0] = temp0_553[0]
(*arg1)[0x25] = temp0_552[0]
zmm0 = (*arg1)[0x3b]
float temp0_554[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
zmm3 = *arg1
float temp0_555[0x4] = _mm_mul_ps(temp0_554, zmm3)
zmm4 = arg1[0xe][0]
float temp0_556[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_557[0x4] = _mm_unpacklo_ps((*arg1)[3], (*arg1)[2][0].q)
zmm1 = (*arg1)[1]
zmm5 = temp0_557[0].q | zmm1[0].q << 0x40
float temp0_558[0x4] = _mm_unpacklo_ps(zmm3, zmm1[0].q)
float temp0_559[0x4] = _mm_unpacklo_ps(zmm1, zmm3[0].q)
float temp0_560[0x4] = _mm_shuffle_ps(zmm3, zmm5, 0x20)
zmm1 = temp0_559[0].q | temp0_557[0].q << 0x40
float temp0_564[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_557, temp0_560, 0x24), temp0_556), zmm8), temp0_555)
zmm0 = (*arg1)[0x39]
float temp0_565[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_568[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(zx.o(*(arg1 + 8))[0].q | temp0_558[0].q << 0x40, temp0_565), zmm9), 
    temp0_564)
zmm0 = (*arg1)[0x3a]
float temp0_572[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0)), zmm10), temp0_568)
zmm3 = (*arg1)[0x3f]
float temp0_573[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
zmm4 = arg1[3]
float temp0_574[0x4] = _mm_mul_ps(temp0_573, zmm4)
float temp0_575[0x4] = _mm_unpacklo_ps((*arg1)[0xf], (*arg1)[0xe][0].q)
zmm0 = (*arg1)[0xd]
zmm5 = temp0_575[0].q | zmm0[0].q << 0x40
float temp0_576[0x4] = _mm_unpacklo_ps(zmm4, zmm0[0].q)
float temp0_577[0x4] = _mm_unpacklo_ps(zmm0, zmm4[0].q)
float temp0_578[0x4] = _mm_shuffle_ps(zmm4, zmm5, 0x20)
zmm0 = temp0_577[0].q | temp0_575[0].q << 0x40
float temp0_579[0x4] = _mm_shuffle_ps(temp0_575, temp0_578, 0x24)
zmm4 = arg1[0xf][0]
float temp0_583[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(temp0_579, _mm_shuffle_ps(zmm4, zmm4, 0)), zmm8), temp0_574)
zmm4 = (*arg1)[0x3d]
float temp0_587[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(zx.o(*(arg1 + 0x38))[0].q | temp0_576[0].q << 0x40, 
            _mm_shuffle_ps(zmm4, zmm4, 0)), 
        zmm9), 
    temp0_583)
zmm4 = (*arg1)[0x3e]
float temp0_591[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 0)), zmm10), temp0_587)
arg1[0xa] = temp0_572
float temp0_592[0x4] = _mm_mul_ps(temp0_572, temp0_591)
float temp0_594[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_592, temp0_592[0].q), temp0_592)
float temp0_595[0x4] = _mm_shuffle_ps(temp0_594, temp0_594, 0xe5)
temp0_595[0] = temp0_595[0] + temp0_594[0]
float temp0_596[0x4] = _mm_cmpeq_ss(0, temp0_595[0], 2)
arg3 = _mm_and_ps(0x3f800000, temp0_596)
zmm3 = _mm_or_ps(_mm_andnot_ps(temp0_596, 0xbf800000), arg3)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_591)
return result
