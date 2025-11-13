// 函数: sub_141621000
// 地址: 0x141621000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm12[0x4]
float var_a8[0x4] = zmm12
float zmm13[0x4]
float var_b8[0x4] = zmm13
float zmm14[0x4]
float var_c8[0x4] = zmm14
void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
float zmm2[0x4] = *arg3
float zmm11[0x4] = zx.o(0)
float zmm6[0x4] = 0x80000000
float zmm3[0x4] = zmm2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_2[0] = (temp0 ^ 0x80000000)[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_4[0] = (temp0_1 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_188[0x4] = temp0_6
float var_1c8[0x4] = temp0_6
float (* var_200)[0x4] = &var_1c8
zmm3 = *arg9 ^ 0x80000000
float zmm4[0x4] = (*arg9)[1] ^ 0x80000000
float zmm5[0x4] = (*arg9)[2] ^ 0x80000000
void* var_228 = arg1
zmm5[0] = zmm5[0] * zmm5[0]
void* var_210 = arg2
zmm3[0] = zmm3[0] * zmm3[0]
zmm4[0] = zmm4[0] * zmm4[0]
zmm4[0] = zmm4[0] + zmm3[0]
zmm4[0] = zmm4[0] + zmm5[0]
bool cond:0_1

if (not(zmm4[0] < 9.99999975e-05f))
    zmm12 = 0x3f800000
    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm4[0])
    cond:0_1 = temp0_7[0] != 0f
    zmm12[0] = 1f / temp0_7[0]
    zmm13 = zmm12
    zmm14 = zmm12
    zmm13[0] = zmm13[0] * zmm3[0]
    zmm14[0] = zmm14[0] * zmm4[0]
    zmm12[0] = zmm12[0] * zmm5[0]

if (zmm4[0] < 9.99999975e-05f || not(cond:0_1))
    zmm13 = 0xbf800000
    zmm14 = zx.o(0)
    zmm12 = zx.o(0)

float zmm0[0x4] = data_142d3f7e0
int64_t r12 = 0
float zmm15[0x4] = 0x7f7fffff
int32_t rdx = 0
float zmm9[0x4] = 0x358637bd
int32_t i_6 = 0
int64_t rbx
int64_t arg_8 = rbx
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm10[0x4]
float var_88[0x4] = zmm10
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
var_188 = zmm0
int32_t var_2b8
float var_298
int32_t var_290
uint64_t var_288
uint64_t var_278
float var_268
float var_264
float var_260
float var_258
int32_t var_254
int32_t var_250
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rdx_1

while (true)
    rdx_1 = rdx + 1
    var_2b8 = rdx_1
    
    if (rdx s>= 0x20)
        break
    
    float var_220 = (zmm13 ^ zmm6)[0]
    float var_21c_1 = (zmm14 ^ zmm6)[0]
    float var_218_1 = (zmm12 ^ zmm6)[0]
    float zmm11_1[0x4] = sub_141758e70(arg1, &var_298, &var_220, zmm11)
    void* rbx_1 = var_210
    float zmm6_1 = zmm14[0]
    float zmm8_1 = (*var_200)[1]
    float zmm5_1 = (*var_200)[2]
    float zmm7_1 = *var_200
    float zmm4_1 = (*var_200)[3]
    void* rcx = *(rbx_1 + 0x10)
    float zmm0_1 = zmm14[0] * zmm5_1
    float zmm10_1 = zmm13[0] * zmm5_1
    zmm12[0] = zmm12[0] * zmm8_1
    zmm12[0] = zmm12[0] - zmm0_1
    zmm10_1 = zmm10_1 - zmm12[0] * zmm7_1
    zmm0_1 = zmm13[0] * zmm8_1
    zmm12[0] = zmm12[0] + zmm12[0]
    zmm6_1 = zmm6_1 * zmm7_1 - zmm0_1
    zmm10_1 = zmm10_1 + zmm10_1
    float zmm1_1 = zmm4_1 * zmm12[0]
    zmm12[0] = zmm12[0] * zmm8_1
    zmm1_1 = zmm1_1 + zmm13[0]
    zmm12[0] = zmm12[0] * zmm5_1
    zmm6_1 = zmm6_1 + zmm6_1
    float zmm2_1 = zmm6_1 * zmm8_1 - zmm10_1 * zmm5_1 + zmm1_1
    zmm12[0] = zmm12[0] - zmm6_1 * zmm7_1
    zmm1_1 = zmm4_1 * zmm10_1 + zmm14[0]
    zmm10_1 = zmm10_1 * zmm7_1 - zmm12[0]
    var_268 = zmm2_1 f* *(rbx_1 + 0x28)
    zmm12[0] = zmm12[0] + zmm1_1
    zmm4_1 = zmm4_1 * zmm6_1 + zmm12[0]
    zmm12[0] = zmm12[0] f* *(rbx_1 + 0x2c)
    var_264 = zmm12[0]
    var_260 = (zmm10_1 + zmm4_1) f* *(rbx_1 + 0x30)
    zmm11 = sub_141758e70(rcx, &var_258, &var_268, zmm11_1)
    zmm3 = var_258
    zmm2 = var_254
    zmm0 = var_250
    zmm3[0] = zmm3[0] f* *(rbx_1 + 0x28)
    zmm2[0] = zmm2[0] f* *(rbx_1 + 0x2c)
    zmm0[0] = zmm0[0] f* *(rbx_1 + 0x30)
    float temp0_8[0x4] = _mm_unpacklo_ps(zmm2, zmm11[0].q)
    float temp0_10[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), temp0_8[0].q)
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
    zmm4 = *arg3
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xd2)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_15[0x4] = _mm_mul_ps(temp0_11, temp0_14)
    float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_13)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_18[0x4] = _mm_sub_ps(temp0_16, temp0_15)
    float temp0_19[0x4] = _mm_add_ps(temp0_18, temp0_18)
    float temp0_20[0x4] = _mm_mul_ps(temp0_17, temp0_19)
    float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_14)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xd2)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, temp0_10)
    int32_t var_294
    zmm2 = var_294
    float temp0_25[0x4] = _mm_mul_ps(temp0_23, temp0_13)
    zmm3 = var_298
    zmm0 = var_290
    float temp0_28[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_25, temp0_22), temp0_24), arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm3[0] = zmm3[0] - temp0_28[0]
    int64_t r13 = sx.q(var_1a8.d)
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
    zmm0[0] = zmm0[0] - temp0_29[0]
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
    float var_1e8_1 = temp0_29[0]
    int64_t rcx_2 = r13 * 3
    zmm2[0] = zmm2[0] - temp0_30[0]
    i_6 = r13.d + 1
    var_1a8.d = i_6
    float var_1d8_1 = zmm0[0]
    float temp0_31[0x4] = _mm_unpacklo_ps(zmm3, zmm2[0].q)
    *(&var_178 + (rcx_2 << 2)) = temp0_31.q
    var_298.q = temp0_31.q
    (&var_170)[rcx_2] = var_290
    *(&var_148 + (rcx_2 << 2)) = (_mm_unpacklo_ps(temp0_28, temp0_30[0].q)).q
    (&var_140)[rcx_2] = var_1e8_1
    int64_t var_118
    *(&var_118 + (rcx_2 << 2)) = (_mm_unpacklo_ps(zmm3, zmm2[0].q)).q
    int32_t var_110
    (&var_110)[rcx_2] = var_1d8_1
    int32_t rax_12
    
    if (i_6 == 1)
        int64_t rax_16 = sx.q(var_1a8:4.d)
        int64_t rcx_10 = rax_16 * 3
        var_188[rax_16] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_10 << 2)))
        rax_12 = (&var_110)[rcx_10]
    else if (i_6 == 2)
        uint64_t* rax_15 = sub_1416e69d0(&var_288, &var_118, &var_1a8:4, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_15)
        rax_12 = rax_15[1].d
    else if (i_6 == 3)
        uint64_t* rax_14
        rax_14, zmm11, zmm14, zmm15 = sub_1416fa750(&var_278, &var_118, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_14)
        rax_12 = rax_14[1].d
    else if (i_6 == 4)
        uint64_t var_1b8[0x2]
        uint64_t* rax_13
        rax_13, zmm11, zmm14, zmm15 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_13)
        rax_12 = rax_13[1].d
    else
        int32_t var_2ac_1 = 0
        zmm0 = _mm_unpacklo_ps(zmm11, zmm11[0].q)
        rax_12 = 0
    
    int32_t var_198
    int64_t r8_5 = sx.q(var_198)
    rbx = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t r11_1 = sx.q(var_1a0.d)
    int64_t r10_1 = sx.q(var_1a0:4.d)
    zmm9 = 0x358637bd
    int64_t rdi_1 = r8_5 * 3
    int64_t var_2a8_1 = zmm0.q
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_7 = (&var_110)[r14_1]
    int32_t rcx_11 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    zmm4 = var_2a8_1.d
    int32_t rax_17 = (&var_110)[rdi_1]
    zmm5 = rax_12
    int64_t var_10c_1 = *(&var_118 + (r14_1 << 2))
    zmm2 = var_188[r10_1]
    int64_t var_f4_1 = *(&var_118 + (rdi_1 << 2))
    zmm0 = var_188[rbx]
    int64_t var_100_1 = *(&var_118 + (rsi_1 << 2))
    float zmm1[0x4] = var_188[r11_1]
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
    int32_t var_ec_1 = rax_17
    int32_t rax_18 = (&var_170)[rdi_1]
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
    int32_t var_14c_1 = rax_18
    int32_t rax_19 = (&var_140)[rdi_1]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r9_4
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_2a8_1:4.d
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_7
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = rdx_9
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_128_1 = rcx_13
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_11c_1 = rax_19
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < 9.99999997e-07f || zmm3[0] >= zmm15[0])
        rdx_1 = var_2b8
        zmm15 = zmm3
        break
    
    zmm12 = 0x3f800000
    arg1 = var_228
    zmm15 = zmm3
    zmm6 = 0x80000000
    rdx = var_2b8
    zmm12[0] = 1f / _mm_sqrt_ss(0, zmm3[0])[0]
    zmm13 = zmm12
    zmm14 = zmm12
    zmm13[0] = zmm13[0] * zmm4[0]
    zmm14[0] = zmm14[0] * zmm3[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    continue

if (arg11 != 0)
    *arg11 = rdx_1

uint32_t result

if (zmm15[0] <= zmm9[0])
    __builtin_memset(&var_288, 0, 0x20)
    sub_14083ad30(&var_278, 8)
    int64_t var_280
    
    if (var_280:4.d s< 8)
        sub_14083ad30(&var_288, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t var_270_1
            int64_t rdi_2 = sx.q(var_270_1.d)
            int32_t rax_23 = (rdi_2 + 1).d
            var_270_1.d = rax_23
            
            if (rax_23 s> var_270_1:4.d)
                sub_14083a7e0(&var_278)
            
            uint64_t rcx_18 = var_278
            int64_t rdx_11 = rdi_2 * 3
            int32_t rax_24 = *(&var_170 + rbx)
            *(rcx_18 + (rdx_11 << 2)) = *(&var_178 + rbx)
            *(rcx_18 + (rdx_11 << 2) + 8) = rax_24
            int64_t rdi_3 = sx.q(var_280.d)
            int32_t rax_25 = (rdi_3 + 1).d
            var_280.d = rax_25
            
            if (rax_25 s> var_280:4.d)
                sub_14083a7e0(&var_288)
            
            uint64_t rcx_20 = var_288
            int64_t rdx_13 = rdi_3 * 3
            int64_t zmm0_2 = *(&var_148 + rbx)
            int32_t rax_26 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_20 + (rdx_13 << 2)) = zmm0_2
            *(rcx_20 + (rdx_13 << 2) + 8) = rax_26
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_27
    float zmm9_2
    float zmm11_2[0x4]
    rax_27, zmm9_2, zmm11_2 = sub_1415adeb0(&var_278, &var_288, &var_228, &var_210, zmm14, zmm15, 
        &var_2b8, &var_298, &var_258, &var_268)
    uint128_t zmm0_3
    float zmm2_2[0x4]
    float zmm3_2[0x4]
    
    if (rax_27 == 2)
        float zmm6_2 = zmm11_2[0]
        int64_t zmm5_2 = zmm11_2[0].q
        
        if (i_6 s> 0)
            float (* rax_30)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_2 = *rax_30
                rax_30 = &(*rax_30)[1]
                zmm0_3.d = zmm2_2.d f* *(&var_178 + r12)
                zmm2_2[0] = zmm2_2[0] f* *(&var_178:4 + r12)
                zmm6_2 = zmm6_2 f+ zmm0_3.d
                zmm0_3.d = zmm2_2.d f* *(&var_170 + r12)
                zmm11_2[0] = zmm11_2[0] + zmm2_2[0]
                zmm2_2[0] = zmm2_2[0] f* *(&var_148 + r12)
                zmm11_2[0] = zmm11_2[0] f+ zmm0_3.d
                zmm0_3.d = zmm2_2.d f* *(&var_148:4 + r12)
                zmm2_2[0] = zmm2_2[0] f* *(&var_140 + r12)
                zmm11_2[0] = zmm11_2[0] + zmm2_2[0]
                r12 += 0xc
                zmm5_2.d = zmm5_2.d f+ zmm0_3.d
                zmm11_2[0] = zmm11_2[0] + zmm2_2[0]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm2_2 = arg8
        zmm3_2 = arg10
        zmm0_3.d = zmm2_2.d f+ zmm3_2[0]
        *arg4 = zmm0_3.d
        *arg7 = var_298.q
        arg7[2] = var_290
        zmm0_3.d = zmm2_2.d f* *arg7
        zmm2_2[0] = zmm2_2[0] f* arg7[1]
        zmm2_2[0] = zmm2_2[0] f* arg7[2]
        zmm0_3.d = zmm0_3.d f+ zmm6_2
        zmm2_2[0] = zmm2_2[0] + zmm11_2[0]
        zmm2_2[0] = zmm2_2[0] + zmm11_2[0]
        *arg5 = (_mm_unpacklo_ps(zmm0_3, zmm2_2[0].q)).q
        arg5[1].d = zmm2_2[0]
        zmm0_3.d = zmm3_2.d f* *arg7
        zmm3_2[0] = zmm3_2[0] f* arg7[1]
        zmm3_2[0] = zmm3_2[0] f* arg7[2]
        zmm11_2[0] = zmm11_2[0] f- zmm0_3.d
        zmm5_2.d = zmm5_2.d f- zmm3_2[0]
        zmm11_2[0] = zmm11_2[0] - zmm3_2[0]
        *arg6 = (_mm_unpacklo_ps(zmm11_2, zmm5_2)).q
        arg6[1].d = zmm11_2[0]
        float temp4_1 = *arg4
        zmm9_2 - temp4_1
        uint64_t rcx_26 = var_288
        rbx.b = zmm9_2 < temp4_1
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        uint64_t rcx_27 = var_278
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        result = zx.d(rbx.b)
    else
        zmm2_2 = arg8
        float zmm4_2[0x4] = arg10
        zmm3_2 = var_268
        *arg7 = var_298.q
        zmm0_3.d = var_2b8.d f+ zmm2_2[0]
        arg7[2] = var_290
        zmm0_3.d = zmm0_3.d f+ zmm4_2[0]
        *arg4 = zmm0_3.d
        zmm0_3.d = zmm2_2.d f* *arg7
        uint64_t rcx_23 = var_288
        zmm2_2[0] = zmm2_2[0] f* arg7[1]
        zmm2_2[0] = zmm2_2[0] f* arg7[2]
        zmm0_3.d = zmm0_3.d f+ var_258
        zmm2_2[0] = zmm2_2[0] f+ var_254
        zmm2_2[0] = zmm2_2[0] f+ var_250
        *arg5 = (_mm_unpacklo_ps(zmm0_3, zmm2_2[0].q)).q
        float var_2ac_5 = zmm2_2[0]
        zmm2_2 = var_264
        arg5[1].d = var_2ac_5
        zmm0_3.d = zmm4_2.d f* *arg7
        zmm4_2[0] = zmm4_2[0] f* arg7[1]
        zmm4_2[0] = zmm4_2[0] f* arg7[2]
        zmm3_2[0] = zmm3_2[0] f- zmm0_3.d
        zmm2_2[0] = zmm2_2[0] - zmm4_2[0]
        zmm0_3.d = var_260.d f- zmm4_2[0]
        *arg6 = (_mm_unpacklo_ps(zmm3_2, zmm2_2[0].q)).q
        arg6[1].d = zmm0_3.d
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        uint64_t rcx_24 = var_278
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        result.b = 1
else
    if (i_6 s> 0)
        float (* rax_20)[0x4] = &var_188
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_20
            rax_20 = &(*rax_20)[1]
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
    
    zmm3 = zx.o(0)
    zmm5 = 0x3f000000
    zmm11[0] = zmm11[0] - zmm11[0]
    zmm11[0] = zmm11[0] - zmm11[0]
    zmm11[0] = zmm11[0] - zmm11[0]
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm11[0] = zmm11[0] + zmm11[0]
    zmm11[0] = zmm11[0] + zmm11[0]
    zmm3[0] = zmm11[0]
    zmm2 = 0x3f000000
    float temp0_37[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_37[0] = temp0_37[0] * temp0_37[0]
    zmm3[0] = zmm3[0] * temp0_37[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_37[0] = temp0_37[0] * zmm2[0]
    zmm2 = arg8
    temp0_37[0] = temp0_37[0] + temp0_37[0]
    temp0_37[0] = temp0_37[0] * temp0_37[0]
    zmm3[0] = zmm3[0] * temp0_37[0]
    zmm5[0] = 0.5f - zmm3[0]
    zmm3 = arg10
    temp0_37[0] = temp0_37[0] * zmm5[0]
    temp0_37[0] = temp0_37[0] + temp0_37[0]
    temp0_37[0] = temp0_37[0] * zmm11[0]
    temp0_37[0] = temp0_37[0] * zmm11[0]
    temp0_37[0] = temp0_37[0] * zmm11[0]
    *arg7 = (_mm_unpacklo_ps(temp0_37, temp0_37[0].q)).q
    zmm2[0] = zmm2[0] + zmm3[0]
    float var_2ac_2 = temp0_37[0]
    float temp0_39[0x4] = _mm_sqrt_ss(0, zmm15[0])
    arg7[2] = var_2ac_2
    zmm2[0] = zmm2[0] - temp0_39[0]
    *arg4 = zmm2[0]
    zmm2[0] = zmm2[0] f* *arg7
    zmm2[0] = zmm2[0] f* arg7[1]
    zmm2[0] = zmm2[0] f* arg7[2]
    zmm2[0] = zmm2[0] + zmm11[0]
    zmm2[0] = zmm2[0] + zmm11[0]
    zmm2[0] = zmm2[0] + zmm11[0]
    *arg5 = (_mm_unpacklo_ps(zmm2, zmm2[0].q)).q
    arg5[1].d = zmm2[0]
    zmm3[0] = zmm3[0] f* *arg7
    zmm3[0] = zmm3[0] f* arg7[1]
    zmm3[0] = zmm3[0] f* arg7[2]
    zmm11[0] = zmm11[0] - zmm3[0]
    zmm11[0] = zmm11[0] - zmm3[0]
    zmm11[0] = zmm11[0] - zmm3[0]
    float temp0_41[0x4] = _mm_unpacklo_ps(zmm11, zmm11[0].q)
    result = zmm11[0]
    *arg6 = temp0_41.q
    arg6[1].d = result
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2f8)
return result
