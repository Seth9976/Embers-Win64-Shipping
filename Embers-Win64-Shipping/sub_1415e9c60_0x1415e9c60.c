// 函数: sub_1415e9c60
// 地址: 0x1415e9c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm12[0x4]
float var_a8[0x4] = zmm12
float zmm13[0x4]
float var_b8[0x4] = zmm13
void var_308
int64_t rax_1 = __security_cookie ^ &var_308
float zmm2[0x4] = *arg3
float zmm3[0x4] = zmm2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
int64_t r13 = 0
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_1[0] = (temp0 ^ 0x80000000)[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_3[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
float zmm11[0x4] = zx.o(0)
temp0_5[0] = temp0_4[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_188[0x4] = temp0_6
float var_1c8[0x4] = temp0_6
float (* rdx_1)[0x4] = &var_1c8
int32_t r9 = 0
zmm3 = *arg9 ^ 0x80000000
float zmm5[0x4] = (*arg9)[1] ^ 0x80000000
float zmm6[0x4] = (*arg9)[2] ^ 0x80000000
int32_t var_2a0 = 0
float (* var_250)[0x4] = arg1
zmm3[0] = zmm3[0] * zmm3[0]
void* var_228 = arg2
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

float zmm0[0x4] = data_142d3f7e0
int32_t r8 = 0
float zmm1[0x4] = 0x7f7fffff
int32_t i_6 = 0
float zmm15[0x4] = arg10
zmm15[0] = zmm15[0] f+ *(arg2 + 0x2c)
float zmm8[0x4] = 0x358637bd
int64_t rbx
int64_t arg_8 = rbx
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm9[0x4]
float var_78[0x4] = zmm9
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm14[0x4]
float var_c8[0x4] = zmm14
float var_2a4 = 3.40282347e+38f
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
var_188 = zmm0
int32_t var_2c4
int32_t var_2c0
int32_t var_2bc
int32_t var_2b8
uint64_t var_298
uint64_t var_288
int32_t var_280
uint64_t var_278
float var_260
float var_25c
float var_258
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t r8_1

while (true)
    r8_1 = r8 + 1
    var_2c4 = r8_1
    
    if (r8 s>= 0x20)
        break
    
    if (zmm2[0] <= -0f)
        zmm1 = (*arg1)[3]
    else
        zmm1 = *arg1
    
    float var_2c8_1 = zmm1[0]
    
    if (zmm13[0] <= -0f)
        zmm1 = arg1[1][0]
    else
        zmm1 = (*arg1)[1]
    
    float var_268_1 = zmm1[0]
    
    if (zmm12[0] <= -0f)
        zmm14 = (*arg1)[5]
    else
        zmm14 = (*arg1)[2]
    
    zmm5 = (*rdx_1)[2]
    zmm8 = (*rdx_1)[1]
    zmm7 = *rdx_1
    float zmm4[0x4] = (*rdx_1)[3]
    void* rax_6 = var_228
    zmm13[0] = zmm13[0] * zmm5[0]
    zmm2[0] = zmm2[0] * zmm5[0]
    zmm12[0] = zmm12[0] * zmm8[0]
    zmm13[0] = zmm13[0] * zmm7[0]
    zmm12[0] = zmm12[0] - zmm13[0]
    float var_1f0_1 = zmm14[0]
    zmm12[0] = zmm12[0] * zmm7[0]
    zmm12[0] = zmm12[0] + zmm12[0]
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
    zmm5 = *(rax_6 + 0x20)
    zmm13[0] = zmm13[0] * zmm8[0]
    zmm13[0] = zmm13[0] - zmm2[0]
    zmm13[0] = zmm13[0] * zmm7[0]
    zmm13[0] = zmm13[0] + zmm4[0]
    zmm4[0] = zmm4[0] * zmm2[0]
    zmm12[0] = zmm12[0] - zmm13[0]
    zmm2[0] = zmm2[0] * zmm7[0]
    zmm13[0] = zmm13[0] f* *(rax_6 + 0x1c)
    zmm4[0] = zmm4[0] + zmm13[0]
    zmm4[0] = zmm4[0] * zmm13[0]
    zmm2[0] = zmm2[0] - zmm12[0]
    zmm12[0] = zmm12[0] + zmm4[0]
    zmm4[0] = zmm4[0] + zmm12[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm2[0] = zmm2[0] + zmm4[0]
    zmm4 = *(rax_6 + 0x24)
    zmm13[0] = zmm13[0] + zmm12[0]
    zmm2[0] = zmm2[0] * zmm4[0]
    zmm13[0] = zmm13[0] + zmm2[0]
    float* rax_7
    int32_t r9_1
    
    if (zmm13[0] < zmm11[0])
        r9_1 = r9 | 0x20
        int32_t var_200_1 = *(rax_6 + 0x18)
        int64_t var_208
        rax_7 = &var_208
        var_208 = *(rax_6 + 0x10)
    else
        zmm2 = *(rax_6 + 0x28)
        r9_1 = r9 | 0x10
        zmm2[0] = zmm2[0] f* *(rax_6 + 0x1c)
        zmm2[0] = zmm2[0] * zmm5[0]
        zmm2[0] = zmm2[0] f+ *(rax_6 + 0x10)
        zmm2[0] = zmm2[0] * zmm4[0]
        zmm2[0] = zmm2[0] f+ *(rax_6 + 0x14)
        zmm2[0] = zmm2[0] f+ *(rax_6 + 0x18)
        var_260 = zmm2[0]
        rax_7 = &var_260
        var_25c = zmm2[0]
        var_258 = zmm2[0]
    
    int32_t rdx_3 = r9_1 & 0xffffffdf
    var_280 = rax_7[2]
    var_288 = *rax_7
    
    if ((r9_1.b & 0x20) == 0)
        rdx_3 = r9_1
    
    int32_t var_2a0_1 = rdx_3
    
    if ((rdx_3.b & 0x10) != 0)
        var_2a0_1 = rdx_3 & 0xffffffef
    
    zmm2 = var_288:4.d
    zmm4 = *arg3
    float temp0_8[0x4] = _mm_unpacklo_ps(var_288.d, var_280[0].q)
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
    zmm1 = var_268_1
    float temp0_23[0x4] = _mm_add_ps(temp0_20, temp0_11)
    zmm5 = var_2c8_1
    float temp0_28[0x4] = __addps_xmmps_memps(
        _mm_add_ps(
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd2), temp0_9), temp0_22), 
            temp0_23), 
        arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm5[0] = zmm5[0] - temp0_28[0]
    int64_t r8_2 = sx.q(var_1a8.d)
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
    float var_1e0_1 = temp0_29[0]
    zmm14[0] = zmm14[0] - temp0_29[0]
    int64_t rdx_4 = r8_2 * 3
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
    zmm1[0] = zmm1[0] - temp0_30[0]
    int32_t i_7 = r8_2.d + 1
    *(&var_178 + (rdx_4 << 2)) = (_mm_unpacklo_ps(zmm5, zmm1[0].q)).q
    (&var_170)[rdx_4] = var_1f0_1
    *(&var_148 + (rdx_4 << 2)) = (_mm_unpacklo_ps(temp0_28, temp0_30[0].q)).q
    (&var_140)[rdx_4] = var_1e0_1
    int64_t var_118
    *(&var_118 + (rdx_4 << 2)) = (_mm_unpacklo_ps(zmm5, zmm1[0].q)).q
    int32_t var_110
    (&var_110)[rdx_4] = zmm14[0]
    var_1a8.d = r8_2.d + 1
    
    if (r8_2.d == 0)
        int64_t rax_20 = sx.q(var_1a8:4.d)
        int64_t rdx_12 = rax_20 * 3
        var_188[rax_20] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rdx_12 << 2)))
        var_2b8 = (&var_110)[rdx_12]
    else
        uint64_t* rax_17
        
        if (r8_2.d == 1)
            rax_17 = sub_1416e69d0(&var_298, &var_118, &var_1a8:4, &var_1a8, &var_188)
        label_1415ea1a5:
            zmm0 = zx.o(*rax_17)
            arg1 = var_250
            var_2b8 = rax_17[1].d
            i_7 = var_1a8.d
        else
            if (r8_2.d == 2)
                rax_17, zmm11, zmm15 = sub_1416fa750(&var_278, &var_118, &var_1a8, &var_188)
                goto label_1415ea1a5
            
            if (r8_2.d == 3)
                uint64_t var_1b8[0x2]
                rax_17, zmm11, zmm15 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
                goto label_1415ea1a5
            
            int32_t var_2a8_1 = 0
            zmm0 = _mm_unpacklo_ps(zmm11, zmm11[0].q)
            var_2b8 = 0
    
    int32_t var_198
    int64_t r9_7 = sx.q(var_198)
    int64_t rdi = sx.q(var_1a8:4.d)
    int64_t var_1a0
    rbx = sx.q(var_1a0.d)
    int64_t r11_1 = sx.q(var_1a0:4.d)
    zmm5 = var_2b8
    int64_t rsi_1 = r9_7 * 3
    int32_t rax_21 = (&var_110)[rsi_1]
    int64_t r12_1 = rdi * 3
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int32_t r8_7 = (&var_110)[r15_1]
    int32_t rdx_13 = (&var_110)[r14_1]
    int32_t r10_1 = (&var_110)[r12_1]
    zmm8 = 0x358637bd
    var_2c0.q = zmm0.q
    zmm4 = var_2c0
    int64_t var_10c_1 = *(&var_118 + (r15_1 << 2))
    zmm2 = var_188[r11_1]
    int64_t var_f4_1 = *(&var_118 + (rsi_1 << 2))
    zmm0 = var_188[rdi]
    int64_t var_100_1 = *(&var_118 + (r14_1 << 2))
    zmm1 = var_188[rbx]
    var_118 = *(&var_118 + (r12_1 << 2))
    zmm3 = var_188[r9_7]
    int32_t r9_8 = (&var_170)[r12_1]
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r15_1 << 2)))
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = r8_7
    int32_t r8_8 = (&var_170)[r15_1]
    int32_t var_f8_1 = rdx_13
    int32_t rdx_14 = (&var_170)[r14_1]
    int32_t var_ec_1 = rax_21
    int32_t rax_22 = (&var_170)[rsi_1]
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r15_1 << 2)))
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rsi_1 << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (r14_1 << 2)))
    var_178 = *(&var_178 + (r12_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r12_1 << 2)))
    var_170 = r9_8
    int32_t r9_9 = (&var_140)[r12_1]
    int32_t var_164_1 = r8_8
    int32_t r8_9 = (&var_140)[r15_1]
    int32_t var_158_1 = rdx_14
    int32_t rdx_15 = (&var_140)[r14_1]
    int32_t var_14c_1 = rax_22
    int32_t rax_23 = (&var_140)[rsi_1]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r10_1
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_2bc
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r9_9
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = r8_9
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_128_1 = rdx_15
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_11c_1 = rax_23
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < 9.99999997e-07f || zmm3[0] >= var_2a4)
        i_6 = i_7
        zmm1 = zmm3
        r8_1 = var_2c4
        var_2a4 = zmm3[0]
        break
    
    zmm12 = 0x3f800000
    r9 = var_2a0_1
    zmm1 = zmm3
    i_6 = i_7
    rdx_1 = var_218
    r8 = var_2c4
    float temp0_35[0x4] = _mm_sqrt_ss(0, zmm3[0])
    var_2a4 = zmm3[0]
    zmm12[0] = 1f / temp0_35[0]
    zmm2 = zmm12
    zmm13 = zmm12
    zmm2[0] = zmm2[0] * zmm4[0]
    zmm13[0] = zmm13[0] * zmm3[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    continue

if (arg11 != 0)
    *arg11 = r8_1

float result

if (zmm1[0] <= zmm8[0])
    var_278 = 0
    int64_t var_270_1 = 0
    var_298 = 0
    int64_t var_290_1 = 0
    sub_14083ad30(&var_278, 8)
    
    if (var_290_1:4.d s< 8)
        sub_14083ad30(&var_298, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t rsi_2 = sx.q(var_270_1.d)
            int32_t rax_27 = (rsi_2 + 1).d
            var_270_1.d = rax_27
            
            if (rax_27 s> var_270_1:4.d)
                sub_14083a7e0(&var_278)
            
            uint64_t rcx_7 = var_278
            int64_t rdx_17 = rsi_2 * 3
            int32_t rax_28 = *(&var_170 + rbx)
            *(rcx_7 + (rdx_17 << 2)) = *(&var_178 + rbx)
            *(rcx_7 + (rdx_17 << 2) + 8) = rax_28
            int64_t rsi_3 = sx.q(var_290_1.d)
            int32_t rax_29 = (rsi_3 + 1).d
            var_290_1.d = rax_29
            
            if (rax_29 s> var_290_1:4.d)
                sub_14083a7e0(&var_298)
            
            uint64_t rcx_9 = var_298
            int64_t rdx_19 = rsi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_30 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_9 + (rdx_19 << 2)) = zmm0_1
            *(rcx_9 + (rdx_19 << 2) + 8) = rax_30
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_31
    float zmm8_1
    float zmm11_1[0x4]
    float zmm15_1[0x4]
    rax_31, zmm8_1, zmm11_1, zmm15_1 = sub_141563560(&var_278, &var_298, &var_250, &var_228, 
        &var_2c4, &var_288, &var_260, &var_2c0)
    float zmm2_1[0x4]
    
    if (rax_31 == 2)
        float zmm5_1 = zmm11_1[0]
        float zmm6_1 = zmm11_1[0]
        int64_t zmm4_1 = zmm11_1[0].q
        
        if (i_6 s> 0)
            float (* rax_34)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_34
                rax_34 = &(*rax_34)[1]
                zmm2_1[0] = zmm2_1[0] f* *(&var_178 + r13)
                zmm2_1[0] = zmm2_1[0] f* *(&var_178:4 + r13)
                zmm5_1 = zmm5_1 + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_170 + r13)
                zmm6_1 = zmm6_1 + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148 + r13)
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148:4 + r13)
                zmm2_1[0] = zmm2_1[0] f* *(&var_140 + r13)
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                r13 += 0xc
                zmm4_1.d = zmm4_1.d f+ zmm2_1[0]
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm2_1 = arg8
        zmm15_1[0] = zmm15_1[0] + zmm2_1[0]
        *arg4 = zmm15_1[0]
        *arg7 = var_288
        arg7[1].d = var_280
        zmm2_1[0] = zmm2_1[0] f* *arg7
        zmm2_1[0] = zmm2_1[0] f* *(arg7 + 4)
        zmm2_1[0] = zmm2_1[0] f* arg7[1].d
        zmm2_1[0] = zmm2_1[0] + zmm5_1
        zmm2_1[0] = zmm2_1[0] + zmm6_1
        zmm2_1[0] = zmm2_1[0] + zmm11_1[0]
        *arg5 = (_mm_unpacklo_ps(zmm2_1, zmm2_1[0].q)).q
        arg5[1].d = zmm2_1[0]
        zmm15_1[0] = zmm15_1[0] f* *arg7
        zmm15_1[0] = zmm15_1[0] f* *(arg7 + 4)
        zmm15_1[0] = zmm15_1[0] f* arg7[1].d
        zmm11_1[0] = zmm11_1[0] - zmm15_1[0]
        zmm4_1.d = zmm4_1.d f- zmm15_1[0]
        zmm11_1[0] = zmm11_1[0] - zmm15_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm11_1, zmm4_1)).q
        arg6[1].d = zmm11_1[0]
        float temp1_1 = *arg4
        zmm8_1 - temp1_1
        uint64_t rcx_15 = var_298
        rbx.b = zmm8_1 < temp1_1
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        uint64_t rcx_16 = var_278
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        result = zx.d(rbx.b)
    else
        zmm2_1 = arg8
        float zmm3_1[0x4] = var_2c0
        *arg7 = var_288
        float zmm0_2[0x4] = var_2c4
        zmm0_2[0] = zmm0_2[0] + zmm2_1[0]
        arg7[1].d = var_280
        zmm0_2[0] = zmm0_2[0] + zmm15_1[0]
        *arg4 = zmm0_2[0]
        zmm2_1[0] = zmm2_1[0] f* *arg7
        uint64_t rcx_12 = var_298
        zmm2_1[0] = zmm2_1[0] f* *(arg7 + 4)
        zmm2_1[0] = zmm2_1[0] f* arg7[1].d
        zmm2_1[0] = zmm2_1[0] + var_260
        zmm2_1[0] = zmm2_1[0] + var_25c
        zmm2_1[0] = zmm2_1[0] + var_258
        *arg5 = (_mm_unpacklo_ps(zmm2_1, zmm2_1[0].q)).q
        float var_2a8_5 = zmm2_1[0]
        zmm2_1 = var_2bc
        arg5[1].d = var_2a8_5
        zmm15_1[0] = zmm15_1[0] f* *arg7
        zmm15_1[0] = zmm15_1[0] f* *(arg7 + 4)
        zmm15_1[0] = zmm15_1[0] f* arg7[1].d
        zmm3_1[0] = zmm3_1[0] - zmm15_1[0]
        zmm0_2 = var_2b8
        zmm2_1[0] = zmm2_1[0] - zmm15_1[0]
        zmm0_2[0] = zmm0_2[0] - zmm15_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)).q
        arg6[1].d = zmm0_2[0]
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        uint64_t rcx_13 = var_278
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        result.b = 1
else
    if (i_6 s> 0)
        float (* rax_24)[0x4] = &var_188
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_24
            rax_24 = &(*rax_24)[1]
            zmm2[0] = zmm2[0] f* *(&var_178 + r13)
            zmm2[0] = zmm2[0] f* *(&var_178:4 + r13)
            zmm11[0] = zmm11[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_170 + r13)
            zmm11[0] = zmm11[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148 + r13)
            zmm11[0] = zmm11[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148:4 + r13)
            zmm2[0] = zmm2[0] f* *(&var_140 + r13)
            zmm11[0] = zmm11[0] + zmm2[0]
            r13 += 0xc
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
    float temp0_38[0x4] = __sqrtss_xmmss_memss(temp0_37[0], var_2a4)
    float var_2a8_2 = temp0_36[0]
    zmm15[0] = zmm15[0] - temp0_38[0]
    arg7[1].d = var_2a8_2
    *arg4 = zmm15[0]
    zmm2[0] = zmm2[0] f* *arg7
    zmm2[0] = zmm2[0] f* *(arg7 + 4)
    zmm2[0] = zmm2[0] f* arg7[1].d
    zmm2[0] = zmm2[0] + zmm11[0]
    zmm2[0] = zmm2[0] + zmm11[0]
    zmm2[0] = zmm2[0] + zmm11[0]
    *arg5 = (_mm_unpacklo_ps(zmm2, zmm2[0].q)).q
    arg5[1].d = zmm2[0]
    zmm15[0] = zmm15[0] f* *arg7
    zmm15[0] = zmm15[0] f* *(arg7 + 4)
    zmm15[0] = zmm15[0] f* arg7[1].d
    zmm11[0] = zmm11[0] - zmm15[0]
    zmm11[0] = zmm11[0] - zmm15[0]
    zmm11[0] = zmm11[0] - zmm15[0]
    *arg6 = (_mm_unpacklo_ps(zmm11, zmm11[0].q)).q
    arg6[1].d = zmm11[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_308)
return result
