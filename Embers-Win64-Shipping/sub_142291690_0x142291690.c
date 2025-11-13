// 函数: sub_142291690
// 地址: 0x142291690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
float zmm0[0x4] = zx.o(0)
uint64_t i_5 = zx.q(arg7)
uint64_t* rbx = arg9
int32_t* rdi = arg1
int32_t rax_2 = arg8[1].d
int128_t zmm8
int128_t var_58 = zmm8
int128_t zmm9
int128_t var_68 = zmm9
int128_t zmm10
int128_t var_78 = zmm10
zmm0[0] = float.s(i_5)
uint64_t result = 0
int32_t i = 0
uint64_t* var_158 = rbx
int128_t zmm11
int128_t var_88 = zmm11
int128_t zmm12
int128_t var_98 = zmm12
int128_t zmm15
int128_t var_c8 = zmm15
uint128_t zmm1
zmm1.d = 1f / zmm0[0]
zmm0 = arg6
float var_1b8 = zmm1.d
float zmm3 = zmm1.d * 6.28318548f
zmm1.d = zmm0.d f* *arg4
float var_1c4 = zmm3
int32_t var_1c0 = zmm1.d
zmm1.d = zmm0.d f* arg4[1]
zmm0[0] = zmm0[0] f* arg4[2]
int32_t var_1bc = zmm1.d
arg6 = zmm0[0]
float var_198
float var_118[0x4]
uint128_t var_108
float var_f8[0x4]

if (i_5.d != 0)
    char var_1d5_1 = 0x7f
    char var_1d1_1 = 0x7f
    char var_1cd_1 = 0x7f
    
    do
        i += 1
        zmm1.d = float.s(zx.q(i))
        zmm1.d = zmm1.d f* zmm3
        float zmm0_1[0x4]
        float zmm6_1[0x4]
        float zmm7_1[0x4]
        int32_t zmm13_1
        int32_t zmm14_1
        int64_t zmm15_1
        zmm0_1, zmm6_1, zmm7_1, zmm13_1, zmm14_1, zmm15_1 = __libm_sse2_sincosf_(zmm1)
        zmm0_1[0] = zmm0_1[0] f* arg3[2]
        zmm0_1[0] = zmm0_1[0] f* arg3[1]
        zmm0_1[0] = zmm0_1[0] f* *arg3
        float temp0_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
        temp0_1[0] = temp0_1[0] f* arg2[2]
        temp0_1[0] = temp0_1[0] f* *arg2
        temp0_1[0] = temp0_1[0] f* arg2[1]
        zmm0_1[0] = zmm0_1[0] + temp0_1[0]
        temp0_1[0] = temp0_1[0] + zmm0_1[0]
        zmm0_1[0] = zmm0_1[0] + temp0_1[0]
        zmm0_1[0] = zmm0_1[0] * zmm7_1[0]
        temp0_1[0] = temp0_1[0] * zmm7_1[0]
        zmm0_1[0] = zmm0_1[0] f+ rdi[2]
        zmm0_1[0] = zmm0_1[0] * zmm7_1[0]
        temp0_1[0] = temp0_1[0] f+ *rdi
        zmm0_1[0] = zmm0_1[0] f+ rdi[1]
        zmm0_1[0] = zmm0_1[0] f- rdi[2]
        temp0_1[0] = temp0_1[0] f- *rdi
        zmm0_1[0] = zmm0_1[0] f- rdi[1]
        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
        zmm0_1[0] = zmm0_1[0] + temp0_1[0]
        zmm0_1[0] = zmm0_1[0] + zmm0_1[0]
        float zmm3_1[0x4]
        float zmm5_1[0x4]
        
        if (not(zmm0_1[0] <= 9.99999994e-09f))
            zmm3_1 = zx.o(0)
            zmm5_1 = zx.o(0)
            zmm5_1[0] = zmm6_1[0]
            zmm3_1[0] = zmm0_1[0]
            float temp0_2[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
            temp0_2[0] = temp0_2[0] * temp0_2[0]
            zmm3_1[0] = zmm3_1[0] * temp0_2[0]
            zmm5_1[0] = zmm5_1[0] - zmm3_1[0]
            temp0_2[0] = temp0_2[0] * zmm5_1[0]
            temp0_2[0] = temp0_2[0] + temp0_2[0]
            temp0_2[0] = temp0_2[0] * temp0_2[0]
            zmm3_1[0] = zmm3_1[0] * temp0_2[0]
            zmm5_1[0] = zmm5_1[0] - zmm3_1[0]
            temp0_2[0] = temp0_2[0] * zmm5_1[0]
            temp0_2[0] = temp0_2[0] + temp0_2[0]
            float var_1c8_1 = temp0_2[0]
            temp0_1[0] = temp0_1[0] * temp0_2[0]
            zmm0_1[0] = zmm0_1[0] * temp0_2[0]
            zmm0_1[0] = zmm0_1[0] * temp0_2[0]
        
        temp0_1[0] = temp0_1[0] f- var_1c0
        zmm0_1[0] = zmm0_1[0] - arg6
        zmm0_1[0] = zmm0_1[0] f- var_1bc
        float zmm2_1[0x4] = arg4[1]
        zmm3_1 = arg4[2]
        int32_t var_12c_1 = zmm14_1
        float var_148_1 = zmm0_1[0]
        float zmm9_1[0x4] = *arg4
        int64_t var_138_1 = (_mm_unpacklo_ps(temp0_1, zmm0_1[0].q)).q
        zmm9_1 ^= 0x80000000
        float var_130_1 = var_148_1
        zmm2_1 ^= 0x80000000
        zmm0_1[0] = zmm0_1[0] * zmm9_1[0]
        int32_t var_128_1 = 0
        zmm3_1 ^= 0x80000000
        zmm0_1[0] = zmm0_1[0] * zmm2_1[0]
        temp0_1[0] = temp0_1[0] * zmm3_1[0]
        zmm0_1[0] = zmm0_1[0] * zmm3_1[0]
        zmm0_1[0] = zmm0_1[0] - zmm0_1[0]
        zmm0_1[0] = zmm0_1[0] * zmm9_1[0]
        zmm9_1[0] = zmm9_1[0] f* zmm13_1
        temp0_1[0] = temp0_1[0] - zmm0_1[0]
        temp0_1[0] = temp0_1[0] * zmm2_1[0]
        zmm9_1[0] = zmm9_1[0] + zmm9_1[0]
        zmm0_1[0] = zmm0_1[0] - temp0_1[0]
        zmm9_1[0] = zmm9_1[0] + zmm6_1[0]
        int32_t rcx_1 = int.d(zmm9_1[0]) s>> 1
        char rax_5
        
        if (rcx_1 s>= 0xffffff80)
            rax_5 = 0x7f
            
            if (rcx_1 s< 0x7f)
                rax_5 = rcx_1.b
        else
            rax_5 = -0x80
        
        zmm2_1[0] = zmm2_1[0] f* zmm13_1
        char var_ec_1 = rax_5
        zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
        zmm2_1[0] = zmm2_1[0] + zmm6_1[0]
        int32_t rax_7 = int.d(zmm2_1[0]) s>> 1
        char rcx_2
        
        if (rax_7 s>= 0xffffff80)
            rcx_2 = 0x7f
            
            if (rax_7 s< 0x7f)
                rcx_2 = rax_7.b
        else
            rcx_2 = -0x80
        
        zmm3_1[0] = zmm3_1[0] f* zmm13_1
        char var_eb_1 = rcx_2
        zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
        zmm3_1[0] = zmm3_1[0] + zmm6_1[0]
        int32_t rax_9 = int.d(zmm3_1[0]) s>> 1
        char rcx_3
        
        if (rax_9 s>= 0xffffff80)
            rcx_3 = 0x7f
            
            if (rax_9 s< 0x7f)
                rcx_3 = rax_9.b
        else
            rcx_3 = -0x80
        
        temp0_1[0] = temp0_1[0] * 254f
        char var_ea_1 = rcx_3
        char var_e9_1 = 0x7f
        temp0_1[0] = temp0_1[0] + zmm6_1[0]
        int32_t r9_1 = int.d(temp0_1[0]) s>> 1
        char rax_10
        
        if (r9_1 s>= 0xffffff80)
            rax_10 = 0x7f
            
            if (r9_1 s< 0x7f)
                rax_10 = r9_1.b
        else
            rax_10 = -0x80
        
        zmm0_1[0] = zmm0_1[0] * 254f
        zmm0_1[0] = zmm0_1[0] + zmm6_1[0]
        int32_t r8_1 = int.d(zmm0_1[0]) s>> 1
        char rax_11
        
        if (r8_1 s>= 0xffffff80)
            rax_11 = 0x7f
            
            if (r8_1 s< 0x7f)
                rax_11 = r8_1.b
        else
            rax_11 = -0x80
        
        zmm0_1[0] = zmm0_1[0] * 254f
        char var_e7_1 = rax_11
        zmm0_1[0] = zmm0_1[0] + zmm6_1[0]
        int32_t rdx_1 = int.d(zmm0_1[0]) s>> 1
        char rax_12
        
        if (rdx_1 s>= 0xffffff80)
            rax_12 = 0x7f
            
            if (rdx_1 s< 0x7f)
                rax_12 = rdx_1.b
        else
            rax_12 = -0x80
        
        char var_e6_1 = rax_12
        char var_1d8_1
        
        if (r9_1 s>= 0xffffff80)
            char rcx_4 = 0x7f
            
            if (r9_1 s< 0x7f)
                rcx_4 = r9_1.b
            
            var_1d8_1 = rcx_4
        else
            var_1d8_1 = 0x80
        
        if (r8_1 s>= 0xffffff80)
            char rcx_5 = 0x7f
            
            if (r8_1 s< 0x7f)
                rcx_5 = r8_1.b
            
            char var_1d7_2 = rcx_5
        else
            char var_1d7_1 = 0x80
        
        if (rdx_1 s>= 0xffffff80)
            char rcx_6 = 0x7f
            
            if (rdx_1 s< 0x7f)
                rcx_6 = rdx_1.b
            
            char var_1d6_2 = rcx_6
        else
            char var_1d6_1 = 0x80
        
        zmm0_1[0] = zmm0_1[0] f* zmm13_1
        zmm0_1[0] = zmm0_1[0] + zmm0_1[0]
        zmm0_1[0] = zmm0_1[0] + zmm6_1[0]
        int32_t rdx_3 = int.d(zmm0_1[0]) s>> 1
        char var_1d4_1
        
        if (rdx_3 s>= 0xffffff80)
            char rcx_7 = 0x7f
            
            if (rdx_3 s< 0x7f)
                rcx_7 = rdx_3.b
            
            var_1d4_1 = rcx_7
        else
            var_1d4_1 = 0x80
        
        temp0_1[0] = temp0_1[0] f* zmm13_1
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        temp0_1[0] = temp0_1[0] + zmm6_1[0]
        int32_t rdx_5 = int.d(temp0_1[0]) s>> 1
        
        if (rdx_5 s>= 0xffffff80)
            char rcx_8 = 0x7f
            
            if (rdx_5 s< 0x7f)
                rcx_8 = rdx_5.b
            
            char var_1d3_2 = rcx_8
        else
            char var_1d3_1 = 0x80
        
        zmm0_1[0] = zmm0_1[0] f* zmm13_1
        zmm0_1[0] = zmm0_1[0] + zmm0_1[0]
        zmm0_1[0] = zmm0_1[0] + zmm6_1[0]
        int32_t rdx_7 = int.d(zmm0_1[0]) s>> 1
        
        if (rdx_7 s>= 0xffffff80)
            char rcx_9 = 0x7f
            
            if (rdx_7 s< 0x7f)
                rcx_9 = rdx_7.b
            
            char var_1d2_2 = rcx_9
        else
            char var_1d2_1 = 0x80
        
        zmm9_1[0] = zmm9_1[0] + zmm9_1[0]
        zmm9_1[0] = zmm9_1[0] + zmm6_1[0]
        int32_t rdx_9 = int.d(zmm9_1[0]) s>> 1
        char var_1d0_1
        
        if (rdx_9 s>= 0xffffff80)
            char rcx_10 = 0x7f
            
            if (rdx_9 s< 0x7f)
                rcx_10 = rdx_9.b
            
            var_1d0_1 = rcx_10
        else
            var_1d0_1 = 0x80
        
        zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
        zmm2_1[0] = zmm2_1[0] + zmm6_1[0]
        int32_t rdx_11 = int.d(zmm2_1[0]) s>> 1
        
        if (rdx_11 s>= 0xffffff80)
            char rcx_11 = 0x7f
            
            if (rdx_11 s< 0x7f)
                rcx_11 = rdx_11.b
            
            char var_1cf_2 = rcx_11
        else
            char var_1cf_1 = 0x80
        
        zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
        zmm3_1[0] = zmm3_1[0] + zmm6_1[0]
        int32_t rdx_13 = int.d(zmm3_1[0]) s>> 1
        
        if (rdx_13 s>= 0xffffff80)
            char rcx_12 = 0x7f
            
            if (rdx_13 s< 0x7f)
                rcx_12 = rdx_13.b
            
            char var_1ce_2 = rcx_12
        else
            char var_1ce_1 = 0x80
        
        zmm2_1 = data_142dd3f80
        zmm5_1 = data_142dd3fd0
        zmm7_1 = data_142dd3fb0
        float zmm1_1[0x4] =
            _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_1d8_1.d), zmm15_1), zmm15_1)
        int32_t var_18c_1 = 0
        int32_t var_17c_1 = 0
        int32_t var_16c_1 = 0
        float temp0_7[0x4] = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1_1, zmm2_1) & zmm5_1) | zmm1_1)
        zmm1_1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_1d4_1.d), zmm15_1), zmm15_1)
        float temp0_10[0x4] = _mm_mul_ps(temp0_7, zmm7_1)
        float temp0_12[0x4] = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1_1, zmm2_1) & zmm5_1) | zmm1_1)
        zmm1_1 = _mm_unpacklo_epi8(zx.o(var_1d0_1.d), zmm15_1)
        float temp0_14[0x4] = _mm_mul_ps(temp0_12, zmm7_1)
        zmm1_1 = _mm_unpacklo_epi16(zmm1_1, zmm15_1)
        float var_178_1 = temp0_10[0]
        zmm0_1 = _mm_cmpgt_epi32(zmm1_1, zmm2_1) & zmm5_1
        float var_188_1 = temp0_14[0]
        float temp0_18[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm0_1 | zmm1_1), zmm7_1)
        var_198 = temp0_18[0]
        float var_194_1 = _mm_shuffle_ps(temp0_18, temp0_18, 0x55)[0]
        float var_184_1 = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)[0]
        float var_174_1 = _mm_shuffle_ps(temp0_10, temp0_10, 0x55)[0]
        zmm0_1 = data_142d3f660
        float temp0_22[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xaa)
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xaa)
        float var_168_1[0x4] = zmm0_1
        float var_190_1 = temp0_22[0]
        float var_180_1 = temp0_23[0]
        float var_170_1 = temp0_24[0]
        int512_t zmm7_2
        int128_t zmm14
        zmm0, zmm7_2, zmm14 = sub_14062b8d0(&var_198)
        
        if (zmm0[0] >= 0f)
            zmm0 = 0x3f800000
        else
            zmm0 = 0xbf800000
        
        int64_t rdi_1 = sx.q(arg8[1].d)
        char rax_22 = 0x7f
        
        if (zmm0[0] < 0f)
            rax_22 = -0x7f
        
        char var_e5_1 = rax_22
        int32_t rax_23 = (rdi_1 + 1).d
        arg8[1].d = rax_23
        
        if (rax_23 s> *(arg8 + 0xc))
            sub_1407755b0(arg8)
        
        int64_t rax_24 = *arg8
        zmm14.d = zmm14.d f+ var_1b8
        zmm7_2.o = arg5
        zmm3 = var_1c4
        float (* rcx_15)[0x4] = rdi_1 * 0x58
        rdi = arg1
        *(rcx_15 + rax_24) = var_138_1.o
        *(rcx_15 + rax_24 + 0x10) = var_128_1.o
        *(rcx_15 + rax_24 + 0x20) = var_118
        *(rcx_15 + rax_24 + 0x30) = var_108
        *(rcx_15 + rax_24 + 0x40) = var_f8
        *(rcx_15 + rax_24 + 0x50) = rax_10.q
    while (i u< i_5.d)
    
    rbx = var_158
    result = 0

if (i_5.d != 0)
    char var_1cd_2 = 0x7f
    char var_1d1_2 = 0x7f
    char var_1d5_2 = 0x7f
    
    do
        uint64_t rax_25 = zx.q(result.d + 1)
        int32_t result_1 = rax_25.d
        zmm1.d = float.s(rax_25)
        zmm1.d = zmm1.d f* zmm3
        float zmm0_2[0x4]
        float zmm6_2[0x4]
        float zmm7_3[0x4]
        int32_t zmm13_2
        int32_t zmm14_2
        int64_t zmm15_2
        zmm0_2, zmm6_2, zmm7_3, zmm13_2, zmm14_2, zmm15_2 = __libm_sse2_sincosf_(zmm1)
        zmm0_2[0] = zmm0_2[0] f* arg3[2]
        zmm0_2[0] = zmm0_2[0] f* arg3[1]
        zmm0_2[0] = zmm0_2[0] f* *arg3
        float temp0_25[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
        temp0_25[0] = temp0_25[0] f* arg2[2]
        temp0_25[0] = temp0_25[0] f* *arg2
        temp0_25[0] = temp0_25[0] f* arg2[1]
        zmm0_2[0] = zmm0_2[0] + temp0_25[0]
        temp0_25[0] = temp0_25[0] + zmm0_2[0]
        zmm0_2[0] = zmm0_2[0] + temp0_25[0]
        zmm0_2[0] = zmm0_2[0] * zmm7_3[0]
        temp0_25[0] = temp0_25[0] * zmm7_3[0]
        zmm0_2[0] = zmm0_2[0] f+ rdi[2]
        zmm0_2[0] = zmm0_2[0] * zmm7_3[0]
        temp0_25[0] = temp0_25[0] f+ *rdi
        zmm0_2[0] = zmm0_2[0] f+ rdi[1]
        zmm0_2[0] = zmm0_2[0] f- rdi[2]
        temp0_25[0] = temp0_25[0] f- *rdi
        zmm0_2[0] = zmm0_2[0] f- rdi[1]
        zmm0_2[0] = zmm0_2[0] * zmm0_2[0]
        temp0_25[0] = temp0_25[0] * temp0_25[0]
        zmm0_2[0] = zmm0_2[0] * zmm0_2[0]
        zmm0_2[0] = zmm0_2[0] + temp0_25[0]
        zmm0_2[0] = zmm0_2[0] + zmm0_2[0]
        float zmm3_2[0x4]
        float zmm5_2[0x4]
        
        if (not(zmm0_2[0] <= 9.99999994e-09f))
            zmm3_2 = zx.o(0)
            zmm5_2 = zx.o(0)
            zmm5_2[0] = zmm6_2[0]
            zmm3_2[0] = zmm0_2[0]
            float temp0_26[0x4] = _mm_rsqrt_ss(zmm3_2[0], zmm3_2[0])
            zmm3_2[0] = zmm3_2[0] * zmm5_2[0]
            temp0_26[0] = temp0_26[0] * temp0_26[0]
            zmm3_2[0] = zmm3_2[0] * temp0_26[0]
            zmm5_2[0] = zmm5_2[0] - zmm3_2[0]
            temp0_26[0] = temp0_26[0] * zmm5_2[0]
            temp0_26[0] = temp0_26[0] + temp0_26[0]
            temp0_26[0] = temp0_26[0] * temp0_26[0]
            zmm3_2[0] = zmm3_2[0] * temp0_26[0]
            zmm5_2[0] = zmm5_2[0] - zmm3_2[0]
            temp0_26[0] = temp0_26[0] * zmm5_2[0]
            temp0_26[0] = temp0_26[0] + temp0_26[0]
            temp0_25[0] = temp0_25[0] * temp0_26[0]
            zmm0_2[0] = zmm0_2[0] * temp0_26[0]
            zmm0_2[0] = zmm0_2[0] * temp0_26[0]
        
        temp0_25[0] = temp0_25[0] f+ var_1c0
        zmm0_2[0] = zmm0_2[0] + arg6
        float zmm2_2[0x4] = arg4[1]
        zmm3_2 = arg4[2]
        zmm0_2[0] = zmm0_2[0] f+ var_1bc
        int32_t var_12c_2 = zmm14_2
        float var_148_2 = zmm0_2[0]
        float zmm9_2[0x4] = *arg4
        int64_t var_138_2 = (_mm_unpacklo_ps(temp0_25, zmm0_2[0].q)).q
        zmm9_2 ^= 0x80000000
        float var_130_2 = var_148_2
        zmm2_2 ^= 0x80000000
        int32_t var_128_2 = 0x3f800000
        zmm3_2 ^= 0x80000000
        zmm9_2[0] = zmm9_2[0] * zmm0_2[0]
        zmm3_2[0] = zmm3_2[0] * zmm0_2[0]
        zmm2_2[0] = zmm2_2[0] * zmm0_2[0]
        zmm3_2[0] = zmm3_2[0] * temp0_25[0]
        zmm2_2[0] = zmm2_2[0] - zmm3_2[0]
        zmm9_2[0] = zmm9_2[0] * zmm0_2[0]
        zmm9_2[0] = zmm9_2[0] f* zmm13_2
        zmm3_2[0] = zmm3_2[0] - zmm9_2[0]
        zmm2_2[0] = zmm2_2[0] * temp0_25[0]
        zmm9_2[0] = zmm9_2[0] + zmm9_2[0]
        zmm9_2[0] = zmm9_2[0] - zmm2_2[0]
        zmm9_2[0] = zmm9_2[0] + zmm6_2[0]
        int32_t rcx_17 = int.d(zmm9_2[0]) s>> 1
        char rax_27
        
        if (rcx_17 s>= 0xffffff80)
            rax_27 = 0x7f
            
            if (rcx_17 s< 0x7f)
                rax_27 = rcx_17.b
        else
            rax_27 = -0x80
        
        zmm2_2[0] = zmm2_2[0] f* zmm13_2
        char var_ec_2 = rax_27
        zmm2_2[0] = zmm2_2[0] + zmm2_2[0]
        zmm2_2[0] = zmm2_2[0] + zmm6_2[0]
        int32_t rax_29 = int.d(zmm2_2[0]) s>> 1
        char rcx_18
        
        if (rax_29 s>= 0xffffff80)
            rcx_18 = 0x7f
            
            if (rax_29 s< 0x7f)
                rcx_18 = rax_29.b
        else
            rcx_18 = -0x80
        
        zmm3_2[0] = zmm3_2[0] f* zmm13_2
        char var_eb_2 = rcx_18
        zmm3_2[0] = zmm3_2[0] + zmm3_2[0]
        zmm3_2[0] = zmm3_2[0] + zmm6_2[0]
        int32_t rax_31 = int.d(zmm3_2[0]) s>> 1
        char rcx_19
        
        if (rax_31 s>= 0xffffff80)
            rcx_19 = 0x7f
            
            if (rax_31 s< 0x7f)
                rcx_19 = rax_31.b
        else
            rcx_19 = -0x80
        
        temp0_25[0] = temp0_25[0] * 254f
        char var_ea_2 = rcx_19
        char var_e9_2 = 0x7f
        temp0_25[0] = temp0_25[0] + zmm6_2[0]
        int32_t r9_3 = int.d(temp0_25[0]) s>> 1
        char rax_32
        
        if (r9_3 s>= 0xffffff80)
            rax_32 = 0x7f
            
            if (r9_3 s< 0x7f)
                rax_32 = r9_3.b
        else
            rax_32 = -0x80
        
        zmm0_2[0] = zmm0_2[0] * 254f
        zmm0_2[0] = zmm0_2[0] + zmm6_2[0]
        int32_t r8_3 = int.d(zmm0_2[0]) s>> 1
        char rax_33
        
        if (r8_3 s>= 0xffffff80)
            rax_33 = 0x7f
            
            if (r8_3 s< 0x7f)
                rax_33 = r8_3.b
        else
            rax_33 = -0x80
        
        zmm0_2[0] = zmm0_2[0] * 254f
        char var_e7_2 = rax_33
        zmm0_2[0] = zmm0_2[0] + zmm6_2[0]
        int32_t rdx_16 = int.d(zmm0_2[0]) s>> 1
        char rax_34
        
        if (rdx_16 s>= 0xffffff80)
            rax_34 = 0x7f
            
            if (rdx_16 s< 0x7f)
                rax_34 = rdx_16.b
        else
            rax_34 = -0x80
        
        char var_e6_2 = rax_34
        char var_1d0_2
        
        if (r9_3 s>= 0xffffff80)
            char rcx_20 = 0x7f
            
            if (r9_3 s< 0x7f)
                rcx_20 = r9_3.b
            
            var_1d0_2 = rcx_20
        else
            var_1d0_2 = 0x80
        
        if (r8_3 s>= 0xffffff80)
            char rcx_21 = 0x7f
            
            if (r8_3 s< 0x7f)
                rcx_21 = r8_3.b
            
            char var_1cf_4 = rcx_21
        else
            char var_1cf_3 = 0x80
        
        if (rdx_16 s>= 0xffffff80)
            char rcx_22 = 0x7f
            
            if (rdx_16 s< 0x7f)
                rcx_22 = rdx_16.b
            
            char var_1ce_4 = rcx_22
        else
            char var_1ce_3 = 0x80
        
        zmm2_2[0] = zmm2_2[0] f* zmm13_2
        zmm2_2[0] = zmm2_2[0] + zmm2_2[0]
        zmm2_2[0] = zmm2_2[0] + zmm6_2[0]
        int32_t rdx_18 = int.d(zmm2_2[0]) s>> 1
        char var_1d4_2
        
        if (rdx_18 s>= 0xffffff80)
            char rcx_23 = 0x7f
            
            if (rdx_18 s< 0x7f)
                rcx_23 = rdx_18.b
            
            var_1d4_2 = rcx_23
        else
            var_1d4_2 = 0x80
        
        zmm3_2[0] = zmm3_2[0] f* zmm13_2
        zmm3_2[0] = zmm3_2[0] + zmm3_2[0]
        zmm3_2[0] = zmm3_2[0] + zmm6_2[0]
        int32_t rdx_20 = int.d(zmm3_2[0]) s>> 1
        
        if (rdx_20 s>= 0xffffff80)
            char rcx_24 = 0x7f
            
            if (rdx_20 s< 0x7f)
                rcx_24 = rdx_20.b
            
            char var_1d3_4 = rcx_24
        else
            char var_1d3_3 = 0x80
        
        zmm9_2[0] = zmm9_2[0] f* zmm13_2
        zmm9_2[0] = zmm9_2[0] + zmm9_2[0]
        zmm9_2[0] = zmm9_2[0] + zmm6_2[0]
        int32_t rdx_22 = int.d(zmm9_2[0]) s>> 1
        
        if (rdx_22 s>= 0xffffff80)
            char rcx_25 = 0x7f
            
            if (rdx_22 s< 0x7f)
                rcx_25 = rdx_22.b
            
            char var_1d2_4 = rcx_25
        else
            char var_1d2_3 = 0x80
        
        zmm9_2[0] = zmm9_2[0] + zmm9_2[0]
        zmm9_2[0] = zmm9_2[0] + zmm6_2[0]
        int32_t rdx_24 = int.d(zmm9_2[0]) s>> 1
        char var_1d8_2
        
        if (rdx_24 s>= 0xffffff80)
            char rcx_26 = 0x7f
            
            if (rdx_24 s< 0x7f)
                rcx_26 = rdx_24.b
            
            var_1d8_2 = rcx_26
        else
            var_1d8_2 = 0x80
        
        zmm2_2[0] = zmm2_2[0] + zmm2_2[0]
        zmm2_2[0] = zmm2_2[0] + zmm6_2[0]
        int32_t rdx_26 = int.d(zmm2_2[0]) s>> 1
        
        if (rdx_26 s>= 0xffffff80)
            char rcx_27 = 0x7f
            
            if (rdx_26 s< 0x7f)
                rcx_27 = rdx_26.b
            
            char var_1d7_4 = rcx_27
        else
            char var_1d7_3 = 0x80
        
        zmm3_2[0] = zmm3_2[0] + zmm3_2[0]
        zmm3_2[0] = zmm3_2[0] + zmm6_2[0]
        int32_t rdx_28 = int.d(zmm3_2[0]) s>> 1
        
        if (rdx_28 s>= 0xffffff80)
            char rcx_28 = 0x7f
            
            if (rdx_28 s< 0x7f)
                rcx_28 = rdx_28.b
            
            char var_1d6_4 = rcx_28
        else
            char var_1d6_3 = 0x80
        
        zmm2_2 = data_142dd3f80
        zmm5_2 = data_142dd3fd0
        zmm7_3 = data_142dd3fb0
        float zmm1_2[0x4] =
            _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_1d0_2.d), zmm15_2), zmm15_2)
        int32_t var_18c_2 = 0
        int32_t var_17c_2 = 0
        int32_t var_16c_2 = 0
        float temp0_31[0x4] = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1_2, zmm2_2) & zmm5_2) | zmm1_2)
        zmm1_2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_1d4_2.d), zmm15_2), zmm15_2)
        float temp0_34[0x4] = _mm_mul_ps(temp0_31, zmm7_3)
        float temp0_36[0x4] = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1_2, zmm2_2) & zmm5_2) | zmm1_2)
        zmm1_2 = _mm_unpacklo_epi8(zx.o(var_1d8_2.d), zmm15_2)
        float temp0_38[0x4] = _mm_mul_ps(temp0_36, zmm7_3)
        zmm1_2 = _mm_unpacklo_epi16(zmm1_2, zmm15_2)
        float var_178_2 = temp0_34[0]
        zmm0_2 = _mm_cmpgt_epi32(zmm1_2, zmm2_2) & zmm5_2
        float var_188_2 = temp0_38[0]
        float temp0_42[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm0_2 | zmm1_2), zmm7_3)
        var_198 = temp0_42[0]
        float var_194_2 = _mm_shuffle_ps(temp0_42, temp0_42, 0x55)[0]
        float var_184_2 = _mm_shuffle_ps(temp0_38, temp0_38, 0x55)[0]
        float var_174_2 = _mm_shuffle_ps(temp0_34, temp0_34, 0x55)[0]
        zmm0_2 = data_142d3f660
        float temp0_46[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)
        float temp0_47[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xaa)
        float temp0_48[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xaa)
        float var_168_2[0x4] = zmm0_2
        float var_190_2 = temp0_46[0]
        float var_180_2 = temp0_47[0]
        float var_170_2 = temp0_48[0]
        int512_t zmm7_4
        float zmm14_3
        zmm0, zmm7_4, zmm14_3 = sub_14062b8d0(&var_198)
        
        if (zmm0[0] >= 0f)
            zmm0 = 0x3f800000
        else
            zmm0 = 0xbf800000
        
        int64_t rdi_2 = sx.q(arg8[1].d)
        char rax_44 = 0x7f
        
        if (zmm0[0] < 0f)
            rax_44 = -0x7f
        
        char var_e5_2 = rax_44
        int32_t rax_45 = (rdi_2 + 1).d
        arg8[1].d = rax_45
        
        if (rax_45 s> *(arg8 + 0xc))
            sub_1407755b0(arg8)
        
        int64_t rax_46 = *arg8
        zmm7_4.o = arg5
        zmm3 = var_1c4
        float (* rcx_31)[0x4] = rdi_2 * 0x58
        rdi = arg1
        *(rcx_31 + rax_46) = var_138_2.o
        *(rcx_31 + rax_46 + 0x10) = var_128_2.o
        *(rcx_31 + rax_46 + 0x20) = var_118
        *(rcx_31 + rax_46 + 0x30) = var_108
        *(rcx_31 + rax_46 + 0x40) = var_f8
        *(rcx_31 + rax_46 + 0x50) = rax_32.q
        result = zx.q(result_1)
    while (result.d u< i_5.d)
    
    rbx = var_158

int32_t r13_1 = 1
int32_t r8_4 = rax_2

if (i_5.d u> 1)
    int32_t rdi_3 = r8_4 + 1
    int32_t r13_2 = 1 - r8_4
    uint64_t i_3 = zx.q((i_5 - 1).d)
    uint64_t i_1
    
    do
        int64_t r14 = sx.q(rbx[1].d)
        int32_t rax_48 = (r14 + 1).d
        rbx[1].d = rax_48
        int32_t rsi_1 = r8_4 + modu.dp.d(0:(rdi_3 + r13_2), i_5.d)
        
        if (rax_48 s> *(rbx + 0xc))
            sub_1405a4cf0(rbx)
            r8_4 = rax_2
        
        *(*rbx + (r14 << 2)) = r8_4
        int64_t r14_1 = sx.q(rbx[1].d)
        int32_t rax_50 = (r14_1 + 1).d
        rbx[1].d = rax_50
        
        if (rax_50 s> *(rbx + 0xc))
            sub_1405a4cf0(rbx)
        
        *(*rbx + (r14_1 << 2)) = rdi_3
        int64_t r14_2 = sx.q(rbx[1].d)
        int32_t rax_52 = (r14_2 + 1).d
        rbx[1].d = rax_52
        
        if (rax_52 s> *(rbx + 0xc))
            sub_1405a4cf0(rbx)
        
        *(*rbx + (r14_2 << 2)) = rsi_1
        int64_t rsi_2 = sx.q(rbx[1].d)
        int32_t rax_54 = (rsi_2 + 1).d
        rbx[1].d = rax_54
        
        if (rax_54 s> *(rbx + 0xc))
            sub_1405a4cf0(rbx)
        
        *(*rbx + (rsi_2 << 2)) = rsi_1 + i_5.d
        int64_t rsi_3 = sx.q(rbx[1].d)
        int32_t rax_56 = (rsi_3 + 1).d
        rbx[1].d = rax_56
        
        if (rax_56 s> *(rbx + 0xc))
            sub_1405a4cf0(rbx)
        
        *(*rbx + (rsi_3 << 2)) = rdi_3 + i_5.d
        int64_t rsi_4 = sx.q(rbx[1].d)
        int32_t rax_58 = (rsi_4 + 1).d
        rbx[1].d = rax_58
        
        if (rax_58 s> *(rbx + 0xc))
            sub_1405a4cf0(rbx)
        
        r8_4 = rax_2
        rdi_3 += 1
        result = *rbx
        *(result + (rsi_4 << 2)) = r8_4 + i_5.d
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    r13_1 = (i_3 + 1).d

if (i_5.d != 0)
    int32_t rdi_4 = r8_4 + i_5.d
    int32_t r13_4 = r13_1 - r8_4 - i_5.d
    uint64_t i_4 = i_5
    uint64_t i_2
    
    do
        int64_t r14_4 = sx.q(rbx[1].d)
        int32_t rax_60 = (r14_4 + 1).d
        rbx[1].d = rax_60
        int32_t rsi_5 = r8_4 + modu.dp.d(0:(rdi_4 + r13_4), i_5.d)
        
        if (rax_60 s> *(rbx + 0xc))
            sub_1405a4cf0(rbx)
        
        *(*rbx + (r14_4 << 2)) = rdi_4 - i_5.d
        int64_t r14_5 = sx.q(rbx[1].d)
        int32_t rax_62 = (r14_5 + 1).d
        rbx[1].d = rax_62
        
        if (rax_62 s> *(rbx + 0xc))
            sub_1405a4cf0(rbx)
        
        *(*rbx + (r14_5 << 2)) = rdi_4
        int64_t r14_6 = sx.q(rbx[1].d)
        int32_t rax_64 = (r14_6 + 1).d
        rbx[1].d = rax_64
        
        if (rax_64 s> *(rbx + 0xc))
            sub_1405a4cf0(rbx)
        
        *(*rbx + (r14_6 << 2)) = rsi_5
        int64_t r14_7 = sx.q(rbx[1].d)
        int32_t rax_66 = (r14_7 + 1).d
        rbx[1].d = rax_66
        
        if (rax_66 s> *(rbx + 0xc))
            sub_1405a4cf0(rbx)
        
        *(*rbx + (r14_7 << 2)) = rdi_4
        int64_t r14_8 = sx.q(rbx[1].d)
        int32_t rax_68 = (r14_8 + 1).d
        rbx[1].d = rax_68
        
        if (rax_68 s> *(rbx + 0xc))
            sub_1405a4cf0(rbx)
        
        *(*rbx + (r14_8 << 2)) = rsi_5 + i_5.d
        int64_t r14_9 = sx.q(rbx[1].d)
        int32_t rax_70 = (r14_9 + 1).d
        rbx[1].d = rax_70
        
        if (rax_70 s> *(rbx + 0xc))
            sub_1405a4cf0(rbx)
        
        result = *rbx
        rdi_4 += 1
        r8_4 = rax_2
        *(result + (r14_9 << 2)) = rsi_5
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
