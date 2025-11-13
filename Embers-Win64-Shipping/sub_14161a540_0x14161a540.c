// 函数: sub_14161a540
// 地址: 0x14161a540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm13[0x4]
float var_b8[0x4] = zmm13
float zmm15[0x4]
float var_d8[0x4] = zmm15
void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
float zmm2[0x4] = *arg3
void* rdi = arg2
float zmm3[0x4] = zmm2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_2[0] = (temp0 ^ 0x80000000)[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
uint128_t zmm12 = zx.o(0)
temp0_4[0] = (temp0_1 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float zmm5[0x4] = *arg9 ^ 0x80000000
float zmm6[0x4] = *(arg9 + 4) ^ 0x80000000
float zmm7[0x4] = *(arg9 + 8) ^ 0x80000000
zmm6[0] = zmm6[0] * zmm6[0]
float var_1c8[0x4]
int128_t* r8 = &var_1c8
void* var_220 = arg1
zmm5[0] = zmm5[0] * zmm5[0]
void* var_218 = rdi
zmm7[0] = zmm7[0] * zmm7[0]
int128_t* var_208 = &var_1c8
zmm6[0] = zmm6[0] + zmm5[0]
float var_188[0x4] = temp0_6
var_1c8 = temp0_6
zmm6[0] = zmm6[0] + zmm7[0]
bool cond:0_1

if (not(zmm6[0] < 9.99999975e-05f))
    zmm13 = 0x3f800000
    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm6[0])
    cond:0_1 = temp0_7[0] != 0f
    zmm13[0] = 1f / temp0_7[0]
    zmm3 = zmm13
    zmm15 = zmm13
    zmm3[0] = zmm3[0] * zmm5[0]
    zmm15[0] = zmm15[0] * zmm6[0]
    zmm13[0] = zmm13[0] * zmm7[0]

if (zmm6[0] < 9.99999975e-05f || not(cond:0_1))
    zmm3 = 0xbf800000
    zmm15 = zx.o(0)
    zmm13 = zx.o(0)

float zmm0[0x4] = data_142d3f7e0
int64_t r12 = 0
float zmm1[0x4] = 0x7f7fffff
int32_t rdx_1 = 0
float zmm14[0x4] = arg8
int32_t i_6 = 0
zmm14[0] = zmm14[0] f+ *(arg1 + 0x1c)
float zmm8[0x4] = 0x358637bd
int64_t rbx
int64_t arg_8 = rbx
float zmm9[0x4]
float var_78[0x4] = zmm9
float zmm10[0x4]
float var_88[0x4] = zmm10
uint128_t zmm11
uint128_t var_98 = zmm11
float var_284 = 3.40282347e+38f
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
var_188 = zmm0
int32_t var_2a8
uint64_t var_2a0
int32_t var_298
uint64_t var_280
uint64_t var_270
float var_260
float var_25c
float var_258
int32_t var_250
int32_t var_24c
int32_t var_248
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rdx_2

while (true)
    rdx_2 = rdx_1 + 1
    var_2a8 = rdx_2
    
    if (rdx_1 s>= 0x20)
        break
    
    zmm8 = *(r8 + 4)
    zmm5 = *(r8 + 8)
    zmm7 = *r8
    float zmm4[0x4] = *(r8 + 0xc)
    int32_t rbx_1 = *(arg1 + 0x18)
    *(arg1 + 0x10)
    void* rcx = *(rdi + 0x10)
    zmm15[0] = zmm15[0] * zmm5[0]
    zmm3[0] = zmm3[0] * zmm5[0]
    zmm13[0] = zmm13[0] * zmm8[0]
    zmm15[0] = zmm15[0] * zmm7[0]
    zmm13[0] = zmm13[0] - zmm15[0]
    zmm13[0] = zmm13[0] * zmm7[0]
    zmm3[0] = zmm3[0] - zmm13[0]
    zmm3[0] = zmm3[0] * zmm8[0]
    zmm13[0] = zmm13[0] + zmm13[0]
    zmm15[0] = zmm15[0] - zmm3[0]
    zmm3[0] = zmm3[0] + zmm3[0]
    zmm4[0] = zmm4[0] * zmm13[0]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm13[0] = zmm13[0] * zmm5[0]
    zmm3[0] = zmm3[0] * zmm5[0]
    zmm15[0] = zmm15[0] + zmm15[0]
    zmm13[0] = zmm13[0] * zmm8[0]
    zmm15[0] = zmm15[0] * zmm8[0]
    zmm15[0] = zmm15[0] - zmm3[0]
    zmm15[0] = zmm15[0] * zmm7[0]
    zmm15[0] = zmm15[0] + zmm4[0]
    zmm4[0] = zmm4[0] * zmm3[0]
    zmm13[0] = zmm13[0] - zmm15[0]
    zmm3[0] = zmm3[0] * zmm7[0]
    zmm15[0] = zmm15[0] f* *(rdi + 0x28)
    zmm4[0] = zmm4[0] + zmm15[0]
    zmm4[0] = zmm4[0] * zmm15[0]
    zmm3[0] = zmm3[0] - zmm13[0]
    var_260 = zmm15[0]
    zmm13[0] = zmm13[0] + zmm4[0]
    zmm4[0] = zmm4[0] + zmm13[0]
    zmm13[0] = zmm13[0] f* *(rdi + 0x2c)
    zmm3[0] = zmm3[0] + zmm4[0]
    var_25c = zmm13[0]
    zmm3[0] = zmm3[0] f* *(rdi + 0x30)
    var_258 = zmm3[0]
    zmm11 = sub_141758e70(rcx, &var_250, &var_260, zmm12)
    zmm3 = var_250
    zmm3[0] = zmm3[0] f* *(rdi + 0x28)
    zmm0 = var_248
    zmm0[0] = zmm0[0] f* *(rdi + 0x30)
    zmm2 = var_24c
    zmm4 = *arg3
    zmm2[0] = zmm2[0] f* *(rdi + 0x2c)
    float temp0_8[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_11[0x4] = _mm_unpacklo_ps(temp0_8, _mm_unpacklo_ps(zmm2, zmm12.q)[0].q)
    float temp0_12[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_9)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd2), temp0_12)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_18[0x4] = _mm_sub_ps(temp0_16, temp0_14)
    float temp0_19[0x4] = _mm_add_ps(temp0_18, temp0_18)
    float temp0_20[0x4] = _mm_mul_ps(temp0_17, temp0_19)
    float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_9)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xd2)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, temp0_11)
    float temp0_25[0x4] = _mm_mul_ps(temp0_23, temp0_12)
    zmm2 = zmm11
    zmm3 = zmm11
    float temp0_26[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    zmm0 = rbx_1
    float temp0_29[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_25, temp0_22), temp0_24), arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm3[0] = zmm3[0] - temp0_29[0]
    int64_t r13 = sx.q(var_1a8.d)
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)
    zmm0[0] = zmm0[0] - temp0_30[0]
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x55)
    temp0_26[0] = temp0_26[0] - temp0_31[0]
    float var_1e0_1 = temp0_30[0]
    int64_t rcx_2 = r13 * 3
    i_6 = r13.d + 1
    var_1a8.d = i_6
    float var_1d0_1 = zmm0[0]
    *(&var_148 + (rcx_2 << 2)) = (_mm_unpacklo_ps(temp0_29, temp0_31[0].q)).q
    (&var_140)[rcx_2] = var_1e0_1
    *(&var_178 + (rcx_2 << 2)) = zmm11.q
    (&var_170)[rcx_2] = rbx_1
    int64_t var_118
    *(&var_118 + (rcx_2 << 2)) = (_mm_unpacklo_ps(zmm3, temp0_26[0].q)).q
    int32_t var_110
    (&var_110)[rcx_2] = var_1d0_1
    int32_t rax_10
    
    if (i_6 == 1)
        int64_t rax_14 = sx.q(var_1a8:4.d)
        int64_t rcx_10 = rax_14 * 3
        var_188[rax_14] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_10 << 2)))
        rax_10 = (&var_110)[rcx_10]
    else if (i_6 == 2)
        uint64_t* rax_13 = sub_1416e69d0(&var_280, &var_118, &var_1a8:4, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_13)
        rax_10 = rax_13[1].d
    else if (i_6 == 3)
        uint64_t* rax_12
        rax_12, zmm12, zmm14, zmm15 = sub_1416fa750(&var_270, &var_118, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_12)
        rax_10 = rax_12[1].d
    else if (i_6 == 4)
        uint64_t var_1b8[0x2]
        uint64_t* rax_11
        rax_11, zmm12, zmm14, zmm15 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_11)
        rax_10 = rax_11[1].d
    else
        int32_t var_288_1 = 0
        zmm0 = _mm_unpacklo_ps(zmm12, zmm12.q)
        rax_10 = 0
    
    int32_t var_198
    int64_t r8_5 = sx.q(var_198)
    rbx = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t r11_1 = sx.q(var_1a0.d)
    int64_t r10_1 = sx.q(var_1a0:4.d)
    zmm8 = 0x358637bd
    int64_t rdi_1 = r8_5 * 3
    var_2a0 = zmm0.q
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_7 = (&var_110)[r14_1]
    int32_t rcx_11 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    zmm4 = var_2a0:4.d
    zmm5 = var_2a0.d
    var_298 = rax_10
    int32_t rax_15 = (&var_110)[rdi_1]
    zmm6 = var_298
    int64_t var_10c_1 = *(&var_118 + (r14_1 << 2))
    zmm2 = var_188[r10_1]
    int64_t var_f4_1 = *(&var_118 + (rdi_1 << 2))
    zmm0 = var_188[rbx]
    int64_t var_100_1 = *(&var_118 + (rsi_1 << 2))
    zmm1 = var_188[r11_1]
    var_118 = *(&var_118 + (r15_1 << 2))
    zmm3 = var_188[r8_5]
    int32_t r8_6 = (&var_170)[r15_1]
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rdi_1 << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = rdx_7
    int32_t rdx_8 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_11
    int32_t rcx_12 = (&var_170)[rsi_1]
    int32_t var_ec_1 = rax_15
    int32_t rax_16 = (&var_170)[rdi_1]
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r14_1 << 2)))
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rdi_1 << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (rsi_1 << 2)))
    var_178 = *(&var_178 + (r15_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r15_1 << 2)))
    var_170 = r8_6
    int32_t r8_7 = (&var_140)[r15_1]
    int32_t var_164_1 = rdx_8
    int32_t rdx_9 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_12
    int32_t rcx_13 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_16
    int32_t rax_17 = (&var_140)[rdi_1]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r9_4
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_7
    int64_t var_130_1 = zmm1.q
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_134_1 = rdx_9
    zmm6[0] = zmm6[0] * zmm6[0]
    int32_t var_128_1 = rcx_13
    zmm4[0] = zmm4[0] + zmm5[0]
    var_148 = zmm3.q
    int32_t var_11c_1 = rax_17
    zmm4[0] = zmm4[0] + zmm6[0]
    
    if (zmm4[0] < 9.99999997e-07f || zmm4[0] >= var_284)
        rdx_2 = var_2a8
        zmm1 = zmm4
        var_284 = zmm4[0]
        break
    
    zmm13 = 0x3f800000
    arg1 = var_220
    zmm1 = zmm4
    r8 = var_208
    rdi = var_218
    rdx_1 = var_2a8
    float temp0_36[0x4] = _mm_sqrt_ss(0, zmm4[0])
    var_284 = zmm4[0]
    zmm13[0] = 1f / temp0_36[0]
    zmm3 = zmm13
    zmm15 = zmm13
    zmm3[0] = zmm3[0] * zmm5[0]
    zmm15[0] = zmm15[0] * zmm4[0]
    zmm13[0] = zmm13[0] * zmm6[0]
    continue

if (arg11 != 0)
    *arg11 = rdx_2

float result

if (zmm1[0] <= zmm8[0])
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
            int64_t rdi_2 = sx.q(var_268_1.d)
            int32_t rax_21 = (rdi_2 + 1).d
            var_268_1.d = rax_21
            
            if (rax_21 s> var_268_1:4.d)
                sub_14083a7e0(&var_270)
            
            uint64_t rcx_18 = var_270
            int64_t rdx_11 = rdi_2 * 3
            int32_t rax_22 = *(&var_170 + rbx)
            *(rcx_18 + (rdx_11 << 2)) = *(&var_178 + rbx)
            *(rcx_18 + (rdx_11 << 2) + 8) = rax_22
            int64_t rdi_3 = sx.q(var_278.d)
            int32_t rax_23 = (rdi_3 + 1).d
            var_278.d = rax_23
            
            if (rax_23 s> var_278:4.d)
                sub_14083a7e0(&var_280)
            
            uint64_t rcx_20 = var_280
            int64_t rdx_13 = rdi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_24 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_20 + (rdx_13 << 2)) = zmm0_1
            *(rcx_20 + (rdx_13 << 2) + 8) = rax_24
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_25
    float zmm8_1
    uint128_t zmm12_1
    uint128_t zmm14_1
    rax_25, zmm8_1, zmm12_1, zmm14_1 = sub_141594bc0(&var_270, &var_280, &var_220, &var_218, zmm15, 
        &var_2a8, &var_2a0, &var_250, &var_260)
    uint128_t zmm0_2
    uint128_t zmm1_1
    uint128_t zmm2_1
    uint128_t zmm3_1
    uint128_t zmm4_1
    
    if (rax_25 == 2)
        float zmm5_1 = zmm12_1.d
        float zmm6_1 = zmm12_1.d
        float zmm7_1 = zmm12_1.d
        zmm3_1 = zmm12_1
        zmm4_1 = zmm12_1
        
        if (i_6 s> 0)
            float (* rax_28)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_28
                rax_28 = &(*rax_28)[1]
                zmm0_2.d = zmm2_1.d f* *(&var_178 + r12)
                zmm1_1.d = zmm2_1.d f* *(&var_178:4 + r12)
                zmm5_1 = zmm5_1 f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_170 + r12)
                zmm6_1 = zmm6_1 f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_148 + r12)
                zmm7_1 = zmm7_1 f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_148:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_140 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                r12 += 0xc
                zmm4_1.d = zmm4_1.d f+ zmm0_2.d
                zmm12_1.d = zmm12_1.d f+ zmm2_1.d
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm2_1 = arg10
        zmm0_2.d = zmm14_1.d f+ zmm2_1.d
        *arg4 = zmm0_2.d
        *arg7 = var_2a0
        arg7[2] = var_298
        zmm0_2.d = zmm14_1.d f* *arg7
        zmm1_1.d = zmm14_1.d f* arg7[1]
        zmm14_1.d = zmm14_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ zmm5_1
        zmm1_1.d = zmm1_1.d f+ zmm6_1
        zmm14_1.d = zmm14_1.d f+ zmm7_1
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm14_1.d
        zmm0_2.d = zmm2_1.d f* *arg7
        zmm1_1.d = zmm2_1.d f* arg7[1]
        zmm2_1.d = zmm2_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm4_1.d = zmm4_1.d f- zmm1_1.d
        zmm12_1.d = zmm12_1.d f- zmm2_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm4_1.q)).q
        arg6[1].d = zmm12_1.d
        float temp4_1 = *arg4
        zmm8_1 - temp4_1
        uint64_t rcx_26 = var_280
        rbx.b = zmm8_1 < temp4_1
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        uint64_t rcx_27 = var_270
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        result = zx.d(rbx.b)
    else
        zmm4_1 = arg10
        zmm3_1 = var_260
        *arg7 = var_2a0
        zmm0_2 = var_2a8
        arg7[2] = var_298
        zmm0_2.d = zmm0_2.d f+ zmm14_1.d
        zmm0_2.d = zmm0_2.d f+ zmm4_1.d
        *arg4 = zmm0_2.d
        zmm0_2.d = zmm14_1.d f* *arg7
        uint64_t rcx_23 = var_280
        zmm1_1.d = zmm14_1.d f* arg7[1]
        zmm14_1.d = zmm14_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ var_250
        zmm1_1.d = zmm1_1.d f+ var_24c
        zmm14_1.d = zmm14_1.d f+ var_248
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm14_1.d
        zmm0_2.d = zmm4_1.d f* *arg7
        zmm1_1.d = zmm4_1.d f* arg7[1]
        zmm4_1.d = zmm4_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm2_1.d = var_25c.d f- zmm1_1.d
        zmm0_2.d = var_258.d f- zmm4_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
        arg6[1].d = zmm0_2.d
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        uint64_t rcx_24 = var_270
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        result.b = 1
else
    zmm13 = zmm12
    zmm15 = zmm12
    zmm10 = zmm12
    zmm11 = zmm12
    zmm9 = zmm12
    
    if (i_6 s> 0)
        float (* rax_18)[0x4] = &var_188
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_18
            rax_18 = &(*rax_18)[1]
            zmm2[0] = zmm2[0] f* *(&var_178 + r12)
            zmm2[0] = zmm2[0] f* *(&var_178:4 + r12)
            zmm12.d = zmm12.d f+ zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_170 + r12)
            zmm13[0] = zmm13[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148 + r12)
            zmm15[0] = zmm15[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148:4 + r12)
            zmm2[0] = zmm2[0] f* *(&var_140 + r12)
            zmm10[0] = zmm10[0] + zmm2[0]
            r12 += 0xc
            zmm11.d = zmm11.d f+ zmm2[0]
            zmm9[0] = zmm9[0] + zmm2[0]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    zmm5 = 0x3f000000
    zmm10[0] = zmm10[0] f- zmm12.d
    zmm7 = zmm11
    zmm7[0] = zmm7[0] - zmm13[0]
    zmm9[0] = zmm9[0] - zmm15[0]
    zmm3 = zx.o(0)
    zmm10[0] = zmm10[0] * zmm10[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm7[0] = zmm7[0] + zmm10[0]
    zmm7[0] = zmm7[0] + zmm9[0]
    zmm3[0] = zmm7[0]
    zmm2 = 0x3f000000
    float temp0_37[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_37[0] = temp0_37[0] * temp0_37[0]
    zmm3[0] = zmm3[0] * temp0_37[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_37[0] = temp0_37[0] * zmm2[0]
    zmm2 = arg10
    temp0_37[0] = temp0_37[0] + temp0_37[0]
    temp0_37[0] = temp0_37[0] * temp0_37[0]
    zmm3[0] = zmm3[0] * temp0_37[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_37[0] = temp0_37[0] * zmm5[0]
    temp0_37[0] = temp0_37[0] + temp0_37[0]
    temp0_37[0] = temp0_37[0] * zmm10[0]
    temp0_37[0] = temp0_37[0] * zmm7[0]
    temp0_37[0] = temp0_37[0] * zmm9[0]
    float temp0_38[0x4] = _mm_unpacklo_ps(temp0_37, temp0_37[0].q)
    *arg7 = temp0_38.q
    zmm14[0] = zmm14[0] + zmm2[0]
    float temp0_39[0x4] = __sqrtss_xmmss_memss(temp0_38[0], var_284)
    float var_288_2 = temp0_37[0]
    zmm14[0] = zmm14[0] - temp0_39[0]
    arg7[2] = var_288_2
    *arg4 = zmm14[0]
    zmm14[0] = zmm14[0] f* *arg7
    zmm14[0] = zmm14[0] f* arg7[1]
    zmm14[0] = zmm14[0] f* arg7[2]
    zmm14[0] = zmm14[0] f+ zmm12.d
    zmm14[0] = zmm14[0] + zmm13[0]
    zmm14[0] = zmm14[0] + zmm15[0]
    *arg5 = (_mm_unpacklo_ps(zmm14, zmm14[0].q)).q
    arg5[1].d = zmm14[0]
    zmm2[0] = zmm2[0] f* *arg7
    zmm2[0] = zmm2[0] f* arg7[1]
    zmm2[0] = zmm2[0] f* arg7[2]
    zmm10[0] = zmm10[0] - zmm2[0]
    zmm11.d = zmm11.d f- zmm2[0]
    zmm9[0] = zmm9[0] - zmm2[0]
    *arg6 = (_mm_unpacklo_ps(zmm10, zmm11.q)).q
    arg6[1].d = zmm9[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2e8)
return result
