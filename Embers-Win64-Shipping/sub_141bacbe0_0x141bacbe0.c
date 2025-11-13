// 函数: sub_141bacbe0
// 地址: 0x141bacbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg4
int64_t* rcx = *(arg1 + 0x178)
int64_t* rdi = arg2
int64_t rax_1 = (*(*rcx + 0x280))(rcx)
int64_t* rcx_1 = *(arg1 + 0x108)
int64_t r9 = *rcx_1
uint128_t var_118
int32_t result = (*(r9 + 0x48))(rcx_1, *(arg1 + 0x110), &var_118, r9)
uint128_t zmm1

if (result.b == 0)
    zmm1 = *(arg1 + 0x90)
    var_118 = *(arg1 + 0x80)
    uint128_t var_108_1 = zmm1
    uint128_t var_f8_1 = *(arg1 + 0xa0)
    uint128_t var_e8_1 = *(arg1 + 0xb0)

void* rbx_1 = *(arg1 + 0x170)

if (rbx_1 != 0 && *(rbx_1 + 0x78) != 0)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    int128_t zmm13
    int128_t var_b8_1 = zmm13
    int128_t zmm14
    int128_t var_c8_1 = zmm14
    int64_t var_280
    int64_t var_278
    int64_t var_268
    int32_t var_258
    int32_t var_248
    uint64_t var_238
    uint64_t var_228
    int64_t var_210
    int64_t var_200
    float var_1f0
    float var_1e0
    int32_t var_1d0
    int32_t var_1c8
    int32_t var_1c0
    int64_t var_1b0
    int64_t var_1a4
    int32_t var_198
    int32_t var_18c
    void var_170
    uint128_t var_138
    uint128_t var_128
    
    if (*(arg1 + 0x189) != 0)
        zmm1 = *(arg1 + 0x15c)
        uint128_t zmm0
        zmm0.d = zmm1.d f* 8.91267681f
        zmm0.d = zmm0.d f+ 4f
        zmm6.d = _mm_cvtepi32_ps(zx.o(*(rbx_1 + 0xc0))).d f/ zmm1.d
        float rax_11 = int.d(zmm0.d)
        zmm1.d = zmm1.d f* 0.5f
        int32_t var_180_1 = zmm6.d
        uint128_t zmm0_1
        zmm0_1, zmm6, zmm13 = __libm_sse2_sincosf_(zmm1)
        int32_t rcx_13 = *(rbx_1 + 0xc4)
        zmm8 = *(arg1 + 0x164)
        uint128_t zmm1_1
        zmm1_1.d = _mm_shuffle_ps(zmm0_1, zmm0_1, 1).d f* zmm6.d
        result = neg.d(rcx_13)
        int32_t i = 0
        int32_t i_2 = 0
        float zmm2_1 = zmm13.d f- *(arg1 + 0x160)
        var_128 = zmm1_1
        zmm1_1.d = zmm6.d f+ zmm6.d
        zmm7 = _mm_cvtepi32_ps(zx.o(result))
        zmm0_1.d = zmm0_1.d f* zmm1_1.d
        uint128_t zmm9_1 = _mm_cvtepi32_ps(zx.o(rcx_13))
        zmm0_1.d = zmm0_1.d f* zmm2_1
        zmm7.d = zmm7.d f* zmm8.d
        var_138 = zmm0_1
        var_1c8 = zmm8.d
        var_1d0 = zmm7.d
        var_1c0 = zmm9_1.d
        
        if (rdi[1].d s> 0)
            zmm6 = 0x3f800000
            int32_t r12_1 = 1
            int64_t r14_2 = 0
            int32_t var_214_1 = 1
            int64_t var_1b8_1 = 0
            
            do
                char var_2b8_2 = 0
                sub_141fd6cc0(&var_170, *(*(*rdi + r14_2) + 0x1548), 1, 0, 0, nullptr)
                
                if ((arg4 & r12_1) != 0)
                    int32_t rbx_3 = 0
                    float zmm15_2 = zmm6.d f/ _mm_cvtepi32_ps(zx.o(rax_11)).d f* *(arg1 + 0x15c)
                    
                    if (rax_11 s> 0)
                        data_142d3f780
                        int512_t zmm7_5
                        int512_t zmm8_3
                        
                        do
                            uint128_t zmm0_2
                            zmm0_2.d = (*(arg1 + 0x15c)).d f* zmm13.d
                            zmm6.d = _mm_cvtepi32_ps(zx.o(rbx_3)).d f* zmm15_2
                            zmm6.d = zmm6.d f- zmm0_2.d
                            float zmm0_3[0x4]
                            float zmm6_4
                            int512_t zmm7_3
                            float zmm15_3
                            zmm0_3, zmm6_4, zmm7_3, zmm15_3 = __libm_sse2_sincosf_(zmm6)
                            zmm7_3.o = zmm0_3
                            zmm0_3 = zx.o(0)
                            zmm0_3[0] = zmm15_3 + zmm6_4
                            uint128_t zmm0_4
                            uint128_t zmm7_4
                            uint128_t zmm9_2
                            float zmm10_2[0x4]
                            int32_t zmm11_3
                            int32_t zmm12_3
                            uint128_t zmm13_1
                            int32_t zmm14_3
                            zmm0_4, zmm7_4, zmm9_2, zmm10_2, zmm11_3, zmm12_3, zmm13_1, zmm14_3 =
                                __libm_sse2_sincosf_(zmm0_3)
                            float zmm3_1[0x4] = var_180_1
                            float zmm2_2 = var_128.d
                            float zmm8_2[0x4] = zmm0_4
                            zmm9_2.d = zmm9_2.d f* zmm12_3
                            uint128_t zmm1_3
                            zmm1_3.d = _mm_shuffle_ps(zmm7_4, zmm7_4, 1).d f* zmm3_1[0]
                            zmm7_4.d = zmm7_4.d f* zmm3_1[0]
                            zmm2_2 = zmm2_2 f- zmm1_3.d
                            int32_t var_17c_1 = zmm9_2.d
                            zmm1_3 = var_138
                            zmm9_2 = var_128
                            zmm7_4.d = zmm7_4.d f+ zmm1_3.d
                            zmm0_4 = _mm_cvtepi32_ps(zx.o(rbx_3 + 1))
                            zmm7_4 ^= data_142d3f780
                            zmm0_4.d = zmm0_4.d f* zmm12_3
                            int32_t var_1dc_2 = zmm7_4.d
                            int32_t var_1ec_2 = zmm7_4.d
                            int32_t var_178_1 = zmm0_4.d
                            zmm0_4 = _mm_shuffle_ps(zmm8_2, zmm8_2, 1)
                            zmm8_2[0] = zmm8_2[0] * zmm3_1[0]
                            zmm0_4.d = zmm0_4.d f* zmm3_1[0]
                            zmm8_2[0] = zmm8_2[0] f+ zmm1_3.d
                            var_1e0 = zmm2_2
                            int32_t var_1d8_2 = zmm11_3
                            zmm9_2.d = zmm9_2.d f- zmm0_4.d
                            var_1f0 = zmm2_2
                            float var_1e8_2 = zmm10_2[0]
                            float var_1f8_2 = zmm10_2[0]
                            zmm8_2 ^= data_142d3f780
                            var_200:4.d = zmm8_2[0]
                            var_210:4.d = zmm8_2[0]
                            zmm8_2[0] = zmm8_2[0] f- zmm7_4.d
                            var_200.d = zmm9_2.d
                            var_210.d = zmm9_2.d
                            zmm9_2.d = zmm9_2.d f- zmm2_2
                            int32_t var_208_2 = zmm11_3
                            int32_t var_270_2 = 0
                            var_278:4.d = zmm8_2[0]
                            zmm1_3.d = zmm8_2.d f* zmm8_2[0]
                            var_278.d = zmm9_2.d
                            zmm0_4.d = zmm9_2.d f* zmm9_2.d
                            zmm1_3.d = zmm1_3.d f+ zmm0_4.d
                            float zmm4_1
                            
                            if (not(zmm1_3.d f<= zmm14_3))
                                zmm3_1 = zx.o(0)
                                var_270_2 = 0
                                zmm4_1 = zmm13_1.d
                                zmm3_1[0] = zmm1_3.d
                                float temp0_14[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                zmm3_1[0] = zmm3_1[0] * zmm4_1
                                zmm0_4.d = temp0_14.d f* temp0_14[0]
                                zmm1_3.d = zmm3_1.d f* zmm0_4.d
                                zmm0_4.d = temp0_14.d f* (zmm4_1 f- zmm1_3.d)
                                temp0_14[0] = temp0_14[0] f+ zmm0_4.d
                                zmm1_3.d = temp0_14.d f* temp0_14[0]
                                zmm3_1[0] = zmm3_1[0] f* zmm1_3.d
                                zmm0_4.d = temp0_14.d f* (zmm4_1 - zmm3_1[0])
                                temp0_14[0] = temp0_14[0] f+ zmm0_4.d
                                temp0_14[0] = temp0_14[0] * zmm8_2[0]
                                zmm0_4.d = temp0_14.d f* zmm9_2.d
                                var_278:4.d = temp0_14[0]
                                zmm8_2 = temp0_14
                                var_278.d = zmm0_4.d
                                zmm9_2 = zmm0_4
                            
                            float zmm6_5[0x4] = zmm10_2
                            zmm3_1 = zx.o(0)
                            zmm6_5[0] = zmm6_5[0] f- zmm11_3
                            var_268:4.d = 0
                            zmm4_1 = (zx.o(0)).d
                            var_268.d = 0
                            float var_260_2 = zmm6_5[0]
                            zmm1_3.d = zmm6_5.d f* zmm6_5[0]
                            
                            if (not(zmm1_3.d f<= zmm14_3))
                                zmm4_1 = zmm13_1.d
                                zmm3_1[0] = zmm1_3.d
                                float temp0_15[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                zmm3_1[0] = zmm3_1[0] * zmm4_1
                                zmm0_4.d = temp0_15.d f* temp0_15[0]
                                zmm1_3.d = zmm3_1.d f* zmm0_4.d
                                zmm0_4.d = temp0_15.d f* (zmm4_1 f- zmm1_3.d)
                                temp0_15[0] = temp0_15[0] f+ zmm0_4.d
                                zmm1_3.d = temp0_15.d f* temp0_15[0]
                                zmm3_1[0] = zmm3_1[0] f* zmm1_3.d
                                zmm4_1 = zmm4_1 - zmm3_1[0]
                                zmm3_1 = zx.o(0)
                                var_268:4.d = zmm3_1[0]
                                zmm0_4.d = temp0_15.d f* zmm4_1
                                zmm4_1 = (zx.o(0)).d
                                var_268.d = 0
                                temp0_15[0] = temp0_15[0] f+ zmm0_4.d
                                temp0_15[0] = temp0_15[0] * zmm6_5[0]
                                var_260_2 = temp0_15[0]
                                zmm6_5 = temp0_15
                            
                            zmm3_1[0] = zmm3_1[0] f* zmm9_2.d
                            zmm1_3.d = zmm6_5.d f* zmm8_2[0]
                            zmm0_4.d = 0f * 0f
                            zmm6_5[0] = zmm6_5[0] f* zmm9_2.d
                            zmm1_3.d = zmm1_3.d f- zmm0_4.d
                            zmm2_2 = 0f * 0f - zmm6_5[0]
                            zmm3_1[0] = zmm3_1[0] - zmm4_1 * zmm8_2[0]
                            var_258 = zmm1_3.d
                            float var_254_2 = zmm2_2
                            float var_250_2 = zmm3_1[0]
                            
                            if (rbx_3 == 0)
                                var_248.q = var_278
                                int32_t var_240_2 = var_270_2
                                var_238 = var_268
                                float var_230_2 = var_260_2
                                var_228 = var_258.q
                                float var_220_2 = var_250_2
                            
                            int32_t* var_2a8_5 = &data_14399f630
                            var_1b0.d = var_17c_1[0]
                            var_2b8_2.q = &var_238
                            var_1b0:4.d = 0
                            int32_t rax_19
                            int32_t zmm6_6
                            rax_19, zmm6_6 = sub_141fdacb0(&var_170, &var_1e0, &var_1b0, &var_248, 
                                var_2b8_2, &var_228)
                            int32_t* var_2a8_6 = &data_14399f630
                            var_1a4.d = zmm6_6
                            var_1a4:4.d = 0x3f800000
                            var_2b8_2.q = &var_238
                            int32_t rax_20 = sub_141fdacb0(&var_170, &var_1f0, &var_1a4, &var_248, 
                                var_2b8_2, &var_228)
                            int32_t* var_2a8_7 = &data_14399f630
                            var_198 = var_178_1
                            int32_t var_194_2 = 0x3f800000
                            var_2b8_2.q = &var_268
                            int32_t rax_21
                            int32_t zmm6_8
                            rax_21, zmm6_8 = sub_141fdacb0(&var_170, &var_200, &var_198, &var_278, 
                                var_2b8_2, &var_258)
                            int32_t* var_2a8_8 = &data_14399f630
                            var_18c = zmm6_8
                            int32_t var_188_2 = 0
                            var_2b8_2.q = &var_268
                            int32_t rax_22
                            rax_22, zmm7_5, zmm8_3, zmm13, zmm15_2 = sub_141fdacb0(&var_170, 
                                &var_210, &var_18c, &var_278, var_2b8_2, &var_258)
                            sub_141fdaaf0(&var_170, rax_19, rax_20, rax_21)
                            sub_141fdaaf0(&var_170, rax_19, rax_21, rax_22)
                            rbx_3 += 1
                            var_248.q = var_278
                            int32_t var_240_3 = var_270_2
                            var_238 = var_268
                            float var_230_3 = var_260_2
                            var_228 = var_258.q
                            float var_220_3 = var_250_2
                        while (rbx_3 s< rax_11)
                        
                        zmm7_5.o = var_1d0
                        zmm8_3.o = var_1c8
                        r12_1 = var_214_1
                        rdi = arg2
                        i = i_2
                        r14_2 = var_1b8_1
                    
                    var_280.d = 0x1000001
                    var_280:5.w = 0
                    var_280:4.b = 1
                    zmm6, zmm7, zmm8, zmm9_1, zmm13 = sub_141fe2bb0(&var_170, arg1 + 0x80, 
                        &var_118, rax_1, 0, &var_280, nullptr, i, arg5, 0xffffffff)
                
                result = sub_141fd8140(&var_170)
                i += 1
                r12_1 = rol.d(r12_1, 1)
                r14_2 += 8
                i_2 = i
                var_214_1 = r12_1
                var_1b8_1 = r14_2
            while (i s< rdi[1].d)
    else
        int32_t rdx_1 = *(rbx_1 + 0xc0)
        int32_t i_1 = 0
        int32_t rcx_2 = *(rbx_1 + 0xc4)
        int128_t zmm11 = *(arg1 + 0x160)
        int128_t zmm12 = *(arg1 + 0x164)
        result = neg.d(rcx_2)
        uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(neg.d(rdx_1)))
        uint128_t zmm10
        zmm10.d = _mm_cvtepi32_ps(zx.o(result)).d f* zmm12.d
        float arg_8 = _mm_cvtepi32_ps(zx.o(rcx_2)).d
        zmm9.d = zmm9.d f* zmm11.d
        _mm_cvtepi32_ps(zx.o(rdx_1))
        
        if (rdi[1].d s> 0)
            zmm13 = 0x80000000
            int32_t r15_1 = 1
            int64_t r13_1 = 0
            
            do
                char var_2b8_1 = 0
                sub_141fd6cc0(&var_170, *(*(*rdi + r13_1) + 0x1548), 1, 0, 0, nullptr)
                
                if ((rsi & r15_1) != 0)
                    int32_t* var_2a8_1 = &data_14399f630
                    var_228 = 0x3f800000
                    var_2b8_1.q = &var_238
                    int32_t var_220_1 = 0
                    var_238 = 0
                    int32_t var_254_1 = (zmm9 ^ zmm13).d
                    int32_t var_250_1 = (zmm10 ^ zmm13).d
                    int32_t var_230_1 = 0xbf800000
                    var_248 = 0
                    int32_t var_244_1 = 0xbf800000
                    int32_t var_240_1 = 0
                    var_280 = 0
                    var_258 = 0x80000000
                    int32_t rax_6
                    int32_t zmm6_1
                    float zmm12_1
                    float zmm14_1
                    rax_6, zmm6_1, zmm12_1, zmm14_1 =
                        sub_141fdacb0(&var_170, &var_258, &var_280, &var_248, var_2b8_1, &var_228)
                    int32_t* var_2a8_2 = &data_14399f630
                    int32_t var_194_1 = zmm6_1
                    var_268 = 0x3f800000
                    int32_t var_260_1 = 0
                    var_278 = 0
                    int32_t var_270_1 = 0xbf800000
                    var_18c = 0
                    int32_t var_188_1 = 0xbf800000
                    int32_t var_184_1 = 0
                    var_1c0 = 0
                    int32_t var_1bc_1 = 0x3f800000
                    var_198 = 0x80000000
                    float var_190_1 = (zmm12_1 - zmm14_1) * arg_8
                    var_2b8_1.q = &var_278
                    int32_t rax_7
                    int32_t zmm7_2
                    float zmm11_1
                    float zmm14_2
                    float zmm15_1
                    rax_7, zmm7_2, zmm11_1, zmm14_2, zmm15_1 =
                        sub_141fdacb0(&var_170, &var_198, &var_1c0, &var_18c, var_2b8_1, &var_268)
                    int32_t* var_2a8_3 = &data_14399f630
                    var_128:8.d = zmm7_2
                    var_1a4 = 0x3f800000
                    int32_t var_19c_1 = 0
                    var_1b0 = 0
                    int32_t var_1a8_1 = 0xbf800000
                    var_138.d = 0
                    var_138:4.d = 0xbf800000
                    var_138:8.d = 0
                    var_1c8 = 0x3f800000
                    int32_t var_1c4_1 = 0x3f800000
                    var_128.d = 0x80000000
                    var_128:4.d = (zmm11_1 - zmm14_2) * zmm15_1
                    var_2b8_1.q = &var_1b0
                    int32_t rax_8
                    int32_t zmm6_3
                    int32_t zmm8_1
                    rax_8, zmm6_3, zmm8_1 =
                        sub_141fdacb0(&var_170, &var_128, &var_1c8, &var_138, var_2b8_1, &var_1a4)
                    var_210 = 0x3f800000
                    int32_t var_208_1 = 0
                    var_200 = 0
                    int32_t* var_2a8_4 = &data_14399f630
                    int32_t var_1dc_1 = zmm6_3
                    var_2b8_1.q = &var_200
                    int32_t var_1d8_1 = zmm8_1
                    int32_t var_1f8_1 = 0xbf800000
                    var_1f0 = 0f
                    int32_t var_1ec_1 = 0xbf800000
                    int32_t var_1e8_1 = 0
                    var_1d0.q = 0x3f800000
                    var_1e0 = -0f
                    int32_t rax_9 =
                        sub_141fdacb0(&var_170, &var_1e0, &var_1d0, &var_1f0, var_2b8_1, &var_210)
                    sub_141fdaaf0(&var_170, rax_6, rax_7, rax_8)
                    sub_141fdaaf0(&var_170, rax_6, rax_8, rax_9)
                    int32_t var_288 = 0x1000001
                    int16_t var_283_1 = 0
                    char var_284_1 = 1
                    zmm9, zmm10, zmm13 = sub_141fe2bb0(&var_170, arg1 + 0x80, &var_118, rax_1, 0, 
                        &var_288, nullptr, i_1, arg5, 0xffffffff)
                    rdi = arg2
                    rsi = arg4
                
                result = sub_141fd8140(&var_170)
                i_1 += 1
                r15_1 = rol.d(r15_1, 1)
                r13_1 += 8
            while (i_1 s< rdi[1].d)

return result
