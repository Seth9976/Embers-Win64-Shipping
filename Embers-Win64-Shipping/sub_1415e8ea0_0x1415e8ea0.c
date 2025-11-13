// 函数: sub_1415e8ea0
// 地址: 0x1415e8ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm12[0x4]
float var_a8[0x4] = zmm12
void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
float zmm2[0x4] = *arg3
float zmm9[0x4] = zx.o(0)
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
float (* r8)[0x4] = &var_1c8
zmm3 = *arg9 ^ 0x80000000
float zmm5[0x4] = (*arg9)[1] ^ 0x80000000
float zmm6[0x4] = (*arg9)[2] ^ 0x80000000
zmm3[0] = zmm3[0] * zmm3[0]
int64_t var_258 = arg2
zmm5[0] = zmm5[0] * zmm5[0]
int64_t var_220 = arg11
zmm6[0] = zmm6[0] * zmm6[0]
float (* var_248)[0x4] = arg1
zmm5[0] = zmm5[0] + zmm3[0]
int64_t var_210 = arg2
float (* var_200)[0x4] = &var_1c8
zmm5[0] = zmm5[0] + zmm6[0]
bool cond:0_1

if (not(zmm5[0] < 9.99999975e-05f))
    zmm10 = 0x3f800000
    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm5[0])
    cond:0_1 = temp0_7[0] != 0f
    zmm10[0] = 1f / temp0_7[0]
    zmm11 = zmm10
    zmm12 = zmm10
    zmm11[0] = zmm11[0] * zmm3[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm10[0] = zmm10[0] * zmm6[0]

if (zmm5[0] < 9.99999975e-05f || not(cond:0_1))
    zmm11 = 0xbf800000
    zmm12 = zx.o(0)
    zmm10 = zx.o(0)

float zmm0[0x4] = data_142d3f7e0
int64_t r13 = 0
float zmm1[0x4] = 0x7f7fffff
int32_t r9 = 0
int128_t zmm15 = 0x80000000
int32_t i_6 = 0
int64_t rbx
int64_t arg_8 = rbx
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm13[0x4]
float var_b8[0x4] = zmm13
float zmm14[0x4]
float var_c8[0x4] = zmm14
float var_284 = 3.40282347e+38f
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
var_188 = zmm0
int32_t var_2a4
uint64_t var_2a0
int32_t var_298
uint64_t var_280
uint64_t var_270
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t r9_1

while (true)
    r9_1 = r9 + 1
    var_2a4 = r9_1
    
    if (r9 s>= 0x20)
        zmm10 = 0x358637bd
        break
    
    if (zmm11[0] f<= zmm15.d)
        zmm0 = (*arg1)[3]
    else
        zmm0 = *arg1
    
    float var_2a8_1 = zmm0[0]
    
    if (zmm12[0] f<= zmm15.d)
        zmm0 = arg1[1][0]
    else
        zmm0 = (*arg1)[1]
    
    float var_260_1 = zmm0[0]
    
    if (zmm10[0] f<= zmm15.d)
        zmm14 = (*arg1)[5]
    else
        zmm14 = (*arg1)[2]
    
    zmm6 = (*r8)[1]
    zmm7 = (*r8)[2]
    zmm3 = *r8
    zmm2 = (*r8)[3]
    zmm12[0] = zmm12[0] * zmm7[0]
    zmm12[0] = zmm12[0] * zmm3[0]
    zmm10[0] = zmm10[0] * zmm6[0]
    zmm11[0] = zmm11[0] * zmm7[0]
    zmm10[0] = zmm10[0] - zmm12[0]
    float var_1f0_1 = zmm14[0]
    zmm10[0] = zmm10[0] * zmm3[0]
    zmm10[0] = zmm10[0] + zmm10[0]
    zmm11[0] = zmm11[0] - zmm10[0]
    zmm11[0] = zmm11[0] * zmm6[0]
    zmm12[0] = zmm12[0] - zmm11[0]
    zmm10[0] = zmm10[0] * zmm7[0]
    zmm11[0] = zmm11[0] + zmm11[0]
    zmm12[0] = zmm12[0] + zmm12[0]
    zmm2[0] = zmm2[0] * zmm11[0]
    zmm2[0] = zmm2[0] + zmm12[0]
    zmm12[0] = zmm12[0] * zmm3[0]
    zmm11[0] = zmm11[0] * zmm7[0]
    zmm10[0] = zmm10[0] - zmm12[0]
    zmm11[0] = zmm11[0] * zmm3[0]
    zmm10[0] = zmm10[0] * zmm6[0]
    zmm10[0] = zmm10[0] + zmm2[0]
    zmm2[0] = zmm2[0] * zmm12[0]
    zmm12[0] = zmm12[0] * zmm6[0]
    zmm11[0] = zmm11[0] - zmm10[0]
    zmm2[0] = zmm2[0] * zmm10[0]
    zmm2[0] = zmm2[0] + zmm10[0]
    zmm12[0] = zmm12[0] - zmm11[0]
    zmm2[0] = zmm2[0] + zmm11[0]
    zmm11[0] = zmm11[0] + zmm2[0]
    zmm12[0] = zmm12[0] + zmm2[0]
    
    if (zmm12[0] >= zmm9[0])
        zmm3 = *(arg2 + 0xc)
    else
        zmm3 = *arg2
    
    if (zmm10[0] >= zmm9[0])
        zmm2 = *(arg2 + 0x10)
    else
        zmm2 = *(arg2 + 4)
    
    if (zmm11[0] >= zmm9[0])
        zmm0 = *(arg2 + 0x14)
    else
        zmm0 = *(arg2 + 8)
    
    float temp0_10[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), _mm_unpacklo_ps(zmm2, zmm9[0].q)[0].q)
    float zmm4[0x4] = *arg3
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
    float temp0_12[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_14[0x4] = _mm_mul_ps(temp0_11, temp0_13)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd2), temp0_12)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_18[0x4] = _mm_sub_ps(temp0_16, temp0_14)
    float temp0_19[0x4] = _mm_add_ps(temp0_18, temp0_18)
    float temp0_20[0x4] = _mm_mul_ps(temp0_17, temp0_19)
    float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_13)
    zmm1 = var_260_1
    float temp0_23[0x4] = _mm_add_ps(temp0_20, temp0_10)
    zmm5 = var_2a8_1
    float temp0_28[0x4] = __addps_xmmps_memps(
        _mm_add_ps(
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd2), temp0_12), temp0_22), 
            temp0_23), 
        arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm5[0] = zmm5[0] - temp0_28[0]
    int64_t r8_1 = sx.q(var_1a8.d)
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
    float var_1e0_1 = temp0_29[0]
    zmm14[0] = zmm14[0] - temp0_29[0]
    int64_t rdx = r8_1 * 3
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
    zmm1[0] = zmm1[0] - temp0_30[0]
    int32_t i_7 = r8_1.d + 1
    *(&var_178 + (rdx << 2)) = (_mm_unpacklo_ps(zmm5, zmm1[0].q)).q
    (&var_170)[rdx] = var_1f0_1
    *(&var_148 + (rdx << 2)) = (_mm_unpacklo_ps(temp0_28, temp0_30[0].q)).q
    (&var_140)[rdx] = var_1e0_1
    int64_t var_118
    *(&var_118 + (rdx << 2)) = (_mm_unpacklo_ps(zmm5, zmm1[0].q)).q
    int32_t var_110
    (&var_110)[rdx] = zmm14[0]
    var_1a8.d = r8_1.d + 1
    
    if (r8_1.d == 0)
        int64_t rax_15 = sx.q(var_1a8:4.d)
        int64_t rdx_8 = rax_15 * 3
        var_188[rax_15] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rdx_8 << 2)))
        var_298 = (&var_110)[rdx_8]
    else
        uint64_t* rax_12
        
        if (r8_1.d == 1)
            rax_12, zmm9 = sub_1416e69d0(&var_280, &var_118, &var_1a8:4, &var_1a8, &var_188)
        label_1415e933d:
            zmm0 = zx.o(*rax_12)
            int32_t i_8 = var_1a8.d
            arg1 = var_248
            var_298 = rax_12[1].d
            var_258 = var_210
            i_7 = i_8
        else
            if (r8_1.d == 2)
                rax_12, zmm9, zmm15 = sub_1416fa750(&var_270, &var_118, &var_1a8, &var_188)
                goto label_1415e933d
            
            if (r8_1.d == 3)
                uint64_t var_1b8[0x2]
                rax_12, zmm9, zmm15 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
                goto label_1415e933d
            
            int32_t var_288_1 = 0
            zmm0 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
            var_298 = 0
    
    int32_t var_198
    int64_t r9_5 = sx.q(var_198)
    int64_t rdi = sx.q(var_1a8:4.d)
    int64_t var_1a0
    rbx = sx.q(var_1a0.d)
    int64_t r11_1 = sx.q(var_1a0:4.d)
    zmm5 = var_298
    int64_t rsi_1 = r9_5 * 3
    int32_t rax_16 = (&var_110)[rsi_1]
    int64_t r12_1 = rdi * 3
    zmm3 = zx.o(*(&var_118 + (r12_1 << 2)))
    int64_t r15_1 = rbx * 3
    zmm2 = zx.o(*(&var_118 + (r15_1 << 2)))
    int64_t r14_1 = r11_1 * 3
    int32_t r8_6 = (&var_110)[r15_1]
    zmm1 = zx.o(*(&var_118 + (r14_1 << 2)))
    int32_t rdx_9 = (&var_110)[r14_1]
    int32_t r10_2 = (&var_110)[r12_1]
    zmm10 = 0x358637bd
    var_2a0 = zmm0.q
    zmm4 = var_2a0.d
    int64_t var_10c_1 = zmm2.q
    zmm2 = var_188[r11_1]
    int64_t var_f4_1 = *(&var_118 + (rsi_1 << 2))
    zmm0 = var_188[rdi]
    int64_t var_100_1 = zmm1.q
    zmm1 = var_188[rbx]
    var_118 = zmm3.q
    zmm3 = var_188[r9_5]
    int32_t r9_6 = (&var_170)[r12_1]
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r15_1 << 2)))
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = r8_6
    int32_t r8_7 = (&var_170)[r15_1]
    int32_t var_f8_1 = rdx_9
    int32_t rdx_10 = (&var_170)[r14_1]
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
    int32_t var_164_1 = r8_7
    int32_t r8_8 = (&var_140)[r15_1]
    int32_t var_158_1 = rdx_10
    int32_t rdx_11 = (&var_140)[r14_1]
    int32_t var_14c_1 = rax_17
    int32_t rax_18 = (&var_140)[rsi_1]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r10_2
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_2a0:4.d
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r9_7
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = r8_8
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_128_1 = rdx_11
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_11c_1 = rax_18
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < 9.99999997e-07f || zmm3[0] >= var_284)
        i_6 = i_7
        zmm1 = zmm3
        r9_1 = var_2a4
        var_284 = zmm3[0]
        break
    
    zmm10 = 0x3f800000
    arg2 = var_258
    zmm1 = zmm3
    i_6 = i_7
    r8 = var_200
    r9 = var_2a4
    float temp0_35[0x4] = _mm_sqrt_ss(0, zmm3[0])
    var_284 = zmm3[0]
    zmm10[0] = 1f / temp0_35[0]
    zmm11 = zmm10
    zmm12 = zmm10
    zmm11[0] = zmm11[0] * zmm4[0]
    zmm12[0] = zmm12[0] * zmm3[0]
    zmm10[0] = zmm10[0] * zmm5[0]
    continue

int64_t r10_3 = var_220

if (r10_3 != 0)
    *r10_3 = r9_1

uint32_t result

if (zmm1[0] <= zmm10[0])
    __builtin_memset(&var_280, 0, 0x20)
    sub_14083ad30(&var_270, 8)
    int64_t var_278
    
    if (var_278:4.d s< 8)
        sub_14083ad30(&var_280, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t var_268_1
            int64_t rsi_2 = sx.q(var_268_1.d)
            int32_t rax_22 = (rsi_2 + 1).d
            var_268_1.d = rax_22
            
            if (rax_22 s> var_268_1:4.d)
                sub_14083a7e0(&var_270)
            
            uint64_t rcx_7 = var_270
            int64_t rdx_13 = rsi_2 * 3
            int32_t rax_23 = *(&var_170 + rbx)
            *(rcx_7 + (rdx_13 << 2)) = *(&var_178 + rbx)
            *(rcx_7 + (rdx_13 << 2) + 8) = rax_23
            int64_t rsi_3 = sx.q(var_278.d)
            int32_t rax_24 = (rsi_3 + 1).d
            var_278.d = rax_24
            
            if (rax_24 s> var_278:4.d)
                sub_14083a7e0(&var_280)
            
            uint64_t rcx_9 = var_280
            int64_t rdx_15 = rsi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_25 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_9 + (rdx_15 << 2)) = zmm0_1
            *(rcx_9 + (rdx_15 << 2) + 8) = rax_25
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_26
    float zmm9_1[0x4]
    rax_26, zmm9_1, zmm10 = sub_141587b90(&var_270, &var_280, &var_248, &var_210, &var_2a4, 
        &var_2a0, &var_220, &var_258)
    uint128_t zmm0_2
    uint128_t zmm1_1
    uint128_t zmm2_1
    uint128_t zmm3_1
    uint128_t zmm4_1
    
    if (rax_26 == 2)
        float zmm6_1 = zmm9_1[0]
        zmm4_1 = zmm9_1
        int64_t zmm5_1 = zmm9_1[0].q
        
        if (i_6 s> 0)
            float (* rax_29)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_29
                rax_29 = &(*rax_29)[1]
                zmm0_2.d = zmm2_1.d f* *(&var_178 + r13)
                zmm1_1.d = zmm2_1.d f* *(&var_178:4 + r13)
                zmm6_1 = zmm6_1 f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_170 + r13)
                zmm9_1[0] = zmm9_1[0] f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_148 + r13)
                zmm9_1[0] = zmm9_1[0] f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_148:4 + r13)
                zmm2_1.d = zmm2_1.d f* *(&var_140 + r13)
                zmm4_1.d = zmm4_1.d f+ zmm1_1.d
                r13 += 0xc
                zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                zmm9_1[0] = zmm9_1[0] f+ zmm2_1.d
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm2_1 = arg8
        zmm3_1 = arg10
        zmm0_2.d = zmm2_1.d f+ zmm3_1.d
        *arg4 = zmm0_2.d
        *arg7 = var_2a0
        arg7[1].d = var_298
        zmm0_2.d = zmm2_1.d f* *arg7
        zmm1_1.d = zmm2_1.d f* *(arg7 + 4)
        zmm2_1.d = zmm2_1.d f* arg7[1].d
        zmm0_2.d = zmm0_2.d f+ zmm6_1
        zmm1_1.d = zmm1_1.d f+ zmm9_1[0]
        zmm2_1.d = zmm2_1.d f+ zmm9_1[0]
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm2_1.d
        zmm0_2.d = zmm3_1.d f* *arg7
        zmm1_1.d = zmm3_1.d f* *(arg7 + 4)
        zmm3_1.d = zmm3_1.d f* arg7[1].d
        zmm4_1.d = zmm4_1.d f- zmm0_2.d
        zmm5_1.d = zmm5_1.d f- zmm1_1.d
        zmm9_1[0] = zmm9_1[0] f- zmm3_1.d
        *arg6 = (_mm_unpacklo_ps(zmm4_1, zmm5_1)).q
        arg6[1].d = zmm9_1[0]
        float temp1_1 = *arg4
        zmm10[0] - temp1_1
        uint64_t rcx_15 = var_280
        rbx.b = zmm10[0] < temp1_1
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        uint64_t rcx_16 = var_270
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        result = zx.d(rbx.b)
    else
        zmm2_1 = arg8
        zmm4_1 = arg10
        zmm3_1 = var_258.d
        *arg7 = var_2a0
        zmm0_2.d = var_2a4.d f+ zmm2_1.d
        arg7[1].d = var_298
        zmm0_2.d = zmm0_2.d f+ zmm4_1.d
        *arg4 = zmm0_2.d
        zmm0_2.d = zmm2_1.d f* *arg7
        uint64_t rcx_12 = var_280
        zmm1_1.d = zmm2_1.d f* *(arg7 + 4)
        zmm2_1.d = zmm2_1.d f* arg7[1].d
        zmm0_2.d = zmm0_2.d f+ var_220.d
        zmm1_1.d = zmm1_1.d f+ var_220:4.d
        int32_t var_218
        zmm2_1.d = zmm2_1.d f+ var_218
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm2_1.d
        zmm0_2.d = zmm4_1.d f* *arg7
        zmm1_1.d = zmm4_1.d f* *(arg7 + 4)
        zmm4_1.d = zmm4_1.d f* arg7[1].d
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm2_1.d = var_258:4.d.d f- zmm1_1.d
        int32_t var_250
        zmm0_2.d = var_250.d f- zmm4_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
        arg6[1].d = zmm0_2.d
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        uint64_t rcx_13 = var_270
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        result.b = 1
else
    if (i_6 s> 0)
        float (* rax_19)[0x4] = &var_188
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_19
            rax_19 = &(*rax_19)[1]
            zmm2[0] = zmm2[0] f* *(&var_178 + r13)
            zmm2[0] = zmm2[0] f* *(&var_178:4 + r13)
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_170 + r13)
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148 + r13)
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148:4 + r13)
            zmm2[0] = zmm2[0] f* *(&var_140 + r13)
            zmm9[0] = zmm9[0] + zmm2[0]
            r13 += 0xc
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm9[0] = zmm9[0] + zmm2[0]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    zmm3 = zx.o(0)
    zmm5 = 0x3f000000
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] + zmm9[0]
    zmm9[0] = zmm9[0] + zmm9[0]
    zmm3[0] = zmm9[0]
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
    zmm3 = arg10
    temp0_36[0] = temp0_36[0] * zmm5[0]
    temp0_36[0] = temp0_36[0] + temp0_36[0]
    temp0_36[0] = temp0_36[0] * zmm9[0]
    temp0_36[0] = temp0_36[0] * zmm9[0]
    temp0_36[0] = temp0_36[0] * zmm9[0]
    float temp0_37[0x4] = _mm_unpacklo_ps(temp0_36, temp0_36[0].q)
    *arg7 = temp0_37.q
    zmm2[0] = zmm2[0] + zmm3[0]
    float temp0_38[0x4] = __sqrtss_xmmss_memss(temp0_37[0], var_284)
    float var_288_2 = temp0_36[0]
    zmm2[0] = zmm2[0] - temp0_38[0]
    arg7[1].d = var_288_2
    *arg4 = zmm2[0]
    zmm2[0] = zmm2[0] f* *arg7
    zmm2[0] = zmm2[0] f* *(arg7 + 4)
    zmm2[0] = zmm2[0] f* arg7[1].d
    zmm2[0] = zmm2[0] + zmm9[0]
    zmm2[0] = zmm2[0] + zmm9[0]
    zmm2[0] = zmm2[0] + zmm9[0]
    *arg5 = (_mm_unpacklo_ps(zmm2, zmm2[0].q)).q
    arg5[1].d = zmm2[0]
    zmm3[0] = zmm3[0] f* *arg7
    zmm3[0] = zmm3[0] f* *(arg7 + 4)
    zmm3[0] = zmm3[0] f* arg7[1].d
    zmm9[0] = zmm9[0] - zmm3[0]
    zmm9[0] = zmm9[0] - zmm3[0]
    zmm9[0] = zmm9[0] - zmm3[0]
    float temp0_40[0x4] = _mm_unpacklo_ps(zmm9, zmm9[0].q)
    uint32_t var_288_4 = zmm9[0]
    *arg6 = temp0_40.q
    arg6[1].d = var_288_4
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2e8)
return result
