// 函数: sub_142298220
// 地址: 0x142298220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_88[0x4] = arg4
float var_98[0x4] = arg5
float var_a8[0x4] = arg6
void var_368
int64_t rax_1 = __security_cookie ^ &var_368
float var_198[0x4]
__builtin_memcpy(&var_198, 
    "\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x80\x3f\x"
"00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\x
        3f", 
    0x30)
int32_t var_320 = 0
int32_t var_150 = 0
int32_t var_320_1 = 0
int32_t var_144 = 0
int32_t var_320_2 = 0
int32_t var_138 = 0
int128_t var_108
__builtin_memcpy(&var_108, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x"
"00\x00\x80\x3f\x00\x00\x00\x00", 
    0x20)
int32_t var_320_3 = 0x42b40000
int64_t var_158 = (_mm_unpacklo_ps(zx.o(0), 0)).q
int64_t var_14c = (_mm_unpacklo_ps(0x42b40000, 0)).q
int64_t var_140 = (_mm_unpacklo_ps(0xc2b40000, 0)).q
int64_t var_134 = (_mm_unpacklo_ps(zx.o(0), 0)).q
int32_t var_12c = 0x42b40000
int64_t var_128 = (_mm_unpacklo_ps(zx.o(0), 0)).q
int32_t var_320_4 = 0xc2b40000
int32_t var_120 = 0xc2b40000
int32_t var_320_5 = 0
int32_t var_114 = 0
int64_t var_11c = (_mm_unpacklo_ps(0x43340000, 0)).q
void var_2a8
sub_141fd6cc0(&var_2a8, *(arg1[1] + 0x1548), 1, 0, 0, nullptr)
float zmm13[0x4] = data_142d4cc30
float zmm14[0x4] = data_142d4cc20
float temp0_6[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
float temp0_7[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
float temp0_8[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xff)
float temp0_9[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
float temp0_10[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
float var_208[0x4] = temp0_7
float var_1f8[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0)
zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0)
float zmm15[0x4] = data_142d4cc00
int64_t* r15 = &var_158
float temp0_14[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xff)
int64_t i_1 = 6
float temp0_15[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
float temp0_16[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
int32_t var_2cc = 0x3f800000
zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0)
int32_t* var_340_1
int32_t var_338_1
float var_1e8[0x4]
char r9_4
int64_t j_1
float zmm6_1[0x4]
float zmm7_1[0x4]
float zmm8_1[0x4]
float zmm9_1[0x4]
int64_t i

do
    float* rax_3
    rax_3, zmm7_1, zmm8_1 = sub_14077e760(&var_1e8, r15)
    int32_t var_1a8
    int32_t* rdi_1 = &var_1a8
    j_1 = 4
    int64_t* rsi_1 = &var_108
    void* rbx_1 = &var_198[2]
    zmm9_1 = *rax_3
    arg4 = *(rax_3 + 0x10)
    arg5 = *(rax_3 + 0x20)
    arg6 = *(rax_3 + 0x30)
    float temp0_18[0x4] = __mulps_xmmps_memps(arg4, temp0_6)
    float temp0_19[0x4] = _mm_mul_ps(arg5, zmm8_1)
    float temp0_20[0x4] = _mm_mul_ps(zmm9_1, zmm13)
    float temp0_21[0x4] = _mm_mul_ps(zmm9_1, zmm15)
    float temp0_22[0x4] = _mm_add_ps(temp0_20, temp0_18)
    float temp0_23[0x4] = _mm_mul_ps(arg6, zmm7_1)
    float temp0_24[0x4] = _mm_mul_ps(zmm9_1, zmm14)
    float temp0_25[0x4] = _mm_add_ps(temp0_19, temp0_23)
    float temp0_26[0x4] = __mulps_xmmps_memps(arg4, temp0_10)
    zmm6_1 = _mm_add_ps(temp0_22, temp0_25)
    float temp0_28[0x4] = __mulps_xmmps_memps(arg5, temp0_9)
    float temp0_29[0x4] = _mm_add_ps(temp0_24, temp0_26)
    float temp0_31[0x4] = _mm_add_ps(temp0_28, __mulps_xmmps_memps(arg6, temp0_8))
    float temp0_32[0x4] = __mulps_xmmps_memps(arg4, temp0_16)
    zmm7_1 = _mm_add_ps(temp0_29, temp0_31)
    float temp0_34[0x4] = __mulps_xmmps_memps(arg5, temp0_15)
    zmm8_1 = _mm_add_ps(_mm_add_ps(temp0_21, temp0_32), 
        _mm_add_ps(temp0_34, __mulps_xmmps_memps(arg6, temp0_14)))
    int64_t j
    
    do
        float zmm2_1[0x4] = *(rbx_1 - 4)
        var_338_1 = 0x4399f630
        float var_304_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)[0]
        float var_308
        var_340_1 = &var_308
        float var_2f8_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)[0]
        float var_300_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)[0]
        float temp0_42[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0x55)
        float var_2f4_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)[0]
        float var_2ec_1 = temp0_42[0]
        float var_2d8[0x4]
        var_2d8[0] = (*(rbx_1 - 8))[0]
        float temp0_44[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xaa)
        float temp0_45[0x4] = _mm_shuffle_ps(var_2d8, var_2d8, 0xe1)
        temp0_45[0] = zmm2_1[0]
        float var_2e8_1 = temp0_44[0]
        float zmm1_1[0x4] = *rbx_1
        float temp0_46[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xc6)
        temp0_46[0] = zmm1_1[0]
        int64_t var_318_1 = 0
        float temp0_47[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0xc9)
        var_2d8 = temp0_47
        float temp0_48[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xff)
        float temp0_49[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xaa)
        float temp0_50[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0x55)
        float temp0_51[0x4] = _mm_mul_ps(temp0_48, arg6)
        int32_t var_310_1 = 0
        float temp0_52[0x4] = _mm_mul_ps(temp0_49, arg5)
        int64_t var_318_2 = 0
        float temp0_54[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0), zmm9_1)
        int32_t var_310_2 = 0
        float temp0_55[0x4] = _mm_add_ps(temp0_51, temp0_52)
        float temp0_56[0x4] = _mm_mul_ps(temp0_50, arg4)
        int64_t var_318_3 = 0
        int32_t var_310_3 = 0
        var_308 = zmm6_1[0]
        float var_2fc = zmm7_1[0]
        float temp0_57[0x4] = _mm_add_ps(temp0_56, temp0_54)
        float var_2f0 = zmm8_1[0]
        int64_t var_318_4 = 0
        int32_t var_310_4 = 0
        char var_348
        var_348.q = &var_2fc
        float temp0_58[0x4] = _mm_add_ps(temp0_55, temp0_57)
        float var_328 = temp0_58[0]
        float temp0_59[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x55)
        float var_320_6 = _mm_shuffle_ps(temp0_58, temp0_58, 0xaa)[0]
        float var_324_1 = temp0_59[0]
        int32_t rax_4
        rax_4, zmm6_1, zmm7_1, zmm8_1, zmm9_1, arg4, arg5, arg6, zmm13, zmm14, zmm15 =
            sub_141fdacb0(&var_2a8, &var_328, rsi_1, &var_2f0, var_348, var_340_1)
        *rdi_1 = rax_4
        rsi_1 = &rsi_1[1]
        rdi_1 = &rdi_1[1]
        rbx_1 += 0xc
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_1a4
    int32_t var_1a0
    sub_141fdaaf0(&var_2a8, var_1a8, var_1a4, var_1a0)
    int32_t var_19c
    r9_4 = sub_141fdaaf0(&var_2a8, var_1a8, var_1a0, var_19c)
    r15 += 0xc
    i = i_1
    i_1 -= 1
while (i != 1)
arg4 = data_142d3f660
var_198[3].q = j_1
zmm7_1 = arg2[1]
zmm6_1 = *arg2
zmm8_1 = arg2[2]
zmm9_1 = arg2[3]
float zmm4 = (*arg3)[1]
float zmm5 = (*arg3)[2]
var_198[1].q = j_1
float zmm3_1[0x4] = var_198
zmm3_1[0] = (*arg3)[0]
float var_188[0x4]
var_188[2].q = j_1
float var_178[0x4]
var_178[0].q = j_1
float temp0_61[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
float temp0_62[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
float temp0_63[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm9_1)
var_178[3] = j_1.d
float temp0_66[0x4] = _mm_mul_ps(temp0_61, zmm6_1)
float temp0_67[0x4] = _mm_mul_ps(temp0_62, zmm7_1)
float temp0_68[0x4] = _mm_mul_ps(temp0_63, zmm8_1)
float temp0_71[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_66, temp0_67), temp0_68), temp0_65)
float temp0_72[0x4] = _mm_shuffle_ps(var_188, var_188, 0xe1)
temp0_72[0] = zmm4
float temp0_73[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0xe1)
float temp0_74[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0x55)
float temp0_75[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0xaa)
var_1e8 = temp0_71
float temp0_76[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0)
float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0xff), zmm9_1)
float temp0_79[0x4] = _mm_mul_ps(temp0_76, zmm6_1)
float temp0_80[0x4] = _mm_mul_ps(temp0_74, zmm7_1)
float temp0_81[0x4] = _mm_mul_ps(temp0_75, zmm8_1)
float temp0_84[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_79, temp0_80), temp0_81), temp0_78)
float temp0_85[0x4] = _mm_shuffle_ps(var_178, var_178, 0xd2)
temp0_85[0] = zmm5
float temp0_86[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xc9)
float temp0_87[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0x55)
float temp0_88[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0xaa)
float var_1d8[0x4] = temp0_84
float temp0_89[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0)
float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xff), zmm9_1)
float temp0_92[0x4] = _mm_mul_ps(temp0_87, zmm7_1)
float temp0_93[0x4] = _mm_mul_ps(temp0_88, zmm8_1)
float temp0_95[0x4] = _mm_add_ps(_mm_mul_ps(temp0_89, zmm6_1), temp0_92)
float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0x55), zmm7_1)
float temp0_98[0x4] = _mm_add_ps(temp0_95, temp0_93)
float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xaa), zmm8_1)
float var_1c8[0x4] = _mm_add_ps(temp0_98, temp0_91)
int32_t var_330 = 0xffffffff
var_338_1.b = 1
var_340_1.b = j_1.b
float var_1b8[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), zmm6_1), temp0_97), temp0_100), 
    _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xff), zmm9_1))
int512_t zmm10
int512_t zmm11
int512_t zmm12
zmm10, zmm11, zmm12 = sub_141fdea20(&var_2a8, arg1, &var_1e8, r9_4, arg7, var_340_1.b, var_338_1)
int64_t result = sub_141fd8140(&var_2a8)
__security_check_cookie(rax_1 ^ &var_368)
zmm10.o = var_88
zmm11.o = var_98
zmm12.o = var_a8
return result
