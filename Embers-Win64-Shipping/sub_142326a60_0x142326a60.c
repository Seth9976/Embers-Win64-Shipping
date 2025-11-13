// 函数: sub_142326a60
// 地址: 0x142326a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
int64_t* r13 = arg2
int64_t* rsi = arg5
int64_t r12 = *(arg4 + 0x28)
int64_t var_128 = 0
void* var_2f8 = arg4
int64_t* var_2c0 = rsi
int32_t rdx = rsi[1].d
float zmm9[0x4] = zx.o(0)
int32_t r15 = *(arg6 + 0x24)
int32_t rcx_1 = 0
int64_t* rdi = arg11
char var_344_1

if (rdx s<= 0)
label_142326b3b_1:
    var_344_1 = 0
else
    int32_t* rax_5 = *rsi + 0x20
    
    while (*rax_5 s<= 0)
        rcx_1 += 1
        rax_5 = &rax_5[0x3a]
        
        if (rcx_1 s>= rdx)
            goto label_142326b3b
    
    if (rdi == 0)
    label_142326b3b_2:
        var_344_1 = 0
    else
        var_344_1 = 1
        
        if (not(arg12.d f> 0f))
        label_142326b3b:
            var_344_1 = 0

uint64_t result = zx.q(*(arg4 + 0x38))
int32_t var_308 = result.d

if (result.d s> 0)
    int32_t rdx_1 = arg7
    
    if (rdx_1 s< result.d)
        float zmm6[0x4] = 0x3f800000
        int32_t zmm7[0x4] = data_142dd3f80
        uint128_t zmm8 = data_142dd3fd0
        float zmm10[0x4] = zx.o(0)
        float zmm11[0x4] = data_142dd3fb0
        float zmm12[0x4]
        float var_a8_1[0x4] = zmm12
        int32_t r14_2 = int.d(fconvert.t(254.5f)) s>> 1
        int32_t var_304_1 = r14_2
        
        do
            uint64_t r10_2 = zx.q(*(arg4 + 0x10) + rdx_1)
            int64_t* rcx_4 = zx.q(rsi[0x1d].d * r10_2.d) + rsi[0x1c]
            char r11_1 = *(rsi + 0xb1)
            int32_t rax_6 = rcx_4[1].d
            int64_t r9 = rsi[0x12]
            uint64_t var_140_1 = *rcx_4
            uint64_t rdx_2 = zx.q(r10_2.d)
            uint128_t zmm1
            float zmm2[0x4]
            float zmm3[0x4]
            
            if (r11_1 == 0)
                zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r9 + (r10_2 << 3))), 0), 0)
                zmm1 =
                    _mm_mul_ps(_mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm7) & zmm8) | zmm1), zmm11)
                zmm2 = zmm1
                zmm3 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            else
                zmm1 = _mm_unpacklo_epi16(zx.o(*(r9 + zx.q(rdx_2.d) * 0x10)), 0)
                zmm2 = __mulps_xmmps_memps(
                    _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90) & data_142dd3fc0)
                        | zmm1), 
                    data_142dd3fa0)
                zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            
            zmm2[0] = zmm2[0] * 127f
            zmm2[0] = zmm2[0] + zmm2[0]
            zmm2[0] = zmm2[0] + 0.5f
            int32_t r8_1 = int.d(zmm2[0]) s>> 1
            char var_148
            
            if (r8_1 s>= 0xffffff80)
                char rcx_5 = 0x7f
                
                if (r8_1 s< 0x7f)
                    rcx_5 = r8_1.b
                
                var_148 = rcx_5
            else
                var_148 = 0x80
            
            zmm3[0] = zmm3[0] * 127f
            zmm3[0] = zmm3[0] + zmm3[0]
            zmm3[0] = zmm3[0] + 0.5f
            int32_t r8_3 = int.d(zmm3[0]) s>> 1
            
            if (r8_3 s>= 0xffffff80)
                char rcx_6 = 0x7f
                
                if (r8_3 s< 0x7f)
                    rcx_6 = r8_3.b
                
                char var_147_2 = rcx_6
            else
                char var_147_1 = 0x80
            
            zmm1.d = zmm1.d f* 127f
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f+ 0.5f
            int32_t r8_5 = int.d(zmm1.d) s>> 1
            
            if (r8_5 s>= 0xffffff80)
                char rcx_7 = 0x7f
                
                if (r8_5 s< 0x7f)
                    rcx_7 = r8_5.b
                
                char var_146_2 = rcx_7
            else
                char var_146_1 = 0x80
            
            if (r14_2 s>= 0xffffff80)
                char rcx_8 = 0x7f
                
                if (r14_2 s< 0x7f)
                    rcx_8 = r14_2.b
                
                char var_145_2 = rcx_8
            else
                char var_145_1 = 0x80
            
            if (r11_1 == 0)
                zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r9 + (r10_2 << 3) + 4)), 0), 0)
                zmm1 =
                    _mm_mul_ps(_mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm7) & zmm8) | zmm1), zmm11)
            else
                zmm1 = _mm_unpacklo_epi16(zx.o(*(r9 + rdx_2 * 0x10 + 8)), 0)
                zmm1 = __mulps_xmmps_memps(
                    _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90) & data_142dd3fc0)
                        | zmm1), 
                    data_142dd3fa0)
            
            uint128_t var_338_1 = zmm1
            zmm1.d = var_338_1.d.d f* 127f
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f+ 0.5f
            int32_t rax_16 = int.d(zmm1.d) s>> 1
            char rcx_9
            
            if (rax_16 s>= 0xffffff80)
                rcx_9 = 0x7f
                
                if (rax_16 s< 0x7f)
                    rcx_9 = rax_16.b
            else
                rcx_9 = -0x80
            
            zmm1.d = var_338_1:4.d.d f* 127f
            char var_144_1 = rcx_9
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f+ 0.5f
            int32_t rax_18 = int.d(zmm1.d) s>> 1
            char rcx_10
            
            if (rax_18 s>= 0xffffff80)
                rcx_10 = 0x7f
                
                if (rax_18 s< 0x7f)
                    rcx_10 = rax_18.b
            else
                rcx_10 = -0x80
            
            zmm1.d = var_338_1:8.d.d f* 127f
            char var_143_1 = rcx_10
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f+ 0.5f
            int32_t rax_20 = int.d(zmm1.d) s>> 1
            char rcx_11
            
            if (rax_20 s>= 0xffffff80)
                rcx_11 = 0x7f
                
                if (rax_20 s< 0x7f)
                    rcx_11 = rax_20.b
            else
                rcx_11 = -0x80
            
            zmm1.d = var_338_1:0xc.d.d f* 127f
            char var_142_1 = rcx_11
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f+ 0.5f
            int32_t rax_22 = int.d(zmm1.d) s>> 1
            char rcx_12
            
            if (rax_22 s>= 0xffffff80)
                rcx_12 = 0x7f
                
                if (rax_22 s< 0x7f)
                    rcx_12 = rax_22.b
            else
                rcx_12 = -0x80
            
            char* r14_3 = &var_148
            char var_141_1 = rcx_12
            uint128_t* rdx_4 = rdx_2 * (zx.q(rsi[0x15].d) << 3) + rsi[0x13]
            int32_t var_134_1 = (*rdx_4).d
            int32_t var_130_1 = (*(rdx_4 + 4)).d
            int16_t var_108
            sub_1422c8440(arg6, &var_108, zx.q(r10_2.d))
            uint128_t zmm0
            uint128_t zmm4
            uint128_t zmm5
            
            if (arg8 != 0)
                r14_3 = &var_128
                int32_t i = 0
                int32_t rcx_14 = *arg9
                int32_t var_110_1 = var_130_1
                int32_t var_348_1 = rcx_14
                var_128.o = var_148.o
                
                if (r13[1].d s> 0)
                    zmm10 = (rax_6.q).d
                    int64_t rdx_6 = 0
                    float var_11c
                    zmm11 = var_11c
                    float var_120
                    zmm12 = var_120
                    
                    do
                        int64_t r10_3 = *r13
                        int64_t r11_2 = sx.q(*(rdx_6 + r10_3 + 0x10))
                        
                        if (r11_2.d != 0xffffffff && r11_2.d s< *(rdx_6 + r10_3 + 0x20))
                            int64_t r9_1 = *(rdx_6 + r10_3 + 0x18)
                            int32_t* r8_7 = r11_2 * 0x1c
                            
                            if (*(r8_7 + r9_1 + 0x18) == rcx_14)
                                zmm5 = *(*arg3 + (sx.q(*(rdx_6 + r10_3 + 8)) << 2))
                                zmm0.d = zmm5.d f* *(r8_7 + r9_1)
                                zmm2 = zmm5
                                zmm1.d = zmm5.d f* *(r8_7 + r9_1 + 4)
                                zmm5 = _mm_min_ss(zmm5.d, zmm6[0])
                                zmm2[0] = zmm2[0] f* *(r8_7 + r9_1 + 8)
                                zmm12[0] = zmm12[0] f+ zmm0.d
                                zmm11[0] = zmm11[0] f+ zmm1.d
                                zmm1 =
                                    _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_128:4.d), 0), 0)
                                zmm10[0] = zmm10[0] + zmm2[0]
                                zmm0 = (_mm_cmpgt_epi32(zmm1, zmm7) & zmm8) | zmm1
                                zmm1.d = zmm5.d f* *(r8_7 + r9_1 + 0x10)
                                float temp0_27[0x4] = _mm_cvtepi32_ps(zmm0)
                                zmm0 = zmm5
                                zmm5.d = zmm5.d f* *(r8_7 + r9_1 + 0xc)
                                zmm0.d = zmm0.d f* *(r8_7 + r9_1 + 0x14)
                                float temp0_28[0x4] = __mulps_xmmps_memps(temp0_27, data_142dd3fb0)
                                zmm5.d = zmm5.d f+ temp0_28[0]
                                zmm7 = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
                                float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
                                zmm7[0] = zmm7[0] f+ zmm1.d
                                temp0_30[0] = temp0_30[0] f+ zmm0.d
                                zmm2 = zmm5
                                zmm2[0] = zmm2[0] f* zmm5.d
                                zmm0.d = zmm7.d f* zmm7[0]
                                zmm1.d = temp0_30.d f* temp0_30[0]
                                zmm2[0] = zmm2[0] f+ zmm0.d
                                zmm4.d = 0x3f000000
                                zmm2[0] = zmm2[0] f+ zmm1.d
                                zmm0 = zmm2
                                zmm3 = zmm0
                                zmm8 = _mm_rsqrt_ss(zmm0.d, zmm3[0])
                                zmm3[0] = zmm3[0] * 0.5f
                                zmm0.d = zmm8.d f* zmm8.d
                                zmm3[0] = zmm3[0] f* zmm0.d
                                zmm1.d = zmm4.d f- zmm3[0]
                                zmm0.d = zmm8.d f* zmm1.d
                                zmm8.d = zmm8.d f+ zmm0.d
                                zmm0.d = zmm8.d f* zmm8.d
                                zmm3[0] = zmm3[0] f* zmm0.d
                                zmm4.d = 0.5f - zmm3[0]
                                zmm0.d = zmm8.d f* zmm4.d
                                zmm8.d = zmm8.d f+ zmm0.d
                                zmm5.d = zmm5.d f* zmm8.d
                                int32_t var_340_1 = zmm8.d
                                zmm5.d = zmm5.d f* 127f
                                zmm5.d = zmm5.d f+ zmm5.d
                                zmm5.d = zmm5.d f+ 0.5f
                                int32_t rax_29 = int.d(zmm5.d) s>> 1
                                char rcx_16
                                
                                if (rax_29 s>= 0xffffff80)
                                    rcx_16 = 0x7f
                                    
                                    if (rax_29 s< 0x7f)
                                        rcx_16 = rax_29.b
                                else
                                    rcx_16 = -0x80
                                
                                zmm7[0] = zmm7[0] f* zmm8.d
                                var_128:4.b = rcx_16
                                temp0_30[0] = temp0_30[0] f* zmm8.d
                                zmm7[0] = zmm7[0] f* 127f
                                zmm7[0] = zmm7[0] f+ zmm7[0]
                                zmm7[0] = zmm7[0] f+ 0.5f
                                int32_t rax_31 = int.d(zmm7[0]) s>> 1
                                char rcx_17
                                
                                if (rax_31 s>= 0xffffff80)
                                    rcx_17 = 0x7f
                                    
                                    if (rax_31 s< 0x7f)
                                        rcx_17 = rax_31.b
                                else
                                    rcx_17 = -0x80
                                
                                temp0_30[0] = temp0_30[0] * 127f
                                var_128:5.b = rcx_17
                                temp0_30[0] = temp0_30[0] + temp0_30[0]
                                temp0_30[0] = temp0_30[0] + 0.5f
                                int32_t rax_33 = int.d(temp0_30[0]) s>> 1
                                char rcx_18
                                
                                if (rax_33 s>= 0xffffff80)
                                    rcx_18 = 0x7f
                                    
                                    if (rax_33 s< 0x7f)
                                        rcx_18 = rax_33.b
                                else
                                    rcx_18 = -0x80
                                
                                zmm6 = 0x3f800000
                                zmm7 = data_142dd3f80
                                zmm8 = data_142dd3fd0
                                var_128:6.b = rcx_18
                                rcx_14 = var_348_1
                                *(rdx_6 + r10_3 + 0x10) = (r11_2 + 1).d
                        
                        i += 1
                        rdx_6 += 0x28
                    while (i s< r13[1].d)
                    
                    rdi = arg11
                    uint32_t var_118_1 = zmm10[0]
                    zmm10 = zx.o(0)
                    var_11c = zmm11[0]
                    zmm11 = data_142dd3fb0
                    var_120 = zmm12[0]
                
                zmm2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_128.d), 0), 0)
                zmm1 = (zmm8 & _mm_cmpgt_epi32(zmm2, zmm7)) | zmm2
                zmm2 = zx.o(var_128:4.d)
                zmm0 = _mm_cvtepi32_ps(zmm1)
                zmm2 = _mm_unpacklo_epi8(zmm2, 0)
                float temp0_37[0x4] = _mm_mul_ps(zmm11, zmm0)
                zmm2 = _mm_unpacklo_epi16(zmm2, 0)
                zmm1 = zmm8 & _mm_cmpgt_epi32(zmm2, zmm7)
                zmm7 = _mm_shuffle_ps(temp0_37, temp0_37, 0x55)
                zmm4 = _mm_mul_ps(zmm11, _mm_cvtepi32_ps(zmm1 | zmm2))
                zmm8 = _mm_shuffle_ps(temp0_37, temp0_37, 0xaa)
                float temp0_44[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                zmm0.d = zmm4.d f* temp0_37[0]
                zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
                temp0_44[0] = temp0_44[0] f* zmm7[0]
                temp0_44[0] = temp0_44[0] f+ zmm0.d
                zmm0.d = zmm1.d f* zmm8.d
                temp0_44[0] = temp0_44[0] f+ zmm0.d
                temp0_44[0] = temp0_44[0] * temp0_44[0]
                zmm1.d = zmm1.d f* temp0_44[0]
                zmm7[0] = zmm7[0] f- temp0_44[0]
                zmm4.d = zmm4.d f* temp0_44[0]
                zmm8.d = zmm8.d f- zmm1.d
                temp0_37[0] = temp0_37[0] f- zmm4.d
                zmm2 = zmm7
                zmm2[0] = zmm2[0] f* zmm7[0]
                zmm1.d = zmm8.d f* zmm8.d
                zmm0.d = temp0_37.d f* temp0_37[0]
                zmm2[0] = zmm2[0] f+ zmm0.d
                zmm2[0] = zmm2[0] f+ zmm1.d
                
                if (not(zmm2[0] <= 9.99999994e-09f))
                    zmm3 = zx.o(0)
                    zmm4.d = 0x3f000000
                    zmm3[0] = zmm2.d
                    zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm0.d = zmm5.d f* zmm5.d
                    zmm3[0] = zmm3[0] f* zmm0.d
                    zmm1.d = zmm4.d f- zmm3[0]
                    zmm0.d = zmm5.d f* zmm1.d
                    zmm5.d = zmm5.d f+ zmm0.d
                    zmm0.d = zmm5.d f* zmm5.d
                    zmm3[0] = zmm3[0] f* zmm0.d
                    zmm4.d = 0.5f - zmm3[0]
                    zmm0.d = zmm5.d f* zmm4.d
                    zmm5.d = zmm5.d f+ zmm0.d
                    int32_t var_348_2 = zmm5.d
                    temp0_37[0] = temp0_37[0] f* zmm5.d
                    zmm0.d = zmm5.d f* zmm7[0]
                    zmm5.d = zmm5.d f* zmm8.d
                    zmm7 = zmm0
                    zmm8 = zmm5
                
                temp0_37[0] = temp0_37[0] * 127f
                temp0_37[0] = temp0_37[0] + temp0_37[0]
                temp0_37[0] = temp0_37[0] + 0.5f
                int32_t rax_36 = int.d(temp0_37[0]) s>> 1
                char rcx_19
                
                if (rax_36 s>= 0xffffff80)
                    rcx_19 = 0x7f
                    
                    if (rax_36 s< 0x7f)
                        rcx_19 = rax_36.b
                else
                    rcx_19 = -0x80
                
                zmm7[0] = zmm7[0] f* 127f
                var_128.b = rcx_19
                zmm7[0] = zmm7[0] f+ zmm7[0]
                zmm7[0] = zmm7[0] f+ 0.5f
                int32_t rax_38 = int.d(zmm7[0]) s>> 1
                char rcx_20
                
                if (rax_38 s>= 0xffffff80)
                    rcx_20 = 0x7f
                    
                    if (rax_38 s< 0x7f)
                        rcx_20 = rax_38.b
                else
                    rcx_20 = -0x80
                
                zmm8.d = zmm8.d f* 127f
                var_128:1.b = rcx_20
                zmm8.d = zmm8.d f+ zmm8.d
                zmm8.d = zmm8.d f+ 0.5f
                int32_t rax_40 = int.d(zmm8.d) s>> 1
                char rcx_21
                
                if (rax_40 s>= 0xffffff80)
                    rcx_21 = 0x7f
                    
                    if (rax_40 s< 0x7f)
                        rcx_21 = rax_40.b
                else
                    rcx_21 = -0x80
                
                zmm6 = 0x3f800000
                zmm7 = data_142dd3f80
                zmm8 = data_142dd3fd0
                rsi = var_2c0
                var_128:2.b = rcx_21
                var_128:3.b = 0x7f
            
            float (* r8_10)[0x4] = nullptr
            
            if (var_344_1 != 0)
                r8_10 = (sx.q(arg7) << 6) + *(var_2f8 + 0x18)
            
            float temp0_49[0x4] = _mm_unpacklo_ps(
                _mm_unpacklo_ps(*(r14_3 + 8), (*(r14_3 + 0x10)).q), 
                _mm_unpacklo_ps(*(r14_3 + 0xc), zmm6[0].q)[0].q)
            zmm2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*r14_3), 0), 0)
            data_143f591f0 = temp0_49
            zmm1 = (zmm8 & _mm_cmpgt_epi32(zmm2, zmm7)) | zmm2
            zmm2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r14_3 + 4)), 0), 0)
            zmm0 = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm1), data_143329cd0)
            uint128_t var_2e8_1 = zmm0
            data_143f59200 = zmm0
            zmm0 = _mm_cvtepi32_ps((zmm8 & _mm_cmpgt_epi32(zmm2, zmm7)) | zmm2)
            zmm1 = data_142e669d0
            zmm0 = _mm_mul_ps(zmm0, zmm11)
            zmm11 = zx.o(0)
            uint128_t var_2d8_1 = zmm0
            data_143f59210 = zmm0
            int32_t var_f0
            float temp0_63[0x4] = _mm_mul_ps(
                _mm_cvtepi32_ps(_mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_f0), 0), 0)), zmm1)
            int32_t var_ec
            
            if (r15 u> 4)
                zmm10 = _mm_mul_ps(
                    _mm_cvtepi32_ps(_mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_ec), 0), 0)), 
                    zmm1)
            int32_t var_e8
            
            if (r15 u> 8)
                zmm11 = _mm_mul_ps(
                    _mm_cvtepi32_ps(_mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_e8), 0), 0)), 
                    zmm1)
            uint64_t rax_42 = zx.q(var_108)
            zmm0 = _mm_shuffle_ps(temp0_63, temp0_63, 0)
            uint64_t rcx_23 = zx.q(*(r12 + (rax_42 << 1))) << 6
            zmm6 = *(rcx_23 + arg10 + 0x10)
            zmm7 = *(rcx_23 + arg10 + 0x20)
            zmm8 = *(rcx_23 + arg10 + 0x30)
            zmm5 = _mm_mul_ps(*(rcx_23 + arg10), zmm0)
            zmm6 = _mm_mul_ps(zmm6, zmm0)
            zmm7 = _mm_mul_ps(zmm7, zmm0)
            zmm8 = _mm_mul_ps(zmm8, zmm0)
            
            if (r15 u> 1)
                float temp0_77[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
                int16_t var_106
                uint64_t rcx_25 = zx.q(*(r12 + (zx.q(var_106) << 1))) << 6
                zmm1 = *(rcx_25 + arg10 + 0x10)
                zmm2 = *(rcx_25 + arg10 + 0x20)
                zmm4 = *(rcx_25 + arg10 + 0x30)
                zmm0 = _mm_mul_ps(*(rcx_25 + arg10), temp0_77)
                zmm1 = _mm_mul_ps(zmm1, temp0_77)
                float temp0_80[0x4] = _mm_mul_ps(zmm2, temp0_77)
                zmm4 = _mm_mul_ps(zmm4, temp0_77)
                zmm5 = _mm_add_ps(zmm5, zmm0)
                zmm6 = _mm_add_ps(zmm6, zmm1)
                zmm7 = _mm_add_ps(zmm7, temp0_80)
                zmm8 = _mm_add_ps(zmm8, zmm4)
                
                if (r15 u> 2)
                    float temp0_86[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xaa)
                    int16_t var_104
                    uint64_t rcx_27 = zx.q(*(r12 + (zx.q(var_104) << 1))) << 6
                    zmm1 = *(rcx_27 + arg10 + 0x10)
                    zmm2 = *(rcx_27 + arg10 + 0x20)
                    zmm4 = *(rcx_27 + arg10 + 0x30)
                    zmm0 = _mm_mul_ps(*(rcx_27 + arg10), temp0_86)
                    zmm1 = _mm_mul_ps(zmm1, temp0_86)
                    float temp0_89[0x4] = _mm_mul_ps(zmm2, temp0_86)
                    zmm4 = _mm_mul_ps(zmm4, temp0_86)
                    zmm5 = _mm_add_ps(zmm5, zmm0)
                    zmm6 = _mm_add_ps(zmm6, zmm1)
                    zmm7 = _mm_add_ps(zmm7, temp0_89)
                    zmm8 = _mm_add_ps(zmm8, zmm4)
                    
                    if (r15 u> 3)
                        float temp0_95[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
                        int16_t var_102
                        uint64_t rcx_29 = zx.q(*(r12 + (zx.q(var_102) << 1))) << 6
                        zmm1 = *(rcx_29 + arg10 + 0x10)
                        zmm2 = *(rcx_29 + arg10 + 0x20)
                        zmm3 = *(rcx_29 + arg10 + 0x30)
                        zmm0 = _mm_mul_ps(*(rcx_29 + arg10), temp0_95)
                        zmm1 = _mm_mul_ps(zmm1, temp0_95)
                        float temp0_98[0x4] = _mm_mul_ps(zmm2, temp0_95)
                        float temp0_99[0x4] = _mm_mul_ps(zmm3, temp0_95)
                        zmm5 = _mm_add_ps(zmm5, zmm0)
                        zmm6 = _mm_add_ps(zmm6, zmm1)
                        zmm7 = _mm_add_ps(zmm7, temp0_98)
                        zmm8 = _mm_add_ps(zmm8, temp0_99)
                    
                    if (r15 u> 4)
                        float temp0_104[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
                        int16_t var_100
                        uint64_t rcx_31 = zx.q(*(r12 + (zx.q(var_100) << 1))) << 6
                        zmm1 = *(rcx_31 + arg10 + 0x10)
                        zmm2 = *(rcx_31 + arg10 + 0x20)
                        zmm4 = *(rcx_31 + arg10 + 0x30)
                        zmm0 = _mm_mul_ps(*(rcx_31 + arg10), temp0_104)
                        zmm1 = _mm_mul_ps(zmm1, temp0_104)
                        float temp0_107[0x4] = _mm_mul_ps(zmm2, temp0_104)
                        zmm4 = _mm_mul_ps(zmm4, temp0_104)
                        zmm5 = _mm_add_ps(zmm5, zmm0)
                        zmm6 = _mm_add_ps(zmm6, zmm1)
                        zmm7 = _mm_add_ps(zmm7, temp0_107)
                        zmm8 = _mm_add_ps(zmm8, zmm4)
                        
                        if (r15 u> 5)
                            float temp0_113[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
                            int16_t var_fe
                            uint64_t rcx_33 = zx.q(*(r12 + (zx.q(var_fe) << 1))) << 6
                            zmm1 = *(rcx_33 + arg10 + 0x10)
                            zmm2 = *(rcx_33 + arg10 + 0x20)
                            zmm4 = *(rcx_33 + arg10 + 0x30)
                            zmm0 = _mm_mul_ps(*(rcx_33 + arg10), temp0_113)
                            zmm1 = _mm_mul_ps(zmm1, temp0_113)
                            float temp0_116[0x4] = _mm_mul_ps(zmm2, temp0_113)
                            zmm4 = _mm_mul_ps(zmm4, temp0_113)
                            zmm5 = _mm_add_ps(zmm5, zmm0)
                            zmm6 = _mm_add_ps(zmm6, zmm1)
                            zmm7 = _mm_add_ps(zmm7, temp0_116)
                            zmm8 = _mm_add_ps(zmm8, zmm4)
                            
                            if (r15 u> 6)
                                float temp0_122[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
                                int16_t var_fc
                                uint64_t rcx_35 = zx.q(*(r12 + (zx.q(var_fc) << 1))) << 6
                                zmm1 = *(rcx_35 + arg10 + 0x10)
                                zmm2 = *(rcx_35 + arg10 + 0x20)
                                zmm4 = *(rcx_35 + arg10 + 0x30)
                                zmm0 = _mm_mul_ps(*(rcx_35 + arg10), temp0_122)
                                zmm1 = _mm_mul_ps(zmm1, temp0_122)
                                float temp0_125[0x4] = _mm_mul_ps(zmm2, temp0_122)
                                zmm4 = _mm_mul_ps(zmm4, temp0_122)
                                zmm5 = _mm_add_ps(zmm5, zmm0)
                                zmm6 = _mm_add_ps(zmm6, zmm1)
                                zmm7 = _mm_add_ps(zmm7, temp0_125)
                                zmm8 = _mm_add_ps(zmm8, zmm4)
                                
                                if (r15 u> 7)
                                    float temp0_131[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
                                    int16_t var_fa
                                    uint64_t rcx_37 = zx.q(*(r12 + (zx.q(var_fa) << 1))) << 6
                                    zmm1 = *(rcx_37 + arg10 + 0x10)
                                    zmm2 = *(rcx_37 + arg10 + 0x20)
                                    zmm3 = *(rcx_37 + arg10 + 0x30)
                                    zmm0 = _mm_mul_ps(*(rcx_37 + arg10), temp0_131)
                                    zmm1 = _mm_mul_ps(zmm1, temp0_131)
                                    float temp0_134[0x4] = _mm_mul_ps(zmm2, temp0_131)
                                    float temp0_135[0x4] = _mm_mul_ps(zmm3, temp0_131)
                                    zmm5 = _mm_add_ps(zmm5, zmm0)
                                    zmm6 = _mm_add_ps(zmm6, zmm1)
                                    zmm7 = _mm_add_ps(zmm7, temp0_134)
                                    zmm8 = _mm_add_ps(zmm8, temp0_135)
                                    
                                    if (r15 u> 8)
                                        float temp0_140[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
                                        int16_t var_f8
                                        uint64_t rcx_39 = zx.q(*(r12 + (zx.q(var_f8) << 1))) << 6
                                        zmm1 = *(rcx_39 + arg10 + 0x10)
                                        zmm2 = *(rcx_39 + arg10 + 0x20)
                                        zmm4 = *(rcx_39 + arg10 + 0x30)
                                        zmm0 = _mm_mul_ps(*(rcx_39 + arg10), temp0_140)
                                        zmm1 = _mm_mul_ps(zmm1, temp0_140)
                                        float temp0_143[0x4] = _mm_mul_ps(zmm2, temp0_140)
                                        zmm4 = _mm_mul_ps(zmm4, temp0_140)
                                        zmm5 = _mm_add_ps(zmm5, zmm0)
                                        zmm6 = _mm_add_ps(zmm6, zmm1)
                                        zmm7 = _mm_add_ps(zmm7, temp0_143)
                                        zmm8 = _mm_add_ps(zmm8, zmm4)
                                        
                                        if (r15 u> 9)
                                            float temp0_149[0x4] =
                                                _mm_shuffle_ps(zmm11, zmm11, 0x55)
                                            int16_t var_f6
                                            uint64_t rcx_41 =
                                                zx.q(*(r12 + (zx.q(var_f6) << 1))) << 6
                                            zmm1 = *(rcx_41 + arg10 + 0x10)
                                            zmm2 = *(rcx_41 + arg10 + 0x20)
                                            zmm4 = *(rcx_41 + arg10 + 0x30)
                                            zmm0 = _mm_mul_ps(*(rcx_41 + arg10), temp0_149)
                                            zmm1 = _mm_mul_ps(zmm1, temp0_149)
                                            float temp0_152[0x4] = _mm_mul_ps(zmm2, temp0_149)
                                            zmm4 = _mm_mul_ps(zmm4, temp0_149)
                                            zmm5 = _mm_add_ps(zmm5, zmm0)
                                            zmm6 = _mm_add_ps(zmm6, zmm1)
                                            zmm7 = _mm_add_ps(zmm7, temp0_152)
                                            zmm8 = _mm_add_ps(zmm8, zmm4)
                                            
                                            if (r15 u> 0xa)
                                                float temp0_158[0x4] =
                                                    _mm_shuffle_ps(zmm11, zmm11, 0xaa)
                                                int16_t var_f4
                                                uint64_t rcx_43 =
                                                    zx.q(*(r12 + (zx.q(var_f4) << 1))) << 6
                                                zmm1 = *(rcx_43 + arg10 + 0x10)
                                                zmm2 = *(rcx_43 + arg10 + 0x20)
                                                zmm4 = *(rcx_43 + arg10 + 0x30)
                                                zmm0 = _mm_mul_ps(*(rcx_43 + arg10), temp0_158)
                                                zmm1 = _mm_mul_ps(zmm1, temp0_158)
                                                float temp0_161[0x4] = _mm_mul_ps(zmm2, temp0_158)
                                                zmm4 = _mm_mul_ps(zmm4, temp0_158)
                                                zmm5 = _mm_add_ps(zmm5, zmm0)
                                                zmm6 = _mm_add_ps(zmm6, zmm1)
                                                zmm7 = _mm_add_ps(zmm7, temp0_161)
                                                zmm8 = _mm_add_ps(zmm8, zmm4)
                                                
                                                if (r15 u> 0xb)
                                                    float temp0_167[0x4] =
                                                        _mm_shuffle_ps(zmm11, zmm11, 0xff)
                                                    int16_t var_f2
                                                    uint64_t rcx_45 =
                                                        zx.q(*(r12 + (zx.q(var_f2) << 1))) << 6
                                                    zmm1 = *(rcx_45 + arg10 + 0x10)
                                                    zmm2 = *(rcx_45 + arg10 + 0x20)
                                                    zmm3 = *(rcx_45 + arg10 + 0x30)
                                                    zmm0 = _mm_mul_ps(*(rcx_45 + arg10), temp0_167)
                                                    zmm1 = _mm_mul_ps(zmm1, temp0_167)
                                                    float temp0_170[0x4] =
                                                        _mm_mul_ps(zmm2, temp0_167)
                                                    float temp0_171[0x4] =
                                                        _mm_mul_ps(zmm3, temp0_167)
                                                    zmm5 = _mm_add_ps(zmm5, zmm0)
                                                    zmm6 = _mm_add_ps(zmm6, zmm1)
                                                    zmm7 = _mm_add_ps(zmm7, temp0_170)
                                                    zmm8 = _mm_add_ps(zmm8, temp0_171)
            
            zmm1 = temp0_49
            zmm4 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0x55), zmm6)
            uint64_t rax_54 = *arg1
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm5)
            zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, zmm7), zmm8)
            float temp0_184[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_2d8_1, var_2d8_1, 0x55), zmm6)
            zmm4 = _mm_add_ps(_mm_add_ps(zmm4, zmm0), zmm1)
            zmm0 = _mm_shuffle_ps(var_2e8_1, var_2e8_1, 0xaa)
            float temp0_188[0x4] = _mm_shuffle_ps(var_2e8_1, var_2e8_1, 0x55)
            zmm0 = _mm_mul_ps(zmm0, zmm7)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(var_2e8_1, var_2e8_1, 0), zmm5)
            float temp0_194[0x4] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_188, zmm6), zmm0), zmm1)
            zmm1 = _mm_mul_ps(temp0_194, temp0_194)
            zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(var_2d8_1, var_2d8_1, 0), zmm5)
            float temp0_203[0x4] = _mm_mul_ps(temp0_194, _mm_rsqrt_ps(zmm0))
            zmm0 = _mm_shuffle_ps(var_2d8_1, var_2d8_1, 0xaa)
            zmm8 = __mulps_xmmps_memps(var_2d8_1, data_143327d30)
            zmm0 = _mm_mul_ps(zmm0, zmm7)
            *rax_54 = zmm4
            uint64_t rcx_46 = *arg1
            float temp0_208[0x4] = _mm_add_ps(_mm_add_ps(temp0_184, zmm0), zmm1)
            zmm1 = _mm_mul_ps(temp0_208, temp0_208)
            zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
            float temp0_215[0x4] = _mm_mul_ps(temp0_208, 
                _mm_rsqrt_ps(_mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)))
            zmm0 = _mm_mul_ps(data_143329ce0, temp0_203)
            float temp0_217[0x4] = _mm_add_ps(temp0_215, zmm8)
            zmm1 = _mm_cvttps_epi32(zmm0)
            zmm0 = data_142d3f700
            *(rcx_46 + 0xc) = _mm_packs_epi16(_mm_packs_epi32(zmm1, zx.o(0)), zx.o(0)).d
            *(*arg1 + 0x10) = _mm_packs_epi16(
                _mm_packs_epi32(_mm_cvttps_epi32(_mm_mul_ps(zmm0, temp0_217)), zx.o(0)), zx.o(0)).d
            
            if (r8_10 == 0 || *(r8_10 + 0x36) u>= 0xffff)
                zmm11 = data_142dd3fb0
                zmm8 = data_142dd3fd0
                zmm7 = data_142dd3f80
                zmm6 = 0x3f800000
            else
                uint64_t r9_2 = zx.q((*r8_10)[0xd].w)
                int32_t r10_4 = rdi[3].d
                
                if (r9_2.d s>= r10_4)
                    zmm11 = 0x3f800000
                    zmm8 = zmm9
                    zmm10 = zmm9
                else
                    zmm6 = *(rdi + 0x20)
                    int64_t rdx_7 = rdi[2]
                    zmm5 = *(rdi + 0x40)
                    zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    float temp0_227[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                    int64_t rcx_48 = sx.q(r9_2.d) * 3
                    zmm5 = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_7 + (rcx_48 << 2)), 
                                (*(rdx_7 + (rcx_48 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_7 + (rcx_48 << 2) + 4), zmm9[0].q)[0].q))
                    zmm1 = _mm_mul_ps(temp0_227, _mm_shuffle_ps(zmm5, zmm5, 0xc9))
                    float temp0_236[0x4] =
                        _mm_sub_ps(_mm_mul_ps(zmm8, _mm_shuffle_ps(zmm5, zmm5, 0xd2)), zmm1)
                    float temp0_237[0x4] = _mm_add_ps(temp0_236, temp0_236)
                    zmm8 = _mm_mul_ps(zmm8, _mm_shuffle_ps(temp0_237, temp0_237, 0xd2))
                    float temp0_241[0x4] =
                        _mm_mul_ps(temp0_227, _mm_shuffle_ps(temp0_237, temp0_237, 0xc9))
                    zmm1 = _mm_mul_ps(temp0_237, zmm4)
                    zmm8 = _mm_add_ps(_mm_sub_ps(zmm8, temp0_241), _mm_add_ps(zmm1, zmm5))
                    zmm10 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                    zmm11 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                
                zmm12 = (*r8_10)[3]
                int32_t r14_4 = rdi[1].d
                int32_t r11_3 = data_143dbb200
                zmm7 = zx.o(data_143dbb1f8.q)
                zmm11[0] = zmm11[0] * zmm12[0]
                zmm10[0] = zmm10[0] * zmm12[0]
                zmm8.d = zmm8.d f* zmm12[0]
                
                if (r9_2.d s>= r14_4)
                    zmm0 = zmm7
                    zmm2 = r11_3
                    zmm1 = zmm7.d
                    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                else
                    zmm6 = *(rdi + 0x20)
                    uint64_t rcx_49 = r9_2 * 3
                    int64_t rdx_8 = *rdi
                    zmm5 = *(rdi + 0x40)
                    zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    zmm5 = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_8 + (rcx_49 << 2)), 
                                (*(rdx_8 + (rcx_49 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_8 + (rcx_49 << 2) + 4), zmm9[0].q)[0].q))
                    float temp0_254[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                    zmm1 = _mm_mul_ps(temp0_254, _mm_shuffle_ps(zmm5, zmm5, 0xc9))
                    float temp0_259[0x4] =
                        _mm_sub_ps(_mm_mul_ps(zmm7, _mm_shuffle_ps(zmm5, zmm5, 0xd2)), zmm1)
                    float temp0_260[0x4] = _mm_add_ps(temp0_259, temp0_259)
                    zmm7 = _mm_mul_ps(zmm7, _mm_shuffle_ps(temp0_260, temp0_260, 0xd2))
                    zmm1 = _mm_mul_ps(temp0_260, zmm4)
                    float temp0_265[0x4] =
                        _mm_mul_ps(temp0_254, _mm_shuffle_ps(temp0_260, temp0_260, 0xc9))
                    zmm1 = _mm_add_ps(zmm1, zmm5)
                    zmm7 = _mm_add_ps(_mm_sub_ps(zmm7, temp0_265), zmm1)
                    zmm1 = _mm_add_ps(*(rdi + 0x30), zmm7)
                    zmm7 = zx.o(data_143dbb1f8.q)
                    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    zmm2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                
                uint64_t r9_3 = zx.q(*(r8_10 + 0x32))
                zmm11[0] = zmm11[0] + zmm2[0]
                zmm10[0] = zmm10[0] f+ zmm0.d
                zmm0 = (*r8_10)[2]
                zmm8.d = zmm8.d f+ zmm1.d
                zmm2 = zmm0
                zmm2[0] = zmm2[0] * zmm11[0]
                zmm8.d = zmm8.d f* zmm0.d
                float var_340_2 = zmm2[0]
                zmm2 = zmm0
                zmm2[0] = zmm2[0] * zmm10[0]
                float var_348_3 = zmm2[0]
                
                if (r9_3.d s>= r10_4)
                    zmm0 = 0x3f800000
                    zmm6 = zmm9
                    zmm10 = zmm9
                else
                    zmm4 = *(rdi + 0x20)
                    int64_t rdx_9 = rdi[2]
                    zmm5 = *(rdi + 0x40)
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    int64_t rcx_50 = sx.q(r9_3.d) * 3
                    zmm5 = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_9 + (rcx_50 << 2)), 
                                (*(rdx_9 + (rcx_50 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_9 + (rcx_50 << 2) + 4), zmm9[0].q)[0].q))
                    float temp0_278[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    float temp0_280[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm4)
                    float temp0_284[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_280, temp0_278), zmm0)
                    float temp0_285[0x4] = _mm_add_ps(temp0_284, temp0_284)
                    float temp0_286[0x4] = _mm_shuffle_ps(temp0_285, temp0_285, 0xd2)
                    zmm0 = _mm_mul_ps(temp0_285, zmm1)
                    float temp0_288[0x4] = _mm_mul_ps(temp0_286, temp0_278)
                    float temp0_289[0x4] = _mm_shuffle_ps(temp0_285, temp0_285, 0xc9)
                    zmm5 = _mm_add_ps(zmm5, zmm0)
                    zmm6 = _mm_add_ps(_mm_sub_ps(temp0_288, _mm_mul_ps(temp0_289, zmm4)), zmm5)
                    zmm10 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                
                zmm0.d = zmm0.d f* zmm12[0]
                zmm10[0] = zmm10[0] * zmm12[0]
                zmm6[0] = zmm6[0] * zmm12[0]
                int32_t var_318_2 = zmm0.d
                
                if (r9_3.d s>= r14_4)
                    zmm0 = zmm7
                    zmm11 = zmm7.d
                    zmm7 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm2 = r11_3
                else
                    zmm4 = *(rdi + 0x20)
                    uint64_t rcx_51 = r9_3 * 3
                    int64_t rdx_10 = *rdi
                    zmm5 = *(rdi + 0x40)
                    zmm11 = *(rdi + 0x30)
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    zmm5 = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_10 + (rcx_51 << 2)), 
                                (*(rdx_10 + (rcx_51 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_10 + (rcx_51 << 2) + 4), zmm9[0].q)[0].q))
                    float temp0_301[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm4)
                    float temp0_307[0x4] =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_301), zmm0)
                    float temp0_308[0x4] = _mm_add_ps(temp0_307, temp0_307)
                    zmm5 = _mm_add_ps(zmm5, _mm_mul_ps(temp0_308, zmm1))
                    zmm11 = _mm_add_ps(zmm11, 
                        _mm_add_ps(
                            _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(temp0_308, temp0_308, 0xd2), temp0_301), 
                                _mm_mul_ps(_mm_shuffle_ps(temp0_308, temp0_308, 0xc9), zmm4)), 
                            zmm5))
                    zmm7 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
                    zmm2 = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
                
                zmm2[0] = zmm2[0] f+ var_318_2
                zmm0 = (*r8_10)[1]
                zmm7[0] = zmm7[0] f+ zmm10[0]
                uint64_t r9_4 = zx.q(r8_10[3][0].w)
                zmm11[0] = zmm11[0] + zmm6[0]
                zmm2[0] = zmm2[0] f* zmm0.d
                zmm7[0] = zmm7[0] f* zmm0.d
                zmm11[0] = zmm11[0] f* zmm0.d
                float var_228_1[0x4] = zmm2
                int32_t var_318_3[0x4] = zmm7
                
                if (r9_4.d s>= r10_4)
                    zmm1 = 0x3f800000
                    zmm10 = zmm9
                    zmm0 = zmm9
                else
                    zmm5 = *(rdi + 0x20)
                    int64_t rdx_11 = rdi[2]
                    zmm6 = *(rdi + 0x40)
                    float temp0_321[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                    int64_t rcx_52 = sx.q(r9_4.d) * 3
                    float temp0_327[0x4] = _mm_mul_ps(zmm6, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_11 + (rcx_52 << 2)), 
                                (*(rdx_11 + (rcx_52 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_11 + (rcx_52 << 2) + 4), zmm9[0].q)[0].q))
                    zmm1 = _mm_mul_ps(zmm5, _mm_shuffle_ps(temp0_327, temp0_327, 0xc9))
                    float temp0_332[0x4] = _mm_sub_ps(
                        _mm_mul_ps(temp0_321, _mm_shuffle_ps(temp0_327, temp0_327, 0xd2)), zmm1)
                    float temp0_333[0x4] = _mm_add_ps(temp0_332, temp0_332)
                    float temp0_335[0x4] = _mm_add_ps(temp0_327, _mm_mul_ps(temp0_333, zmm4))
                    zmm10 = _mm_add_ps(
                        _mm_sub_ps(
                            _mm_mul_ps(temp0_321, _mm_shuffle_ps(temp0_333, temp0_333, 0xd2)), 
                            _mm_mul_ps(zmm5, _mm_shuffle_ps(temp0_333, temp0_333, 0xc9))), 
                        temp0_335)
                    zmm0 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
                    zmm1 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
                
                zmm1.d = zmm1.d f* zmm12[0]
                zmm0.d = zmm0.d f* zmm12[0]
                zmm10[0] = zmm10[0] * zmm12[0]
                int32_t var_2e8_2 = zmm1.d
                int32_t var_2d8_2 = zmm0.d
                
                if (r9_4.d s>= r14_4)
                    zmm1 = zx.o(data_143dbb1f8.q)
                    zmm5 = r11_3
                    uint32_t var_288_1 = zmm1.d
                    zmm4 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    zmm3 = var_288_1
                else
                    zmm6 = *(rdi + 0x20)
                    uint64_t rcx_53 = r9_4 * 3
                    int64_t rdx_12 = *rdi
                    zmm5 = *(rdi + 0x40)
                    zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    zmm5 = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_12 + (rcx_53 << 2)), 
                                (*(rdx_12 + (rcx_53 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_12 + (rcx_53 << 2) + 4), zmm9[0].q)[0].q))
                    float temp0_350[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                    zmm1 = _mm_mul_ps(temp0_350, _mm_shuffle_ps(zmm5, zmm5, 0xc9))
                    float temp0_355[0x4] =
                        _mm_sub_ps(_mm_mul_ps(zmm7, _mm_shuffle_ps(zmm5, zmm5, 0xd2)), zmm1)
                    float temp0_356[0x4] = _mm_add_ps(temp0_355, temp0_355)
                    zmm0 = _mm_shuffle_ps(temp0_356, temp0_356, 0xd2)
                    float temp0_359[0x4] =
                        _mm_mul_ps(temp0_350, _mm_shuffle_ps(temp0_356, temp0_356, 0xc9))
                    zmm3 = *(rdi + 0x30)
                    zmm1 = _mm_mul_ps(temp0_356, zmm4)
                    zmm7 = _mm_mul_ps(zmm7, zmm0)
                    zmm1 = _mm_add_ps(zmm1, zmm5)
                    zmm3 = _mm_add_ps(zmm3, _mm_add_ps(_mm_sub_ps(zmm7, temp0_359), zmm1))
                    zmm7 = var_318_3
                    zmm4 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    zmm5 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                
                zmm5.d = zmm5.d f+ var_2e8_2
                zmm4.d = zmm4.d f+ var_2d8_2
                uint64_t rcx_54 = *arg1
                zmm3[0] = zmm3[0] + zmm10[0]
                zmm2 = *r8_10
                zmm6 = arg12
                zmm0.d = zmm2.d f* zmm5.d
                int32_t var_24c_1 = 0x3f800000
                zmm1.d = zmm2.d f* zmm4.d
                int64_t var_328_1 = 0
                zmm4.d = var_228_1.d f+ zmm0.d
                zmm3[0] = zmm3[0] * zmm2[0]
                int32_t var_320_1 = 0
                zmm7[0] = zmm7[0] f+ zmm1.d
                zmm3[0] = zmm3[0] + zmm11[0]
                zmm0.d = var_340_2.d f+ zmm4.d
                zmm1.d = var_348_3.d f+ zmm7[0]
                zmm3[0] = zmm3[0] f+ zmm8.d
                int32_t var_340_3 = zmm0.d
                int32_t var_348_4 = zmm1.d
                zmm5.d = zmm3[0]
                var_148.o = zmm3
                _mm_shuffle_ps(zmm5, zmm5, 0xe1)
                zmm5.d = zmm1.d
                _mm_shuffle_ps(zmm5, zmm5, 0xc6)
                zmm5.d = zmm0.d
                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                uint128_t var_258 = zmm5
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm5, zmm5, 0x55), arg13[1])
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm5, zmm5, 0), *arg13)
                float temp0_377[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm5, zmm5, 0xff), arg13[3])
                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
                zmm1 = _mm_add_ps(zmm1, zmm0)
                zmm5 = _mm_add_ps(_mm_add_ps(__mulps_xmmps_memps(zmm5, arg13[2]), temp0_377), zmm1)
                zmm4.d = _mm_shuffle_ps(zmm5, zmm5, 0xaa).d f- *(rcx_54 + 8)
                float temp0_384[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                zmm5.d = zmm5.d f- *rcx_54
                temp0_384[0] = temp0_384[0] f- *(rcx_54 + 4)
                zmm4.d = zmm4.d f* zmm6[0]
                zmm5.d = zmm5.d f* zmm6[0]
                zmm4.d = zmm4.d f+ *(rcx_54 + 8)
                temp0_384[0] = temp0_384[0] * zmm6[0]
                zmm5.d = zmm5.d f+ *rcx_54
                temp0_384[0] = temp0_384[0] f+ *(rcx_54 + 4)
                int32_t var_150_1 = zmm4.d
                *rcx_54 = (_mm_unpacklo_ps(zmm5, temp0_384[0].q)).q
                *(rcx_54 + 8) = var_150_1
                uint64_t r11_4 = zx.q(r8_10[3][0].w)
                int32_t r14_5 = rdi[1].d
                zmm6 = data_143dbb200
                zmm7 = data_143dbb1fc
                zmm8 = data_143dbb1f8
                float var_2a8
                int32_t var_298
                int32_t var_1b8
                
                if (r11_4.d s>= r14_5)
                    var_1b8 = zmm8.d
                    var_298 = zmm7[0]
                    var_2a8 = zmm6[0]
                else
                    zmm4 = *(rdi + 0x20)
                    int64_t rdx_13 = *rdi
                    zmm5 = *(rdi + 0x40)
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    int64_t rcx_55 = sx.q(r11_4.d) * 3
                    zmm5 = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_13 + (rcx_55 << 2)), 
                                (*(rdx_13 + (rcx_55 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_13 + (rcx_55 << 2) + 4), zmm9[0].q)[0].q))
                    float temp0_391[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm4)
                    float temp0_397[0x4] =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_391), zmm0)
                    float temp0_398[0x4] = _mm_add_ps(temp0_397, temp0_397)
                    zmm0 = _mm_mul_ps(temp0_398, zmm1)
                    zmm1 = *(rdi + 0x30)
                    zmm5 = _mm_add_ps(zmm5, zmm0)
                    zmm1 = _mm_add_ps(zmm1, 
                        _mm_add_ps(
                            _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(temp0_398, temp0_398, 0xd2), temp0_391), 
                                _mm_mul_ps(_mm_shuffle_ps(temp0_398, temp0_398, 0xc9), zmm4)), 
                            zmm5))
                    var_1b8.o = zmm1
                    var_298.o = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    var_2a8.o = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                
                uint64_t r9_5 = zx.q(*(r8_10 + 0x32))
                float var_208
                int32_t var_1f8
                int32_t var_1d8
                
                if (r9_5.d s>= r14_5)
                    var_1d8 = zmm8.d
                    var_1f8 = zmm7[0]
                    var_208 = zmm6[0]
                else
                    zmm4 = *(rdi + 0x20)
                    int64_t rdx_14 = *rdi
                    zmm5 = *(rdi + 0x40)
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    int64_t rcx_56 = sx.q(r9_5.d) * 3
                    zmm5 = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_14 + (rcx_56 << 2)), 
                                (*(rdx_14 + (rcx_56 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_14 + (rcx_56 << 2) + 4), zmm9[0].q)[0].q))
                    float temp0_415[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm4)
                    float temp0_421[0x4] =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_415), zmm0)
                    float temp0_422[0x4] = _mm_add_ps(temp0_421, temp0_421)
                    zmm0 = _mm_mul_ps(temp0_422, zmm1)
                    zmm1 = *(rdi + 0x30)
                    zmm5 = _mm_add_ps(zmm5, zmm0)
                    zmm1 = _mm_add_ps(zmm1, 
                        _mm_add_ps(
                            _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(temp0_422, temp0_422, 0xd2), temp0_415), 
                                _mm_mul_ps(_mm_shuffle_ps(temp0_422, temp0_422, 0xc9), zmm4)), 
                            zmm5))
                    var_1d8.o = zmm1
                    var_1f8.o = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    var_208.o = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                
                uint64_t r10_5 = zx.q((*r8_10)[0xd].w)
                int32_t var_198
                
                if (r10_5.d s>= r14_5)
                    var_198 = zmm8.d
                else
                    zmm4 = *(rdi + 0x20)
                    int64_t rdx_15 = *rdi
                    zmm5 = *(rdi + 0x40)
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    int64_t rcx_57 = sx.q(r10_5.d) * 3
                    zmm5 = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_15 + (rcx_57 << 2)), 
                                (*(rdx_15 + (rcx_57 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_15 + (rcx_57 << 2) + 4), zmm9[0].q)[0].q))
                    float temp0_439[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm4)
                    float temp0_445[0x4] =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_439), zmm0)
                    float temp0_446[0x4] = _mm_add_ps(temp0_445, temp0_445)
                    zmm0 = _mm_mul_ps(temp0_446, zmm1)
                    zmm1 = *(rdi + 0x30)
                    zmm5 = _mm_add_ps(zmm5, zmm0)
                    zmm1 = _mm_add_ps(zmm1, 
                        _mm_add_ps(
                            _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(temp0_446, temp0_446, 0xd2), temp0_439), 
                                _mm_mul_ps(_mm_shuffle_ps(temp0_446, temp0_446, 0xc9), zmm4)), 
                            zmm5))
                    var_198.o = zmm1
                    zmm7 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    zmm6 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                
                int32_t r14_6 = rdi[3].d
                float var_178_1 = zmm6[0]
                int32_t var_228_2 = zmm7[0]
                float var_318_4[0x4]
                int32_t var_1c8
                
                if (r11_4.d s>= r14_6)
                    zmm0 = 0x3f800000
                    zmm12 = zmm9
                    var_1c8 = 0x3f800000
                    var_328_1.o = zmm9
                    var_318_4 = zmm9
                else
                    zmm4 = *(rdi + 0x20)
                    uint64_t rcx_58 = r11_4 * 3
                    int64_t rdx_16 = rdi[2]
                    zmm5 = *(rdi + 0x40)
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    zmm5 = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_16 + (rcx_58 << 2)), 
                                (*(rdx_16 + (rcx_58 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_16 + (rcx_58 << 2) + 4), zmm9[0].q)[0].q))
                    float temp0_463[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm4)
                    float temp0_469[0x4] =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_463), zmm0)
                    float temp0_470[0x4] = _mm_add_ps(temp0_469, temp0_469)
                    zmm5 = _mm_add_ps(zmm5, _mm_mul_ps(temp0_470, zmm1))
                    zmm0 = _mm_add_ps(
                        _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(temp0_470, temp0_470, 0xd2), temp0_463), 
                            _mm_mul_ps(_mm_shuffle_ps(temp0_470, temp0_470, 0xc9), zmm4)), 
                        zmm5)
                    var_328_1.o = zmm0
                    zmm12 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                    zmm0 = 0x3f800000
                    var_318_4 = zmm12
                    var_1c8.o = zmm1
                
                float var_2e8_3
                float var_2d8_3
                float var_1e8
                
                if (r9_5.d s>= r14_6)
                    var_1e8 = zmm9[0]
                    zmm10 = zmm9
                    var_2e8_3 = zmm9[0]
                    zmm11 = zmm0
                    var_2d8_3 = zmm0.d
                else
                    zmm4 = *(rdi + 0x20)
                    uint64_t rcx_59 = r9_5 * 3
                    int64_t rdx_17 = rdi[2]
                    zmm5 = *(rdi + 0x40)
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    zmm5 = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_17 + (rcx_59 << 2)), 
                                (*(rdx_17 + (rcx_59 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_17 + (rcx_59 << 2) + 4), zmm9[0].q)[0].q))
                    float temp0_486[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm4)
                    float temp0_492[0x4] =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_486), zmm0)
                    float temp0_493[0x4] = _mm_add_ps(temp0_492, temp0_492)
                    zmm5 = _mm_add_ps(zmm5, _mm_mul_ps(temp0_493, zmm1))
                    zmm0 = _mm_add_ps(
                        _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(temp0_493, temp0_493, 0xd2), temp0_486), 
                            _mm_mul_ps(_mm_shuffle_ps(temp0_493, temp0_493, 0xc9), zmm4)), 
                        zmm5)
                    var_1e8.o = zmm0
                    zmm10 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm11 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                    zmm0 = 0x3f800000
                    var_2e8_3 = zmm10[0]
                    var_2d8_3 = zmm11[0]
                
                float var_338_2[0x4]
                float var_168
                
                if (r10_5.d s>= r14_6)
                    var_168 = zmm9[0]
                    zmm1 = zmm9
                    zmm2 = zmm0
                    var_338_2 = zmm0
                else
                    zmm4 = *(rdi + 0x20)
                    uint64_t rcx_60 = r10_5 * 3
                    int64_t rdx_18 = rdi[2]
                    zmm5 = *(rdi + 0x40)
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    zmm5 = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_18 + (rcx_60 << 2)), 
                                (*(rdx_18 + (rcx_60 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_18 + (rcx_60 << 2) + 4), zmm9[0].q)[0].q))
                    float temp0_509[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm4)
                    float temp0_515[0x4] =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_509), zmm0)
                    float temp0_516[0x4] = _mm_add_ps(temp0_515, temp0_515)
                    zmm5 = _mm_add_ps(zmm5, _mm_mul_ps(temp0_516, zmm1))
                    zmm0 = _mm_add_ps(
                        _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(temp0_516, temp0_516, 0xd2), temp0_509), 
                            _mm_mul_ps(_mm_shuffle_ps(temp0_516, temp0_516, 0xc9), zmm4)), 
                        zmm5)
                    var_168.o = zmm0
                    zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                    var_338_2 = zmm2
                    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                
                zmm8 = (*r8_10)[7]
                zmm0 = zmm2
                zmm4 = (*r8_10)[5]
                zmm5 = zmm6
                zmm3 = var_1f8
                zmm6 = zmm7
                zmm7 = (*r8_10)[6]
                zmm2 = var_208
                zmm9 = var_328_1.o
                zmm0.d = zmm0.d f* zmm8.d
                uint128_t var_188_1 = zmm1
                zmm1.d = zmm1.d f* zmm8.d
                zmm5.d = zmm5.d f+ zmm0.d
                zmm0.d = zmm11.d f* zmm8.d
                zmm11 = zmm12
                zmm6[0] = zmm6[0] f+ zmm1.d
                zmm11[0] = zmm11[0] f* zmm8.d
                zmm1 = zmm10
                zmm5.d = zmm5.d f* zmm7[0]
                zmm10 = var_1c8
                zmm2[0] = zmm2[0] f+ zmm0.d
                zmm0 = r8_10[1][0]
                zmm12 = zmm9
                zmm11[0] = zmm11[0] f+ var_298
                zmm1.d = zmm1.d f* zmm8.d
                zmm10[0] = zmm10[0] f* zmm8.d
                zmm3[0] = zmm3[0] f+ zmm1.d
                zmm11[0] = zmm11[0] f* zmm0.d
                zmm10[0] = zmm10[0] + var_2a8
                zmm12[0] = zmm12[0] f* zmm8.d
                zmm6[0] = zmm6[0] f* zmm7[0]
                zmm12[0] = zmm12[0] f+ var_1b8
                zmm10[0] = zmm10[0] f* zmm0.d
                zmm2[0] = zmm2[0] f* zmm4.d
                zmm12[0] = zmm12[0] f* zmm0.d
                zmm10[0] = zmm10[0] + zmm2[0]
                zmm2 = var_198.o
                zmm0.d = var_1e8.d f* zmm8.d
                zmm3[0] = zmm3[0] f* zmm4.d
                zmm10[0] = zmm10[0] f+ zmm5.d
                zmm0.d = zmm0.d f+ var_1d8
                zmm11[0] = zmm11[0] + zmm3[0]
                zmm3 = (*r8_10)[0xb]
                zmm5.d = var_338_2.d f* zmm3[0]
                zmm0.d = zmm0.d f* zmm4.d
                zmm5.d = zmm5.d f+ var_178_1
                zmm11[0] = zmm11[0] + zmm6[0]
                zmm6 = var_168.o
                zmm12[0] = zmm12[0] f+ zmm0.d
                zmm0 = (*r8_10)[0xa]
                zmm1.d = zmm6.d f* zmm8.d
                zmm6[0] = zmm6[0] * zmm3[0]
                zmm1.d = zmm1.d f+ zmm2[0]
                zmm4.d = zmm0.d f* zmm5.d
                zmm6[0] = zmm6[0] + zmm2[0]
                zmm5 = zmm0
                zmm2 = zmm3
                zmm2[0] = zmm2[0] * var_1e8
                zmm1.d = zmm1.d f* zmm7[0]
                zmm7 = var_1f8.o
                zmm2[0] = zmm2[0] f+ var_1d8
                zmm12[0] = zmm12[0] f+ zmm1.d
                zmm6[0] = zmm6[0] f* zmm0.d
                zmm0.d = zmm3.d f* var_2d8_3
                zmm1.d = var_188_1.d f* zmm3[0]
                zmm8.d = var_208.o.d f+ zmm0.d
                zmm0 = (*r8_10)[9]
                zmm1.d = zmm1.d f+ var_228_2
                zmm8.d = zmm8.d f* zmm0.d
                zmm5.d = zmm5.d f* zmm1.d
                zmm1.d = zmm3.d f* var_2e8_3
                zmm7[0] = zmm7[0] f+ zmm1.d
                zmm2[0] = zmm2[0] f* zmm0.d
                zmm11[0] = zmm11[0] f- var_348_4
                zmm10[0] = zmm10[0] f- var_340_3
                zmm1.d = var_1c8.o.d f* zmm3[0]
                zmm7[0] = zmm7[0] f* zmm0.d
                zmm0.d = var_318_4.d f* zmm3[0]
                zmm9[0] = zmm9[0] * zmm3[0]
                zmm3 = var_2a8.o
                zmm3[0] = zmm3[0] f+ zmm1.d
                zmm9[0] = zmm9[0] f+ var_1b8
                zmm1.d = var_298.o.d f+ zmm0.d
                zmm0 = r8_10[2][0]
                zmm3[0] = zmm3[0] f* zmm0.d
                zmm1.d = zmm1.d f* zmm0.d
                zmm9[0] = zmm9[0] f* zmm0.d
                zmm3[0] = zmm3[0] f+ zmm8.d
                zmm8 = var_148.o
                zmm1.d = zmm1.d f+ zmm7[0]
                zmm7 = zx.o(0)
                zmm12[0] = zmm12[0] f- zmm8.d
                zmm9[0] = zmm9[0] + zmm2[0]
                zmm3[0] = zmm3[0] f+ zmm4.d
                zmm1.d = zmm1.d f+ zmm5.d
                zmm9[0] = zmm9[0] + zmm6[0]
                zmm3[0] = zmm3[0] f- var_340_3
                zmm1.d = zmm1.d f- var_348_4
                zmm9[0] = zmm9[0] f- zmm8.d
                var_2a8.o = zmm3
                var_298.o = zmm1
                zmm0.d = zmm1.d f* zmm1.d
                zmm1.d = zmm3.d f* zmm3[0]
                zmm9[0] = zmm9[0] * zmm9[0]
                zmm3 = zx.o(0)
                zmm9[0] = zmm9[0] f+ zmm0.d
                zmm7[0] = 0x3f000000
                zmm9[0] = zmm9[0] f+ zmm1.d
                zmm3[0] = zmm9.d
                zmm4 = _mm_rsqrt_ss(zmm3.d, zmm3[0])
                zmm3[0] = zmm3[0] * 0.5f
                zmm0.d = zmm4.d f* zmm4.d
                zmm3[0] = zmm3[0] f* zmm0.d
                zmm1.d = zmm7.d f- zmm3[0]
                zmm12[0] = zmm12[0] * zmm12[0]
                zmm0.d = zmm4.d f* zmm1.d
                zmm4.d = zmm4.d f+ zmm0.d
                zmm0.d = zmm4.d f* zmm4.d
                zmm3[0] = zmm3[0] f* zmm0.d
                zmm1.d = zmm7.d f- zmm3[0]
                zmm3 = zx.o(0)
                zmm0.d = zmm4.d f* zmm1.d
                zmm4.d = zmm4.d f+ zmm0.d
                zmm0.d = zmm11.d f* zmm11[0]
                zmm12[0] = zmm12[0] f+ zmm0.d
                zmm9[0] = zmm9[0] f* zmm4.d
                zmm6 = zmm4
                zmm6[0] = zmm6[0] * var_2a8
                zmm5.d = zmm4.d f* var_298
                zmm0.d = zmm10.d f* zmm10[0]
                var_328_1.o = zmm9
                zmm0.d = zmm0.d f+ zmm12[0]
                zmm3[0] = zmm0.d
                uint64_t rdx_19 = *arg1
                zmm4 = _mm_rsqrt_ss(zmm3.d, zmm3[0])
                int32_t var_23c_1 = 0
                int32_t var_22c_1 = 0
                var_338_2[0].q = 0
                var_338_2[2] = 0
                var_318_4[0].q = 0
                var_318_4[2] = 0
                zmm3[0] = zmm3[0] * 0.5f
                zmm0.d = zmm4.d f* zmm4.d
                zmm3[0] = zmm3[0] f* zmm0.d
                zmm1.d = zmm7.d f- zmm3[0]
                zmm0.d = zmm4.d f* zmm1.d
                zmm4.d = zmm4.d f+ zmm0.d
                zmm0.d = zmm4.d f* zmm4.d
                zmm3[0] = zmm3[0] f* zmm0.d
                zmm7[0] = 0.5f - zmm3[0]
                zmm0.d = zmm4.d f* zmm7[0]
                zmm4.d = zmm4.d f+ zmm0.d
                zmm9 = zmm4
                zmm12[0] = zmm12[0] f* zmm4.d
                zmm9[0] = zmm9[0] * zmm10[0]
                float var_238[0x4]
                var_238[0] = zmm12[0]
                float var_248[0x4]
                var_248[0] = var_328_1.o.d
                float temp0_529[0x4] = _mm_shuffle_ps(var_238, var_238, 0xe1)
                float temp0_530[0x4] = _mm_shuffle_ps(var_248, var_248, 0xe1)
                temp0_530[0] = zmm5.d
                zmm8.d = zmm4.d f* zmm11[0]
                float temp0_531[0x4] = _mm_shuffle_ps(temp0_530, temp0_530, 0xc6)
                temp0_531[0] = zmm6[0]
                float temp0_532[0x4] = _mm_shuffle_ps(temp0_531, temp0_531, 0xc9)
                temp0_529[0] = zmm8.d
                float temp0_533[0x4] = _mm_shuffle_ps(temp0_529, temp0_529, 0xc6)
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_532, temp0_532, 0x55), arg13[1])
                zmm0 = _mm_shuffle_ps(temp0_532, temp0_532, 0)
                temp0_533[0] = zmm9[0]
                zmm0 = __mulps_xmmps_memps(zmm0, *arg13)
                float temp0_538[0x4] = _mm_shuffle_ps(temp0_533, temp0_533, 0xc9)
                float temp0_540[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_532, temp0_532, 0xff), arg13[3])
                zmm0 = _mm_add_ps(zmm0, zmm1)
                var_248 = temp0_532
                var_238 = temp0_538
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_538, temp0_538, 0), *arg13)
                float temp0_546[0x4] = _mm_add_ps(
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_532, temp0_532, 0xaa), arg13[2]), 
                    temp0_540)
                float temp0_548[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_538, temp0_538, 0xff), arg13[3])
                float temp0_549[0x4] = _mm_add_ps(temp0_546, zmm0)
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_538, temp0_538, 0x55), arg13[1])
                float temp0_553[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_538, temp0_538, 0xaa), arg13[2])
                zmm1 = _mm_add_ps(zmm1, zmm0)
                float temp0_556[0x4] = _mm_add_ps(_mm_add_ps(temp0_553, temp0_548), zmm1)
                zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rdx_19 + 0xc)), 0), 0)
                int96_t var_338_3 = temp0_556[0].12
                zmm12 = arg12
                zmm7 = data_142dd3f80
                zmm8 = data_142dd3fd0
                zmm0 = _mm_cmpgt_epi32(zmm1, zmm7)
                zmm11 = data_142dd3fb0
                zmm6 = 0x3f800000
                zmm0 = (zmm0 & zmm8) | zmm1
                zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rdx_19 + 0x10)), 0), 0)
                zmm0 = _mm_cvtepi32_ps(zmm0)
                zmm5 = _mm_shuffle_ps(temp0_549, temp0_549, 0xaa)
                zmm4.d = 1f - zmm12[0]
                float temp0_564[0x4] = _mm_mul_ps(zmm11, zmm0)
                float temp0_565[0x4] = _mm_shuffle_ps(temp0_549, temp0_549, 0x55)
                zmm0 = _mm_cmpgt_epi32(zmm1, zmm7)
                temp0_549[0] = temp0_549[0] * zmm12[0]
                zmm5.d = zmm5.d f* zmm12[0]
                temp0_565[0] = temp0_565[0] * zmm12[0]
                float temp0_567[0x4] = _mm_shuffle_ps(temp0_564, temp0_564, 0x55)
                zmm1 = _mm_cvtepi32_ps((zmm0 & zmm8) | zmm1)
                temp0_567[0] = temp0_567[0] f* zmm4.d
                var_328_1.o = _mm_mul_ps(zmm1, zmm11)
                zmm1 = _mm_shuffle_ps(temp0_564, temp0_564, 0xaa)
                temp0_564[0] = temp0_564[0] f* zmm4.d
                zmm1.d = zmm1.d f* zmm4.d
                temp0_549[0] = temp0_549[0] + temp0_564[0]
                temp0_549[0] = temp0_549[0] * 127f
                temp0_549[0] = temp0_549[0] + temp0_549[0]
                temp0_549[0] = temp0_549[0] + 0.5f
                int32_t rcx_62 = int.d(temp0_549[0]) s>> 1
                char rax_64
                
                if (rcx_62 s>= 0xffffff80)
                    rax_64 = 0x7f
                    
                    if (rcx_62 s< 0x7f)
                        rax_64 = rcx_62.b
                else
                    rax_64 = -0x80
                
                temp0_567[0] = temp0_567[0] + temp0_565[0]
                *(rdx_19 + 0xc) = rax_64
                zmm1.d = zmm1.d f+ zmm5.d
                temp0_567[0] = temp0_567[0] * 127f
                temp0_567[0] = temp0_567[0] + temp0_567[0]
                temp0_567[0] = temp0_567[0] + 0.5f
                int32_t rax_66 = int.d(temp0_567[0]) s>> 1
                char rcx_63
                
                if (rax_66 s>= 0xffffff80)
                    rcx_63 = 0x7f
                    
                    if (rax_66 s< 0x7f)
                        rcx_63 = rax_66.b
                else
                    rcx_63 = -0x80
                
                zmm1.d = zmm1.d f* 127f
                *(rdx_19 + 0xd) = rcx_63
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ 0.5f
                int32_t rax_68 = int.d(zmm1.d) s>> 1
                char rcx_64
                
                if (rax_68 s>= 0xffffff80)
                    rcx_64 = 0x7f
                    
                    if (rax_68 s< 0x7f)
                        rcx_64 = rax_68.b
                else
                    rcx_64 = -0x80
                
                zmm3 = var_338_3:8.d
                zmm2 = var_338_3:4.d
                zmm1.d = var_328_1:4.d.d f* zmm4.d
                *(rdx_19 + 0xe) = rcx_64
                zmm0.d = var_320_1.d f* zmm4.d
                *(rdx_19 + 0xf) = 0x7f
                uint64_t rax_69 = *arg1
                zmm3[0] = zmm3[0] * zmm12[0]
                zmm2[0] = zmm2[0] * zmm12[0]
                zmm3[0] = zmm3[0] f+ zmm0.d
                zmm0.d = var_328_1.d.d f* zmm4.d
                zmm2[0] = zmm2[0] f+ zmm1.d
                zmm1.d = var_338_3.d.d f* zmm12[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm1.d = zmm1.d f* 127f
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ 0.5f
                int32_t rcx_66 = int.d(zmm1.d) s>> 1
                char rdx_20
                
                if (rcx_66 s>= 0xffffff80)
                    rdx_20 = 0x7f
                    
                    if (rcx_66 s< 0x7f)
                        rdx_20 = rcx_66.b
                else
                    rdx_20 = -0x80
                
                zmm2[0] = zmm2[0] * 127f
                *(rax_69 + 0x10) = rdx_20
                zmm2[0] = zmm2[0] + zmm2[0]
                zmm2[0] = zmm2[0] + 0.5f
                int32_t rcx_68 = int.d(zmm2[0]) s>> 1
                char rdx_21
                
                if (rcx_68 s>= 0xffffff80)
                    rdx_21 = 0x7f
                    
                    if (rcx_68 s< 0x7f)
                        rdx_21 = rcx_68.b
                else
                    rdx_21 = -0x80
                
                zmm3[0] = zmm3[0] * 127f
                *(rax_69 + 0x11) = rdx_21
                zmm3[0] = zmm3[0] + zmm3[0]
                zmm3[0] = zmm3[0] + 0.5f
                int32_t rcx_70 = int.d(zmm3[0]) s>> 1
                char rdx_22
                
                if (rcx_70 s>= 0xffffff80)
                    rdx_22 = 0x7f
                    
                    if (rcx_70 s< 0x7f)
                        rdx_22 = rcx_70.b
                else
                    rdx_22 = -0x80
                
                int32_t var_31c
                zmm1.d = var_31c.d f* 127f
                *(rax_69 + 0x12) = rdx_22
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ 0.5f
                int32_t rcx_72 = int.d(zmm1.d) s>> 1
                
                if (rcx_72 s>= 0xffffff80)
                    char rdx_23 = 0x7f
                    zmm9 = zx.o(0)
                    
                    if (rcx_72 s< 0x7f)
                        rdx_23 = rcx_72.b
                    
                    *(rax_69 + 0x13) = rdx_23
                else
                    zmm9 = zx.o(0)
                    *(rax_69 + 0x13) = 0x80
            
            arg4 = var_2f8
            int64_t rax_70 = rsi[0x13]
            uint64_t r13_2 = zx.q(rsi[0x15].d)
            uint64_t rdx_25 = zx.q(arg7 + *(arg4 + 0x10))
            
            if (rsi[0x16].b == 0)
                int16_t* r13_6 = (r13_2 << 2) * rdx_25 + rax_70
                uint32_t rsi_1 = zx.d(r13_6[1])
                int32_t r14_9 = (rsi_1 & 0xffff8000) << 0x10
                int16_t rax_71 = rsi_1.w & 0x7c00
                int32_t var_340_4
                TEB* gsbase
                
                if (rax_71 == 0)
                    int32_t rsi_2 = rsi_1 & 0x3ff
                    
                    if (rsi_2 != 0)
                        if (data_143cda914 s> *(0x14 +
                                *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0.d = float.s(zx.q(rsi_2))
                        zmm0.d = logf(zmm0.d).d f* data_143cda910
                        var_340_4 = (rsi_2 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                            | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | r14_9
                    else
                        var_340_4 = r14_9
                else if (rax_71 != 0x7c00)
                    var_340_4 =
                        ((rsi_1 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rsi_1 & 0x3ff) << 0xd | r14_9
                else
                    var_340_4 = r14_9 | 0x477fe000
                
                uint32_t rsi_9 = zx.d(*r13_6)
                int32_t r14_13 = (rsi_9 & 0xffff8000) << 0x10
                int16_t rax_86 = rsi_9.w & 0x7c00
                int32_t var_348_5
                
                if (rax_86 == 0)
                    int32_t rsi_10 = rsi_9 & 0x3ff
                    
                    if (rsi_10 != 0)
                        if (data_143cda914 s> *(0x14 +
                                *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0.d = float.s(zx.q(rsi_10))
                        zmm0.d = logf(zmm0.d).d f* data_143cda910
                        var_348_5 = (rsi_10 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                            | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | r14_13
                    else
                        var_348_5 = r14_13
                else if (rax_86 != 0x7c00)
                    var_348_5 =
                        ((rsi_9 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rsi_9 & 0x3ff) << 0xd | r14_13
                else
                    var_348_5 = r14_13 | 0x477fe000
                
                zmm0 = var_348_5
                zmm1 = var_340_4
                rsi = var_2c0
                arg4 = var_2f8
            else
                int64_t r13_3 = r13_2 * rdx_25
                zmm0 = *(rax_70 + (r13_3 << 3))
                zmm1 = *(rax_70 + (r13_3 << 3) + 4)
            
            zmm10 = zx.o(0)
            rdx_1 = arg7 + 1
            r13 = arg2
            r14_2 = var_304_1
            arg7 = rdx_1
            *(*arg1 + 0x14) = zmm0.d
            result = *arg1
            *(result + 0x18) = zmm1.d
            *arg9 += 1
            *arg1 += 0x1c
        while (rdx_1 s< var_308)

__security_check_cookie(rax_1 ^ &var_368)
return result
