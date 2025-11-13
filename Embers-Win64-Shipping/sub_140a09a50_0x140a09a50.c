// 函数: sub_140a09a50
// 地址: 0x140a09a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_1e8
int64_t rax_2 = __security_cookie ^ &var_1e8
int64_t rax_3 = sx.q(*arg2)

if (rax_3.d s< *(arg1 + 0x158))
    void* rsi_1 = *(*(arg1 + 0x150) + (rax_3 << 3))
    
    if (rsi_1 != 0)
        int64_t r13_1 = sx.q(arg2[4])
        int32_t r15_1 = 0
        float var_1b8
        
        if (r13_1 s> 0)
            int64_t rdi_1 = 0
            float zmm6[0x4]
            float var_48_1[0x4] = zmm6
            float zmm7[0x4] = zx.o(0)
            int32_t zmm8[0x4] = data_142dd3f80
            int128_t zmm9 = 0x3f000000
            float zmm10[0x4] = data_142dd3fd0
            int128_t zmm11 = 0x42fe0000
            int128_t zmm12 = 0x46fffe00
            
            do
                int64_t var_fc_1 = 0
                int64_t var_148
                sub_1409fff20(&var_148, sx.q(r15_1) * 0x4c + *(arg2 + 8))
                int32_t rdx_3 = *(rsi_1 + 0xc0)
                int64_t rcx_1 = *(rsi_1 + 0xb8)
                uint128_t zmm0_1 = zx.o(var_148)
                uint128_t zmm1_1 =
                    _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_fc_1:4.d), zmm7[0].q), zmm7[0].q)
                uint64_t rdx_4 = zx.q(rdx_3 * r15_1)
                *(rdx_4 + rcx_1) = zmm0_1.q
                zmm0_1 = _mm_cmpgt_epi32(zmm1_1, zmm8)
                int32_t var_140
                *(rdx_4 + rcx_1 + 8) = var_140
                bool cond:7_1 = *(rsi_1 + 0x89) == 0
                int64_t r14_1 = *(rsi_1 + 0x68)
                float temp0_4[0x4] = _mm_cvtepi32_ps((zmm0_1 & zmm10) | zmm1_1)
                zmm1_1 = _mm_unpacklo_epi8(zx.o(var_fc_1.d), zmm7[0].q)
                float temp0_6[0x4] = __mulps_xmmps_memps(temp0_4, data_142dd3fb0)
                zmm1_1 = _mm_unpacklo_epi16(zmm1_1, zmm7[0].q)
                zmm0_1 = _mm_cmpgt_epi32(zmm1_1, zmm8) & zmm10
                int96_t var_198_1 = temp0_6[0].12
                float temp0_9[0x4] = _mm_cvtepi32_ps(zmm0_1 | zmm1_1)
                zmm0_1 = data_142d3f660
                float temp0_10[0x4] = __mulps_xmmps_memps(temp0_9, data_142dd3fb0)
                uint128_t var_1a8_1 = zmm0_1
                float temp0_11[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x55)
                zmm1_1 = _mm_shuffle_ps(temp0_6, temp0_6, 0xaa)
                float temp0_13[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xff)
                float temp0_14[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xaa)
                float temp0_15[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x55)
                zmm8 = temp0_14
                zmm8[0] = zmm8[0] f* temp0_11[0]
                zmm0_1.d = temp0_15.d f* zmm1_1.d
                temp0_10[0] = temp0_10[0] f* zmm1_1.d
                zmm8[0] = zmm8[0] f- zmm0_1.d
                temp0_15[0] = temp0_15[0] * temp0_6[0]
                temp0_14[0] = temp0_14[0] * temp0_6[0]
                zmm0_1.d = temp0_10.d f* temp0_11[0]
                temp0_10[0] = temp0_10[0] - temp0_14[0]
                int96_t var_1a8_2 = temp0_10[0].12
                float zmm4[0x4] = var_1a8_2.d
                temp0_15[0] = temp0_15[0] f- zmm0_1.d
                zmm8[0] = zmm8[0] f* temp0_13[0]
                zmm1_1 = zmm4
                temp0_10[0] = temp0_10[0] * temp0_13[0]
                temp0_15[0] = temp0_15[0] * temp0_13[0]
                float var_188
                float zmm0
                float zmm1
                float zmm2_1[0x4]
                float zmm3_1[0x4]
                
                if (cond:7_1)
                    zmm1_1.d = zmm1_1.d f* zmm11.d
                    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
                    zmm1_1.d = zmm1_1.d f+ zmm9.d
                    int32_t rax_22 = int.d(zmm1_1.d) s>> 1
                    char rcx_10
                    
                    if (rax_22 s>= 0xffffff80)
                        rcx_10 = 0x7f
                        
                        if (rax_22 s< 0x7f)
                            rcx_10 = rax_22.b
                    else
                        rcx_10 = -0x80
                    
                    zmm3_1 = var_1a8_2:4.d
                    *(r14_1 + (rdi_1 << 3)) = rcx_10
                    zmm1_1.d = zmm3_1.d f* zmm11.d
                    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
                    zmm1_1.d = zmm1_1.d f+ zmm9.d
                    int32_t rax_24 = int.d(zmm1_1.d) s>> 1
                    char rcx_11
                    
                    if (rax_24 s>= 0xffffff80)
                        rcx_11 = 0x7f
                        
                        if (rax_24 s< 0x7f)
                            rcx_11 = rax_24.b
                    else
                        rcx_11 = -0x80
                    
                    zmm2_1 = var_1a8_2:8.d
                    *(r14_1 + (rdi_1 << 3) + 1) = rcx_11
                    zmm1_1.d = zmm2_1.d f* zmm11.d
                    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
                    zmm1_1.d = zmm1_1.d f+ zmm9.d
                    int32_t rax_26 = int.d(zmm1_1.d) s>> 1
                    char rcx_12
                    
                    if (rax_26 s>= 0xffffff80)
                        rcx_12 = 0x7f
                        
                        if (rax_26 s< 0x7f)
                            rcx_12 = rax_26.b
                    else
                        rcx_12 = -0x80
                    
                    zmm0_1 = data_142d3f660
                    int32_t var_178_2 = zmm8[0]
                    float var_170_2 = temp0_15[0]
                    *(r14_1 + (rdi_1 << 3) + 2) = rcx_12
                    float var_164_2 = var_198_1:4.d[0]
                    int32_t var_160_2 = var_198_1:8.d[0]
                    var_188 = zmm4[0]
                    float var_184_2 = zmm3_1[0]
                    float var_180_2 = zmm2_1[0]
                    float var_174_2 = temp0_10[0]
                    float var_168_2 = var_198_1.d[0]
                    *(r14_1 + (rdi_1 << 3) + 3) = 0x7f
                    int32_t var_17c_2 = 0
                    int32_t var_16c_2 = 0
                    int32_t var_15c_2 = 0
                    uint128_t var_158_2 = zmm0_1
                    int32_t zmm13_2
                    zmm0, zmm6, zmm7, zmm8, zmm9, zmm11, zmm12, zmm13_2 = sub_14062b8d0(&var_188)
                    
                    zmm1 = zmm0 f>= zmm13_2 ? 254.5f : -253.5f
                    
                    zmm6[0] = zmm6[0] f* zmm11.d
                    zmm6[0] = zmm6[0] + zmm6[0]
                    zmm6[0] = zmm6[0] f+ zmm9.d
                    int32_t rax_28 = int.d(zmm6[0]) s>> 1
                    char rcx_14
                    
                    if (rax_28 s>= 0xffffff80)
                        rcx_14 = 0x7f
                        
                        if (rax_28 s< 0x7f)
                            rcx_14 = rax_28.b
                    else
                        rcx_14 = -0x80
                    
                    zmm7[0] = zmm7[0] f* zmm11.d
                    *(r14_1 + (rdi_1 << 3) + 4) = rcx_14
                    zmm7[0] = zmm7[0] + zmm7[0]
                    zmm7[0] = zmm7[0] f+ zmm9.d
                    int32_t rax_30 = int.d(zmm7[0]) s>> 1
                    char rcx_15
                    
                    if (rax_30 s>= 0xffffff80)
                        rcx_15 = 0x7f
                        
                        if (rax_30 s< 0x7f)
                            rcx_15 = rax_30.b
                    else
                        rcx_15 = -0x80
                    
                    zmm8[0] = zmm8[0] f* zmm11.d
                    *(r14_1 + (rdi_1 << 3) + 5) = rcx_15
                    zmm8[0] = zmm8[0] f+ zmm8[0]
                    zmm8[0] = zmm8[0] f+ zmm9.d
                    zmm8[0]
                    int32_t rax_32 = int.d(zmm8[0]) s>> 1
                    char rcx_16
                    
                    if (rax_32 s>= 0xffffff80)
                        rcx_16 = 0x7f
                        
                        if (rax_32 s< 0x7f)
                            rcx_16 = rax_32.b
                    else
                        rcx_16 = -0x80
                    
                    *(r14_1 + (rdi_1 << 3) + 6) = rcx_16
                    int32_t rax_34 = int.d(zmm1) s>> 1
                    char rcx_17
                    
                    if (rax_34 s>= 0xffffff80)
                        rcx_17 = 0x7f
                        
                        if (rax_34 s< 0x7f)
                            rcx_17 = rax_34.b
                    else
                        rcx_17 = -0x80
                    
                    *(r14_1 + (rdi_1 << 3) + 7) = rcx_17
                else
                    zmm1_1.d = zmm1_1.d f* zmm12.d
                    int16_t* rbx_3 = (rdi_1 << 4) + r14_1
                    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
                    zmm1_1.d = zmm1_1.d f+ zmm9.d
                    int32_t rax_8 = int.d(zmm1_1.d) s>> 1
                    int16_t rcx_2
                    
                    if (rax_8 s>= 0xffff8000)
                        rcx_2 = 0x7fff
                        
                        if (rax_8 s< 0x7fff)
                            rcx_2 = rax_8.w
                    else
                        rcx_2 = -0x8000
                    
                    zmm3_1 = var_1a8_2:4.d
                    *rbx_3 = rcx_2
                    zmm1_1.d = zmm3_1.d f* zmm12.d
                    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
                    zmm1_1.d = zmm1_1.d f+ zmm9.d
                    int32_t rax_10 = int.d(zmm1_1.d) s>> 1
                    int16_t rcx_3
                    
                    if (rax_10 s>= 0xffff8000)
                        rcx_3 = 0x7fff
                        
                        if (rax_10 s< 0x7fff)
                            rcx_3 = rax_10.w
                    else
                        rcx_3 = -0x8000
                    
                    zmm2_1 = var_1a8_2:8.d
                    rbx_3[1] = rcx_3
                    zmm1_1.d = zmm2_1.d f* zmm12.d
                    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
                    zmm1_1.d = zmm1_1.d f+ zmm9.d
                    int32_t rax_12 = int.d(zmm1_1.d) s>> 1
                    int16_t rcx_4
                    
                    if (rax_12 s>= 0xffff8000)
                        rcx_4 = 0x7fff
                        
                        if (rax_12 s< 0x7fff)
                            rcx_4 = rax_12.w
                    else
                        rcx_4 = -0x8000
                    
                    zmm0_1 = data_142d3f660
                    int32_t var_178_1 = zmm8[0]
                    float var_170_1 = temp0_15[0]
                    rbx_3[2] = rcx_4
                    float var_164_1 = var_198_1:4.d[0]
                    int32_t var_160_1 = var_198_1:8.d[0]
                    var_188 = zmm4[0]
                    float var_184_1 = zmm3_1[0]
                    float var_180_1 = zmm2_1[0]
                    float var_174_1 = temp0_10[0]
                    float var_168_1 = var_198_1.d[0]
                    rbx_3[3] = 0x7fff
                    int32_t var_17c_1 = 0
                    int32_t var_16c_1 = 0
                    int32_t var_15c_1 = 0
                    uint128_t var_158_1 = zmm0_1
                    int32_t zmm13_1
                    float zmm14_1
                    float zmm15_1
                    zmm0, zmm6, zmm7, zmm8, zmm9, zmm11, zmm12, zmm13_1, zmm14_1, zmm15_1 =
                        sub_14062b8d0(&var_188)
                    
                    zmm1 = zmm0 f>= zmm13_1 ? zmm15_1 : zmm14_1
                    
                    zmm6[0] = zmm6[0] f* zmm12.d
                    zmm6[0] = zmm6[0] + zmm6[0]
                    zmm6[0] = zmm6[0] f+ zmm9.d
                    int32_t rax_14 = int.d(zmm6[0]) s>> 1
                    int16_t rcx_6
                    
                    if (rax_14 s>= 0xffff8000)
                        rcx_6 = 0x7fff
                        
                        if (rax_14 s< 0x7fff)
                            rcx_6 = rax_14.w
                    else
                        rcx_6 = -0x8000
                    
                    zmm7[0] = zmm7[0] f* zmm12.d
                    rbx_3[4] = rcx_6
                    zmm7[0] = zmm7[0] + zmm7[0]
                    zmm7[0] = zmm7[0] f+ zmm9.d
                    int32_t rax_16 = int.d(zmm7[0]) s>> 1
                    int16_t rcx_7
                    
                    if (rax_16 s>= 0xffff8000)
                        rcx_7 = 0x7fff
                        
                        if (rax_16 s< 0x7fff)
                            rcx_7 = rax_16.w
                    else
                        rcx_7 = -0x8000
                    
                    zmm8[0] = zmm8[0] f* zmm12.d
                    rbx_3[5] = rcx_7
                    zmm8[0] = zmm8[0] f+ zmm8[0]
                    zmm8[0] = zmm8[0] f+ zmm9.d
                    int32_t rax_18 = int.d(zmm8[0]) s>> 1
                    int16_t rcx_8
                    
                    if (rax_18 s>= 0xffff8000)
                        rcx_8 = 0x7fff
                        
                        if (rax_18 s< 0x7fff)
                            rcx_8 = rax_18.w
                    else
                        rcx_8 = -0x8000
                    
                    rbx_3[6] = rcx_8
                    int32_t rax_20 = int.d(zmm1) s>> 1
                    
                    if (rax_20 s>= 0xffff8000)
                        int16_t rcx_9 = 0x7fff
                        
                        if (rax_20 s< 0x7fff)
                            rcx_9 = rax_20.w
                        
                        rbx_3[7] = rcx_9
                    else
                        rbx_3[7] = 0x8000
                int64_t r11_1 = *(rsi_1 + 0x70)
                int64_t r9_2 = zx.q(*(rsi_1 + 0x80)) * rdi_1
                float var_13c
                float var_138
                
                if (*(rsi_1 + 0x88) == 0)
                    uint16_t rcx_19 = (var_13c u>> 0x17).w
                    uint16_t rax_36 = (var_13c u>> 0x1f).w << 0xf
                    uint32_t r8_1 = zx.d(rcx_19.b)
                    
                    if (r8_1 u> 0x70)
                        if (r8_1 u< 0x8f)
                            rax_36 |=
                                ((rcx_19 - 0x10) & 0x1f) << 0xa | ((var_13c u>> 0xd).w & 0x3ff)
                        else
                            rax_36 |= 0x7bff
                    else if (0x70 - r8_1 + 0xe s<= 0x18)
                        int32_t rdx_7 = (var_13c & 0x7fffff) | 0x800000
                        uint16_t r8_3 = ((rdx_7 u>> (0x70 - r8_1 + 0xe).b).w & 0x3ff) | rax_36
                        rax_36 = r8_3
                        
                        if (((rdx_7 u>> ((0x70 - r8_1).b + 0xd)).b & 1) != 0)
                            rax_36 = r8_3 + 1
                    
                    var_1b8 = var_138
                    *(r11_1 + (r9_2 << 2)) = rax_36
                    uint16_t rcx_23 = (var_1b8 u>> 0x17).w
                    uint16_t rdx_11 = (var_1b8 u>> 0x1f).w << 0xf
                    uint32_t r8_4 = zx.d(rcx_23.b)
                    
                    if (r8_4 u> 0x70)
                        if (r8_4 u< 0x8f)
                            rdx_11 |=
                                ((var_1b8 u>> 0xd).w & 0x3ff) | ((rcx_23 - 0x10) & 0x1f) << 0xa
                        else
                            rdx_11 |= 0x7bff
                    else if (0x70 - r8_4 + 0xe s<= 0x18)
                        int32_t rax_39 = (var_1b8 & 0x7fffff) | 0x800000
                        uint16_t r8_6 = ((rax_39 u>> (0x70 - r8_4 + 0xe).b).w & 0x3ff) | rdx_11
                        rdx_11 = r8_6
                        
                        if (((rax_39 u>> ((0x70 - r8_4).b + 0xd)).b & 1) != 0)
                            rdx_11 = r8_6 + 1
                    
                    *(r11_1 + (r9_2 << 2) + 2) = rdx_11
                else
                    *(r11_1 + (r9_2 << 3) + 4) = var_138
                    *(r11_1 + (r9_2 << 3)) = var_13c
                int64_t r11_2 = *(rsi_1 + 0x70)
                int64_t r9_4 = zx.q(*(rsi_1 + 0x80)) * rdi_1
                float var_134
                float var_130
                
                if (*(rsi_1 + 0x88) == 0)
                    uint16_t rcx_27 = (var_134 u>> 0x17).w
                    uint16_t rdx_13 = (var_134 u>> 0x1f).w << 0xf
                    uint32_t r8_7 = zx.d(rcx_27.b)
                    
                    if (r8_7 u> 0x70)
                        if (r8_7 u< 0x8f)
                            rdx_13 |=
                                ((var_134 u>> 0xd).w & 0x3ff) | ((rcx_27 - 0x10) & 0x1f) << 0xa
                        else
                            rdx_13 |= 0x7bff
                    else if (0x70 - r8_7 + 0xe s<= 0x18)
                        int32_t rax_44 = (var_134 & 0x7fffff) | 0x800000
                        uint16_t r8_9 = ((rax_44 u>> (0x70 - r8_7 + 0xe).b).w & 0x3ff) | rdx_13
                        rdx_13 = r8_9
                        
                        if (((rax_44 u>> ((0x70 - r8_7).b + 0xd)).b & 1) != 0)
                            rdx_13 = r8_9 + 1
                    
                    *(r11_2 + (r9_4 << 2) + 4) = rdx_13
                    var_1b8 = var_130
                    uint16_t rcx_31 = (var_1b8 u>> 0x17).w
                    uint16_t rdx_15 = (var_1b8 u>> 0x1f).w << 0xf
                    uint32_t r8_10 = zx.d(rcx_31.b)
                    
                    if (r8_10 u> 0x70)
                        if (r8_10 u< 0x8f)
                            rdx_15 |=
                                ((var_1b8 u>> 0xd).w & 0x3ff) | ((rcx_31 - 0x10) & 0x1f) << 0xa
                        else
                            rdx_15 |= 0x7bff
                    else if (0x70 - r8_10 + 0xe s<= 0x18)
                        int32_t rax_49 = (var_1b8 & 0x7fffff) | 0x800000
                        uint16_t r8_12 = ((rax_49 u>> (0x70 - r8_10 + 0xe).b).w & 0x3ff) | rdx_15
                        rdx_15 = r8_12
                        
                        if (((rax_49 u>> ((0x70 - r8_10).b + 0xd)).b & 1) != 0)
                            rdx_15 = r8_12 + 1
                    
                    *(r11_2 + (r9_4 << 2) + 6) = rdx_15
                else
                    *(r11_2 + (r9_4 << 3) + 0xc) = var_130
                    *(r11_2 + (r9_4 << 3) + 8) = var_134
                int64_t r11_3 = *(rsi_1 + 0x70)
                int64_t r9_6 = zx.q(*(rsi_1 + 0x80)) * rdi_1
                float var_12c
                float var_128
                
                if (*(rsi_1 + 0x88) == 0)
                    uint16_t rcx_35 = (var_12c u>> 0x17).w
                    uint16_t rdx_17 = (var_12c u>> 0x1f).w << 0xf
                    uint32_t r8_13 = zx.d(rcx_35.b)
                    
                    if (r8_13 u> 0x70)
                        if (r8_13 u< 0x8f)
                            rdx_17 |=
                                ((var_12c u>> 0xd).w & 0x3ff) | ((rcx_35 - 0x10) & 0x1f) << 0xa
                        else
                            rdx_17 |= 0x7bff
                    else if (0x70 - r8_13 + 0xe s<= 0x18)
                        int32_t rax_54 = (var_12c & 0x7fffff) | 0x800000
                        uint16_t r8_15 = ((rax_54 u>> (0x70 - r8_13 + 0xe).b).w & 0x3ff) | rdx_17
                        rdx_17 = r8_15
                        
                        if (((rax_54 u>> ((0x70 - r8_13).b + 0xd)).b & 1) != 0)
                            rdx_17 = r8_15 + 1
                    
                    *(r11_3 + (r9_6 << 2) + 8) = rdx_17
                    var_1b8 = var_128
                    uint16_t rcx_39 = (var_1b8 u>> 0x17).w
                    uint16_t rdx_19 = (var_1b8 u>> 0x1f).w << 0xf
                    uint32_t r8_16 = zx.d(rcx_39.b)
                    
                    if (r8_16 u> 0x70)
                        if (r8_16 u< 0x8f)
                            rdx_19 |=
                                ((var_1b8 u>> 0xd).w & 0x3ff) | ((rcx_39 - 0x10) & 0x1f) << 0xa
                        else
                            rdx_19 |= 0x7bff
                    else if (0x70 - r8_16 + 0xe s<= 0x18)
                        int32_t rax_59 = (var_1b8 & 0x7fffff) | 0x800000
                        uint16_t r8_18 = ((rax_59 u>> (0x70 - r8_16 + 0xe).b).w & 0x3ff) | rdx_19
                        rdx_19 = r8_18
                        
                        if (((rax_59 u>> ((0x70 - r8_16).b + 0xd)).b & 1) != 0)
                            rdx_19 = r8_18 + 1
                    
                    *(r11_3 + (r9_6 << 2) + 0xa) = rdx_19
                else
                    *(r11_3 + (r9_6 << 3) + 0x14) = var_128
                    *(r11_3 + (r9_6 << 3) + 0x10) = var_12c
                int64_t r11_4 = *(rsi_1 + 0x70)
                int64_t r9_8 = zx.q(*(rsi_1 + 0x80)) * rdi_1
                float var_124
                float var_120
                
                if (*(rsi_1 + 0x88) == 0)
                    uint16_t rcx_43 = (var_124 u>> 0x17).w
                    uint16_t rdx_21 = (var_124 u>> 0x1f).w << 0xf
                    uint32_t r8_19 = zx.d(rcx_43.b)
                    
                    if (r8_19 u> 0x70)
                        if (r8_19 u< 0x8f)
                            rdx_21 |=
                                ((rcx_43 - 0x10) & 0x1f) << 0xa | ((var_124 u>> 0xd).w & 0x3ff)
                        else
                            rdx_21 |= 0x7bff
                    else if (0x70 - r8_19 + 0xe s<= 0x18)
                        int32_t rax_64 = (var_124 & 0x7fffff) | 0x800000
                        uint16_t r8_21 = ((rax_64 u>> (0x70 - r8_19 + 0xe).b).w & 0x3ff) | rdx_21
                        rdx_21 = r8_21
                        
                        if (((rax_64 u>> ((0x70 - r8_19).b + 0xd)).b & 1) != 0)
                            rdx_21 = r8_21 + 1
                    
                    var_1b8 = var_120
                    *(r11_4 + (r9_8 << 2) + 0xc) = rdx_21
                    uint16_t rcx_47 = (var_1b8 u>> 0x17).w
                    uint16_t rax_68 = (var_1b8 u>> 0x1f).w << 0xf
                    uint32_t r8_22 = zx.d(rcx_47.b)
                    
                    if (r8_22 u> 0x70)
                        if (r8_22 u< 0x8f)
                            rax_68 |=
                                ((rcx_47 - 0x10) & 0x1f) << 0xa | ((var_1b8 u>> 0xd).w & 0x3ff)
                        else
                            rax_68 |= 0x7bff
                    else if (0x70 - r8_22 + 0xe s<= 0x18)
                        int32_t rdx_24 = (var_1b8 & 0x7fffff) | 0x800000
                        uint16_t r8_24 = ((rdx_24 u>> (0x70 - r8_22 + 0xe).b).w & 0x3ff) | rax_68
                        rax_68 = r8_24
                        
                        if (((rdx_24 u>> ((0x70 - r8_22).b + 0xd)).b & 1) != 0)
                            rax_68 = r8_24 + 1
                    
                    *(r11_4 + (r9_8 << 2) + 0xe) = rax_68
                else
                    *(r11_4 + (r9_8 << 3) + 0x1c) = var_120
                    *(r11_4 + (r9_8 << 3) + 0x18) = var_124
                rdi_1 += 1
                zmm7 = zx.o(0)
                zmm8 = data_142dd3f80
                zmm10 = data_142dd3fd0
                uint64_t rdx_28 = zx.q(*(rsi_1 + 0x100) * r15_1)
                r15_1 += 1
                int32_t var_f4
                *(rdx_28 + *(rsi_1 + 0xf8)) = var_f4
            while (rdi_1 s< r13_1)
        
        int64_t* rcx_51 = data_143f0f180
        memcpy(
            (*(*rcx_51 + 0x130))(rcx_51, &data_143f02b98, *(rsi_1 + 0xa0), 0, 
                *(rsi_1 + 0xc4) * *(rsi_1 + 0xc0), 1, var_1b8), 
            *(rsi_1 + 0xb8), *(rsi_1 + 0xc0) * *(rsi_1 + 0xc4))
        int64_t* rcx_53 = data_143f0f180
        (*(*rcx_53 + 0x138))(rcx_53, &data_143f02b98, *(rsi_1 + 0xa0))
        int64_t* rcx_54 = data_143f0f180
        memcpy(
            (*(*rcx_54 + 0x130))(rcx_54, &data_143f02b98, *(rsi_1 + 0xe0), 0, 
                *(rsi_1 + 0x100) * *(rsi_1 + 0x104), 1), 
            *(rsi_1 + 0xf8), *(rsi_1 + 0x100) * *(rsi_1 + 0x104))
        int64_t* rcx_56 = data_143f0f180
        (*(*rcx_56 + 0x138))(rcx_56, &data_143f02b98, *(rsi_1 + 0xe0))
        int64_t rbx_4 = *(rsi_1 + 0x28)
        int32_t rax_78 = sub_1422c6cd0(rsi_1 + 8)
        int64_t* rcx_58 = data_143f0f180
        memcpy((*(*rcx_58 + 0x130))(rcx_58, &data_143f02b98, rbx_4, 0, rax_78, 1), *(rsi_1 + 0x68), 
            sub_1422c6cd0(rsi_1 + 8))
        int64_t* rcx_61 = data_143f0f180
        (*(*rcx_61 + 0x138))(rcx_61, &data_143f02b98, *(rsi_1 + 0x28))
        int64_t rbx_6 = *(rsi_1 + 0x40)
        int32_t rax_82 = sub_1422c6d00(rsi_1 + 8)
        int64_t* rcx_63 = data_143f0f180
        memcpy((*(*rcx_63 + 0x130))(rcx_63, &data_143f02b98, rbx_6, 0, rax_82, 1), *(rsi_1 + 0x70), 
            sub_1422c6d00(rsi_1 + 8))
        int64_t* rcx_66 = data_143f0f180
        (*(*rcx_66 + 0x138))(rcx_66, &data_143f02b98, *(rsi_1 + 0x40))

int64_t rcx_67 = *(arg2 + 8)

if (rcx_67 != 0)
    sub_140a74f90(rcx_67)

j_sub_140a74f90(arg2)
__security_check_cookie(rax_2 ^ &var_1e8)
