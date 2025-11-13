// 函数: sub_141628040
// 地址: 0x141628040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
float zmm2[0x4] = *arg3
float zmm14[0x4] = 0x80000000
float zmm3[0x4] = zmm2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_2[0] = (temp0 ^ 0x80000000)[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
float zmm9[0x4] = zx.o(0)
temp0_4[0] = (temp0_1 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_188[0x4] = temp0_6
float var_1c8[0x4] = temp0_6
float (* var_1d0)[0x4] = &var_1c8
zmm3 = *arg9 ^ 0x80000000
float zmm4[0x4] = (*arg9)[1] ^ 0x80000000
float zmm5[0x4] = (*arg9)[2] ^ 0x80000000
int32_t* var_220 = arg1
zmm5[0] = zmm5[0] * zmm5[0]
void* var_1e0 = arg2
zmm3[0] = zmm3[0] * zmm3[0]
zmm4[0] = zmm4[0] * zmm4[0]
zmm4[0] = zmm4[0] + zmm3[0]
zmm4[0] = zmm4[0] + zmm5[0]
bool cond:0_1

if (not(zmm4[0] < 9.99999975e-05f))
    zmm7 = 0x3f800000
    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm4[0])
    cond:0_1 = temp0_7[0] != 0f
    zmm7[0] = 1f / temp0_7[0]
    zmm10 = zmm7
    zmm11 = zmm7
    zmm10[0] = zmm10[0] * zmm3[0]
    zmm11[0] = zmm11[0] * zmm4[0]
    zmm7[0] = zmm7[0] * zmm5[0]

if (zmm4[0] < 9.99999975e-05f || not(cond:0_1))
    zmm10 = 0xbf800000
    zmm11 = zx.o(0)
    zmm7 = zx.o(0)

float zmm13[0x4] = arg10
int64_t r13 = 0
float zmm0[0x4] = data_142d3f7e0
int32_t rdx_1 = 0
zmm13[0] = zmm13[0] f+ *(arg2 + 0x1c)
float zmm12[0x4] = arg8
int32_t i_6 = 0
float zmm15[0x4] = 0x7f7fffff
uint128_t zmm8
zmm8.d = zmm13.d f+ zmm12[0]
var_188 = zmm0
float var_270 = 3.40282347e+38f
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
zmm0 = _mm_cvtps_pd(zmm8.q)
int32_t var_238 = zmm8.d
zmm0[0].q = zmm0[0].q f+ 0.001
zmm8 = 0x358637bd
float zmm6[0x4]
float var_48[0x4] = zmm6
float var_294 = _mm_cvtpd_ps(zmm0)[0]

while (true)
    int32_t rdx_2 = rdx_1 + 1
    
    if (rdx_1 s>= 0x20)
        goto label_141628793
    
    zmm4 = zmm11 ^ zmm14
    zmm3 = zmm10 ^ zmm14
    zmm4[0] = zmm4[0] f* arg1[1]
    zmm3[0] = zmm3[0] f* *arg1
    zmm4[0] = zmm4[0] f* arg1[4]
    zmm2 = zmm7 ^ zmm14
    zmm4[0] = zmm4[0] f* arg1[7]
    zmm2[0] = zmm2[0] f* arg1[2]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm3[0] = zmm3[0] f* arg1[6]
    zmm3[0] = zmm3[0] f* arg1[3]
    zmm4[0] = zmm4[0] + zmm2[0]
    zmm2[0] = zmm2[0] f* arg1[5]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm2[0] = zmm2[0] f* arg1[8]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm4[0] = zmm4[0] + zmm2[0]
    zmm4[0] = zmm4[0] + zmm2[0]
    int32_t r9_1
    
    if (not(zmm4[0] < zmm4[0]) && not(zmm4[0] < zmm4[0]))
        zmm8 = zx.o(*arg1)
        r9_1 = arg1[2]
    else if (zmm4[0] < zmm4[0] || zmm4[0] < zmm4[0])
        zmm8 = zx.o(*(arg1 + 0x18))
        r9_1 = arg1[8]
    else
        zmm8 = zx.o(*(arg1 + 0xc))
        r9_1 = arg1[5]
    
    void* rax_6 = var_1e0
    int64_t var_280 = zmm8.q
    int32_t var_278 = r9_1
    zmm4 = zx.o(*(rax_6 + 0x10))
    int32_t rax_7 = *(rax_6 + 0x18)
    float temp0_11[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm9[0].q)
    float temp0_12[0x4] = _mm_unpacklo_ps(zmm4, rax_7[0].q)
    zmm5 = *arg3
    float temp0_13[0x4] = _mm_unpacklo_ps(temp0_12, temp0_11[0].q)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_15[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_15)
    float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), temp0_14)
    float temp0_20[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_21[0x4] = _mm_sub_ps(temp0_19, temp0_17)
    float temp0_22[0x4] = _mm_add_ps(temp0_21, temp0_21)
    float temp0_23[0x4] = _mm_mul_ps(temp0_20, temp0_22)
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc9)
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xd2)
    zmm2 = var_280.d
    float temp0_26[0x4] = _mm_mul_ps(temp0_24, temp0_15)
    float temp0_27[0x4] = _mm_add_ps(temp0_23, temp0_13)
    float temp0_31[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_25, temp0_14), temp0_26), temp0_27), arg3[1])
    zmm2[0] = zmm2[0] - temp0_31[0]
    float var_230 = temp0_31[0]
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xaa)
    zmm3 = var_280:4.d
    zmm3[0] = zmm3[0] - temp0_32[0]
    float var_22c = temp0_32[0]
    zmm0 = var_278
    zmm0[0] = zmm0[0] - temp0_33[0]
    float var_258 = zmm2[0]
    zmm2[0] = zmm2[0] * zmm10[0]
    float var_254_1 = zmm3[0]
    zmm3[0] = zmm3[0] * zmm11[0]
    float var_250 = zmm0[0]
    zmm0[0] = zmm0[0] * zmm7[0]
    zmm3[0] = zmm3[0] + zmm2[0]
    float var_228 = temp0_33[0]
    zmm3[0] = zmm3[0] + zmm0[0]
    int128_t* result
    
    if (zmm3[0] > var_294)
        result.b = 0
        __security_check_cookie(rax_1 ^ &var_2e8)
        return result
    
    zmm0 = zx.o(var_230.q)
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    int64_t r8 = sx.q(var_1a8.d)
    int64_t rdx_3 = r8 * 3
    int64_t var_148
    *(&var_148 + (rdx_3 << 2)) = zmm0.q
    zmm0 = zx.o(var_258.q)
    int32_t var_140
    (&var_140)[rdx_3] = var_228
    int32_t i_7 = r8.d + 1
    var_1a8.d = r8.d + 1
    int64_t var_118
    *(&var_118 + (rdx_3 << 2)) = zmm0.q
    int64_t var_178
    *(&var_178 + (rdx_3 << 2)) = zmm8.q
    int32_t var_110
    (&var_110)[rdx_3] = var_250
    int32_t var_170
    (&var_170)[rdx_3] = r9_1
    int32_t var_288_1
    uint64_t var_268
    uint64_t var_248
    
    if (r8.d == 0)
        int64_t rax_15 = sx.q(var_1a8:4.d)
        int64_t rdx_7 = rax_15 * 3
        var_188[rax_15] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rdx_7 << 2)))
        var_288_1 = (&var_110)[rdx_7]
    else
        uint64_t* rax_12
        
        if (r8.d == 1)
            rax_12, zmm9 = sub_1416e69d0(&var_268, &var_118, &var_1a8:4, &var_1a8, &var_188)
        label_1416284bd:
            zmm0 = zx.o(*rax_12)
            arg1 = var_220
            var_288_1 = rax_12[1].d
            i_7 = var_1a8.d
        else
            if (r8.d == 2)
                rax_12, zmm9, zmm12, zmm13, zmm14, zmm15 =
                    sub_1416fa750(&var_248, &var_118, &var_1a8, &var_188)
                goto label_1416284bd
            
            if (r8.d == 3)
                uint64_t var_1b8[0x2]
                rax_12, zmm9, zmm12, zmm13, zmm14, zmm15 =
                    sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
                goto label_1416284bd
            
            int32_t var_298_1 = 0
            zmm0 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
            var_288_1 = 0
    
    int32_t var_198
    int64_t r9_5 = sx.q(var_198)
    int64_t rdi_1 = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t rbx = sx.q(var_1a0.d)
    int64_t r11_1 = sx.q(var_1a0:4.d)
    zmm5 = var_288_1
    int64_t rsi_1 = r9_5 * 3
    int32_t rax_16 = (&var_110)[rsi_1]
    int64_t r12_1 = rdi_1 * 3
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int32_t r8_8 = (&var_110)[r15_1]
    int32_t rdx_8 = (&var_110)[r14_1]
    int32_t r10_1 = (&var_110)[r12_1]
    zmm8 = 0x358637bd
    int64_t var_290_1 = zmm0.q
    zmm4 = var_290_1.d
    int64_t var_10c_1 = *(&var_118 + (r15_1 << 2))
    zmm2 = var_188[r11_1]
    int64_t var_f4_1 = *(&var_118 + (rsi_1 << 2))
    zmm0 = var_188[rdi_1]
    int64_t var_100_1 = *(&var_118 + (r14_1 << 2))
    float zmm1[0x4] = var_188[rbx]
    var_118 = *(&var_118 + (r12_1 << 2))
    zmm3 = var_188[r9_5]
    int32_t r9_6 = (&var_170)[r12_1]
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r15_1 << 2)))
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = r8_8
    int32_t r8_9 = (&var_170)[r15_1]
    int32_t var_f8_1 = rdx_8
    int32_t rdx_9 = (&var_170)[r14_1]
    int32_t var_ec_1 = rax_16
    int32_t rax_17 = (&var_170)[rsi_1]
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r15_1 << 2)))
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rsi_1 << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (r14_1 << 2)))
    var_178 = *(&var_178 + (r12_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r12_1 << 2)))
    var_170 = r9_6
    int32_t r9_7 = (&var_140)[r12_1]
    int32_t var_164_1 = r8_9
    int32_t r8_10 = (&var_140)[r15_1]
    int32_t var_158_1 = rdx_9
    int32_t rdx_10 = (&var_140)[r14_1]
    int32_t var_14c_1 = rax_17
    int32_t rax_18 = (&var_140)[rsi_1]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r10_1
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_290_1:4.d
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r9_7
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = r8_10
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_128_1 = rdx_10
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_11c_1 = rax_18
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < 9.99999997e-07f || zmm3[0] >= zmm15[0])
        i_6 = i_7
        zmm15 = zmm3
        var_270 = zmm3[0]
    label_141628793:
        
        if (arg11 != 0)
            *arg11 = rdx_2
        
        if (not(zmm15[0] f<= zmm8.d))
            float var_2a4_2 = zmm9[0]
            zmm15 = zmm9
            float var_2a8_1 = zmm9[0]
            zmm11 = zmm9
            zmm14 = zmm9
            zmm10 = zmm9
            
            if (i_6 s> 0)
                float (* rax_19)[0x4] = &var_188
                uint64_t i_3 = zx.q(i_6)
                uint64_t i
                
                do
                    zmm2 = *rax_19
                    rax_19 = &(*rax_19)[1]
                    zmm2[0] = zmm2[0] f* *(&var_178 + r13)
                    zmm2[0] = zmm2[0] f* *(&var_178:4 + r13)
                    zmm15[0] = zmm15[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_170 + r13)
                    zmm9[0] = zmm9[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_148 + r13)
                    zmm9[0] = zmm9[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_148:4 + r13)
                    zmm2[0] = zmm2[0] f* *(&var_140 + r13)
                    zmm11[0] = zmm11[0] + zmm2[0]
                    r13 += 0xc
                    zmm14[0] = zmm14[0] + zmm2[0]
                    zmm10[0] = zmm10[0] + zmm2[0]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                var_2a8_1 = zmm9[0]
                var_2a4_2 = zmm9[0]
            
            zmm5 = 0x3f000000
            zmm11[0] = zmm11[0] - zmm15[0]
            zmm14[0] = zmm14[0] - zmm9[0]
            zmm3 = zx.o(0)
            zmm8.d = zmm10.d f- zmm9[0]
            zmm11[0] = zmm11[0] * zmm11[0]
            zmm1 = zmm8
            zmm1[0] = zmm1[0] f* zmm8.d
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm14[0] = zmm14[0] + zmm11[0]
            zmm14[0] = zmm14[0] + zmm1[0]
            zmm3[0] = zmm14[0]
            zmm2 = 0x3f000000
            float temp0_36[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            temp0_36[0] = temp0_36[0] * temp0_36[0]
            zmm3[0] = zmm3[0] * temp0_36[0]
            zmm2[0] = 0.5f - zmm3[0]
            temp0_36[0] = temp0_36[0] * zmm2[0]
            temp0_36[0] = temp0_36[0] + temp0_36[0]
            temp0_36[0] = temp0_36[0] * temp0_36[0]
            zmm3[0] = zmm3[0] * temp0_36[0]
            zmm5[0] = 0.5f - zmm3[0]
            temp0_36[0] = temp0_36[0] * zmm5[0]
            temp0_36[0] = temp0_36[0] + temp0_36[0]
            temp0_36[0] = temp0_36[0] * zmm14[0]
            temp0_36[0] = temp0_36[0] * zmm11[0]
            temp0_36[0] = temp0_36[0] f* zmm8.d
            float temp0_37[0x4] = _mm_unpacklo_ps(temp0_36, temp0_36[0].q)
            zmm1 = var_238
            *arg7 = temp0_37.q
            float temp0_38[0x4] = __sqrtss_xmmss_memss(temp0_37[0], var_270)
            float var_298_2 = temp0_36[0]
            zmm1[0] = zmm1[0] - temp0_38[0]
            arg7[1].d = var_298_2
            
            if (not(zmm1[0] < zmm9[0]))
                zmm9 = __minss_xmmss_memss(zmm1[0], 0x7f7fffff)
            
            *arg4 = zmm9[0]
            zmm12[0] = zmm12[0] f* *arg7
            zmm12[0] = zmm12[0] f* *(arg7 + 4)
            zmm12[0] = zmm12[0] f* arg7[1].d
            zmm12[0] = zmm12[0] + zmm15[0]
            zmm12[0] = zmm12[0] + var_2a4_2
            zmm12[0] = zmm12[0] + var_2a8_1
            *arg5 = (_mm_unpacklo_ps(zmm12, zmm12[0].q)).q
            arg5[1].d = zmm12[0]
            zmm13[0] = zmm13[0] f* *arg7
            zmm13[0] = zmm13[0] f* *(arg7 + 4)
            zmm13[0] = zmm13[0] f* arg7[1].d
            zmm11[0] = zmm11[0] - zmm13[0]
            zmm14[0] = zmm14[0] - zmm13[0]
            zmm10[0] = zmm10[0] - zmm13[0]
            *arg6 = (_mm_unpacklo_ps(zmm11, zmm14[0].q)).q
            arg6[1].d = zmm10[0]
            result.b = 1
            __security_check_cookie(rax_1 ^ &var_2e8)
            return result
        
        var_248 = 0
        int64_t var_240_1 = 0
        var_268 = 0
        int64_t var_260_1 = 0
        sub_14083ad30(&var_248, 8)
        
        if (var_260_1:4.d s< 8)
            sub_14083ad30(&var_268, 8)
        
        if (i_6 s> 0)
            int64_t rdi_2 = 0
            uint64_t i_5 = zx.q(i_6)
            uint64_t i_1
            
            do
                int64_t rsi_2 = sx.q(var_240_1.d)
                int32_t rax_22 = (rsi_2 + 1).d
                var_240_1.d = rax_22
                
                if (rax_22 s> var_240_1:4.d)
                    sub_14083a7e0(&var_248)
                
                uint64_t rcx_7 = var_248
                int64_t rdx_12 = rsi_2 * 3
                int32_t rax_23 = *(&var_170 + rdi_2)
                *(rcx_7 + (rdx_12 << 2)) = *(&var_178 + rdi_2)
                *(rcx_7 + (rdx_12 << 2) + 8) = rax_23
                int64_t rsi_3 = sx.q(var_260_1.d)
                int32_t rax_24 = (rsi_3 + 1).d
                var_260_1.d = rax_24
                
                if (rax_24 s> var_260_1:4.d)
                    sub_14083a7e0(&var_268)
                
                uint64_t rcx_9 = var_268
                int64_t rdx_14 = rsi_3 * 3
                int64_t zmm0_1 = *(&var_148 + rdi_2)
                int32_t rax_25 = *(&var_140 + rdi_2)
                rdi_2 += 0xc
                *(rcx_9 + (rdx_14 << 2)) = zmm0_1
                *(rcx_9 + (rdx_14 << 2) + 8) = rax_25
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        int32_t rax_26
        float zmm8_1
        uint128_t zmm9_1
        uint128_t zmm12_1
        uint128_t zmm13_1
        rax_26, zmm8_1, zmm9_1, zmm12_1, zmm13_1 = sub_141562950(&var_248, &var_268, &var_220, 
            &var_1e0, &var_294, &var_258, &var_230, &var_280)
        uint128_t zmm0_2
        uint128_t zmm1_1
        uint128_t zmm2_1
        uint128_t zmm3_1
        
        if (rax_26 == 2)
            float zmm5_1 = zmm9_1.d
            zmm6 = zmm9_1
            zmm7 = zmm9_1
            zmm3_1 = zmm9_1
            int64_t zmm4_1 = zmm9_1.q
            
            if (i_6 s> 0)
                float (* rax_29)[0x4] = &var_188
                uint64_t i_4 = zx.q(i_6)
                uint64_t i_2
                
                do
                    zmm2_1 = *rax_29
                    rax_29 = &(*rax_29)[1]
                    zmm0_2.d = zmm2_1.d f* *(&var_178 + r13)
                    zmm1_1.d = zmm2_1.d f* *(&var_178:4 + r13)
                    zmm5_1 = zmm5_1 f+ zmm0_2.d
                    zmm0_2.d = zmm2_1.d f* *(&var_170 + r13)
                    zmm6[0] = zmm6[0] f+ zmm1_1.d
                    zmm1_1.d = zmm2_1.d f* *(&var_148 + r13)
                    zmm7[0] = zmm7[0] f+ zmm0_2.d
                    zmm0_2.d = zmm2_1.d f* *(&var_148:4 + r13)
                    zmm2_1.d = zmm2_1.d f* *(&var_140 + r13)
                    zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                    r13 += 0xc
                    zmm4_1.d = zmm4_1.d f+ zmm0_2.d
                    zmm9_1.d = zmm9_1.d f+ zmm2_1.d
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
            
            int32_t* r14_4 = arg7
            zmm0_2 = zx.o(var_258.q)
            *arg4 = var_238.d
            *r14_4 = zmm0_2.q
            r14_4[2] = var_250
            zmm0_2.d = zmm12_1.d f* *r14_4
            zmm1_1.d = zmm12_1.d f* r14_4[1]
            zmm12_1.d = zmm12_1.d f* r14_4[2]
            zmm0_2.d = zmm0_2.d f+ zmm5_1
            zmm1_1.d = zmm1_1.d f+ zmm6[0]
            zmm12_1.d = zmm12_1.d f+ zmm7[0]
            *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
            arg5[1].d = zmm12_1.d
            zmm0_2.d = zmm13_1.d f* *r14_4
            zmm1_1.d = zmm13_1.d f* r14_4[1]
            zmm13_1.d = zmm13_1.d f* r14_4[2]
            zmm3_1.d = zmm3_1.d f- zmm0_2.d
            zmm4_1.d = zmm4_1.d f- zmm1_1.d
            zmm9_1.d = zmm9_1.d f- zmm13_1.d
            *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm4_1)).q
            arg6[1].d = zmm9_1.d
            float temp3_1 = *arg4
            zmm8_1 - temp3_1
            uint64_t rcx_15 = var_268
            i_6.b = zmm8_1 < temp3_1
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            uint64_t rcx_16 = var_248
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            result = zx.q(i_6.b)
        else
            zmm3_1 = var_280.d
            zmm2_1 = var_280:4.d
            *arg7 = var_258.q
            arg7[1].d = var_250
            zmm0_2.d = var_294.d f+ zmm12_1.d
            zmm0_2.d = zmm0_2.d f+ zmm13_1.d
            *arg4 = zmm0_2.d
            zmm0_2.d = zmm12_1.d f* *arg7
            uint64_t rcx_12 = var_268
            zmm1_1.d = zmm12_1.d f* *(arg7 + 4)
            zmm12_1.d = zmm12_1.d f* arg7[1].d
            zmm0_2.d = zmm0_2.d f+ var_230
            zmm1_1.d = zmm1_1.d f+ var_22c
            zmm12_1.d = zmm12_1.d f+ var_228
            *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
            arg5[1].d = zmm12_1.d
            zmm0_2.d = zmm13_1.d f* *arg7
            zmm1_1.d = zmm13_1.d f* *(arg7 + 4)
            zmm13_1.d = zmm13_1.d f* arg7[1].d
            zmm3_1.d = zmm3_1.d f- zmm0_2.d
            zmm2_1.d = zmm2_1.d f- zmm1_1.d
            zmm0_2.d = var_278.d f- zmm13_1.d
            *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
            arg6[1].d = zmm0_2.d
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            uint64_t rcx_13 = var_248
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            result.b = 1
        __security_check_cookie(rax_1 ^ &var_2e8)
        return result
    
    zmm7 = 0x3f800000
    i_6 = i_7
    zmm15 = zmm3
    rdx_1 = rdx_2
    float temp0_35[0x4] = _mm_sqrt_ss(0, zmm3[0])
    var_270 = zmm3[0]
    zmm7[0] = 1f / temp0_35[0]
    zmm10 = zmm7
    zmm11 = zmm7
    zmm10[0] = zmm10[0] * zmm4[0]
    zmm11[0] = zmm11[0] * zmm3[0]
    zmm7[0] = zmm7[0] * zmm5[0]
