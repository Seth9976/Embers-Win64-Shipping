// 函数: sub_1422a00e0
// 地址: 0x1422a00e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_58 = arg5
uint128_t var_68 = arg6
int32_t r13 = 0
float var_78[0x4] = arg7
int32_t rbx = arg4
float var_88[0x4] = arg8
float var_98[0x4] = arg9
float var_a8[0x4] = arg10
float var_b8[0x4] = arg11
float var_c8[0x4] = arg12
uint128_t var_e8 = arg13
void var_210
sub_141fd6cc0(&var_210, *(arg21 + 0xe8), 1, 0, 0, nullptr)
int64_t r12 = sx.q(arg14)
int32_t rax_1 = rbx + 1
int32_t r15 = (r12 + 1).d
int32_t var_34c = r15
int32_t i_6 = r15 * rax_1
int128_t* rax_3 = sub_140a82f30(sx.q(i_6) * 0x58, 0)
int128_t* rdi = rax_3
void* rax_4 = sub_140a82f30((r12 + 1) * 0x58, 0)
int32_t zmm14[0x4] = 0x80000000
int32_t r14 = 0
float zmm1[0x4] = 0x3f800000
float zmm2[0x4] = zx.o(0)
int32_t var_2f0
uint128_t zmm0_1

if (r15 s> 0)
    arg7 = arg16
    void* rsi_1 = rax_4 + 8
    arg8 = arg15
    arg7[0] = arg7[0] - arg8[0]
    zmm0_1 = _mm_cvtepi32_ps(zx.o(r12.d))
    var_2f0 = 0
    int64_t var_2e0 = 0x3f800000
    int32_t var_2d8_1 = 0
    arg6.d = 1f f/ zmm0_1.d
    
    do
        *(rsi_1 - 8) = 0
        arg5.d = _mm_cvtepi32_ps(zx.o(r14)).d f* arg6.d
        arg7[0] = arg7[0] f* arg5.d
        arg7[0] = arg7[0] + arg8[0]
        zmm0_1.d = arg7[0]
        float zmm0_2[0x4]
        int128_t zmm14_1
        zmm0_2, zmm14_1 = __libm_sse2_sincosf_(zmm0_1)
        *(rsi_1 - 4) = zmm0_2[0]
        float temp0_3[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
        *rsi_1 = temp0_3[0]
        float var_2e8_1 = zmm0_2[0]
        float var_2ec_1 = (temp0_3 ^ zmm14_1)[0]
        arg5, arg6, arg7, arg8, zmm14 = sub_142252cf0(rsi_1 - 8, &var_2e0, &var_2f0, rsi_1 - 8)
        *(rsi_1 + 8) = arg5.d
        r14 += 1
        *(rsi_1 + 4) = 0
        rsi_1 += 0x58
    while (r14 s< r15)
    
    zmm1 = 0x3f800000
    zmm2 = zx.o(0)
    rbx = arg4

int32_t rax_5 = 0
int32_t var_354 = 0
int32_t var_348
float var_344
int32_t var_33c
float var_338
float var_330
float var_328
float var_298[0x4]

if (rbx + 1 s> 0)
    uint128_t zmm4_1 = data_142dc1870
    int64_t i_7 = r12 + 1
    uint128_t zmm5_1 = data_142dc1880
    arg13 = data_142dc1860
    float zmm3[0x4] = zmm1
    arg5 = data_142dc1850
    int32_t rcx_7 = 0
    arg10 = 0x42fe0000
    arg9 = 0x3f000000
    arg11 = 0x437e0000
    arg12 = data_143f52910
    int32_t r8_1 = rax_1
    uint128_t var_138_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
    uint128_t var_1e8_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    uint128_t var_1d8_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    uint128_t var_1c8_1 = _mm_shuffle_ps(arg13, arg13, 0x55)
    uint128_t var_1b8_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    uint128_t var_1a8_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
    uint128_t var_198_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
    zmm0_1 = _mm_cvtepi32_ps(zx.o(rbx))
    var_2f0.q = i_7
    int32_t var_350_1 = 0
    arg6 = _mm_shuffle_ps(arg5, arg5, 0x55)
    zmm3[0] = zmm3[0] f/ zmm0_1.d
    arg5 = _mm_shuffle_ps(arg5, arg5, 0)
    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
    arg13 = _mm_shuffle_ps(arg13, arg13, 0)
    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
    float var_35c_1 = zmm3[0]
    uint128_t var_148_1 = arg6
    uint128_t var_158_1 = arg5
    uint128_t var_178_1 = zmm4_1
    uint128_t var_188_1 = arg13
    uint128_t var_168_1 = zmm5_1
    
    do
        var_33c = 0
        arg8 = zx.o(0)
        arg8[0] = float.s(rax_5)
        arg8[0] = arg8[0] * 360f
        arg8[0] = arg8[0] * zmm3[0]
        zmm3 = data_143f52940
        float temp0_19[0x4] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(zmm2, _mm_unpacklo_ps(arg8, zx.o(0).q)[0].q), data_143f52990)
        float temp0_24[0x4] = _mm_sub_ps(temp0_19, 
            __mulps_xmmps_memps(
                _mm_cvtepi32_ps(_mm_cvtps_epi32(__mulps_xmmps_memps(temp0_19, data_143f52980))), 
                data_143f52970))
        float temp0_26[0x4] = _mm_cmpeq_ps(zmm3, __andps_xmmxud_memxud(temp0_24, data_143f52900), 1)
        zmm0_1 = _mm_and_ps(
            _mm_sub_ps(
                __orps_xmmxud_memxud(__andps_xmmxud_memxud(temp0_24, data_143f52960), 
                    data_143f52950), 
                temp0_24) ^ temp0_24, 
            temp0_26) ^ temp0_24
        float temp0_31[0x4] = _mm_mul_ps(zmm0_1, zmm0_1)
        float temp0_32[0x4] = _mm_mul_ps(arg6, temp0_31)
        arg6 = _mm_mul_ps(var_1c8_1, temp0_31)
        float temp0_34[0x4] = _mm_add_ps(temp0_32, arg5)
        arg6 = _mm_add_ps(arg6, arg13)
        float temp0_36[0x4] = _mm_mul_ps(temp0_34, temp0_31)
        arg6 = _mm_mul_ps(arg6, temp0_31)
        float temp0_38[0x4] = __addps_xmmps_memps(temp0_36, var_138_1)
        arg6 = __addps_xmmps_memps(arg6, var_1b8_1)
        float temp0_40[0x4] = _mm_mul_ps(temp0_38, temp0_31)
        arg6 = _mm_mul_ps(arg6, temp0_31)
        float temp0_42[0x4] = __addps_xmmps_memps(temp0_40, var_1e8_1)
        arg6 = __addps_xmmps_memps(arg6, var_1a8_1)
        float temp0_44[0x4] = _mm_mul_ps(temp0_42, temp0_31)
        arg6 = _mm_mul_ps(arg6, temp0_31)
        float temp0_46[0x4] = __addps_xmmps_memps(temp0_44, var_1d8_1)
        arg6 = __addps_xmmps_memps(arg6, var_198_1)
        float temp0_48[0x4] = _mm_mul_ps(temp0_46, temp0_31)
        arg6 = _mm_mul_ps(arg6, temp0_31)
        float temp0_50[0x4] = _mm_add_ps(temp0_48, zmm4_1)
        arg6 = _mm_add_ps(arg6, zmm5_1)
        float temp0_52[0x4] = _mm_mul_ps(temp0_50, zmm0_1)
        zmm0_1 = _mm_and_ps(data_143f52930 ^ arg12, temp0_26) ^ arg12
        float var_340_1 = temp0_52[0]
        arg6 = _mm_mul_ps(arg6, zmm0_1)
        float temp0_55[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xaa)
        zmm5_1 = _mm_shuffle_ps(temp0_52, temp0_52, 0x55)
        temp0_55[0] = temp0_55[0] * temp0_52[0]
        zmm1 = arg6
        zmm1[0] = zmm1[0] f* zmm5_1.d
        arg5 = _mm_shuffle_ps(arg6, arg6, 0x55)
        zmm4_1 = _mm_shuffle_ps(arg6, arg6, 0xaa)
        zmm0_1.d = arg5.d f* arg6.d
        var_344 = zmm1[0]
        temp0_55[0] = temp0_55[0] f* arg5.d
        var_348 = zmm0_1.d
        zmm0_1.d = zmm4_1.d f* zmm5_1.d
        temp0_55[0] = temp0_55[0] f* zmm5_1.d
        temp0_55[0] = temp0_55[0] f- zmm0_1.d
        var_338 = temp0_55[0]
        int32_t var_32c_1 = 0
        zmm0_1.d = zmm4_1.d f* arg5.d
        zmm1 = arg6
        int32_t var_31c_1 = 0
        zmm1[0] = zmm1[0] * temp0_55[0]
        int32_t var_30c_1 = 0x3f800000
        temp0_55[0] = temp0_55[0] f+ zmm0_1.d
        zmm0_1.d = temp0_55.d f* zmm5_1.d
        var_330 = (zmm1 ^ zmm14)[0]
        float var_334_1 = temp0_55[0]
        zmm2 = zmm4_1
        zmm2[0] = zmm2[0] * temp0_52[0]
        zmm4_1.d = zmm4_1.d f* arg6.d
        zmm2[0] = zmm2[0] f* zmm5_1.d
        zmm2[0] = zmm2[0] f* arg5.d
        arg5.d = arg5.d f* temp0_55[0]
        zmm3 = var_35c_1
        zmm2[0] = zmm2[0] f+ zmm0_1.d
        int32_t var_318_1 = data_143dbb1f8.d
        arg5.d = arg5.d f- zmm2[0]
        int32_t var_310_1 = data_143dbb200.d
        zmm0_1.d = zmm3.d f* arg8[0]
        var_328 = (zmm2 ^ zmm14)[0]
        int32_t var_2f8_1 = zmm0_1.d
        int32_t var_324_1 = arg5.d
        int32_t var_320_1 = zmm4_1.d
        float var_314_1 = data_143dbb1fc[0]
        
        if (i_7 s<= 0)
            zmm2 = zx.o(0)
        else
            zmm14 = data_142dd3f80
            void* r14_1 = rax_4 + 8
            arg13 = data_142dd3fd0
            arg8 = zx.o(0)
            arg12 = data_142dd3fb0
            int32_t r15_1 = rcx_7
            arg5 = var_318_1.o
            int64_t i_4 = i_7
            zmm4_1 = var_328.o
            zmm5_1 = var_338.o
            arg6 = var_348.o
            int32_t var_21c_1 = 0x3f800000
            int32_t var_24c_1 = 0
            int32_t var_23c_1 = 0
            int32_t var_22c_1 = 0
            char var_365_1 = 0x7f
            char var_361_1 = 0x7f
            char var_35d_1 = 0x7f
            int64_t i
            
            do
                zmm1 = *(r14_1 - 4)
                zmm2 = *r14_1
                float var_228[0x4]
                var_228[0] = (*(r14_1 - 8)).d
                float temp0_59[0x4] = _mm_shuffle_ps(var_228, var_228, 0xe1)
                temp0_59[0] = zmm1[0]
                int64_t var_2c8_1 = 0
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xc6)
                temp0_60[0] = zmm2[0]
                int32_t var_2c0_1 = 0
                float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xc9)
                var_228 = temp0_61
                float temp0_62[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
                zmm0_1 = _mm_shuffle_ps(temp0_61, temp0_61, 0xaa)
                float temp0_64[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
                zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_1)
                int64_t var_308_1 = 0
                float temp0_66[0x4] = _mm_mul_ps(temp0_64, zmm5_1)
                int32_t var_300_1 = 0
                float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0), arg6)
                float temp0_69[0x4] = _mm_mul_ps(temp0_62, arg5)
                uint64_t* rbx_1 = sx.q(r15_1) * 0x58
                float temp0_70[0x4] = _mm_add_ps(temp0_66, temp0_68)
                float temp0_72[0x4] = _mm_add_ps(_mm_add_ps(temp0_69, zmm0_1), temp0_70)
                int32_t var_2d8_2 = _mm_shuffle_ps(temp0_72, temp0_72, 0xaa).d
                *(rbx_1 + rdi) =
                    (_mm_unpacklo_ps(temp0_72, _mm_shuffle_ps(temp0_72, temp0_72, 0x55)[0].q)).q
                *(rbx_1 + rdi + 8) = var_2d8_2
                zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r14_1 + 0x48)), arg8[0].q), 
                    arg8[0].q)
                float temp0_80[0x4] = _mm_mul_ps(
                    _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm14) & arg13) | zmm1), arg12)
                float var_258[0x4]
                var_258[0] = temp0_80[0]
                float temp0_81[0x4] = _mm_shuffle_ps(var_258, var_258, 0xe1)
                float temp0_82[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0xaa)
                temp0_81[0] = _mm_shuffle_ps(temp0_80, temp0_80, 0x55).d
                float temp0_84[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0xc6)
                temp0_84[0] = temp0_82[0]
                float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xc9)
                var_258 = temp0_85
                float temp0_86[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xff)
                zmm0_1 = _mm_shuffle_ps(temp0_85, temp0_85, 0xaa)
                float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_85, temp0_85, 0x55), zmm5_1)
                float temp0_90[0x4] = _mm_mul_ps(temp0_86, arg5)
                zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_1)
                float temp0_93[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_85, temp0_85, 0), arg6)
                float temp0_96[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_90, zmm0_1), _mm_add_ps(temp0_89, temp0_93))
                zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r14_1 + 0x44)), arg8[0].q), 
                    arg8[0].q)
                var_2c8_1.o = temp0_96
                int64_t var_2b8_1 = 0
                int32_t var_2b0_1 = 0
                arg6 = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm14) & arg13) | zmm1)
                var_308_1.o = data_142d3f660
                float temp0_101[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0x55)
                float temp0_102[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0xaa)
                zmm4_1 = _mm_mul_ps(arg6, arg12)
                int64_t var_308_2 = 0
                arg6 = _mm_mul_ps(arg6, arg12)
                float temp0_105[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                arg5 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                zmm5_1.d = temp0_105.d f* temp0_101[0]
                zmm0_1.d = arg5.d f* temp0_102[0]
                temp0_105[0] = temp0_105[0] * temp0_80[0]
                zmm5_1.d = zmm5_1.d f- zmm0_1.d
                arg5.d = arg5.d f* temp0_80[0]
                float temp0_107[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0xff)
                zmm0_1.d = zmm4_1.d f* temp0_102[0]
                zmm4_1.d = zmm4_1.d f* temp0_101[0]
                zmm0_1.d = zmm0_1.d f- temp0_105[0]
                zmm5_1.d = zmm5_1.d f* temp0_107[0]
                arg5.d = arg5.d f- zmm4_1.d
                float var_248[0x4]
                var_248[0] = zmm5_1.d
                zmm0_1.d = zmm0_1.d f* temp0_107[0]
                float temp0_108[0x4] = _mm_shuffle_ps(var_248, var_248, 0xe1)
                arg5.d = arg5.d f* temp0_107[0]
                temp0_108[0] = zmm0_1.d
                float temp0_109[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0xc6)
                temp0_109[0] = arg5.d
                arg5 = var_318_1.o
                float temp0_110[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0xc9)
                var_248 = temp0_110
                float temp0_111[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0xff)
                zmm0_1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_110, temp0_110, 0xaa), var_328.o)
                float temp0_115[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_110, temp0_110, 0x55), var_338.o)
                float temp0_116[0x4] = _mm_mul_ps(temp0_111, arg5)
                float temp0_118[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_110, temp0_110, 0), var_348.o)
                float temp0_119[0x4] = _mm_add_ps(temp0_116, zmm0_1)
                zmm0_1 = _mm_shuffle_ps(arg6, arg6, 0x55)
                float temp0_122[0x4] = _mm_add_ps(temp0_119, _mm_add_ps(temp0_115, temp0_118))
                float temp0_123[0x4] = _mm_shuffle_ps(arg6, arg6, 0xaa)
                var_2b8_1.o = temp0_122
                float var_238[0x4]
                var_238[0] = arg6.d
                float temp0_124[0x4] = _mm_shuffle_ps(var_238, var_238, 0xe1)
                temp0_124[0] = zmm0_1.d
                float temp0_125[0x4] = _mm_shuffle_ps(temp0_124, temp0_124, 0xc6)
                temp0_125[0] = temp0_123[0]
                float temp0_126[0x4] = _mm_shuffle_ps(temp0_125, temp0_125, 0xc9)
                var_238 = temp0_126
                float temp0_127[0x4] = _mm_shuffle_ps(temp0_126, temp0_126, 0xff)
                zmm0_1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_126, temp0_126, 0xaa), var_328.o)
                float temp0_137[0x4] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_127, arg5), zmm0_1), 
                    _mm_add_ps(
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_126, temp0_126, 0x55), var_338.o), 
                        _mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0), var_348.o)))
                var_308_2.o = temp0_137
                temp0_137[0] = temp0_137[0] * arg10[0]
                temp0_137[0] = temp0_137[0] + temp0_137[0]
                temp0_137[0] = temp0_137[0] + arg9[0]
                int32_t rsi_3 = int.d(temp0_137[0]) s>> 1
                char rax_8
                
                if (rsi_3 s>= 0xffffff80)
                    rax_8 = 0x7f
                    
                    if (rsi_3 s< 0x7f)
                        rax_8 = rsi_3.b
                else
                    rax_8 = -0x80
                
                zmm1 = var_308_2:4.d
                zmm1[0] = zmm1[0] * arg10[0]
                *(rbx_1 + rdi + 0x4c) = rax_8
                zmm1[0] = zmm1[0] + zmm1[0]
                zmm1[0] = zmm1[0] + arg9[0]
                int32_t r10_2 = int.d(zmm1[0]) s>> 1
                char rax_9
                
                if (r10_2 s>= 0xffffff80)
                    rax_9 = 0x7f
                    
                    if (r10_2 s< 0x7f)
                        rax_9 = r10_2.b
                else
                    rax_9 = -0x80
                
                zmm1 = 0
                zmm1[0] = 0f * arg10[0]
                *(rbx_1 + rdi + 0x4d) = rax_9
                zmm1[0] = zmm1[0] + zmm1[0]
                zmm1[0] = zmm1[0] + arg9[0]
                int32_t r11_2 = int.d(zmm1[0]) s>> 1
                char rax_10
                
                if (r11_2 s>= 0xffffff80)
                    rax_10 = 0x7f
                    
                    if (r11_2 s< 0x7f)
                        rax_10 = r11_2.b
                else
                    rax_10 = -0x80
                
                zmm1 = var_2c8_1.d
                zmm1[0] = zmm1[0] * arg11[0]
                *(rbx_1 + rdi + 0x4e) = rax_10
                *(rbx_1 + rdi + 0x4f) = 0x7f
                zmm1[0] = zmm1[0] + arg9[0]
                int32_t r9_2 = int.d(zmm1[0]) s>> 1
                char rax_11
                
                if (r9_2 s>= 0xffffff80)
                    rax_11 = 0x7f
                    
                    if (r9_2 s< 0x7f)
                        rax_11 = r9_2.b
                else
                    rax_11 = -0x80
                
                zmm1 = var_2c8_1:4.d
                zmm1[0] = zmm1[0] * arg11[0]
                *(rbx_1 + rdi + 0x50) = rax_11
                zmm1[0] = zmm1[0] + arg9[0]
                int32_t rdx_3 = int.d(zmm1[0]) s>> 1
                char rax_12
                
                if (rdx_3 s>= 0xffffff80)
                    rax_12 = 0x7f
                    
                    if (rdx_3 s< 0x7f)
                        rax_12 = rdx_3.b
                else
                    rax_12 = -0x80
                
                zmm1 = var_2c0_1
                zmm1[0] = zmm1[0] * arg11[0]
                *(rbx_1 + rdi + 0x51) = rax_12
                zmm1[0] = zmm1[0] + arg9[0]
                int32_t r8_3 = int.d(zmm1[0]) s>> 1
                char rax_13
                
                if (r8_3 s>= 0xffffff80)
                    rax_13 = 0x7f
                    
                    if (r8_3 s< 0x7f)
                        rax_13 = r8_3.b
                else
                    rax_13 = -0x80
                
                *(rbx_1 + rdi + 0x52) = rax_13
                *(rbx_1 + rdi + 0x53) = 0x7f
                char var_368_1
                
                if (r9_2 s>= 0xffffff80)
                    char rcx_8 = 0x7f
                    
                    if (r9_2 s< 0x7f)
                        rcx_8 = r9_2.b
                    
                    var_368_1 = rcx_8
                else
                    var_368_1 = 0x80
                
                if (rdx_3 s>= 0xffffff80)
                    char rcx_9 = 0x7f
                    
                    if (rdx_3 s< 0x7f)
                        rcx_9 = rdx_3.b
                    
                    char var_367_2 = rcx_9
                else
                    char var_367_1 = 0x80
                
                if (r8_3 s>= 0xffffff80)
                    char rcx_10 = 0x7f
                    
                    if (r8_3 s< 0x7f)
                        rcx_10 = r8_3.b
                    
                    char var_366_2 = rcx_10
                else
                    char var_366_1 = 0x80
                
                zmm1 = var_2b8_1.d
                zmm1[0] = zmm1[0] * arg10[0]
                zmm1[0] = zmm1[0] + zmm1[0]
                zmm1[0] = zmm1[0] + arg9[0]
                int32_t rdx_5 = int.d(zmm1[0]) s>> 1
                char var_364_1
                
                if (rdx_5 s>= 0xffffff80)
                    char rcx_11 = 0x7f
                    
                    if (rdx_5 s< 0x7f)
                        rcx_11 = rdx_5.b
                    
                    var_364_1 = rcx_11
                else
                    var_364_1 = 0x80
                
                zmm1 = var_2b8_1:4.d
                zmm1[0] = zmm1[0] * arg10[0]
                zmm1[0] = zmm1[0] + zmm1[0]
                zmm1[0] = zmm1[0] + arg9[0]
                int32_t rdx_7 = int.d(zmm1[0]) s>> 1
                
                if (rdx_7 s>= 0xffffff80)
                    char rcx_12 = 0x7f
                    
                    if (rdx_7 s< 0x7f)
                        rcx_12 = rdx_7.b
                    
                    char var_363_2 = rcx_12
                else
                    char var_363_1 = 0x80
                
                zmm1 = var_2b0_1
                zmm1[0] = zmm1[0] * arg10[0]
                zmm1[0] = zmm1[0] + zmm1[0]
                zmm1[0] = zmm1[0] + arg9[0]
                int32_t rdx_9 = int.d(zmm1[0]) s>> 1
                
                if (rdx_9 s>= 0xffffff80)
                    char rcx_13 = 0x7f
                    
                    if (rdx_9 s< 0x7f)
                        rcx_13 = rdx_9.b
                    
                    char var_362_2 = rcx_13
                else
                    char var_362_1 = 0x80
                
                char var_360_1
                
                if (rsi_3 s>= 0xffffff80)
                    char rcx_14 = 0x7f
                    
                    if (rsi_3 s< 0x7f)
                        rcx_14 = rsi_3.b
                    
                    var_360_1 = rcx_14
                else
                    var_360_1 = 0x80
                
                if (r10_2 s>= 0xffffff80)
                    char rcx_15 = 0x7f
                    
                    if (r10_2 s< 0x7f)
                        rcx_15 = r10_2.b
                    
                    char var_35f_2 = rcx_15
                else
                    char var_35f_1 = 0x80
                
                if (r11_2 s>= 0xffffff80)
                    char rcx_16 = 0x7f
                    
                    if (r11_2 s< 0x7f)
                        rcx_16 = r11_2.b
                    
                    char var_35e_2 = rcx_16
                else
                    char var_35e_1 = 0x80
                
                zmm1 =
                    _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_368_1.d), arg8[0].q), arg8[0].q)
                var_298[3] = 0
                int128_t var_288
                var_288:0xc.d = 0
                int128_t var_278
                var_278:0xc.d = 0
                zmm4_1 = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm14) & arg13) | zmm1)
                zmm1 =
                    _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_364_1.d), arg8[0].q), arg8[0].q)
                zmm4_1 = _mm_mul_ps(zmm4_1, arg12)
                float temp0_146[0x4] =
                    _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm14) & arg13) | zmm1)
                zmm1 = _mm_unpacklo_epi8(zx.o(var_360_1.d), arg8[0].q)
                float temp0_148[0x4] = _mm_mul_ps(temp0_146, arg12)
                zmm1 = _mm_unpacklo_epi16(zmm1, arg8[0].q)
                var_278.d = zmm4_1.d
                zmm0_1 = _mm_cmpgt_epi32(zmm1, zmm14) & arg13
                var_288.d = temp0_148[0]
                float temp0_152[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm0_1 | zmm1), arg12)
                var_298[0] = temp0_152[0]
                var_298[1] = _mm_shuffle_ps(temp0_152, temp0_152, 0x55).d
                var_288:4.d = _mm_shuffle_ps(temp0_148, temp0_148, 0x55).d
                var_278:4.d = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55).d
                zmm0_1 = data_142d3f660
                float temp0_156[0x4] = _mm_shuffle_ps(temp0_152, temp0_152, 0xaa)
                float temp0_157[0x4] = _mm_shuffle_ps(temp0_148, temp0_148, 0xaa)
                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                uint128_t var_268 = zmm0_1
                var_298[2] = temp0_156[0]
                var_288:8.d = temp0_157[0]
                var_278:8.d = zmm4_1.d
                zmm0_1, arg5, arg6, arg8, arg9, arg10, arg11, arg12, zmm14, arg13 =
                    sub_14062b8d0(&var_298)
                zmm2 = zx.o(0)
                
                zmm0_1 = zmm0_1.d f>= 0f ? 0x3f800000 : 0xbf800000
                
                zmm4_1 = var_328.o
                char rax_23 = 0x7f
                zmm5_1 = var_338.o
                
                if (zmm0_1.d f< 0f)
                    rax_23 = -0x7f
                
                r15_1 += 1
                *(rbx_1 + rdi + 0x53) = rax_23
                *(rbx_1 + rdi + 0xc) = var_2f8_1.d
                int32_t rax_24 = *(r14_1 + 8)
                r14_1 += 0x58
                *(rbx_1 + rdi + 0x10) = rax_24
                i = i_4
                i_4 -= 1
            while (i != 1)
            arg12 = data_143f52910
            zmm14 = 0x80000000
            arg13 = var_188_1
            zmm3 = var_35c_1
            r15 = var_34c
            rax_5 = var_354
            rcx_7 = var_350_1
            i_7 = var_2f0.q
            r8_1 = rax_1
        
        zmm4_1 = var_178_1
        rax_5 += 1
        zmm5_1 = var_168_1
        rcx_7 += r15
        arg5 = var_158_1
        arg6 = var_148_1
        var_354 = rax_5
        var_350_1 = rcx_7
    while (rax_5 s< r8_1)
    
    r12 = zx.q(arg14)
    r13 = 0

if (i_6 s> 0)
    int128_t* rbx_2 = rdi
    uint64_t i_3 = zx.q(i_6)
    uint64_t i_1
    
    do
        sub_141fdac10(&var_210, rbx_2)
        rbx_2 += 0x58
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (arg4 s> 0)
    do
        int32_t rax_27 = r13 * r15
        r13 += 1
        
        if (r12.d s> 0)
            uint64_t i_5 = zx.q(arg14)
            int32_t rsi_4 = rax_27 + 1
            int32_t r14_4 = r13 * r15 - rax_27
            uint64_t i_2
            
            do
                int32_t rbx_3 = r14_4 - 1 + rsi_4
                sub_141fdaaf0(&var_210, rsi_4 - 1, rbx_3, rsi_4)
                sub_141fdaaf0(&var_210, rbx_3, r14_4 + rsi_4, rsi_4)
                rsi_4 += 1
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
            r15 = var_34c
            r12 = zx.q(arg14)
    while (r13 s< arg4)
    
    rdi = rax_3

sub_140a74f90(rdi)
sub_140a74f90(rax_4)
arg9 = data_142d3f660
int32_t var_25c = 0x3f800000
arg12 = *arg1
zmm14 = *(arg1 + 4)
arg13 = *(arg1 + 8)
var_344.q = 0
var_33c.q = 0
var_330.q = 0
*(arg3 + 8)
*(arg3 + 4)
*arg3
var_328.q = 0
int32_t var_31c_2 = 0
float var_128[0x10]
float* rax_30
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
rax_30, zmm6, zmm7, zmm8 = sub_14077e760(&var_128, arg2)
float zmm2_1[0x4] = var_348.o
zmm2_1[0] = zmm6[0]
float zmm3_1[0x4] = *rax_30
uint128_t zmm4_2 = *(rax_30 + 0x10)
float zmm5_2[0x4] = *(rax_30 + 0x20)
float zmm9[0x4] = *(rax_30 + 0x30)
float temp0_159[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_160[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
float temp0_161[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float temp0_163[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm9)
float temp0_164[0x4] = _mm_mul_ps(temp0_159, zmm4_2)
float temp0_165[0x4] = _mm_mul_ps(temp0_160, zmm5_2)
float temp0_169[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_161, zmm3_1), temp0_164), temp0_165), temp0_163)
zmm2_1 = var_338.o
float temp0_170[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
temp0_170[0] = zmm7[0]
float temp0_171[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0xe1)
float temp0_172[0x4] = _mm_shuffle_ps(arg9, arg9, 0)
float temp0_173[0x4] = _mm_shuffle_ps(temp0_171, temp0_171, 0)
float temp0_174[0x4] = _mm_shuffle_ps(temp0_171, temp0_171, 0x55)
float temp0_175[0x4] = _mm_shuffle_ps(temp0_171, temp0_171, 0xaa)
float temp0_177[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_171, temp0_171, 0xff), zmm9)
float temp0_178[0x4] = _mm_mul_ps(temp0_174, zmm4_2)
float temp0_179[0x4] = _mm_mul_ps(temp0_175, zmm5_2)
float temp0_180[0x4] = _mm_mul_ps(temp0_173, zmm3_1)
float temp0_181[0x4] = _mm_mul_ps(temp0_172, zmm3_1)
float temp0_184[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_180, temp0_178), temp0_179), temp0_177)
zmm2_1 = var_328.o
float temp0_185[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
temp0_185[0] = zmm8[0]
float temp0_186[0x4] = _mm_shuffle_ps(temp0_185, temp0_185, 0xc9)
float temp0_187[0x4] = _mm_shuffle_ps(temp0_186, temp0_186, 0)
float temp0_188[0x4] = _mm_shuffle_ps(temp0_186, temp0_186, 0x55)
float temp0_189[0x4] = _mm_mul_ps(temp0_187, zmm3_1)
float temp0_190[0x4] = _mm_shuffle_ps(temp0_186, temp0_186, 0xaa)
float temp0_191[0x4] = _mm_mul_ps(temp0_188, zmm4_2)
float temp0_192[0x4] = _mm_mul_ps(temp0_190, zmm5_2)
float temp0_193[0x4] = _mm_shuffle_ps(temp0_186, temp0_186, 0xff)
float temp0_194[0x4] = _mm_add_ps(temp0_189, temp0_191)
float temp0_195[0x4] = _mm_mul_ps(temp0_193, zmm9)
float temp0_197[0x4] = _mm_add_ps(_mm_add_ps(temp0_194, temp0_192), temp0_195)
zmm8 = data_142d4cc00
float temp0_199[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg9, arg9, 0x55), zmm4_2)
float temp0_200[0x4] = _mm_shuffle_ps(temp0_169, temp0_169, 0x55)
zmm4_2.d = arg12[0]
float temp0_201[0x4] = _mm_shuffle_ps(arg9, arg9, 0xaa)
float temp0_202[0x4] = _mm_add_ps(temp0_181, temp0_199)
float temp0_203[0x4] = _mm_mul_ps(temp0_201, zmm5_2)
zmm5_2 = data_142d4cc20
float temp0_204[0x4] = _mm_mul_ps(temp0_200, zmm5_2)
float temp0_205[0x4] = _mm_add_ps(temp0_202, temp0_203)
float temp0_207[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_169, temp0_169, 0), zmm8)
float temp0_208[0x4] = _mm_shuffle_ps(temp0_169, temp0_169, 0xaa)
float temp0_209[0x4] = _mm_shuffle_ps(temp0_197, temp0_197, 0x55)
_mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
float temp0_211[0x4] = _mm_add_ps(temp0_204, temp0_207)
float temp0_212[0x4] = _mm_mul_ps(temp0_209, zmm5_2)
zmm4_2.d = zmm14[0]
float temp0_214[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg9, arg9, 0xff), zmm9)
zmm9 = data_142d4cc30
float temp0_215[0x4] = _mm_mul_ps(temp0_208, zmm9)
float temp0_216[0x4] = _mm_shuffle_ps(temp0_184, temp0_184, 0)
float temp0_217[0x4] = _mm_add_ps(temp0_205, temp0_214)
float temp0_218[0x4] = _mm_mul_ps(temp0_216, zmm8)
float temp0_219[0x4] = _mm_add_ps(temp0_211, temp0_215)
_mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
float temp0_221[0x4] = _mm_shuffle_ps(temp0_169, temp0_169, 0xff)
zmm4_2.d = arg13.d
float temp0_223[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_184, temp0_184, 0xaa), zmm9)
zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
uint128_t var_268_1 = zmm4_2
var_298 = _mm_add_ps(temp0_219, _mm_mul_ps(temp0_221, zmm4_2))
float temp0_228[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_184, temp0_184, 0x55), zmm5_2)
float temp0_230[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_184, temp0_184, 0xff), zmm4_2)
float temp0_231[0x4] = _mm_add_ps(temp0_228, temp0_218)
float temp0_233[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_197, temp0_197, 0), zmm8)
float temp0_234[0x4] = _mm_add_ps(temp0_231, temp0_223)
float temp0_235[0x4] = _mm_shuffle_ps(temp0_197, temp0_197, 0xaa)
float temp0_236[0x4] = _mm_add_ps(temp0_212, temp0_233)
float temp0_237[0x4] = _mm_mul_ps(temp0_235, zmm9)
float temp0_238[0x4] = _mm_shuffle_ps(temp0_197, temp0_197, 0xff)
float temp0_239[0x4] = _mm_add_ps(temp0_234, temp0_230)
float temp0_241[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_217, temp0_217, 0), zmm8)
float temp0_242[0x4] = _mm_add_ps(temp0_236, temp0_237)
float temp0_243[0x4] = _mm_mul_ps(temp0_238, zmm4_2)
float var_288_1[0x4] = temp0_239
float temp0_244[0x4] = _mm_shuffle_ps(temp0_217, temp0_217, 0xaa)
float temp0_246[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_217, temp0_217, 0x55), zmm5_2)
float temp0_247[0x4] = _mm_add_ps(temp0_242, temp0_243)
float temp0_248[0x4] = _mm_mul_ps(temp0_244, zmm9)
float temp0_249[0x4] = _mm_shuffle_ps(temp0_217, temp0_217, 0xff)
float temp0_250[0x4] = _mm_add_ps(temp0_246, temp0_241)
float temp0_251[0x4] = _mm_mul_ps(temp0_249, zmm4_2)
float var_278_1[0x4] = temp0_247
int64_t var_370 = arg23
float var_268_2[0x4] = _mm_add_ps(_mm_add_ps(temp0_250, temp0_248), temp0_251)
int512_t zmm6_1
int512_t zmm7_1
int512_t zmm8_1
int512_t zmm9_1
int512_t zmm10
int512_t zmm11
int512_t zmm12
int512_t zmm13
int512_t zmm15
zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10, zmm11, zmm12, zmm13, zmm15 =
    sub_141fe3180(&var_210, &var_298, arg17, arg18, arg19, 0, arg22, arg20, arg21)
zmm6_1.o = var_58
zmm7_1.o = var_68
zmm8_1.o = var_78
zmm9_1.o = var_88
zmm10.o = var_98
zmm11.o = var_a8
zmm12.o = var_b8
zmm13.o = var_c8
zmm15.o = var_e8
return sub_141fd8140(&var_210)
