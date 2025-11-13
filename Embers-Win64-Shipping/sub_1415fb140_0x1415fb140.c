// 函数: sub_1415fb140
// 地址: 0x1415fb140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm12[0x4]
float var_a8[0x4] = zmm12
float zmm13[0x4]
float var_b8[0x4] = zmm13
void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t r12 = 0
int32_t var_2b4 = 0
float zmm2[0x4] = *arg3
float zmm11[0x4] = zx.o(0)
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
void* var_228 = arg2
float (* rdx)[0x4] = &var_1c8
zmm3 = *arg9 ^ 0x80000000
float zmm5[0x4] = (*arg9)[1] ^ 0x80000000
float zmm6[0x4] = (*arg9)[2] ^ 0x80000000
zmm3[0] = zmm3[0] * zmm3[0]
int32_t r13 = 0
void* var_230 = arg1
zmm5[0] = zmm5[0] * zmm5[0]
zmm6[0] = zmm6[0] * zmm6[0]
float (* var_218)[0x4] = &var_1c8
zmm5[0] = zmm5[0] + zmm3[0]
zmm5[0] = zmm5[0] + zmm6[0]
bool cond:0_1

if (not(zmm5[0] < 9.99999975e-05f))
    zmm12 = 0x3f800000
    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm5[0])
    cond:0_1 = temp0_7[0] != 0f
    zmm12[0] = 1f / temp0_7[0]
    zmm2 = zmm12
    zmm13 = zmm12
    zmm2[0] = zmm2[0] * zmm3[0]
    zmm13[0] = zmm13[0] * zmm5[0]
    zmm12[0] = zmm12[0] * zmm6[0]

if (zmm5[0] < 9.99999975e-05f || not(cond:0_1))
    zmm2 = 0xbf800000
    zmm13 = zx.o(0)
    zmm12 = zx.o(0)

int32_t rcx = 0
float zmm1[0x4] = 0x7f7fffff
int32_t i_6 = 0
float zmm9[0x4] = 0x358637bd
int64_t rbx
int64_t arg_8 = rbx
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
var_188 = data_142d3f7e0
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
float zmm0[0x4] = arg10
zmm0[0] = zmm0[0] f+ *(arg2 + 0x2c)
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm14[0x4]
float var_c8[0x4] = zmm14
float var_294 = 3.40282347e+38f
arg10 = zmm0[0]
float zmm15[0x4]
float var_d8[0x4] = zmm15
int32_t var_2b0
int32_t var_2ac
int32_t var_2a8
uint64_t var_290
uint64_t var_280
int32_t var_278
uint64_t var_270
float var_260
float var_25c
float var_258
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rcx_1

while (true)
    rcx_1 = rcx + 1
    var_2b4 = rcx_1
    
    if (rcx s>= 0x20)
        break
    
    void* rax_7 = var_230
    float zmm4[0x4] = *(rax_7 + 0x28)
    zmm7 = *(rax_7 + 0x2c)
    zmm14 = *(rax_7 + 0x30)
    void* rcx_2 = *(rax_7 + 0x10)
    zmm2[0] = zmm2[0] * zmm4[0]
    zmm13[0] = zmm13[0] * zmm7[0]
    bool cond:1_1 = zmm2[0] <= -0f
    zmm12[0] = zmm12[0] * zmm14[0]
    
    if (cond:1_1)
        zmm5 = *(rcx_2 + 0x1c)
    else
        zmm5 = *(rcx_2 + 0x10)
    
    if (zmm13[0] <= -0f)
        zmm15 = *(rcx_2 + 0x20)
    else
        zmm15 = *(rcx_2 + 0x14)
    
    if (zmm12[0] <= -0f)
        zmm0 = *(rcx_2 + 0x24)
    else
        zmm0 = *(rcx_2 + 0x18)
    
    zmm8 = (*rdx)[1]
    void* rax_8 = var_228
    zmm14[0] = zmm14[0] * zmm0[0]
    zmm4[0] = zmm4[0] * zmm5[0]
    zmm5 = (*rdx)[2]
    zmm13[0] = zmm13[0] * zmm5[0]
    zmm2[0] = zmm2[0] * zmm5[0]
    zmm12[0] = zmm12[0] * zmm8[0]
    float var_2b8_1 = zmm4[0]
    zmm4 = (*rdx)[3]
    zmm12[0] = zmm12[0] - zmm13[0]
    zmm15[0] = zmm15[0] * zmm7[0]
    zmm7 = *rdx
    zmm13[0] = zmm13[0] * zmm7[0]
    zmm12[0] = zmm12[0] * zmm7[0]
    zmm12[0] = zmm12[0] + zmm12[0]
    float var_1f0_1 = zmm14[0]
    zmm2[0] = zmm2[0] - zmm12[0]
    zmm2[0] = zmm2[0] * zmm8[0]
    zmm4[0] = zmm4[0] * zmm12[0]
    zmm13[0] = zmm13[0] - zmm2[0]
    zmm2[0] = zmm2[0] + zmm2[0]
    zmm4[0] = zmm4[0] + zmm2[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm13[0] = zmm13[0] + zmm13[0]
    zmm12[0] = zmm12[0] * zmm8[0]
    zmm2[0] = zmm2[0] * zmm5[0]
    zmm5 = *(rax_8 + 0x20)
    zmm13[0] = zmm13[0] * zmm8[0]
    zmm13[0] = zmm13[0] - zmm2[0]
    zmm13[0] = zmm13[0] * zmm7[0]
    zmm13[0] = zmm13[0] + zmm4[0]
    zmm4[0] = zmm4[0] * zmm2[0]
    zmm12[0] = zmm12[0] - zmm13[0]
    zmm2[0] = zmm2[0] * zmm7[0]
    zmm13[0] = zmm13[0] f* *(rax_8 + 0x1c)
    zmm4[0] = zmm4[0] + zmm13[0]
    zmm4[0] = zmm4[0] * zmm13[0]
    zmm2[0] = zmm2[0] - zmm12[0]
    zmm12[0] = zmm12[0] + zmm4[0]
    zmm4[0] = zmm4[0] + zmm12[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm2[0] = zmm2[0] + zmm4[0]
    zmm4 = *(rax_8 + 0x24)
    zmm13[0] = zmm13[0] + zmm12[0]
    zmm2[0] = zmm2[0] * zmm4[0]
    zmm13[0] = zmm13[0] + zmm2[0]
    float* rax_9
    int32_t r13_1
    
    if (zmm13[0] < zmm11[0])
        r13_1 = r13 | 0x20
        int32_t var_200_1 = *(rax_8 + 0x18)
        int64_t var_208
        rax_9 = &var_208
        var_208 = *(rax_8 + 0x10)
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
    
    int32_t rcx_4 = r13_1 & 0xffffffdf
    var_278 = rax_9[2]
    var_280 = *rax_9
    
    if ((r13_1.b & 0x20) == 0)
        rcx_4 = r13_1
    
    r13 = rcx_4
    
    if ((rcx_4.b & 0x10) != 0)
        r13 &= 0xffffffef
    
    zmm2 = var_280:4.d
    zmm4 = *arg3
    float temp0_8[0x4] = _mm_unpacklo_ps(var_280.d, var_278[0].q)
    float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_11[0x4] = _mm_unpacklo_ps(temp0_8, _mm_unpacklo_ps(zmm2, zmm11[0].q)[0].q)
    float temp0_12[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_12)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd2), temp0_9)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_18[0x4] = _mm_sub_ps(temp0_16, temp0_14)
    float temp0_19[0x4] = _mm_add_ps(temp0_18, temp0_18)
    float temp0_20[0x4] = _mm_mul_ps(temp0_17, temp0_19)
    float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_12)
    zmm1 = var_2b8_1
    float temp0_23[0x4] = _mm_add_ps(temp0_20, temp0_11)
    float temp0_28[0x4] = __addps_xmmps_memps(
        _mm_add_ps(
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd2), temp0_9), temp0_22), 
            temp0_23), 
        arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm1[0] = zmm1[0] - temp0_28[0]
    int64_t rdx_1 = sx.q(var_1a8.d)
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
    float var_1e0_1 = temp0_29[0]
    zmm14[0] = zmm14[0] - temp0_29[0]
    int64_t rcx_5 = rdx_1 * 3
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
    zmm15[0] = zmm15[0] - temp0_30[0]
    int32_t i_7 = rdx_1.d + 1
    *(&var_178 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm1, zmm15[0].q)).q
    (&var_170)[rcx_5] = var_1f0_1
    *(&var_148 + (rcx_5 << 2)) = (_mm_unpacklo_ps(temp0_28, temp0_30[0].q)).q
    (&var_140)[rcx_5] = var_1e0_1
    int64_t var_118
    *(&var_118 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm1, zmm15[0].q)).q
    int32_t var_110
    (&var_110)[rcx_5] = zmm14[0]
    var_1a8.d = rdx_1.d + 1
    
    if (rdx_1.d == 0)
        int64_t rax_22 = sx.q(var_1a8:4.d)
        int64_t rcx_13 = rax_22 * 3
        var_188[rax_22] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_13 << 2)))
        var_2a8 = (&var_110)[rcx_13]
    else
        uint64_t* rax_19
        
        if (rdx_1.d == 1)
            rax_19 = sub_1416e69d0(&var_290, &var_118, &var_1a8:4, &var_1a8, &var_188)
        label_1415fb6a9:
            zmm0 = zx.o(*rax_19)
            var_2a8 = rax_19[1].d
            i_7 = var_1a8.d
        else
            if (rdx_1.d == 2)
                rax_19, zmm11 = sub_1416fa750(&var_270, &var_118, &var_1a8, &var_188)
                goto label_1415fb6a9
            
            if (rdx_1.d == 3)
                uint64_t var_1b8[0x2]
                rax_19, zmm11 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
                goto label_1415fb6a9
            
            int32_t var_298_1 = 0
            zmm0 = _mm_unpacklo_ps(zmm11, zmm11[0].q)
            var_2a8 = 0
    
    int32_t var_198
    int64_t r8_3 = sx.q(var_198)
    rbx = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t r11_1 = sx.q(var_1a0.d)
    int64_t r10_1 = sx.q(var_1a0:4.d)
    zmm5 = var_2a8
    int64_t rdi = r8_3 * 3
    int32_t rax_23 = (&var_110)[rdi]
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_6 = (&var_110)[r14_1]
    int32_t rcx_14 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    zmm9 = 0x358637bd
    var_2b0.q = zmm0.q
    zmm4 = var_2b0
    int64_t var_10c_1 = *(&var_118 + (r14_1 << 2))
    zmm2 = var_188[r10_1]
    int64_t var_f4_1 = *(&var_118 + (rdi << 2))
    zmm0 = var_188[rbx]
    int64_t var_100_1 = *(&var_118 + (rsi_1 << 2))
    zmm1 = var_188[r11_1]
    var_118 = *(&var_118 + (r15_1 << 2))
    zmm3 = var_188[r8_3]
    int32_t r8_4 = (&var_170)[r15_1]
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rdi << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = rdx_6
    int32_t rdx_7 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_14
    int32_t rcx_15 = (&var_170)[rsi_1]
    int32_t var_ec_1 = rax_23
    int32_t rax_24 = (&var_170)[rdi]
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r14_1 << 2)))
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rdi << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (rsi_1 << 2)))
    var_178 = *(&var_178 + (r15_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r15_1 << 2)))
    var_170 = r8_4
    int32_t r8_5 = (&var_140)[r15_1]
    int32_t var_164_1 = rdx_7
    int32_t rdx_8 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_15
    int32_t rcx_16 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_24
    int32_t rax_25 = (&var_140)[rdi]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r9_4
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_2ac
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_5
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = rdx_8
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_128_1 = rcx_16
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_11c_1 = rax_25
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < 9.99999997e-07f || zmm3[0] >= var_294)
        i_6 = i_7
        zmm1 = zmm3
        rcx_1 = var_2b4
        var_294 = zmm3[0]
        break
    
    zmm12 = 0x3f800000
    i_6 = i_7
    zmm1 = zmm3
    rdx = var_218
    rcx = var_2b4
    float temp0_35[0x4] = _mm_sqrt_ss(0, zmm3[0])
    var_294 = zmm3[0]
    zmm12[0] = 1f / temp0_35[0]
    zmm2 = zmm12
    zmm13 = zmm12
    zmm2[0] = zmm2[0] * zmm4[0]
    zmm13[0] = zmm13[0] * zmm3[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    continue

if (arg11 != 0)
    *arg11 = rcx_1

float result

if (zmm1[0] <= zmm9[0])
    var_270 = 0
    int64_t var_268_1 = 0
    var_290 = 0
    int64_t var_288_1 = 0
    sub_14083ad30(&var_270, 8)
    
    if (var_288_1:4.d s< 8)
        sub_14083ad30(&var_290, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t rsi_2 = sx.q(var_268_1.d)
            int32_t rax_29 = (rsi_2 + 1).d
            var_268_1.d = rax_29
            
            if (rax_29 s> var_268_1:4.d)
                sub_14083a7e0(&var_270)
            
            uint64_t rcx_20 = var_270
            int64_t rdx_11 = rsi_2 * 3
            int32_t rax_30 = *(&var_170 + rbx)
            *(rcx_20 + (rdx_11 << 2)) = *(&var_178 + rbx)
            *(rcx_20 + (rdx_11 << 2) + 8) = rax_30
            int64_t rsi_3 = sx.q(var_288_1.d)
            int32_t rax_31 = (rsi_3 + 1).d
            var_288_1.d = rax_31
            
            if (rax_31 s> var_288_1:4.d)
                sub_14083a7e0(&var_290)
            
            uint64_t rcx_22 = var_290
            int64_t rdx_13 = rsi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_32 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_22 + (rdx_13 << 2)) = zmm0_1
            *(rcx_22 + (rdx_13 << 2) + 8) = rax_32
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_33
    float zmm9_1
    float zmm11_1[0x4]
    rax_33, zmm9_1, zmm11_1 = sub_1415c4de0(&var_270, &var_290, &var_230, &var_228, &var_2b4, 
        &var_280, &var_260, &var_2b0)
    float zmm2_1[0x4]
    
    if (rax_33 == 2)
        float zmm5_1 = zmm11_1[0]
        float zmm6_1 = zmm11_1[0]
        int64_t zmm4_1 = zmm11_1[0].q
        
        if (i_6 s> 0)
            float (* rax_36)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_36
                rax_36 = &(*rax_36)[1]
                zmm2_1[0] = zmm2_1[0] f* *(&var_178 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_178:4 + r12)
                zmm5_1 = zmm5_1 + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_170 + r12)
                zmm6_1 = zmm6_1 + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148 + r12)
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148:4 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_140 + r12)
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                r12 += 0xc
                zmm4_1.d = zmm4_1.d f+ zmm2_1[0]
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm8 = arg10
        zmm2_1 = arg8
        zmm8[0] = zmm8[0] + zmm2_1[0]
        *arg4 = zmm8[0]
        *arg7 = var_280
        arg7[2] = var_278
        zmm2_1[0] = zmm2_1[0] f* *arg7
        zmm2_1[0] = zmm2_1[0] f* arg7[1]
        zmm2_1[0] = zmm2_1[0] f* arg7[2]
        zmm2_1[0] = zmm2_1[0] + zmm5_1
        zmm2_1[0] = zmm2_1[0] + zmm6_1
        zmm2_1[0] = zmm2_1[0] + zmm11_1[0]
        *arg5 = (_mm_unpacklo_ps(zmm2_1, zmm2_1[0].q)).q
        arg5[1].d = zmm2_1[0]
        zmm8[0] = zmm8[0] f* *arg7
        zmm8[0] = zmm8[0] f* arg7[1]
        zmm8[0] = zmm8[0] f* arg7[2]
        zmm11_1[0] = zmm11_1[0] - zmm8[0]
        zmm4_1.d = zmm4_1.d f- zmm8[0]
        zmm11_1[0] = zmm11_1[0] - zmm8[0]
        *arg6 = (_mm_unpacklo_ps(zmm11_1, zmm4_1)).q
        arg6[1].d = zmm11_1[0]
        float temp1_1 = *arg4
        zmm9_1 - temp1_1
        uint64_t rcx_28 = var_290
        rbx.b = zmm9_1 < temp1_1
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        uint64_t rcx_29 = var_270
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        result = zx.d(rbx.b)
    else
        zmm2_1 = arg8
        zmm8 = arg10
        float zmm3_1[0x4] = var_2b0
        *arg7 = var_280
        float zmm0_2[0x4] = var_2b4
        zmm0_2[0] = zmm0_2[0] + zmm2_1[0]
        arg7[2] = var_278
        zmm0_2[0] = zmm0_2[0] + zmm8[0]
        *arg4 = zmm0_2[0]
        zmm2_1[0] = zmm2_1[0] f* *arg7
        zmm2_1[0] = zmm2_1[0] f* arg7[1]
        zmm2_1[0] = zmm2_1[0] f* arg7[2]
        zmm2_1[0] = zmm2_1[0] + var_260
        zmm2_1[0] = zmm2_1[0] + var_25c
        zmm2_1[0] = zmm2_1[0] + var_258
        *arg5 = (_mm_unpacklo_ps(zmm2_1, zmm2_1[0].q)).q
        float var_298_5 = zmm2_1[0]
        zmm2_1 = var_2ac
        arg5[1].d = var_298_5
        zmm8[0] = zmm8[0] f* *arg7
        zmm8[0] = zmm8[0] f* arg7[1]
        zmm8[0] = zmm8[0] f* arg7[2]
        zmm3_1[0] = zmm3_1[0] - zmm8[0]
        zmm0_2 = var_2a8
        zmm2_1[0] = zmm2_1[0] - zmm8[0]
        zmm0_2[0] = zmm0_2[0] - zmm8[0]
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)).q
        arg6[1].d = zmm0_2[0]
        uint64_t rcx_25 = var_290
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        uint64_t rcx_26 = var_270
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
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
    zmm15 = arg10
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
    zmm15[0] = zmm15[0] + zmm2[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_36[0] = temp0_36[0] * zmm5[0]
    temp0_36[0] = temp0_36[0] + temp0_36[0]
    zmm11[0] = zmm11[0] * temp0_36[0]
    zmm11[0] = zmm11[0] * temp0_36[0]
    zmm11[0] = zmm11[0] * temp0_36[0]
    float temp0_37[0x4] = _mm_unpacklo_ps(zmm11, zmm11[0].q)
    *arg7 = temp0_37.q
    float temp0_38[0x4] = __sqrtss_xmmss_memss(temp0_37[0], var_294)
    float var_298_2 = zmm11[0]
    zmm15[0] = zmm15[0] - temp0_38[0]
    arg7[2] = var_298_2
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

__security_check_cookie(rax_1 ^ &var_2f8)
return result
