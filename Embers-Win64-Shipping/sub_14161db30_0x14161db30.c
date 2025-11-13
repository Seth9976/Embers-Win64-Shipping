// 函数: sub_14161db30
// 地址: 0x14161db30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm12[0x4]
float var_a8[0x4] = zmm12
float zmm13[0x4]
float var_b8[0x4] = zmm13
float zmm14[0x4]
float var_c8[0x4] = zmm14
void var_308
int64_t rax_1 = __security_cookie ^ &var_308
int64_t r12 = 0
int32_t var_2c8 = 0
float zmm2[0x4] = *arg3
float zmm11[0x4] = zx.o(0)
float zmm4[0x4] = 0x80000000
float zmm3[0x4] = zmm2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_1[0] = (temp0 ^ 0x80000000)[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_3[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
temp0_5[0] = temp0_4[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_188[0x4] = temp0_6
float var_1c8[0x4] = temp0_6
float (* var_208)[0x4] = &var_1c8
int32_t r13 = 0
zmm3 = *arg9 ^ 0x80000000
float zmm5[0x4] = (*arg9)[1] ^ 0x80000000
float zmm6[0x4] = (*arg9)[2] ^ 0x80000000
void* var_220 = arg1
zmm3[0] = zmm3[0] * zmm3[0]
void* var_218 = arg2
zmm5[0] = zmm5[0] * zmm5[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm5[0] = zmm5[0] + zmm3[0]
zmm5[0] = zmm5[0] + zmm6[0]
bool cond:0_1

if (not(zmm5[0] < 9.99999975e-05f))
    zmm12 = 0x3f800000
    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm5[0])
    cond:0_1 = temp0_7[0] != 0f
    zmm12[0] = 1f / temp0_7[0]
    zmm13 = zmm12
    zmm14 = zmm12
    zmm13[0] = zmm13[0] * zmm3[0]
    zmm14[0] = zmm14[0] * zmm5[0]
    zmm12[0] = zmm12[0] * zmm6[0]

if (zmm5[0] < 9.99999975e-05f || not(cond:0_1))
    zmm13 = 0xbf800000
    zmm14 = zx.o(0)
    zmm12 = zx.o(0)

float zmm0[0x4] = data_142d3f7e0
int32_t rdx = 0
float zmm1[0x4] = 0x7f7fffff
int32_t i_6 = 0
float zmm15[0x4] = arg10
zmm15[0] = zmm15[0] f+ *(arg2 + 0x2c)
float zmm8[0x4] = 0x358637bd
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm9[0x4]
float var_78[0x4] = zmm9
float zmm10[0x4]
float var_88[0x4] = zmm10
float var_2b4 = 3.40282347e+38f
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
var_188 = zmm0
uint64_t var_2a0
uint64_t var_290
int32_t var_288
uint64_t var_280
float var_270
float var_26c
float var_268
float var_260
float var_25c
float var_258
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rdx_1

while (true)
    rdx_1 = rdx + 1
    var_2c8 = rdx_1
    
    if (rdx s>= 0x20)
        break
    
    var_270 = (zmm13 ^ zmm4)[0]
    var_26c = (zmm14 ^ zmm4)[0]
    var_268 = (zmm12 ^ zmm4)[0]
    float var_230
    zmm11 = sub_141758e70(arg1, &var_230, &var_270, zmm11)
    zmm5 = (*var_208)[2]
    zmm8 = (*var_208)[1]
    zmm7 = *var_208
    zmm4 = (*var_208)[3]
    void* rax_8 = var_218
    zmm14[0] = zmm14[0] * zmm5[0]
    zmm13[0] = zmm13[0] * zmm5[0]
    zmm12[0] = zmm12[0] * zmm8[0]
    zmm14[0] = zmm14[0] * zmm7[0]
    zmm12[0] = zmm12[0] - zmm14[0]
    zmm12[0] = zmm12[0] * zmm7[0]
    zmm13[0] = zmm13[0] - zmm12[0]
    zmm13[0] = zmm13[0] * zmm8[0]
    zmm12[0] = zmm12[0] + zmm12[0]
    zmm14[0] = zmm14[0] - zmm13[0]
    zmm13[0] = zmm13[0] + zmm13[0]
    zmm4[0] = zmm4[0] * zmm12[0]
    zmm12[0] = zmm12[0] * zmm8[0]
    zmm4[0] = zmm4[0] + zmm13[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm14[0] = zmm14[0] + zmm14[0]
    zmm13[0] = zmm13[0] * zmm5[0]
    zmm5 = *(rax_8 + 0x20)
    zmm14[0] = zmm14[0] * zmm8[0]
    zmm14[0] = zmm14[0] - zmm13[0]
    zmm14[0] = zmm14[0] * zmm7[0]
    zmm14[0] = zmm14[0] + zmm4[0]
    zmm4[0] = zmm4[0] * zmm13[0]
    zmm12[0] = zmm12[0] - zmm14[0]
    zmm13[0] = zmm13[0] * zmm7[0]
    zmm14[0] = zmm14[0] f* *(rax_8 + 0x1c)
    zmm4[0] = zmm4[0] + zmm14[0]
    zmm4[0] = zmm4[0] * zmm14[0]
    zmm13[0] = zmm13[0] - zmm12[0]
    zmm12[0] = zmm12[0] + zmm4[0]
    zmm4[0] = zmm4[0] + zmm12[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm13[0] = zmm13[0] + zmm4[0]
    zmm4 = *(rax_8 + 0x24)
    zmm14[0] = zmm14[0] + zmm12[0]
    zmm13[0] = zmm13[0] * zmm4[0]
    zmm14[0] = zmm14[0] + zmm13[0]
    float* rax_9
    int32_t r13_1
    
    if (zmm14[0] < zmm11[0])
        r13_1 = r13 | 0x20
        int32_t var_1f0_1 = *(rax_8 + 0x18)
        int64_t var_1f8
        rax_9 = &var_1f8
        var_1f8 = *(rax_8 + 0x10)
    else
        zmm2 = *(rax_8 + 0x28)
        r13_1 = r13 | 0x10
        zmm2[0] = zmm2[0] f* *(rax_8 + 0x1c)
        zmm2[0] = zmm2[0] * zmm5[0]
        zmm2[0] = zmm2[0] f+ *(rax_8 + 0x10)
        zmm2[0] = zmm2[0] * zmm4[0]
        zmm2[0] = zmm2[0] f+ *(rax_8 + 0x14)
        zmm2[0] = zmm2[0] f+ *(rax_8 + 0x18)
        var_260 = zmm2[0]
        rax_9 = &var_260
        var_25c = zmm2[0]
        var_258 = zmm2[0]
    
    int32_t rcx_1 = r13_1 & 0xffffffdf
    var_288 = rax_9[2]
    var_290 = *rax_9
    
    if ((r13_1.b & 0x20) == 0)
        rcx_1 = r13_1
    
    r13 = rcx_1
    
    if ((rcx_1.b & 0x10) != 0)
        r13 &= 0xffffffef
    
    zmm2 = var_290:4.d
    zmm4 = *arg3
    float temp0_8[0x4] = _mm_unpacklo_ps(var_290.d, var_288[0].q)
    float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_12[0x4] = _mm_unpacklo_ps(temp0_8, _mm_unpacklo_ps(zmm2, zmm11[0].q)[0].q)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_10)
    float temp0_18[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), temp0_9), temp0_15)
    float temp0_19[0x4] = _mm_add_ps(temp0_18, temp0_18)
    float temp0_20[0x4] = _mm_mul_ps(temp0_13, temp0_19)
    float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_10)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xd2)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, temp0_12)
    int32_t var_22c
    zmm2 = var_22c
    float temp0_25[0x4] = _mm_mul_ps(temp0_23, temp0_9)
    zmm3 = var_230
    int32_t var_228
    zmm0 = var_228
    float temp0_28[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_25, temp0_22), temp0_24), arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm3[0] = zmm3[0] - temp0_28[0]
    int64_t rdx_3 = sx.q(var_1a8.d)
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
    zmm0[0] = zmm0[0] - temp0_29[0]
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
    int64_t rcx_2 = rdx_3 * 3
    float var_1e4_1 = temp0_29[0]
    zmm2[0] = zmm2[0] - temp0_30[0]
    int32_t i_7 = rdx_3.d + 1
    var_1a8.d = rdx_3.d + 1
    float var_1d8_1 = zmm0[0]
    float temp0_31[0x4] = _mm_unpacklo_ps(zmm3, zmm2[0].q)
    *(&var_178 + (rcx_2 << 2)) = temp0_31.q
    var_230.q = temp0_31.q
    (&var_170)[rcx_2] = var_228
    *(&var_148 + (rcx_2 << 2)) = (_mm_unpacklo_ps(temp0_28, temp0_30[0].q)).q
    (&var_140)[rcx_2] = var_1e4_1
    int64_t var_118
    *(&var_118 + (rcx_2 << 2)) = (_mm_unpacklo_ps(zmm3, zmm2[0].q)).q
    int32_t var_110
    (&var_110)[rcx_2] = var_1d8_1
    int32_t var_2a8_1
    
    if (rdx_3.d == 0)
        int64_t rax_22 = sx.q(var_1a8:4.d)
        int64_t rcx_10 = rax_22 * 3
        var_188[rax_22] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_10 << 2)))
        var_2a8_1 = (&var_110)[rcx_10]
    else
        uint64_t* rax_19
        
        if (rdx_3.d == 1)
            rax_19 = sub_1416e69d0(&var_2a0, &var_118, &var_1a8:4, &var_1a8, &var_188)
        label_14161e05e:
            zmm0 = zx.o(*rax_19)
            var_2a8_1 = rax_19[1].d
            i_7 = var_1a8.d
        else
            if (rdx_3.d == 2)
                rax_19, zmm11, zmm15 = sub_1416fa750(&var_280, &var_118, &var_1a8, &var_188)
                goto label_14161e05e
            
            if (rdx_3.d == 3)
                uint64_t var_1b8[0x2]
                rax_19, zmm11, zmm15 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
                goto label_14161e05e
            
            int32_t var_2b8_1 = 0
            zmm0 = _mm_unpacklo_ps(zmm11, zmm11[0].q)
            var_2a8_1 = 0
    
    int32_t var_198
    int64_t r8_4 = sx.q(var_198)
    int64_t rbx = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t r11_1 = sx.q(var_1a0.d)
    int64_t r10_1 = sx.q(var_1a0:4.d)
    zmm5 = var_2a8_1
    int64_t rdi_1 = r8_4 * 3
    int32_t rax_23 = (&var_110)[rdi_1]
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_8 = (&var_110)[r14_1]
    int32_t rcx_11 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    zmm8 = 0x358637bd
    int64_t var_2b0_1 = zmm0.q
    zmm4 = var_2b0_1.d
    int64_t var_10c_1 = *(&var_118 + (r14_1 << 2))
    zmm2 = var_188[r10_1]
    int64_t var_f4_1 = *(&var_118 + (rdi_1 << 2))
    zmm0 = var_188[rbx]
    int64_t var_100_1 = *(&var_118 + (rsi_1 << 2))
    zmm1 = var_188[r11_1]
    var_118 = *(&var_118 + (r15_1 << 2))
    zmm3 = var_188[r8_4]
    int32_t r8_5 = (&var_170)[r15_1]
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rdi_1 << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = rdx_8
    int32_t rdx_9 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_11
    int32_t rcx_12 = (&var_170)[rsi_1]
    int32_t var_ec_1 = rax_23
    int32_t rax_24 = (&var_170)[rdi_1]
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r14_1 << 2)))
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rdi_1 << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (rsi_1 << 2)))
    var_178 = *(&var_178 + (r15_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r15_1 << 2)))
    var_170 = r8_5
    int32_t r8_6 = (&var_140)[r15_1]
    int32_t var_164_1 = rdx_9
    int32_t rdx_10 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_12
    int32_t rcx_13 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_24
    int32_t rax_25 = (&var_140)[rdi_1]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r9_4
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_2b0_1:4.d
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_6
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = rdx_10
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_128_1 = rcx_13
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_11c_1 = rax_25
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < 9.99999997e-07f || zmm3[0] >= var_2b4)
        i_6 = i_7
        zmm1 = zmm3
        rdx_1 = var_2c8
        var_2b4 = zmm3[0]
        break
    
    zmm12 = 0x3f800000
    arg1 = var_220
    zmm1 = zmm3
    i_6 = i_7
    rdx = var_2c8
    float temp0_35[0x4] = _mm_sqrt_ss(0, zmm3[0])
    var_2b4 = zmm3[0]
    zmm12[0] = 1f / temp0_35[0]
    zmm13 = zmm12
    zmm14 = zmm12
    zmm13[0] = zmm13[0] * zmm4[0]
    zmm4 = 0x80000000
    zmm14[0] = zmm14[0] * zmm3[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    continue

if (arg11 != 0)
    *arg11 = rdx_1

float result

if (zmm1[0] <= zmm8[0])
    var_280 = 0
    int64_t var_278_1 = 0
    var_2a0 = 0
    int64_t var_298_1 = 0
    sub_14083ad30(&var_280, 8)
    
    if (var_298_1:4.d s< 8)
        sub_14083ad30(&var_2a0, 8)
    
    if (i_6 s> 0)
        int64_t rdi_2 = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t rsi_2 = sx.q(var_278_1.d)
            int32_t rax_29 = (rsi_2 + 1).d
            var_278_1.d = rax_29
            
            if (rax_29 s> var_278_1:4.d)
                sub_14083a7e0(&var_280)
            
            uint64_t rcx_17 = var_280
            int64_t rdx_13 = rsi_2 * 3
            int32_t rax_30 = *(&var_170 + rdi_2)
            *(rcx_17 + (rdx_13 << 2)) = *(&var_178 + rdi_2)
            *(rcx_17 + (rdx_13 << 2) + 8) = rax_30
            int64_t rsi_3 = sx.q(var_298_1.d)
            int32_t rax_31 = (rsi_3 + 1).d
            var_298_1.d = rax_31
            
            if (rax_31 s> var_298_1:4.d)
                sub_14083a7e0(&var_2a0)
            
            uint64_t rcx_19 = var_2a0
            int64_t rdx_15 = rsi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rdi_2)
            int32_t rax_32 = *(&var_140 + rdi_2)
            rdi_2 += 0xc
            *(rcx_19 + (rdx_15 << 2)) = zmm0_1
            *(rcx_19 + (rdx_15 << 2) + 8) = rax_32
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_33
    float zmm8_1
    uint128_t zmm11_1
    uint128_t zmm15_1
    rax_33, zmm8_1, zmm11_1, zmm15_1 = sub_141584b00(&var_280, &var_2a0, &var_220, &var_218, 
        &var_2c8, &var_290, &var_260, &var_270)
    uint128_t zmm0_2
    uint128_t zmm1_1
    uint128_t zmm2_1
    uint128_t zmm3_1
    
    if (rax_33 == 2)
        float zmm5_1 = zmm11_1.d
        float zmm6_1 = zmm11_1.d
        zmm7 = zmm11_1
        zmm3_1 = zmm11_1
        int64_t zmm4_1 = zmm11_1.q
        
        if (i_6 s> 0)
            float (* rax_36)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_36
                rax_36 = &(*rax_36)[1]
                zmm0_2.d = zmm2_1.d f* *(&var_178 + r12)
                zmm1_1.d = zmm2_1.d f* *(&var_178:4 + r12)
                zmm5_1 = zmm5_1 f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_170 + r12)
                zmm6_1 = zmm6_1 f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_148 + r12)
                zmm7[0] = zmm7[0] f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_148:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_140 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                r12 += 0xc
                zmm4_1.d = zmm4_1.d f+ zmm0_2.d
                zmm11_1.d = zmm11_1.d f+ zmm2_1.d
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm2_1 = arg8
        zmm0_2.d = zmm15_1.d f+ zmm2_1.d
        *arg4 = zmm0_2.d
        *arg7 = var_290
        arg7[2] = var_288
        zmm0_2.d = zmm2_1.d f* *arg7
        zmm1_1.d = zmm2_1.d f* arg7[1]
        zmm2_1.d = zmm2_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ zmm5_1
        zmm1_1.d = zmm1_1.d f+ zmm6_1
        zmm2_1.d = zmm2_1.d f+ zmm7[0]
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm2_1.d
        zmm0_2.d = zmm15_1.d f* *arg7
        zmm1_1.d = zmm15_1.d f* arg7[1]
        zmm15_1.d = zmm15_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm4_1.d = zmm4_1.d f- zmm1_1.d
        zmm11_1.d = zmm11_1.d f- zmm15_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm4_1)).q
        arg6[1].d = zmm11_1.d
        float temp3_1 = *arg4
        zmm8_1 - temp3_1
        uint64_t rcx_25 = var_2a0
        i_6.b = zmm8_1 < temp3_1
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        uint64_t rcx_26 = var_280
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        result = zx.d(i_6.b)
    else
        zmm2_1 = arg8
        zmm3_1 = var_270
        *arg7 = var_290
        zmm0_2.d = var_2c8.d f+ zmm2_1.d
        arg7[2] = var_288
        zmm0_2.d = zmm0_2.d f+ zmm15_1.d
        *arg4 = zmm0_2.d
        zmm0_2.d = zmm2_1.d f* *arg7
        zmm1_1.d = zmm2_1.d f* arg7[1]
        zmm2_1.d = zmm2_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ var_260
        zmm1_1.d = zmm1_1.d f+ var_25c
        zmm2_1.d = zmm2_1.d f+ var_258
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm2_1.d
        zmm0_2.d = zmm15_1.d f* *arg7
        zmm1_1.d = zmm15_1.d f* arg7[1]
        zmm15_1.d = zmm15_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm2_1.d = var_26c.d f- zmm1_1.d
        zmm0_2.d = var_268.d f- zmm15_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
        arg6[1].d = zmm0_2.d
        uint64_t rcx_22 = var_2a0
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        uint64_t rcx_23 = var_280
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        result.b = 1
else
    if (i_6 s> 0)
        float (* rax_26)[0x4] = &var_188
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_26
            rax_26 = &(*rax_26)[1]
            zmm2[0] = zmm2[0] f* *(&var_178 + r12)
            zmm2[0] = zmm2[0] f* *(&var_178:4 + r12)
            zmm11[0] = zmm11[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_170 + r12)
            zmm11[0] = zmm11[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148 + r12)
            zmm11[0] = zmm11[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148:4 + r12)
            zmm2[0] = zmm2[0] f* *(&var_140 + r12)
            zmm11[0] = zmm11[0] + zmm2[0]
            r12 += 0xc
            zmm11[0] = zmm11[0] + zmm2[0]
            zmm11[0] = zmm11[0] + zmm2[0]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    zmm5 = 0x3f000000
    zmm11[0] = zmm11[0] - zmm11[0]
    zmm11[0] = zmm11[0] - zmm11[0]
    zmm11[0] = zmm11[0] - zmm11[0]
    zmm3 = zx.o(0)
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm11[0] = zmm11[0] + zmm11[0]
    zmm11[0] = zmm11[0] + zmm11[0]
    zmm3[0] = zmm11[0]
    zmm2 = 0x3f000000
    float temp0_36[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_36[0] = temp0_36[0] * temp0_36[0]
    zmm3[0] = zmm3[0] * temp0_36[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_36[0] = temp0_36[0] * zmm2[0]
    zmm2 = arg8
    temp0_36[0] = temp0_36[0] + temp0_36[0]
    temp0_36[0] = temp0_36[0] * temp0_36[0]
    zmm3[0] = zmm3[0] * temp0_36[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_36[0] = temp0_36[0] * zmm5[0]
    temp0_36[0] = temp0_36[0] + temp0_36[0]
    temp0_36[0] = temp0_36[0] * zmm11[0]
    temp0_36[0] = temp0_36[0] * zmm11[0]
    temp0_36[0] = temp0_36[0] * zmm11[0]
    float temp0_37[0x4] = _mm_unpacklo_ps(temp0_36, temp0_36[0].q)
    *arg7 = temp0_37.q
    zmm15[0] = zmm15[0] + zmm2[0]
    float temp0_38[0x4] = __sqrtss_xmmss_memss(temp0_37[0], var_2b4)
    float var_2b8_2 = temp0_36[0]
    zmm15[0] = zmm15[0] - temp0_38[0]
    arg7[2] = var_2b8_2
    *arg4 = zmm15[0]
    zmm2[0] = zmm2[0] f* *arg7
    zmm2[0] = zmm2[0] f* arg7[1]
    zmm2[0] = zmm2[0] f* arg7[2]
    zmm2[0] = zmm2[0] + zmm11[0]
    zmm2[0] = zmm2[0] + zmm11[0]
    zmm2[0] = zmm2[0] + zmm11[0]
    *arg5 = (_mm_unpacklo_ps(zmm2, zmm2[0].q)).q
    arg5[1].d = zmm2[0]
    zmm15[0] = zmm15[0] f* *arg7
    zmm15[0] = zmm15[0] f* arg7[1]
    zmm15[0] = zmm15[0] f* arg7[2]
    zmm11[0] = zmm11[0] - zmm15[0]
    zmm11[0] = zmm11[0] - zmm15[0]
    zmm11[0] = zmm11[0] - zmm15[0]
    *arg6 = (_mm_unpacklo_ps(zmm11, zmm11[0].q)).q
    arg6[1].d = zmm11[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_308)
return result
