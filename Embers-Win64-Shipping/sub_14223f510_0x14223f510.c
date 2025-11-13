// 函数: sub_14223f510
// 地址: 0x14223f510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
uint64_t result = __security_cookie ^ &var_258
uint64_t result_1 = result
int64_t* r15 = *(arg1 + 0xa0)
int64_t r14
r14.b = 0
int32_t r9
int32_t rbx = r9
int32_t var_1e0 = rbx
int64_t* rdi = arg3
char var_238 = 0
int64_t* var_1c8 = r15

if (r15 != 0)
    goto label_14223f599

r15 = *(arg1 + 0xa8)
var_1c8 = r15

if (r15 != 0)
    r14.b = 1
    var_238 = 1
label_14223f599:
    int32_t r13_1 = arg2[1].d
    int32_t var_214_1 = r13_1
    int64_t rax_2 = (*(*r15 + 0x30))(r15)
    int64_t rdx = *r15
    int64_t rsi_1 = rax_2
    int64_t rax_3 = (*(rdx + 0x38))(r15, rdx)
    int64_t rdx_1 = *r15
    int64_t r12_1 = rax_3
    int32_t rax_4 = (*(rdx_1 + 0x40))(r15, rdx_1)
    float zmm9[0x4] = 0x3f800000
    int32_t var_220_1 = 0x3f800000
    int32_t var_21c_1 = 0x3f800000
    int32_t var_224_1 = 0xbf800000
    
    if (r14.b == 0)
        var_224_1 = 0x3f800000
    
    result = 0x3f800000
    int32_t rcx_3 = 0
    int32_t var_210_1 = 0
    uint64_t var_208_1 = var_224_1.q
    
    if (rax_4 != 0)
        uint128_t zmm6
        uint128_t var_48_1 = zmm6
        float zmm7[0x4]
        float var_58_1[0x4] = zmm7
        float zmm8[0x4]
        float var_68_1[0x4] = zmm8
        float zmm10[0x4] = 0x322bcc77
        float zmm11[0x4] = 0x3f000000
        uint128_t zmm12
        uint128_t var_a8_1 = zmm12
        int32_t var_1f0_1 = 0x3f800000
        float zmm13[0x4]
        float var_b8_1[0x4] = zmm13
        int32_t var_1f4_1 = var_208_1:4.d.d
        float zmm14[0x4]
        float var_c8_1[0x4] = zmm14
        int32_t var_1f8_1 = var_208_1.d.d
        float zmm15[0x4]
        float var_d8_1[0x4] = zmm15
        
        do
            int32_t var_168
            (*(*r15 + 0x48))(r15, zx.q(rcx_3), &var_168)
            zmm15 = data_143dbb200
            int16_t var_156
            char* rcx_6 = zx.q(var_156) + r12_1
            float zmm3[0x4] = data_143dbb1fc
            float zmm4_1[0x4] = data_143dbb1f8
            uint64_t rdx_4 = zx.q(*rcx_6) * 3
            uint64_t rcx_7 = zx.q(rcx_6[1]) * 3
            zmm7 = *(rsi_1 + (rcx_7 << 2) + 4)
            zmm6.d = (*(rsi_1 + (rcx_7 << 2))).d f- *(rsi_1 + (rdx_4 << 2))
            zmm7[0] = zmm7[0] f- *(rsi_1 + (rdx_4 << 2) + 4)
            zmm8 = *(rsi_1 + (rcx_7 << 2) + 8)
            zmm8[0] = zmm8[0] f- *(rsi_1 + (rdx_4 << 2) + 8)
            uint128_t zmm0
            zmm0.d = zmm6.d f* zmm6.d
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm7[0] = zmm7[0] f+ zmm0.d
            zmm7[0] = zmm7[0] + zmm8[0]
            
            if (not(zmm7[0] == zmm9[0]))
                if (zmm7[0] >= zmm10[0])
                    zmm0 = zmm7
                    zmm3 = zmm0
                    float temp0_1[0x4] = _mm_rsqrt_ss(zmm0[0], zmm3[0])
                    zmm3[0] = zmm3[0] * zmm11[0]
                    zmm0.d = temp0_1.d f* temp0_1[0]
                    zmm3[0] = zmm3[0] f* zmm0.d
                    zmm11[0] = zmm11[0] - zmm3[0]
                    zmm0.d = temp0_1.d f* zmm11[0]
                    temp0_1[0] = temp0_1[0] f+ zmm0.d
                    temp0_1[0] = temp0_1[0] * temp0_1[0]
                    zmm3[0] = zmm3[0] * temp0_1[0]
                    zmm11[0] = zmm11[0] - zmm3[0]
                    zmm3 = data_143dbb1fc
                    zmm0.d = temp0_1.d f* zmm11[0]
                    zmm4_1 = data_143dbb1f8
                    temp0_1[0] = temp0_1[0] f+ zmm0.d
                    float var_228_1 = temp0_1[0]
                    zmm6.d = zmm6.d f* temp0_1[0]
                    zmm7[0] = zmm7[0] * temp0_1[0]
                    zmm8[0] = zmm8[0] * temp0_1[0]
                else
                    zmm6 = zmm4_1
                    zmm7 = zmm3
                    zmm8 = zmm15
            
            int32_t var_164
            zmm13 = var_164
            zmm12 = var_168
            int32_t var_160
            zmm14 = var_160
            zmm13[0] = zmm13[0] * zmm13[0]
            zmm0.d = zmm12.d f* zmm12.d
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm13[0] = zmm13[0] f+ zmm0.d
            zmm13[0] = zmm13[0] + zmm14[0]
            
            if (not(zmm13[0] == zmm9[0]))
                if (zmm13[0] >= zmm10[0])
                    zmm0 = zmm13
                    zmm3 = zmm0
                    float temp0_2[0x4] = _mm_rsqrt_ss(zmm0[0], zmm3[0])
                    zmm3[0] = zmm3[0] * zmm11[0]
                    zmm0.d = temp0_2.d f* temp0_2[0]
                    zmm3[0] = zmm3[0] f* zmm0.d
                    zmm11[0] = zmm11[0] - zmm3[0]
                    zmm0.d = temp0_2.d f* zmm11[0]
                    temp0_2[0] = temp0_2[0] f+ zmm0.d
                    temp0_2[0] = temp0_2[0] * temp0_2[0]
                    zmm3[0] = zmm3[0] * temp0_2[0]
                    zmm11[0] = zmm11[0] - zmm3[0]
                    zmm0.d = temp0_2.d f* zmm11[0]
                    temp0_2[0] = temp0_2[0] f+ zmm0.d
                    float var_228_2 = temp0_2[0]
                    zmm12.d = zmm12.d f* temp0_2[0]
                    zmm13[0] = zmm13[0] * temp0_2[0]
                    zmm14[0] = zmm14[0] * temp0_2[0]
                else
                    zmm12 = zmm4_1
                    zmm13 = zmm3
                    zmm14 = zmm15
            
            zmm9 = zmm7
            zmm0.d = zmm8.d f* zmm13[0]
            zmm10 = zmm8
            zmm9[0] = zmm9[0] * zmm14[0]
            zmm11 = zmm6
            zmm10[0] = zmm10[0] f* zmm12.d
            zmm9[0] = zmm9[0] f- zmm0.d
            zmm11[0] = zmm11[0] * zmm13[0]
            zmm0.d = zmm6.d f* zmm14[0]
            zmm10[0] = zmm10[0] f- zmm0.d
            zmm0.d = zmm7.d f* zmm12.d
            zmm11[0] = zmm11[0] f- zmm0.d
            zmm10[0] = zmm10[0] * zmm10[0]
            zmm0.d = zmm9.d f* zmm9[0]
            zmm11[0] = zmm11[0] * zmm11[0]
            zmm10[0] = zmm10[0] f+ zmm0.d
            zmm10[0] = zmm10[0] + zmm11[0]
            float zmm2[0x4]
            
            if (not(zmm10[0] != 1f))
                zmm15 = 0x3f000000
            else if (zmm10[0] >= 9.99999994e-09f)
                zmm15 = 0x3f000000
                zmm4_1 = 0x3f000000
                zmm0 = zmm10
                zmm3 = zmm0
                float temp0_3[0x4] = _mm_rsqrt_ss(zmm0[0], zmm3[0])
                zmm2 = 0x3f000000
                zmm3[0] = zmm3[0] * 0.5f
                zmm0.d = temp0_3.d f* temp0_3[0]
                zmm3[0] = zmm3[0] f* zmm0.d
                zmm2[0] = 0.5f - zmm3[0]
                zmm0.d = temp0_3.d f* zmm2[0]
                temp0_3[0] = temp0_3[0] f+ zmm0.d
                temp0_3[0] = temp0_3[0] * temp0_3[0]
                zmm3[0] = zmm3[0] * temp0_3[0]
                zmm4_1[0] = 0.5f - zmm3[0]
                zmm0.d = temp0_3.d f* zmm4_1[0]
                temp0_3[0] = temp0_3[0] f+ zmm0.d
                float var_228_3 = temp0_3[0]
                zmm9[0] = zmm9[0] * temp0_3[0]
                zmm10[0] = zmm10[0] * temp0_3[0]
                zmm11[0] = zmm11[0] * temp0_3[0]
            else
                zmm9 = data_143dbb1f8
                zmm11 = zmm15
                zmm15 = 0x3f000000
                zmm10 = data_143dbb1fc
            
            int16_t var_158
            uint32_t rcx_8 = zx.d(var_158)
            int32_t r8_1 = 0
            int32_t var_218_1 = 0
            
            if (0 u< rcx_8.w)
                zmm9[0] = zmm9[0] * 254f
                char var_231_1 = 0x7f
                zmm10[0] = zmm10[0] * 254f
                char var_22d_1 = 0x7f
                zmm6.d = zmm6.d f* 254f
                zmm9[0] = zmm9[0] + zmm15[0]
                char var_229_1 = 0x7f
                zmm7[0] = zmm7[0] * 254f
                zmm10[0] = zmm10[0] + zmm15[0]
                zmm8[0] = zmm8[0] * 254f
                zmm6.d = zmm6.d f+ zmm15[0]
                zmm12.d = zmm12.d f* 254f
                zmm7[0] = zmm7[0] + zmm15[0]
                zmm13[0] = zmm13[0] * 254f
                zmm8[0] = zmm8[0] + zmm15[0]
                zmm14[0] = zmm14[0] * 254f
                zmm12.d = zmm12.d f+ zmm15[0]
                zmm11[0] = zmm11[0] * 254f
                zmm13[0] = zmm13[0] + zmm15[0]
                int32_t r9_1 = int.d(zmm9[0])
                zmm9 = data_142dd3fb0
                zmm14[0] = zmm14[0] + zmm15[0]
                int32_t r9_2 = r9_1 s>> 1
                int32_t var_1e8_1 = r9_2
                int32_t r10_2 = int.d(zmm10[0]) s>> 1
                int32_t var_1e4_1 = r10_2
                int32_t r14_1 = int.d(zmm7[0])
                int32_t rdx_6 = int.d(zmm6.d) s>> 1
                int32_t var_1ec_1 = rdx_6
                zmm7 = data_142dd3f80
                zmm11[0] = zmm11[0] + zmm15[0]
                int32_t r15_1 = int.d(zmm8[0])
                int32_t r14_2 = r14_1 s>> 1
                zmm8 = data_142dd3fd0
                zmm6 = zx.o(0)
                int32_t rdi_2 = int.d(zmm12.d) s>> 1
                int32_t r12_3 = int.d(zmm13[0]) s>> 1
                int32_t r13_3 = int.d(zmm14[0]) s>> 1
                int32_t r11_2 = int.d(zmm11[0]) s>> 1
                int32_t var_228_4 = r11_2
                int32_t r15_2 = r15_1 s>> 1
                
                do
                    float zmm1[0x4] = var_1f8_1
                    zmm2 = var_1f4_1
                    int32_t var_f4_1 = rbx
                    uint64_t rax_9 = zx.q(rcx_6[zx.q(r8_1)]) * 3
                    zmm1[0] = zmm1[0] f* *(rsi_1 + (rax_9 << 2))
                    zmm2[0] = zmm2[0] f* *(rsi_1 + (rax_9 << 2) + 4)
                    zmm0.d = var_1f0_1.d f* *(rsi_1 + (rax_9 << 2) + 8)
                    int64_t var_148_1 = (_mm_unpacklo_ps(zmm1, zmm2[0].q)).q
                    int32_t var_140_1 = zmm0.d
                    char rax_11
                    
                    if (rdx_6 s>= 0xffffff80)
                        rax_11 = 0x7f
                        
                        if (rdx_6 s< 0x7f)
                            rax_11 = rdx_6.b
                    else
                        rax_11 = -0x80
                    
                    char var_fc_1 = rax_11
                    char rax_12
                    
                    if (r14_2 s>= 0xffffff80)
                        rax_12 = 0x7f
                        
                        if (r14_2 s< 0x7f)
                            rax_12 = r14_2.b
                    else
                        rax_12 = -0x80
                    
                    char var_fb_1 = rax_12
                    char rax_13
                    
                    if (r15_2 s>= 0xffffff80)
                        rax_13 = 0x7f
                        
                        if (r15_2 s< 0x7f)
                            rax_13 = r15_2.b
                    else
                        rax_13 = -0x80
                    
                    char var_fa_1 = rax_13
                    char var_f9_1 = 0x7f
                    char rax_14
                    
                    if (rdi_2 s>= 0xffffff80)
                        rax_14 = 0x7f
                        
                        if (rdi_2 s< 0x7f)
                            rax_14 = rdi_2.b
                    else
                        rax_14 = -0x80
                    
                    char rax_15
                    
                    if (r12_3 s>= 0xffffff80)
                        rax_15 = 0x7f
                        
                        if (r12_3 s< 0x7f)
                            rax_15 = r12_3.b
                    else
                        rax_15 = -0x80
                    
                    char var_f7_1 = rax_15
                    char rax_16
                    
                    if (r13_3 s>= 0xffffff80)
                        rax_16 = 0x7f
                        
                        if (r13_3 s< 0x7f)
                            rax_16 = r13_3.b
                    else
                        rax_16 = -0x80
                    
                    char var_f6_1 = rax_16
                    char var_234_1
                    
                    if (rdi_2 s>= 0xffffff80)
                        char rcx_11 = 0x7f
                        
                        if (rdi_2 s< 0x7f)
                            rcx_11 = rdi_2.b
                        
                        var_234_1 = rcx_11
                    else
                        var_234_1 = 0x80
                    
                    if (r12_3 s>= 0xffffff80)
                        char rcx_12 = 0x7f
                        
                        if (r12_3 s< 0x7f)
                            rcx_12 = r12_3.b
                        
                        char var_233_2 = rcx_12
                    else
                        char var_233_1 = 0x80
                    
                    if (r13_3 s>= 0xffffff80)
                        char rcx_13 = 0x7f
                        
                        if (r13_3 s< 0x7f)
                            rcx_13 = r13_3.b
                        
                        char var_232_2 = rcx_13
                    else
                        char var_232_1 = 0x80
                    
                    char var_230_1
                    
                    if (r9_2 s>= 0xffffff80)
                        char rcx_14 = 0x7f
                        
                        if (r9_2 s< 0x7f)
                            rcx_14 = r9_2.b
                        
                        var_230_1 = rcx_14
                    else
                        var_230_1 = 0x80
                    
                    if (r10_2 s>= 0xffffff80)
                        char rcx_15 = 0x7f
                        
                        if (r10_2 s< 0x7f)
                            rcx_15 = r10_2.b
                        
                        char var_22f_2 = rcx_15
                    else
                        char var_22f_1 = 0x80
                    
                    if (r11_2 s>= 0xffffff80)
                        char rcx_16 = 0x7f
                        
                        if (r11_2 s< 0x7f)
                            rcx_16 = r11_2.b
                        
                        char var_22e_2 = rcx_16
                    else
                        char var_22e_1 = 0x80
                    
                    char var_22c_1
                    
                    if (rdx_6 s>= 0xffffff80)
                        char rcx_17 = 0x7f
                        
                        if (rdx_6 s< 0x7f)
                            rcx_17 = rdx_6.b
                        
                        var_22c_1 = rcx_17
                    else
                        var_22c_1 = 0x80
                    
                    if (r14_2 s>= 0xffffff80)
                        char rcx_18 = 0x7f
                        
                        if (r14_2 s< 0x7f)
                            rcx_18 = r14_2.b
                        
                        char var_22b_2 = rcx_18
                    else
                        char var_22b_1 = 0x80
                    
                    if (r15_2 s>= 0xffffff80)
                        char rcx_19 = 0x7f
                        
                        if (r15_2 s< 0x7f)
                            rcx_19 = r15_2.b
                        
                        char var_22a_2 = rcx_19
                    else
                        char var_22a_1 = 0x80
                    
                    zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_234_1.d), zmm6.q), zmm6.q)
                    int32_t var_19c_1 = 0
                    int32_t var_18c_1 = 0
                    int32_t var_17c_1 = 0
                    float temp0_8[0x4] =
                        _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm7) & zmm8) | zmm1)
                    zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_230_1.d), zmm6.q), zmm6.q)
                    float temp0_11[0x4] = _mm_mul_ps(temp0_8, zmm9)
                    float temp0_13[0x4] =
                        _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm7) & zmm8) | zmm1)
                    zmm1 = _mm_unpacklo_epi8(zx.o(var_22c_1.d), zmm6.q)
                    float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm9)
                    zmm1 = _mm_unpacklo_epi16(zmm1, zmm6.q)
                    float var_188_1 = temp0_11[0]
                    zmm0 = _mm_cmpgt_epi32(zmm1, zmm7) & zmm8
                    float var_198_1 = temp0_15[0]
                    float temp0_19[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm0 | zmm1), zmm9)
                    float var_1a8 = temp0_19[0]
                    int32_t var_1a4_1 = _mm_shuffle_ps(temp0_19, temp0_19, 0x55).d
                    int32_t var_194_1 = _mm_shuffle_ps(temp0_15, temp0_15, 0x55).d
                    int32_t var_184_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55).d
                    zmm0 = data_142d3f660
                    float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)
                    float temp0_24[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xaa)
                    float temp0_25[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xaa)
                    uint128_t var_178_1 = zmm0
                    float var_1a0_1 = temp0_23[0]
                    float var_190_1 = temp0_24[0]
                    float var_180_1 = temp0_25[0]
                    zmm0, zmm6, zmm7, zmm8, zmm9, zmm10 = sub_14062b8d0(&var_1a8)
                    
                    if (zmm0.d f>= zmm10[0])
                        zmm0 = 0x3f800000
                    else
                        zmm0 = 0xbf800000
                    
                    char rax_26 = 0x7f
                    
                    if (zmm0.d f< zmm10[0])
                        rax_26 = -0x7f
                    
                    char var_f5_1 = rax_26
                    int64_t rsi_2 = sx.q(arg2[1].d)
                    int32_t rax_27 = (rsi_2 + 1).d
                    arg2[1].d = rax_27
                    
                    if (rax_27 s> *(arg2 + 0xc))
                        sub_1407755b0(arg2)
                    
                    int64_t rax_28 = *arg2
                    r8_1 = var_218_1 + 1
                    rdx_6 = var_1ec_1
                    r9_2 = var_1e8_1
                    r10_2 = var_1e4_1
                    r11_2 = var_228_4
                    uint128_t* rcx_22 = rsi_2 * 0x58
                    rsi_1 = rax_2
                    var_218_1 = r8_1
                    *(rcx_22 + rax_28) = var_148_1.o
                    float var_138[0x4]
                    *(rcx_22 + rax_28 + 0x10) = var_138
                    uint128_t var_128
                    *(rcx_22 + rax_28 + 0x20) = var_128
                    float var_118[0x4]
                    *(rcx_22 + rax_28 + 0x30) = var_118
                    uint128_t var_108
                    *(rcx_22 + rax_28 + 0x40) = var_108
                    *(rcx_22 + rax_28 + 0x50) = rax_14.q
                    rcx_8 = zx.d(var_158)
                while (r8_1 u< rcx_8)
                
                rdi = arg3
                r13_1 = var_214_1
            
            uint32_t rax_29 = zx.d(rcx_8.w)
            
            if (rax_29 != 2)
                int32_t r15_3 = r13_1 + 1
                uint64_t i_1 = zx.q(rax_29 - 2)
                uint64_t i
                
                do
                    int64_t rsi_3 = sx.q(rdi[1].d)
                    int32_t rax_31 = (rsi_3 + 1).d
                    rdi[1].d = rax_31
                    
                    if (rax_31 s> *(rdi + 0xc))
                        sub_1405a4cf0(rdi)
                    
                    *(*rdi + (rsi_3 << 2)) = r13_1
                    int64_t rsi_4 = sx.q(rdi[1].d)
                    int32_t rcx_24 = *(rdi + 0xc)
                    int32_t rax_33 = (rsi_4 + 1).d
                    rdi[1].d = rax_33
                    int32_t r14_3
                    int64_t rsi_5
                    
                    if (var_238 == 0)
                        if (rax_33 s> rcx_24)
                            sub_1405a4cf0(rdi)
                        
                        r14_3 = r15_3 + 1
                        *(*rdi + (rsi_4 << 2)) = r14_3
                        rsi_5 = sx.q(rdi[1].d)
                        int32_t rax_38 = (rsi_5 + 1).d
                        rdi[1].d = rax_38
                        
                        if (rax_38 s> *(rdi + 0xc))
                            sub_1405a4cf0(rdi)
                        
                        *(*rdi + (rsi_5 << 2)) = r15_3
                    else
                        if (rax_33 s> rcx_24)
                            sub_1405a4cf0(rdi)
                        
                        *(*rdi + (rsi_4 << 2)) = r15_3
                        rsi_5 = sx.q(rdi[1].d)
                        int32_t rax_35 = (rsi_5 + 1).d
                        rdi[1].d = rax_35
                        
                        if (rax_35 s> *(rdi + 0xc))
                            sub_1405a4cf0(rdi)
                        
                        r14_3 = r15_3 + 1
                        *(*rdi + (rsi_5 << 2)) = r14_3
                    r15_3 = r14_3
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                rcx_8 = zx.d(var_158)
                rbx = var_1e0
            
            zmm9 = 0x3f800000
            zmm10 = 0x322bcc77
            zmm11 = 0x3f000000
            rsi_1 = rax_2
            r15 = var_1c8
            r12_1 = rax_3
            result = zx.q(rcx_8.w)
            r13_1 += result.d
            rcx_3 = var_210_1 + 1
            var_214_1 = r13_1
            var_210_1 = rcx_3
        while (rcx_3 u< rax_4)

__security_check_cookie(result_1 ^ &var_258)
return result
