// 函数: sub_14224e4d0
// 地址: 0x14224e4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_48[0x4] = arg5
uint32_t temp0[0x4] = _mm_and_ps(*arg3, 0x7fffffff)
float zmm7[0x4] = _mm_and_ps(*(arg3 + 4), 0x7fffffff)
uint32_t zmm8[0x4] = *(arg3 + 8)
_mm_max_ss(zmm7[0], temp0[0])
_mm_and_ps(zmm8, 0x7fffffff)
int128_t* rax = sub_140a82f30(0x3a70, 0)
void* rax_1 = sub_140a82f30(0x370, 0)
int32_t i = 0
int128_t zmm11 = 0x3ec90fdb
void* rdi = rax_1
float var_2b8 = 0f
int32_t var_2a8 = 0
int32_t var_2c8 = 0
int32_t var_28c = 0
int64_t var_294 = 0x3f800000
float var_2c4_1
uint128_t i_7
uint128_t zmm1
float zmm2_1
float zmm9[0x4]
float zmm10[0x4]
int32_t zmm12_1

do
    int32_t i_4
    
    if (i s> 4)
        i_4 = i - 1
    else
        i_4 = i
    
    zmm1.d = _mm_cvtepi32_ps(zx.o(i_4)).d f* zmm11.d
    uint128_t zmm0_1
    float zmm6
    float zmm7_1
    float zmm8_1
    int128_t zmm13_1
    zmm0_1, zmm6, zmm7_1, zmm8_1, zmm13_1 = __libm_sse2_sincosf_(zmm1)
    float zmm3_1[0x4] = zmm0_1
    zmm2_1 = zmm0_1.d
    float temp0_5[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 1)
    zmm0_1 = zx.o(var_2a8.q)
    zmm6 = zmm6 * zmm8_1 f* *(arg1 + 0x4c)
    _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
    float zmm1_1 = zmm7_1 f* *(arg1 + 0x48)
    temp0_5[0] = temp0_5[0] * zmm1_1
    zmm2_1 = zmm2_1 * zmm1_1
    zmm6 = zmm6 + temp0_5[0]
    float var_2b0_1 = temp0_5[0]
    zmm0_1.d = zmm2_1
    zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
    *rdi = zmm0_1.q
    *(rdi + 8) = zmm6
    var_2c4_1 = (temp0_5 ^ zmm13_1)[0]
    float var_2c0_1 = zmm2_1
    var_2a8.q = zmm0_1.q
    zmm9, zmm10, zmm11, zmm12_1 = sub_142252cf0(rdi, &var_294, &var_2c8, &var_2b8)
    i_7 = zx.o(i)
    i += 1
    i_7 = _mm_cvtepi32_ps(i_7)
    *(rdi + 0xc) = 0
    i_7.d = i_7.d f* zmm12_1
    *(rdi + 0x10) = i_7.d
    rdi += 0x58
while (i s< 0xa)

uint128_t zmm4 = data_142dc1870
void* rbx = rax + 0x4e
uint128_t zmm5 = data_142dc1880
arg5 = data_142dc1850
int32_t i_1 = 0
int32_t zmm13_2[0x4] = data_142dd3f80
int128_t zmm14 = data_142dd3fd0
zmm11 = zx.o(0)
float zmm15[0x4] = data_142dd3fb0
zmm10 = 0x42fe0000
zmm12_1 = 0x437e0000
uint128_t var_198 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
uint128_t var_188 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
uint128_t var_178 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
i_7 = data_142dc1860
int32_t var_22c = 0
zmm1 = _mm_shuffle_ps(i_7, i_7, 0x55)
uint128_t var_158 = _mm_shuffle_ps(i_7, i_7, 0)
uint128_t var_148 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
int32_t var_21c = 0
int32_t var_20c = 0
uint128_t var_138 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
float zmm7_2[0x4] = _mm_shuffle_ps(arg5, arg5, 0x55)
i_7 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
void* r14_2 = rax_1 - rax - 0x46
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
arg5 = _mm_shuffle_ps(arg5, arg5, 0)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
uint128_t var_108 = zmm5
float var_e8[0x4] = zmm7_2
float var_f8[0x4] = arg5
uint128_t var_118 = zmm4
uint128_t var_168 = zmm1
uint128_t i_9 = i_7
int32_t var_23c = 0x3f800000
char arg_1b = 0x7f
char var_2d5 = 0x7f
char var_2d1 = 0x7f
float var_208
float var_1f8_1
int32_t var_1e8_1

do
    int32_t var_27c_1 = 0
    i_7.d = float.s(i_1)
    i_7.d = i_7.d f* 0.0625f
    int32_t var_298_1 = i_7.d
    zmm1.d = i_7.d f* 360f
    float temp0_23[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(zx.o(0), _mm_unpacklo_ps(zmm1, zx.o(0).q)[0].q), data_143f51ab0)
    float zmm2_2[0x4] = data_143f51a60
    float temp0_28[0x4] = _mm_sub_ps(temp0_23, 
        __mulps_xmmps_memps(
            _mm_cvtepi32_ps(_mm_cvtps_epi32(__mulps_xmmps_memps(temp0_23, data_143f51aa0))), 
            data_143f51a90))
    float temp0_30[0x4] = _mm_cmpeq_ps(zmm2_2, __andps_xmmxud_memxud(temp0_28, data_143f51a30), 1)
    i_7 = _mm_and_ps(
        _mm_sub_ps(
            __orps_xmmxud_memxud(__andps_xmmxud_memxud(temp0_28, data_143f51a80), data_143f51a70), 
            temp0_28) ^ temp0_28, 
        temp0_30) ^ temp0_28
    zmm1 = _mm_mul_ps(i_7, i_7)
    float temp0_36[0x4] = _mm_mul_ps(zmm7_2, zmm1)
    float temp0_37[0x4] = __mulps_xmmps_memps(zmm1, var_168)
    float temp0_38[0x4] = _mm_add_ps(temp0_36, arg5)
    float temp0_39[0x4] = __addps_xmmps_memps(temp0_37, var_158)
    float temp0_40[0x4] = _mm_mul_ps(temp0_38, zmm1)
    float temp0_41[0x4] = _mm_mul_ps(temp0_39, zmm1)
    float temp0_42[0x4] = __addps_xmmps_memps(temp0_40, var_198)
    float temp0_43[0x4] = __addps_xmmps_memps(temp0_41, var_148)
    float temp0_44[0x4] = _mm_mul_ps(temp0_42, zmm1)
    float temp0_45[0x4] = _mm_mul_ps(temp0_43, zmm1)
    float temp0_46[0x4] = __addps_xmmps_memps(temp0_44, var_188)
    float temp0_47[0x4] = __addps_xmmps_memps(temp0_45, var_138)
    float temp0_48[0x4] = _mm_mul_ps(temp0_46, zmm1)
    float temp0_49[0x4] = _mm_mul_ps(temp0_47, zmm1)
    float temp0_50[0x4] = __addps_xmmps_memps(temp0_48, var_178)
    float temp0_51[0x4] = __addps_xmmps_memps(temp0_49, i_9)
    float temp0_52[0x4] = _mm_mul_ps(temp0_50, zmm1)
    float temp0_53[0x4] = _mm_mul_ps(temp0_51, zmm1)
    zmm1 = data_143f51990 ^ data_143f515b0
    float temp0_54[0x4] = _mm_add_ps(temp0_52, zmm4)
    zmm1 = _mm_and_ps(zmm1, temp0_30) ^ data_143f515b0
    float temp0_56[0x4] = _mm_add_ps(temp0_53, zmm5)
    float temp0_57[0x4] = _mm_mul_ps(temp0_54, i_7)
    float temp0_58[0x4] = _mm_mul_ps(temp0_56, zmm1)
    float var_280_1 = temp0_57[0]
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xaa)
    zmm5 = _mm_shuffle_ps(temp0_57, temp0_57, 0x55)
    zmm1.d = temp0_58.d f* zmm5.d
    temp0_59[0] = temp0_59[0] * temp0_57[0]
    float temp0_61[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x55)
    int32_t var_284_1 = zmm1.d
    i_7.d = temp0_61.d f* temp0_58[0]
    zmm4 = _mm_shuffle_ps(temp0_58, temp0_58, 0xaa)
    zmm1.d = temp0_59.d f* temp0_61[0]
    int32_t var_288_1 = i_7.d
    i_7.d = zmm4.d f* zmm5.d
    zmm1.d = zmm1.d f- i_7.d
    temp0_59[0] = temp0_59[0] f* zmm5.d
    int32_t var_26c_1 = 0
    int64_t j_2 = 0xa
    int32_t var_25c_1 = 0
    i_7.d = zmm4.d f* temp0_61[0]
    int32_t var_24c_1 = 0x3f800000
    int32_t var_278_1 = zmm1.d
    zmm1.d = temp0_58.d f* temp0_59[0]
    temp0_59[0] = temp0_59[0] f+ i_7.d
    i_7.d = temp0_59.d f* zmm5.d
    int32_t var_270_1 = (zmm1 ^ data_142d3f780).d
    float var_274_1 = temp0_59[0]
    zmm2_2 = zmm4
    zmm4.d = zmm4.d f* temp0_58[0]
    zmm7_2 = var_288_1.o
    zmm2_2[0] = zmm2_2[0] * temp0_57[0]
    int32_t var_260_1 = zmm4.d
    zmm2_2[0] = zmm2_2[0] f* zmm5.d
    zmm5 = var_278_1.o
    zmm1.d = zmm2_2.d f* temp0_61[0]
    temp0_61[0] = temp0_61[0] * temp0_59[0]
    zmm1.d = zmm1.d f+ i_7.d
    int32_t var_258_1 = data_143dbb1f8.d
    i_7 = data_143dbb200
    temp0_61[0] = temp0_61[0] - zmm2_2[0]
    int32_t var_250_1 = i_7.d
    int32_t var_268_1 = (zmm1 ^ data_142d3f780).d
    float var_264_1 = temp0_61[0]
    zmm4 = var_268_1.o
    int32_t var_254_1 = data_143dbb1fc.d
    arg5 = var_258_1.o
    int64_t j
    
    do
        zmm1 = *(r14_2 + rbx - 4)
        zmm2_2 = *(r14_2 + rbx)
        float var_248[0x4]
        var_248[0] = (*(r14_2 + rbx - 8)).d
        var_2c8.q = 0
        float temp0_63[0x4] = _mm_shuffle_ps(var_248, var_248, 0xe1)
        temp0_63[0] = zmm1.d
        int32_t var_2c0_2 = 0
        float temp0_64[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xc6)
        temp0_64[0] = zmm2_2[0]
        var_2c8.q = 0
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xc9)
        var_248 = temp0_65
        float temp0_66[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xff)
        i_7 = _mm_shuffle_ps(temp0_65, temp0_65, 0xaa)
        zmm1 = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
        i_7 = _mm_mul_ps(i_7, zmm4)
        int32_t var_2c0_3 = 0
        zmm1 = _mm_mul_ps(zmm1, zmm5)
        float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0), zmm7_2)
        float temp0_73[0x4] = _mm_mul_ps(temp0_66, arg5)
        zmm1 = _mm_add_ps(zmm1, temp0_72)
        float temp0_76[0x4] = _mm_add_ps(_mm_add_ps(temp0_73, i_7), zmm1)
        int32_t var_28c_1 = _mm_shuffle_ps(temp0_76, temp0_76, 0xaa).d
        *(rbx - 0x4e) = (_mm_unpacklo_ps(temp0_76, _mm_shuffle_ps(temp0_76, temp0_76, 0x55).q)).q
        *(rbx - 0x46) = var_28c_1
        zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r14_2 + rbx + 0x48)), zmm11.q), zmm11.q)
        float temp0_84[0x4] =
            _mm_mul_ps(_mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm13_2) & zmm14) | zmm1), zmm15)
        float var_238[0x4]
        var_238[0] = temp0_84[0]
        i_7 = _mm_shuffle_ps(temp0_84, temp0_84, 0x55)
        zmm1 = _mm_shuffle_ps(temp0_84, temp0_84, 0xaa)
        float temp0_87[0x4] = _mm_shuffle_ps(var_238, var_238, 0xe1)
        temp0_87[0] = i_7.d
        float temp0_88[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0xc6)
        temp0_88[0] = zmm1.d
        float temp0_89[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0xc9)
        var_238 = temp0_89
        float temp0_90[0x4] = _mm_shuffle_ps(temp0_89, temp0_89, 0xff)
        i_7 = _mm_shuffle_ps(temp0_89, temp0_89, 0xaa)
        zmm1 = _mm_shuffle_ps(temp0_89, temp0_89, 0x55)
        i_7 = _mm_mul_ps(i_7, zmm4)
        zmm1 = _mm_mul_ps(zmm1, zmm5)
        float temp0_95[0x4] = _mm_mul_ps(temp0_90, arg5)
        float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0), zmm7_2)
        float temp0_100[0x4] = _mm_add_ps(_mm_add_ps(temp0_95, i_7), _mm_add_ps(zmm1, temp0_97))
        zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rbx + r14_2 + 0x44)), zmm11.q), zmm11.q)
        i_7 = _mm_cmpgt_epi32(zmm1, zmm13_2) & zmm14
        var_2c8.o = temp0_100
        var_2a8.q = 0
        float temp0_104[0x4] = _mm_cvtepi32_ps(i_7 | zmm1)
        int32_t var_2a0_2 = 0
        i_7 = data_142d3f660
        float temp0_105[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0x55)
        var_2b8.o = i_7
        zmm1 = _mm_shuffle_ps(temp0_84, temp0_84, 0xaa)
        float temp0_107[0x4] = _mm_mul_ps(temp0_104, zmm15)
        var_2b8.q = 0
        int32_t var_2b0_2 = 0
        float temp0_108[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0xaa)
        zmm4.d = temp0_107.d f* zmm1.d
        zmm5.d = temp0_108.d f* temp0_105[0]
        temp0_108[0] = temp0_108[0] * temp0_84[0]
        float temp0_109[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0x55)
        temp0_109[0] = temp0_109[0] * temp0_84[0]
        i_7.d = temp0_109.d f* zmm1.d
        zmm4.d = zmm4.d f- temp0_108[0]
        float temp0_110[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xff)
        zmm5.d = zmm5.d f- i_7.d
        i_7.d = temp0_107.d f* temp0_105[0]
        zmm4.d = zmm4.d f* temp0_110[0]
        temp0_109[0] = temp0_109[0] f- i_7.d
        zmm5.d = zmm5.d f* temp0_110[0]
        float var_228[0x4]
        var_228[0] = zmm5.d
        float temp0_111[0x4] = _mm_shuffle_ps(var_228, var_228, 0xe1)
        temp0_111[0] = zmm4.d
        temp0_109[0] = temp0_109[0] * temp0_110[0]
        float temp0_112[0x4] = _mm_shuffle_ps(temp0_111, temp0_111, 0xc6)
        temp0_112[0] = temp0_109[0]
        arg5 = var_258_1.o
        float temp0_113[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0xc9)
        var_228 = temp0_113
        float temp0_114[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xff)
        i_7 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_113, temp0_113, 0xaa), var_268_1.o)
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_113, temp0_113, 0x55), var_278_1.o)
        float temp0_119[0x4] = _mm_mul_ps(temp0_114, arg5)
        float temp0_121[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_113, temp0_113, 0), var_288_1.o)
        float temp0_122[0x4] = _mm_add_ps(temp0_119, i_7)
        i_7 = _mm_shuffle_ps(temp0_107, temp0_107, 0x55)
        float temp0_125[0x4] = _mm_add_ps(temp0_122, _mm_add_ps(zmm1, temp0_121))
        zmm1 = _mm_shuffle_ps(temp0_107, temp0_107, 0xaa)
        var_2b8.o = temp0_125
        float var_218[0x4]
        var_218[0] = temp0_107[0]
        float temp0_127[0x4] = _mm_shuffle_ps(var_218, var_218, 0xe1)
        temp0_127[0] = i_7.d
        float temp0_128[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0xc6)
        temp0_128[0] = zmm1.d
        float temp0_129[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0xc9)
        var_218 = temp0_129
        float temp0_130[0x4] = _mm_shuffle_ps(temp0_129, temp0_129, 0xff)
        i_7 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_129, temp0_129, 0xaa), var_268_1.o)
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_129, temp0_129, 0x55), var_278_1.o)
        float temp0_135[0x4] = _mm_mul_ps(temp0_130, arg5)
        float temp0_136[0x4] = _mm_shuffle_ps(temp0_129, temp0_129, 0)
        float temp0_140[0x4] = _mm_add_ps(_mm_add_ps(temp0_135, i_7), 
            _mm_add_ps(zmm1, _mm_mul_ps(temp0_136, var_288_1.o)))
        var_2a8.o = temp0_140
        temp0_140[0] = temp0_140[0] * zmm10[0]
        temp0_140[0] = temp0_140[0] + temp0_140[0]
        temp0_140[0] = temp0_140[0] + zmm9[0]
        int32_t rdi_2 = int.d(temp0_140[0]) s>> 1
        char rax_4
        
        if (rdi_2 s>= 0xffffff80)
            rax_4 = 0x7f
            
            if (rdi_2 s< 0x7f)
                rax_4 = rdi_2.b
        else
            rax_4 = -0x80
        
        int32_t var_2a4
        zmm1.d = var_2a4.d f* zmm10[0]
        *(rbx - 2) = rax_4
        zmm1.d = zmm1.d f+ zmm1.d
        zmm1.d = zmm1.d f+ zmm9[0]
        int32_t r10_2 = int.d(zmm1.d) s>> 1
        char rax_5
        
        if (r10_2 s>= 0xffffff80)
            rax_5 = 0x7f
            
            if (r10_2 s< 0x7f)
                rax_5 = r10_2.b
        else
            rax_5 = -0x80
        
        zmm1.d = var_2a0_2.d f* zmm10[0]
        *(rbx - 1) = rax_5
        zmm1.d = zmm1.d f+ zmm1.d
        zmm1.d = zmm1.d f+ zmm9[0]
        int32_t r11_2 = int.d(zmm1.d) s>> 1
        char rax_6
        
        if (r11_2 s>= 0xffffff80)
            rax_6 = 0x7f
            
            if (r11_2 s< 0x7f)
                rax_6 = r11_2.b
        else
            rax_6 = -0x80
        
        zmm1.d = var_2c8.d f* zmm12_1
        *rbx = rax_6
        *(rbx + 1) = 0x7f
        zmm1.d = zmm1.d f+ zmm9[0]
        int32_t rdx_2 = int.d(zmm1.d) s>> 1
        char rax_7
        
        if (rdx_2 s>= 0xffffff80)
            rax_7 = 0x7f
            
            if (rdx_2 s< 0x7f)
                rax_7 = rdx_2.b
        else
            rax_7 = -0x80
        
        zmm1.d = var_2c4_1.d f* zmm12_1
        *(rbx + 2) = rax_7
        zmm1.d = zmm1.d f+ zmm9[0]
        int32_t r8_2 = int.d(zmm1.d) s>> 1
        char rax_8
        
        if (r8_2 s>= 0xffffff80)
            rax_8 = 0x7f
            
            if (r8_2 s< 0x7f)
                rax_8 = r8_2.b
        else
            rax_8 = -0x80
        
        zmm1.d = var_2c0_3.d f* zmm12_1
        *(rbx + 3) = rax_8
        zmm1.d = zmm1.d f+ zmm9[0]
        int32_t r9_2 = int.d(zmm1.d) s>> 1
        char rax_9
        
        if (r9_2 s>= 0xffffff80)
            rax_9 = 0x7f
            
            if (r9_2 s< 0x7f)
                rax_9 = r9_2.b
        else
            rax_9 = -0x80
        
        *(rbx + 4) = rax_9
        char arg_18
        
        if (rdx_2 s>= 0xffffff80)
            char rcx_1 = 0x7f
            
            if (rdx_2 s< 0x7f)
                rcx_1 = rdx_2.b
            
            arg_18 = rcx_1
        else
            arg_18 = 0x80
        
        char arg_19
        
        if (r8_2 s>= 0xffffff80)
            char rcx_2 = 0x7f
            
            if (r8_2 s< 0x7f)
                rcx_2 = r8_2.b
            
            arg_19 = rcx_2
        else
            arg_19 = 0x80
        char arg_1a
        
        if (r9_2 s>= 0xffffff80)
            char rcx_3 = 0x7f
            
            if (r9_2 s< 0x7f)
                rcx_3 = r9_2.b
            
            arg_1a = rcx_3
        else
            arg_1a = 0x80
        zmm1.d = var_2b8.d f* zmm10[0]
        zmm1.d = zmm1.d f+ zmm1.d
        zmm1.d = zmm1.d f+ zmm9[0]
        int32_t rdx_4 = int.d(zmm1.d) s>> 1
        char var_2d8_1
        
        if (rdx_4 s>= 0xffffff80)
            char rcx_4 = 0x7f
            
            if (rdx_4 s< 0x7f)
                rcx_4 = rdx_4.b
            
            var_2d8_1 = rcx_4
        else
            var_2d8_1 = 0x80
        
        zmm1.d = zmm2_1.d f* zmm10[0]
        zmm1.d = zmm1.d f+ zmm1.d
        zmm1.d = zmm1.d f+ zmm9[0]
        int32_t rdx_6 = int.d(zmm1.d) s>> 1
        
        if (rdx_6 s>= 0xffffff80)
            char rcx_5 = 0x7f
            
            if (rdx_6 s< 0x7f)
                rcx_5 = rdx_6.b
            
            char var_2d7_2 = rcx_5
        else
            char var_2d7_1 = 0x80
        
        zmm1.d = var_2b0_2.d f* zmm10[0]
        zmm1.d = zmm1.d f+ zmm1.d
        zmm1.d = zmm1.d f+ zmm9[0]
        int32_t rdx_8 = int.d(zmm1.d) s>> 1
        
        if (rdx_8 s>= 0xffffff80)
            char rcx_6 = 0x7f
            
            if (rdx_8 s< 0x7f)
                rcx_6 = rdx_8.b
            
            char var_2d6_2 = rcx_6
        else
            char var_2d6_1 = 0x80
        
        char var_2d4_1
        
        if (rdi_2 s>= 0xffffff80)
            char rcx_7 = 0x7f
            
            if (rdi_2 s< 0x7f)
                rcx_7 = rdi_2.b
            
            var_2d4_1 = rcx_7
        else
            var_2d4_1 = 0x80
        
        if (r10_2 s>= 0xffffff80)
            char rcx_8 = 0x7f
            
            if (r10_2 s< 0x7f)
                rcx_8 = r10_2.b
            
            char var_2d3_2 = rcx_8
        else
            char var_2d3_1 = 0x80
        
        if (r11_2 s>= 0xffffff80)
            char rcx_9 = 0x7f
            
            if (r11_2 s< 0x7f)
                rcx_9 = r11_2.b
            
            char var_2d2_2 = rcx_9
        else
            char var_2d2_1 = 0x80
        
        zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(arg_18.d), zmm11.q), zmm11.q)
        int32_t var_1fc_1 = 0
        int32_t var_1ec_1 = 0
        int32_t var_1dc_1 = 0
        zmm4 = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm13_2) & zmm14) | zmm1)
        zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_2d8_1.d), zmm11.q), zmm11.q)
        zmm4 = _mm_mul_ps(zmm4, zmm15)
        float temp0_149[0x4] = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm13_2) & zmm14) | zmm1)
        zmm1 = _mm_unpacklo_epi8(zx.o(var_2d4_1.d), zmm11.q)
        float temp0_151[0x4] = _mm_mul_ps(temp0_149, zmm15)
        zmm1 = _mm_unpacklo_epi16(zmm1, zmm11.q)
        var_1e8_1 = zmm4.d
        i_7 = _mm_cmpgt_epi32(zmm1, zmm13_2) & zmm14
        var_1f8_1 = temp0_151[0]
        float temp0_155[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(i_7 | zmm1), zmm15)
        var_208 = temp0_155[0]
        int32_t var_204_1 = _mm_shuffle_ps(temp0_155, temp0_155, 0x55).d
        int32_t var_1f4_1 = _mm_shuffle_ps(temp0_151, temp0_151, 0x55).d
        int32_t var_1e4_1 = _mm_shuffle_ps(zmm4, zmm4, 0x55).d
        i_7 = data_142d3f660
        float temp0_159[0x4] = _mm_shuffle_ps(temp0_155, temp0_155, 0xaa)
        float temp0_160[0x4] = _mm_shuffle_ps(temp0_151, temp0_151, 0xaa)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
        uint128_t i_8 = i_7
        float var_200_1 = temp0_159[0]
        float var_1f0_1 = temp0_160[0]
        int32_t var_1e0_1 = zmm4.d
        i_7, arg5, zmm7_2, zmm9, zmm10, zmm11, zmm12_1, zmm13_2, zmm14, zmm15 =
            sub_14062b8d0(&var_208)
        
        i_7 = i_7.d f>= 0f ? 0x3f800000 : 0xbf800000
        
        zmm4 = var_268_1.o
        char rax_19 = 0x7f
        zmm5 = var_278_1.o
        
        if (i_7.d f< 0f)
            rax_19 = -0x7f
        
        *(rbx + 5) = rax_19
        *(rbx - 0x42) = var_298_1.d
        *(rbx - 0x3e) = *(r14_2 + rbx + 8)
        rbx += 0x58
        j = j_2
        j_2 -= 1
    while (j != 1)
    zmm4 = var_118
    i_1 += 1
    zmm5 = var_108
    r14_2 -= 0x370
    arg5 = var_f8
    zmm7_2 = var_e8
while (i_1 s< 0x11)

int32_t i_3 = 1
void var_1c8
sub_141fd6cc0(&var_1c8, arg7[0x1d].d, 1, 0, 0, nullptr)
int128_t* rbx_1 = rax
int64_t i_5 = 0xaa
int64_t i_2

do
    sub_141fdac10(&var_1c8, rbx_1)
    rbx_1 += 0x58
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
int64_t j_3

do
    int32_t i_6 = i_3
    j_3 = 9
    int64_t j_1
    
    do
        sub_141fdaaf0(&var_1c8, i_6 - 1, i_6 + 9, i_6)
        sub_141fdaaf0(&var_1c8, i_6 + 9, i_6 + 0xa, i_6)
        i_6 += 1
        j_1 = j_3
        j_3 -= 1
    while (j_1 != 1)
    i_3 += 0xa
while (i_3 s< 0xa1)

float zmm1_2[0x4] = *arg2
float temp0_162[0x4] = _mm_add_ps(zmm1_2, zmm1_2)
float temp0_163[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 4)
float temp0_164[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xff)
float temp0_165[0x4] = _mm_mul_ps(zmm1_2, temp0_162)
float temp0_167[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_162, temp0_162, 0x29), temp0_163)
float temp0_169[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_162, temp0_162, 0x12), temp0_164)
zmm1_2 = arg2[2]
float temp0_170[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0x1a)
float temp0_171[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xc9)
float temp0_173[0x4] = _mm_add_ps(temp0_170, _mm_shuffle_ps(temp0_165, temp0_165, 1))
float zmm4_1[0x4] = data_143f515b0
float temp0_174[0x4] = _mm_add_ps(temp0_169, temp0_167)
float temp0_175[0x4] = _mm_sub_ps(temp0_167, temp0_169)
float temp0_176[0x4] = _mm_sub_ps(zmm4_1, temp0_173)
float temp0_177[0x4] = _mm_mul_ps(temp0_174, zmm1_2)
float temp0_178[0x4] = _mm_mul_ps(temp0_171, temp0_175)
float zmm3_2[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_176, zmm1_2), data_143f515c0)
float temp0_181[0x4] = _mm_shuffle_ps(temp0_178, zmm3_2, 0x32)
float temp0_183[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_177, zmm3_2, 0), temp0_181, 0x82)
float temp0_184[0x4] = _mm_shuffle_ps(temp0_177, zmm3_2, 0x31)
float temp0_186[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_178, zmm3_2, 0x10), temp0_184, 0x88)
float zmm0_2[0x4] = arg2[1]
zmm4_1[0].q = zmm0_2 u>> 0x40
float temp0_187[0x4] = _mm_shuffle_ps(temp0_177, temp0_178, 0x12)
float temp0_188[0x4] = _mm_shuffle_ps(zmm0_2, zmm4_1, 0xc4)
float temp0_189[0x4] = _mm_shuffle_ps(temp0_187, zmm3_2, 0xe8)
float var_1d8_1[0x4] = temp0_188
var_208.o = temp0_183
var_1f8_1.o = temp0_186
var_1e8_1.o = temp0_189
sub_141fe3230(&var_1c8, &var_208, arg4, 0, j_3.b, 0, arg6, arg7)
sub_140a74f90(rax)
sub_140a74f90(rax_1)
int512_t zmm6_1
zmm6_1.o = var_48
return sub_141fd8140(&var_1c8)
