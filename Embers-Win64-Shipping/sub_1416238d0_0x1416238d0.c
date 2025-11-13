// 函数: sub_1416238d0
// 地址: 0x1416238d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7
uint128_t var_58 = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm9[0x4]
float var_78[0x4] = zmm9
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm12[0x4]
float var_a8[0x4] = zmm12
float zmm14[0x4]
float var_c8[0x4] = zmm14
float zmm15[0x4]
float var_d8[0x4] = zmm15
void var_308
int64_t rax_1 = __security_cookie ^ &var_308
float zmm2[0x4] = *arg3
int64_t r13 = 0
float zmm5[0x4] = 0x80000000
float zmm3[0x4] = zmm2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
temp0[0] = (temp0_1 ^ 0x80000000)[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_4[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
int32_t r10 = 0
temp0_5[0] = temp0_3[0]
float zmm11[0x4] = zx.o(0)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_188[0x4] = temp0_6
float var_1c8[0x4] = temp0_6
void* var_210 = arg2
float (* rdx)[0x4] = &var_1c8
int32_t var_2c4 = 0
zmm3 = *arg9 ^ 0x80000000
float zmm4[0x4] = (*arg9)[1] ^ 0x80000000
float zmm6[0x4] = (*arg9)[2] ^ 0x80000000
int32_t* var_238 = arg1
zmm3[0] = zmm3[0] * zmm3[0]
float (* var_200)[0x4] = &var_1c8
zmm4[0] = zmm4[0] * zmm4[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm4[0] = zmm4[0] + zmm3[0]
zmm4[0] = zmm4[0] + zmm6[0]
bool cond:0_1

if (not(zmm4[0] < 9.99999975e-05f))
    zmm12 = 0x3f800000
    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm4[0])
    cond:0_1 = temp0_7[0] != 0f
    zmm12[0] = 1f / temp0_7[0]
    zmm14 = zmm12
    zmm15 = zmm12
    zmm14[0] = zmm14[0] * zmm3[0]
    zmm15[0] = zmm15[0] * zmm4[0]
    zmm12[0] = zmm12[0] * zmm6[0]

if (zmm4[0] < 9.99999975e-05f || not(cond:0_1))
    zmm14 = 0xbf800000
    zmm15 = zx.o(0)
    zmm12 = zx.o(0)

int32_t rax_7 = 0
var_188 = data_142d3f7e0
int32_t i_8 = 0
float var_270 = 3.40282347e+38f
float zmm0[0x4] = arg10
zmm0[0] = zmm0[0] f+ *(arg2 + 0x2c)
arg10 = zmm0[0]
zmm0[0] = zmm0[0] f+ arg8
uint128_t zmm13
uint128_t var_b8 = zmm13
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
float var_26c = zmm0[0]
zmm0 = _mm_cvtps_pd(zmm0[0].q)
zmm0[0].q = zmm0[0].q f+ 0.001
float var_2b4 = _mm_cvtpd_ps(zmm0)[0]

while (true)
    zmm4 = zmm15 ^ zmm5
    zmm3 = zmm14 ^ zmm5
    zmm4[0] = zmm4[0] f* arg1[4]
    zmm2 = zmm12 ^ zmm5
    zmm3[0] = zmm3[0] f* *arg1
    zmm2[0] = zmm2[0] f* arg1[2]
    zmm4[0] = zmm4[0] f* arg1[1]
    zmm4[0] = zmm4[0] f* arg1[7]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm3[0] = zmm3[0] f* arg1[3]
    zmm3[0] = zmm3[0] f* arg1[6]
    zmm4[0] = zmm4[0] + zmm2[0]
    zmm2[0] = zmm2[0] f* arg1[5]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm2[0] = zmm2[0] f* arg1[8]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm4[0] = zmm4[0] + zmm2[0]
    zmm4[0] = zmm4[0] + zmm2[0]
    int32_t r9
    
    if (not(zmm4[0] < zmm4[0]) && not(zmm4[0] < zmm4[0]))
        zmm13 = zx.o(*arg1)
        r9 = arg1[2]
    else if (zmm4[0] < zmm4[0] || zmm4[0] < zmm4[0])
        zmm13 = zx.o(*(arg1 + 0x18))
        r9 = arg1[8]
    else
        zmm13 = zx.o(*(arg1 + 0xc))
        r9 = arg1[5]
    
    zmm5 = (*rdx)[2]
    zmm8 = (*rdx)[1]
    zmm7 = *rdx
    zmm4 = (*rdx)[3]
    void* rax_9 = var_210
    zmm15[0] = zmm15[0] * zmm5[0]
    zmm14[0] = zmm14[0] * zmm5[0]
    zmm12[0] = zmm12[0] * zmm8[0]
    zmm15[0] = zmm15[0] f* zmm7.d
    zmm12[0] = zmm12[0] - zmm15[0]
    uint64_t var_268_1 = zmm13.q
    zmm12[0] = zmm12[0] f* zmm7.d
    zmm12[0] = zmm12[0] + zmm12[0]
    zmm14[0] = zmm14[0] - zmm12[0]
    zmm14[0] = zmm14[0] * zmm8[0]
    zmm4[0] = zmm4[0] * zmm12[0]
    zmm15[0] = zmm15[0] - zmm14[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm14[0] = zmm14[0] + zmm14[0]
    zmm12[0] = zmm12[0] * zmm8[0]
    zmm4[0] = zmm4[0] + zmm14[0]
    zmm15[0] = zmm15[0] + zmm15[0]
    zmm14[0] = zmm14[0] * zmm5[0]
    zmm5 = *(rax_9 + 0x20)
    zmm15[0] = zmm15[0] * zmm8[0]
    zmm15[0] = zmm15[0] - zmm14[0]
    zmm15[0] = zmm15[0] f* zmm7.d
    zmm15[0] = zmm15[0] + zmm4[0]
    zmm4[0] = zmm4[0] * zmm14[0]
    zmm12[0] = zmm12[0] - zmm15[0]
    zmm14[0] = zmm14[0] f* zmm7.d
    zmm15[0] = zmm15[0] f* *(rax_9 + 0x1c)
    zmm4[0] = zmm4[0] + zmm15[0]
    zmm4[0] = zmm4[0] * zmm15[0]
    zmm14[0] = zmm14[0] - zmm12[0]
    zmm12[0] = zmm12[0] + zmm4[0]
    zmm4[0] = zmm4[0] + zmm12[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm14[0] = zmm14[0] + zmm4[0]
    zmm4 = *(rax_9 + 0x24)
    zmm15[0] = zmm15[0] + zmm12[0]
    zmm14[0] = zmm14[0] * zmm4[0]
    zmm15[0] = zmm15[0] + zmm14[0]
    float var_248
    float var_244
    float var_240
    float* rax_10
    int32_t r10_1
    
    if (zmm15[0] < zmm11[0])
        r10_1 = r10 | 0x20
        int32_t var_1e8_1 = *(rax_9 + 0x18)
        int64_t var_1f0
        rax_10 = &var_1f0
        var_1f0 = *(rax_9 + 0x10)
    else
        zmm2 = *(rax_9 + 0x28)
        r10_1 = r10 | 0x10
        zmm2[0] = zmm2[0] f* *(rax_9 + 0x1c)
        zmm2[0] = zmm2[0] * zmm5[0]
        zmm2[0] = zmm2[0] f+ *(rax_9 + 0x10)
        zmm2[0] = zmm2[0] * zmm4[0]
        zmm2[0] = zmm2[0] f+ *(rax_9 + 0x14)
        zmm2[0] = zmm2[0] f+ *(rax_9 + 0x18)
        var_248 = zmm2[0]
        rax_10 = &var_248
        var_244 = zmm2[0]
        var_240 = zmm2[0]
    
    zmm4 = zx.o(*rax_10)
    int32_t rax_12 = rax_10[2]
    float temp0_11[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm11[0].q)
    int32_t rdx_2 = r10_1 & 0xffffffdf
    float temp0_13[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_12[0].q), temp0_11[0].q)
    
    if ((r10_1.b & 0x20) == 0)
        rdx_2 = r10_1
    
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
    int32_t r10_3 = rdx_2 & 0xffffffef
    
    if ((rdx_2.b & 0x10) == 0)
        r10_3 = rdx_2
    
    zmm5 = *arg3
    float temp0_16[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_17[0x4] = _mm_mul_ps(temp0_15, temp0_16)
    float temp0_18[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_19[0x4] = _mm_mul_ps(temp0_14, temp0_18)
    float temp0_20[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_21[0x4] = _mm_sub_ps(temp0_17, temp0_19)
    float temp0_22[0x4] = _mm_add_ps(temp0_21, temp0_21)
    float temp0_23[0x4] = _mm_mul_ps(temp0_20, temp0_22)
    float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0xc9), temp0_18)
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xd2)
    float temp0_27[0x4] = _mm_add_ps(temp0_23, temp0_13)
    zmm2 = var_268_1:4.d
    zmm3 = var_268_1.d
    float temp0_31[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_26, temp0_16), temp0_25), temp0_27), arg3[1])
    zmm3[0] = zmm3[0] - temp0_31[0]
    float var_258 = temp0_31[0]
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
    zmm2[0] = zmm2[0] - temp0_32[0]
    float var_254_1 = temp0_32[0]
    zmm0 = r9
    float var_290 = zmm3[0]
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xaa)
    zmm0[0] = zmm0[0] - temp0_33[0]
    zmm3[0] = zmm3[0] * zmm14[0]
    float var_28c_1 = zmm2[0]
    zmm2[0] = zmm2[0] * zmm15[0]
    float var_288_1 = zmm0[0]
    zmm0[0] = zmm0[0] * zmm12[0]
    zmm3[0] = zmm3[0] + zmm2[0]
    float var_250_1 = temp0_33[0]
    zmm3[0] = zmm3[0] + zmm0[0]
    int128_t* result
    
    if (zmm3[0] > var_2b4)
        result.b = 0
        __security_check_cookie(rax_1 ^ &var_308)
        return result
    
    zmm0 = zx.o(var_258.q)
    *(&var_1a8:4 + (sx.q(i_8) << 2)) = i_8
    int64_t r8 = sx.q(var_1a8.d)
    int64_t rdx_3 = r8 * 3
    int64_t var_148
    *(&var_148 + (rdx_3 << 2)) = zmm0.q
    zmm0 = zx.o(var_290.q)
    int32_t var_140
    (&var_140)[rdx_3] = var_250_1
    int32_t i_6 = r8.d + 1
    var_1a8.d = r8.d + 1
    int64_t var_118
    *(&var_118 + (rdx_3 << 2)) = zmm0.q
    int64_t var_178
    *(&var_178 + (rdx_3 << 2)) = zmm13.q
    int32_t var_110
    (&var_110)[rdx_3] = var_288_1
    int32_t var_170
    (&var_170)[rdx_3] = r9
    int32_t var_2a8_1
    uint64_t var_2a0
    uint64_t var_280
    
    if (r8.d == 0)
        int64_t rax_22 = sx.q(var_1a8:4.d)
        int64_t rdx_7 = rax_22 * 3
        var_188[rax_22] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rdx_7 << 2)))
        var_2a8_1 = (&var_110)[rdx_7]
    else
        uint64_t* rax_19
        
        if (r8.d == 1)
            rax_19 = sub_1416e69d0(&var_2a0, &var_118, &var_1a8:4, &var_1a8, &var_188)
        label_141623eb7:
            zmm0 = zx.o(*rax_19)
            arg1 = var_238
            var_2a8_1 = rax_19[1].d
            i_6 = var_1a8.d
        else
            if (r8.d == 2)
                rax_19, zmm11 = sub_1416fa750(&var_280, &var_118, &var_1a8, &var_188)
                goto label_141623eb7
            
            if (r8.d == 3)
                uint64_t var_1b8[0x2]
                rax_19, zmm11 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
                goto label_141623eb7
            
            int32_t var_2b8_1 = 0
            zmm0 = _mm_unpacklo_ps(zmm11, zmm11[0].q)
            var_2a8_1 = 0
    
    int32_t var_198
    int64_t r9_4 = sx.q(var_198)
    int64_t rdi_1 = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t rbx_1 = sx.q(var_1a0.d)
    int64_t r11_1 = sx.q(var_1a0:4.d)
    zmm4 = var_2a8_1
    int64_t rsi_1 = r9_4 * 3
    int32_t rax_23 = (&var_110)[rsi_1]
    int64_t r12_1 = rdi_1 * 3
    int64_t r15_1 = rbx_1 * 3
    zmm2 = zx.o(*(&var_118 + (r15_1 << 2)))
    int64_t r14_1 = r11_1 * 3
    int32_t r8_8 = (&var_110)[r15_1]
    int32_t rdx_8 = (&var_110)[r14_1]
    int32_t r10_4 = (&var_110)[r12_1]
    int64_t var_2b0_1 = zmm0.q
    int64_t var_f4_1 = *(&var_118 + (rsi_1 << 2))
    zmm0 = var_188[rdi_1]
    int64_t var_100_1 = *(&var_118 + (r14_1 << 2))
    float zmm1[0x4] = var_188[rbx_1]
    var_118 = *(&var_118 + (r12_1 << 2))
    zmm3 = var_188[r9_4]
    int32_t r9_5 = (&var_170)[r12_1]
    int64_t var_10c_1 = zmm2.q
    zmm2 = var_188[r11_1]
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r15_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_ec_1 = rax_23
    int32_t rax_24 = (&var_170)[rsi_1]
    int32_t var_104_1 = r8_8
    int32_t r8_9 = (&var_170)[r15_1]
    int32_t var_f8_1 = rdx_8
    int32_t rdx_9 = (&var_170)[r14_1]
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rsi_1 << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (r14_1 << 2)))
    var_178 = *(&var_178 + (r12_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r12_1 << 2)))
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r15_1 << 2)))
    int32_t var_14c_1 = rax_24
    int32_t rax_25 = (&var_140)[rsi_1]
    var_170 = r9_5
    int32_t r9_6 = (&var_140)[r12_1]
    int32_t var_164_1 = r8_9
    int32_t r8_10 = (&var_140)[r15_1]
    int32_t var_158_1 = rdx_9
    int32_t rdx_10 = (&var_140)[r14_1]
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    int32_t var_11c_1 = rax_25
    int64_t var_130_1 = zmm1.q
    rax_7 += 1
    var_148 = zmm3.q
    zmm3 = var_2b0_1.d
    int64_t var_13c_1 = zmm2.q
    zmm2 = var_2b0_1:4.d
    zmm9 = zmm2
    zmm3[0] = zmm3[0] * zmm3[0]
    var_110 = r10_4
    zmm9[0] = zmm9[0] * zmm2[0]
    var_140 = r9_6
    zmm4[0] = zmm4[0] * zmm4[0]
    int32_t var_134_1 = r8_10
    zmm9[0] = zmm9[0] + zmm3[0]
    int32_t var_128_1 = rdx_10
    zmm9[0] = zmm9[0] + zmm4[0]
    
    if (zmm9[0] < 9.99999997e-07f || zmm9[0] >= var_270)
        goto label_1416241d6
    
    zmm12 = 0x3f800000
    zmm5 = 0x80000000
    r10 = r10_3
    rdx = var_200
    float temp0_36[0x4] = _mm_sqrt_ss(0, zmm9[0])
    var_270 = zmm9[0]
    zmm12[0] = 1f / temp0_36[0]
    zmm14 = zmm12
    zmm15 = zmm12
    zmm14[0] = zmm14[0] * zmm3[0]
    zmm15[0] = zmm15[0] * zmm2[0]
    zmm12[0] = zmm12[0] * zmm4[0]
    
    if (rax_7 s>= 0x20)
        rax_7 += 1
    label_1416241d6:
        
        if (arg11 != 0)
            *arg11 = rax_7
        
        if (not(zmm9[0] <= 9.99999997e-07f))
            float var_2c4_2 = zmm11[0]
            zmm14 = zmm11
            zmm15 = zmm11
            zmm12 = zmm11
            zmm13 = zmm11
            zmm10 = zmm11
            
            if (i_6 s> 0)
                float (* rax_26)[0x4] = &var_188
                uint64_t i_3 = zx.q(i_6)
                uint64_t i
                
                do
                    zmm2 = *rax_26
                    rax_26 = &(*rax_26)[1]
                    zmm2[0] = zmm2[0] f* *(&var_178 + r13)
                    zmm2[0] = zmm2[0] f* *(&var_178:4 + r13)
                    zmm14[0] = zmm14[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_170 + r13)
                    zmm15[0] = zmm15[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_148 + r13)
                    zmm11[0] = zmm11[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_148:4 + r13)
                    zmm2[0] = zmm2[0] f* *(&var_140 + r13)
                    zmm12[0] = zmm12[0] + zmm2[0]
                    r13 += 0xc
                    zmm13.d = zmm13.d f+ zmm2[0]
                    zmm10[0] = zmm10[0] + zmm2[0]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                var_2c4_2 = zmm11[0]
            
            zmm5 = 0x3f000000
            zmm12[0] = zmm12[0] - zmm14[0]
            zmm10[0] = zmm10[0] - zmm11[0]
            zmm3 = zx.o(0)
            zmm7.d = zmm13.d f- zmm15[0]
            zmm12[0] = zmm12[0] * zmm12[0]
            zmm2 = zmm7
            zmm10[0] = zmm10[0] * zmm10[0]
            zmm2[0] = zmm2[0] f* zmm7.d
            zmm2[0] = zmm2[0] + zmm12[0]
            zmm2[0] = zmm2[0] + zmm10[0]
            zmm3[0] = zmm2[0]
            zmm2 = 0x3f000000
            float temp0_37[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            temp0_37[0] = temp0_37[0] * temp0_37[0]
            zmm3[0] = zmm3[0] * temp0_37[0]
            zmm2[0] = 0.5f - zmm3[0]
            temp0_37[0] = temp0_37[0] * zmm2[0]
            temp0_37[0] = temp0_37[0] + temp0_37[0]
            temp0_37[0] = temp0_37[0] * temp0_37[0]
            zmm3[0] = zmm3[0] * temp0_37[0]
            zmm5[0] = 0.5f - zmm3[0]
            temp0_37[0] = temp0_37[0] * zmm5[0]
            temp0_37[0] = temp0_37[0] + temp0_37[0]
            temp0_37[0] = temp0_37[0] * zmm12[0]
            temp0_37[0] = temp0_37[0] f* zmm7.d
            temp0_37[0] = temp0_37[0] * zmm10[0]
            zmm1 = var_26c
            *arg7 = (_mm_unpacklo_ps(temp0_37, temp0_37[0].q)).q
            float temp0_39[0x4] = _mm_sqrt_ss(0, zmm9[0])
            float var_2b8_2 = temp0_37[0]
            zmm1[0] = zmm1[0] - temp0_39[0]
            arg7[2] = var_2b8_2
            
            if (not(zmm1[0] < zmm11[0]))
                zmm11 = __minss_xmmss_memss(zmm1[0], 0x7f7fffff)
            
            zmm2 = arg8
            *arg4 = zmm11[0]
            zmm2[0] = zmm2[0] f* *arg7
            zmm2[0] = zmm2[0] f* arg7[1]
            zmm2[0] = zmm2[0] f* arg7[2]
            zmm2[0] = zmm2[0] + zmm14[0]
            zmm2[0] = zmm2[0] + zmm15[0]
            zmm2[0] = zmm2[0] + var_2c4_2
            *arg5 = (_mm_unpacklo_ps(zmm2, zmm2[0].q)).q
            float var_2b8_3 = zmm2[0]
            zmm2 = arg10
            arg5[1].d = var_2b8_3
            zmm2[0] = zmm2[0] f* *arg7
            zmm2[0] = zmm2[0] f* arg7[1]
            zmm2[0] = zmm2[0] f* arg7[2]
            zmm12[0] = zmm12[0] - zmm2[0]
            zmm13.d = zmm13.d f- zmm2[0]
            zmm10[0] = zmm10[0] - zmm2[0]
            *arg6 = (_mm_unpacklo_ps(zmm12, zmm13.q)).q
            arg6[1].d = zmm10[0]
            result.b = 1
            __security_check_cookie(rax_1 ^ &var_308)
            return result
        
        var_280 = 0
        int64_t var_278_1 = 0
        var_2a0 = 0
        int64_t var_298_1 = 0
        sub_14083ad30(&var_280, 8)
        
        if (var_298_1:4.d s< 8)
            sub_14083ad30(&var_2a0, 8)
        
        uint64_t i_7 = zx.q(i_6)
        
        if (i_7.d s> 0)
            int64_t rdi_2 = 0
            uint64_t i_5 = zx.q(i_7.d)
            uint64_t i_1
            
            do
                int64_t rsi_2 = sx.q(var_278_1.d)
                int32_t rax_29 = (rsi_2 + 1).d
                var_278_1.d = rax_29
                
                if (rax_29 s> var_278_1:4.d)
                    sub_14083a7e0(&var_280)
                
                uint64_t rcx_9 = var_280
                int64_t rdx_13 = rsi_2 * 3
                int32_t rax_30 = *(&var_170 + rdi_2)
                *(rcx_9 + (rdx_13 << 2)) = *(&var_178 + rdi_2)
                *(rcx_9 + (rdx_13 << 2) + 8) = rax_30
                int64_t rsi_3 = sx.q(var_298_1.d)
                int32_t rax_31 = (rsi_3 + 1).d
                var_298_1.d = rax_31
                
                if (rax_31 s> var_298_1:4.d)
                    sub_14083a7e0(&var_2a0)
                
                uint64_t rcx_11 = var_2a0
                int64_t rdx_15 = rsi_3 * 3
                int64_t zmm0_1 = *(&var_148 + rdi_2)
                int32_t rax_32 = *(&var_140 + rdi_2)
                rdi_2 += 0xc
                *(rcx_11 + (rdx_15 << 2)) = zmm0_1
                *(rcx_11 + (rdx_15 << 2) + 8) = rax_32
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        int32_t rax_33
        uint128_t zmm11_1
        rax_33, zmm8, zmm11_1 = sub_14158f7b0(&var_280, &var_2a0, &var_238, &var_210, &var_2b4, 
            &var_290, &var_248, &var_258)
        float zmm0_2[0x4]
        float zmm2_1[0x4]
        float zmm3_1[0x4]
        uint128_t zmm4_1
        
        if (rax_33 == 2)
            float zmm5_1 = zmm11_1.d
            float zmm6_1 = zmm11_1.d
            zmm7 = zmm11_1
            zmm3_1 = zmm11_1
            zmm4_1 = zmm11_1
            
            if (i_7.d s> 0)
                float (* rax_36)[0x4] = &var_188
                uint64_t i_4 = i_7
                uint64_t i_2
                
                do
                    zmm2_1 = *rax_36
                    rax_36 = &(*rax_36)[1]
                    zmm2_1[0] = zmm2_1[0] f* *(&var_178 + r13)
                    zmm2_1[0] = zmm2_1[0] f* *(&var_178:4 + r13)
                    zmm5_1 = zmm5_1 + zmm2_1[0]
                    zmm2_1[0] = zmm2_1[0] f* *(&var_170 + r13)
                    zmm6_1 = zmm6_1 + zmm2_1[0]
                    zmm2_1[0] = zmm2_1[0] f* *(&var_148 + r13)
                    zmm7.d = zmm7.d f+ zmm2_1[0]
                    zmm2_1[0] = zmm2_1[0] f* *(&var_148:4 + r13)
                    zmm2_1[0] = zmm2_1[0] f* *(&var_140 + r13)
                    zmm3_1[0] = zmm3_1[0] + zmm2_1[0]
                    r13 += 0xc
                    zmm4_1.d = zmm4_1.d f+ zmm2_1[0]
                    zmm11_1.d = zmm11_1.d f+ zmm2_1[0]
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
            
            zmm2_1 = arg8
            zmm0_2 = zx.o(var_290.q)
            *arg4 = var_26c[0]
            *arg7 = zmm0_2.q
            arg7[2] = var_288_1
            zmm2_1[0] = zmm2_1[0] f* *arg7
            zmm2_1[0] = zmm2_1[0] f* arg7[1]
            zmm2_1[0] = zmm2_1[0] f* arg7[2]
            zmm2_1[0] = zmm2_1[0] + zmm5_1
            zmm2_1[0] = zmm2_1[0] + zmm6_1
            zmm2_1[0] = zmm2_1[0] f+ zmm7.d
            *arg5 = (_mm_unpacklo_ps(zmm2_1, zmm2_1[0].q)).q
            float var_2b8_7 = zmm2_1[0]
            zmm2_1 = arg10
            arg5[1].d = var_2b8_7
            zmm2_1[0] = zmm2_1[0] f* *arg7
            zmm2_1[0] = zmm2_1[0] f* arg7[1]
            zmm2_1[0] = zmm2_1[0] f* arg7[2]
            zmm3_1[0] = zmm3_1[0] - zmm2_1[0]
            zmm4_1.d = zmm4_1.d f- zmm2_1[0]
            zmm11_1.d = zmm11_1.d f- zmm2_1[0]
            *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm4_1.q)).q
            arg6[1].d = zmm11_1.d
            float temp4_1 = *arg4
            zmm8[0] - temp4_1
            uint64_t rcx_19 = var_2a0
            i_7.b = zmm8[0] < temp4_1
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            uint64_t rcx_20 = var_280
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            result = zx.q(i_7.b)
        else
            zmm2_1 = arg8
            zmm4_1 = arg10
            zmm3_1 = var_258
            *arg7 = var_290.q
            zmm0_2 = var_2b4
            arg7[2] = var_288_1
            zmm0_2[0] = zmm0_2[0] + zmm2_1[0]
            zmm0_2[0] = zmm0_2[0] f+ zmm4_1.d
            *arg4 = zmm0_2[0]
            zmm2_1[0] = zmm2_1[0] f* *arg7
            zmm2_1[0] = zmm2_1[0] f* arg7[1]
            zmm2_1[0] = zmm2_1[0] f* arg7[2]
            zmm2_1[0] = zmm2_1[0] + var_248
            zmm2_1[0] = zmm2_1[0] + var_244
            zmm2_1[0] = zmm2_1[0] + var_240
            float zmm1_1[0x4] = zmm4_1
            *arg5 = (_mm_unpacklo_ps(zmm2_1, zmm2_1[0].q)).q
            zmm0_2 = zmm4_1
            float var_2b8_5 = zmm2_1[0]
            zmm2_1 = var_254_1
            arg5[1].d = var_2b8_5
            zmm0_2[0] = zmm0_2[0] f* *arg7
            zmm1_1[0] = zmm1_1[0] f* arg7[1]
            zmm4_1.d = zmm4_1.d f* arg7[2]
            zmm3_1[0] = zmm3_1[0] - zmm0_2[0]
            zmm0_2 = var_250_1
            zmm2_1[0] = zmm2_1[0] - zmm1_1[0]
            zmm0_2[0] = zmm0_2[0] f- zmm4_1.d
            *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)).q
            arg6[1].d = zmm0_2[0]
            uint64_t rcx_15 = var_2a0
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            uint64_t rcx_16 = var_280
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            result.b = 1
        __security_check_cookie(rax_1 ^ &var_308)
        return result
    
    i_8 = i_6
