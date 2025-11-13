// 函数: sub_14160e8f0
// 地址: 0x14160e8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm10[0x4]
float var_88[0x4] = zmm10
void var_308
int64_t rax_1 = __security_cookie ^ &var_308
float zmm2[0x4] = *arg3
int64_t rbx = arg1
float zmm7[0x4] = 0x80000000
float zmm3[0x4] = zmm2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_1[0] = (temp0 ^ 0x80000000)[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_3[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
float zmm14[0x4] = zx.o(0)
temp0_5[0] = temp0_4[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_188[0x4] = temp0_6
float var_1c8[0x4] = temp0_6
float (* var_208)[0x4] = &var_1c8
float zmm15[0x4]
float var_d8[0x4] = zmm15
zmm3 = *arg9 ^ 0x80000000
float zmm4[0x4] = (*arg9)[1] ^ 0x80000000
float zmm5[0x4] = (*arg9)[2] ^ 0x80000000
zmm3[0] = zmm3[0] * zmm3[0]
int64_t var_238 = rbx
zmm4[0] = zmm4[0] * zmm4[0]
void* var_218 = arg2
zmm5[0] = zmm5[0] * zmm5[0]
zmm4[0] = zmm4[0] + zmm3[0]
zmm4[0] = zmm4[0] + zmm5[0]
float var_2a4_1
float var_29c_1
bool cond:0_1

if (not(zmm4[0] < 9.99999975e-05f))
    zmm15 = 0x3f800000
    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm4[0])
    cond:0_1 = temp0_7[0] != 0f
    zmm15[0] = 1f / temp0_7[0]
    zmm6 = zmm15
    zmm10 = zmm15
    zmm6[0] = zmm6[0] * zmm3[0]
    zmm10[0] = zmm10[0] * zmm4[0]
    var_29c_1 = zmm6[0]
    zmm15[0] = zmm15[0] * zmm5[0]
    var_2a4_1 = zmm10[0]

if (zmm4[0] < 9.99999975e-05f || not(cond:0_1))
    zmm6 = 0xbf800000
    zmm10 = zx.o(0)
    var_29c_1 = -1f
    zmm15 = zx.o(0)
    var_2a4_1 = 0f

float zmm0[0x4] = data_142d3f7e0
int64_t r12 = 0
float zmm1[0x4] = 0x7f7fffff
int32_t rcx_1 = 0
float zmm9[0x4] = 0x358637bd
int32_t i_6 = 0
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm12[0x4]
float var_a8[0x4] = zmm12
float zmm13[0x4]
float var_b8[0x4] = zmm13
float var_2a0 = 3.40282347e+38f
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
var_188 = zmm0
int32_t var_2c8
uint64_t var_2c0
int32_t var_2b8
uint64_t var_298
uint64_t var_288
float var_278
float var_274
float var_270
float var_268
int32_t var_264
int32_t var_260
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rcx_2

while (true)
    rcx_2 = rcx_1 + 1
    var_2c8 = rcx_2
    
    if (rcx_1 s>= 0x20)
        break
    
    void* rcx_3 = *(rbx + 0x10)
    zmm6[0] = zmm6[0] f* *(rbx + 0x28)
    zmm10[0] = zmm10[0] f* *(rbx + 0x2c)
    float var_230 = (zmm6 ^ zmm7)[0]
    zmm15[0] = zmm15[0] f* *(rbx + 0x30)
    float var_22c_1 = (zmm10 ^ zmm7)[0]
    float var_228_1 = (zmm15 ^ zmm7)[0]
    float var_224
    float zmm6_1
    float zmm10_1
    zmm6_1, zmm10_1 = sub_141758e70(rcx_3, &var_224, &var_230, zmm14)
    float zmm3_1[0x4] = var_29c_1
    zmm13 = var_224
    float zmm8_1 = (*var_208)[1]
    float zmm5_1 = (*var_208)[2]
    float zmm7_1 = *var_208
    float zmm4_1 = (*var_208)[3]
    int32_t var_220
    zmm12 = var_220
    float var_21c
    float zmm11_1 = var_21c f* *(rbx + 0x30)
    zmm13[0] = zmm13[0] f* *(rbx + 0x28)
    zmm12[0] = zmm12[0] f* *(rbx + 0x2c)
    void* rbx_1 = var_218
    zmm15[0] = zmm15[0] * zmm8_1
    zmm15[0] = zmm15[0] - zmm10_1 * zmm5_1
    float zmm0_1 = zmm15[0] * zmm7_1
    zmm15[0] = zmm15[0] + zmm15[0]
    zmm10_1 = zmm6_1 * zmm5_1 - zmm0_1
    zmm6_1 = var_2a4_1 * zmm7_1 - zmm3_1[0] * zmm8_1
    zmm10_1 = zmm10_1 + zmm10_1
    float zmm1_1 = zmm4_1 * zmm15[0] + zmm3_1[0]
    zmm15[0] = zmm15[0] * zmm5_1
    zmm6_1 = zmm6_1 + zmm6_1
    zmm15[0] = zmm15[0] * zmm8_1
    float zmm2_1 = zmm6_1 * zmm8_1 - zmm10_1 * zmm5_1 + zmm1_1
    zmm1_1 = zmm4_1 * zmm10_1
    zmm15[0] = zmm15[0] - zmm6_1 * zmm7_1
    zmm2_1 = zmm2_1 f* *(rbx_1 + 0x28)
    zmm10_1 = zmm10_1 * zmm7_1 - zmm15[0]
    zmm15[0] = zmm15[0] + zmm1_1 + var_2a4_1
    var_278 = zmm2_1
    zmm4_1 = zmm4_1 * zmm6_1 + zmm15[0]
    zmm15[0] = zmm15[0] f* *(rbx_1 + 0x2c)
    var_274 = zmm15[0]
    var_270 = (zmm10_1 + zmm4_1) f* *(rbx_1 + 0x30)
    zmm11 = sub_141758e70(*(rbx_1 + 0x10), &var_268, &var_278, zmm14)
    zmm3 = var_268
    zmm3[0] = zmm3[0] f* *(rbx_1 + 0x28)
    zmm0 = var_260
    zmm0[0] = zmm0[0] f* *(rbx_1 + 0x30)
    zmm2 = var_264
    zmm4 = *arg3
    zmm2[0] = zmm2[0] f* *(rbx_1 + 0x2c)
    float temp0_8[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_11[0x4] = _mm_unpacklo_ps(temp0_8, _mm_unpacklo_ps(zmm2, zmm14[0].q)[0].q)
    float temp0_12[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_9)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd2), temp0_12)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_18[0x4] = _mm_sub_ps(temp0_16, temp0_14)
    float temp0_19[0x4] = _mm_add_ps(temp0_18, temp0_18)
    float temp0_20[0x4] = _mm_mul_ps(temp0_17, temp0_19)
    float temp0_21[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xd2)
    float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_9)
    float temp0_24[0x4] = _mm_mul_ps(temp0_21, temp0_12)
    float temp0_25[0x4] = _mm_add_ps(temp0_20, temp0_11)
    float temp0_28[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_24, temp0_23), temp0_25), arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm13[0] = zmm13[0] - temp0_28[0]
    int64_t r13 = sx.q(var_1a8.d)
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
    float var_1e0_1 = temp0_29[0]
    zmm11[0] = zmm11[0] - temp0_29[0]
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
    int64_t rcx_6 = r13 * 3
    zmm12[0] = zmm12[0] - temp0_30[0]
    i_6 = r13.d + 1
    float temp0_31[0x4] = _mm_unpacklo_ps(zmm13, zmm12[0].q)
    float var_1d0_1 = zmm11[0]
    *(&var_178 + (rcx_6 << 2)) = temp0_31.q
    (&var_170)[rcx_6] = zmm11_1
    *(&var_148 + (rcx_6 << 2)) = (_mm_unpacklo_ps(temp0_28, temp0_30[0].q)).q
    (&var_140)[rcx_6] = var_1e0_1
    int64_t var_118
    *(&var_118 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm13, zmm12[0].q)).q
    int32_t var_110
    (&var_110)[rcx_6] = var_1d0_1
    var_1a8.d = i_6
    int32_t rax_12
    
    if (i_6 == 1)
        int64_t rax_16 = sx.q(var_1a8:4.d)
        int64_t rcx_14 = rax_16 * 3
        var_188[rax_16] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_14 << 2)))
        rax_12 = (&var_110)[rcx_14]
    else if (i_6 == 2)
        uint64_t* rax_15 = sub_1416e69d0(&var_298, &var_118, &var_1a8:4, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_15)
        rax_12 = rax_15[1].d
    else if (i_6 == 3)
        uint64_t* rax_14
        rax_14, zmm14 = sub_1416fa750(&var_288, &var_118, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_14)
        rax_12 = rax_14[1].d
    else if (i_6 == 4)
        uint64_t var_1b8[0x2]
        uint64_t* rax_13
        rax_13, zmm14 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_13)
        rax_12 = rax_13[1].d
    else
        int32_t var_2a8_1 = 0
        zmm0 = _mm_unpacklo_ps(zmm14, zmm14[0].q)
        rax_12 = 0
    
    int32_t var_198
    int64_t r8_5 = sx.q(var_198)
    rbx = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t r11_1 = sx.q(var_1a0.d)
    int64_t r10_1 = sx.q(var_1a0:4.d)
    zmm9 = 0x358637bd
    int64_t rdi_1 = r8_5 * 3
    var_2c0 = zmm0.q
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_5 = (&var_110)[r14_1]
    int32_t rcx_15 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    zmm4 = var_2c0.d
    var_2b8 = rax_12
    int32_t rax_17 = (&var_110)[rdi_1]
    zmm5 = var_2b8
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
    int32_t var_104_1 = rdx_5
    int32_t rdx_6 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_15
    int32_t rcx_16 = (&var_170)[rsi_1]
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
    int32_t var_164_1 = rdx_6
    int32_t rdx_7 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_16
    int32_t rcx_17 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_18
    int32_t rax_19 = (&var_140)[rdi_1]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r9_4
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_2c0:4.d
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_7
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = rdx_7
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_128_1 = rcx_17
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_11c_1 = rax_19
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < 9.99999997e-07f || zmm3[0] >= var_2a0)
        rcx_2 = var_2c8
        zmm1 = zmm3
        var_2a0 = zmm3[0]
        break
    
    zmm15 = 0x3f800000
    rbx = var_238
    zmm1 = zmm3
    zmm7 = 0x80000000
    rcx_1 = var_2c8
    float temp0_36[0x4] = _mm_sqrt_ss(0, zmm3[0])
    var_2a0 = zmm3[0]
    zmm15[0] = 1f / temp0_36[0]
    zmm6 = zmm15
    zmm10 = zmm15
    zmm6[0] = zmm6[0] * zmm4[0]
    zmm10[0] = zmm10[0] * zmm3[0]
    var_29c_1 = zmm6[0]
    zmm15[0] = zmm15[0] * zmm5[0]
    var_2a4_1 = zmm10[0]
    continue

if (arg11 != 0)
    *arg11 = rcx_2

uint32_t result

if (zmm1[0] <= zmm9[0])
    __builtin_memset(&var_298, 0, 0x20)
    sub_14083ad30(&var_288, 8)
    int64_t var_290
    
    if (var_290:4.d s< 8)
        sub_14083ad30(&var_298, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t var_280_1
            int64_t rdi_3 = sx.q(var_280_1.d)
            int32_t rax_23 = (rdi_3 + 1).d
            var_280_1.d = rax_23
            
            if (rax_23 s> var_280_1:4.d)
                sub_14083a7e0(&var_288)
            
            uint64_t rcx_22 = var_288
            int64_t rdx_9 = rdi_3 * 3
            int32_t rax_24 = *(&var_170 + rbx)
            *(rcx_22 + (rdx_9 << 2)) = *(&var_178 + rbx)
            *(rcx_22 + (rdx_9 << 2) + 8) = rax_24
            int64_t rdi_4 = sx.q(var_290.d)
            int32_t rax_25 = (rdi_4 + 1).d
            var_290.d = rax_25
            
            if (rax_25 s> var_290:4.d)
                sub_14083a7e0(&var_298)
            
            uint64_t rcx_24 = var_298
            int64_t rdx_11 = rdi_4 * 3
            int64_t zmm0_2 = *(&var_148 + rbx)
            int32_t rax_26 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_24 + (rdx_11 << 2)) = zmm0_2
            *(rcx_24 + (rdx_11 << 2) + 8) = rax_26
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_27
    float zmm9_2
    float zmm14_1[0x4]
    rax_27, zmm9_2, zmm14_1 = sub_1415994a0(&var_288, &var_298, &var_238, &var_218, &var_2c8, 
        &var_2c0, &var_268, &var_278)
    float zmm2_2[0x4]
    float zmm3_2[0x4]
    
    if (rax_27 == 2)
        float zmm7_2 = zmm14_1[0]
        int64_t zmm5_2 = zmm14_1[0].q
        
        if (i_6 s> 0)
            float (* rax_30)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_2 = *rax_30
                rax_30 = &(*rax_30)[1]
                zmm2_2[0] = zmm2_2[0] f* *(&var_178 + r12)
                zmm2_2[0] = zmm2_2[0] f* *(&var_178:4 + r12)
                zmm14_1[0] = zmm14_1[0] + zmm2_2[0]
                zmm2_2[0] = zmm2_2[0] f* *(&var_170 + r12)
                zmm7_2 = zmm7_2 + zmm2_2[0]
                zmm2_2[0] = zmm2_2[0] f* *(&var_148 + r12)
                zmm14_1[0] = zmm14_1[0] + zmm2_2[0]
                zmm2_2[0] = zmm2_2[0] f* *(&var_148:4 + r12)
                zmm2_2[0] = zmm2_2[0] f* *(&var_140 + r12)
                zmm14_1[0] = zmm14_1[0] + zmm2_2[0]
                r12 += 0xc
                zmm5_2.d = zmm5_2.d f+ zmm2_2[0]
                zmm14_1[0] = zmm14_1[0] + zmm2_2[0]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm2_2 = arg8
        zmm3_2 = arg10
        zmm2_2[0] = zmm2_2[0] + zmm3_2[0]
        *arg4 = zmm2_2[0]
        *arg7 = var_2c0
        arg7[2] = var_2b8
        zmm2_2[0] = zmm2_2[0] f* *arg7
        zmm2_2[0] = zmm2_2[0] f* arg7[1]
        zmm2_2[0] = zmm2_2[0] f* arg7[2]
        zmm2_2[0] = zmm2_2[0] + zmm14_1[0]
        zmm2_2[0] = zmm2_2[0] + zmm7_2
        zmm2_2[0] = zmm2_2[0] + zmm14_1[0]
        *arg5 = (_mm_unpacklo_ps(zmm2_2, zmm2_2[0].q)).q
        arg5[1].d = zmm2_2[0]
        zmm3_2[0] = zmm3_2[0] f* *arg7
        zmm3_2[0] = zmm3_2[0] f* arg7[1]
        zmm3_2[0] = zmm3_2[0] f* arg7[2]
        zmm14_1[0] = zmm14_1[0] - zmm3_2[0]
        zmm5_2.d = zmm5_2.d f- zmm3_2[0]
        zmm14_1[0] = zmm14_1[0] - zmm3_2[0]
        *arg6 = (_mm_unpacklo_ps(zmm14_1, zmm5_2)).q
        arg6[1].d = zmm14_1[0]
        float temp4_1 = *arg4
        zmm9_2 - temp4_1
        uint64_t rcx_30 = var_298
        rbx.b = zmm9_2 < temp4_1
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        uint64_t rcx_31 = var_288
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        result = zx.d(rbx.b)
    else
        zmm2_2 = arg8
        float zmm4_2[0x4] = arg10
        zmm3_2 = var_278
        *arg7 = var_2c0
        float zmm0_3[0x4] = var_2c8
        zmm0_3[0] = zmm0_3[0] + zmm2_2[0]
        arg7[2] = var_2b8
        zmm0_3[0] = zmm0_3[0] + zmm4_2[0]
        *arg4 = zmm0_3[0]
        zmm2_2[0] = zmm2_2[0] f* *arg7
        uint64_t rcx_27 = var_298
        zmm2_2[0] = zmm2_2[0] f* arg7[1]
        zmm2_2[0] = zmm2_2[0] f* arg7[2]
        zmm2_2[0] = zmm2_2[0] + var_268
        zmm2_2[0] = zmm2_2[0] f+ var_264
        zmm2_2[0] = zmm2_2[0] f+ var_260
        *arg5 = (_mm_unpacklo_ps(zmm2_2, zmm2_2[0].q)).q
        float var_2a8_5 = zmm2_2[0]
        zmm2_2 = var_274
        arg5[1].d = var_2a8_5
        zmm4_2[0] = zmm4_2[0] f* *arg7
        zmm4_2[0] = zmm4_2[0] f* arg7[1]
        zmm4_2[0] = zmm4_2[0] f* arg7[2]
        zmm3_2[0] = zmm3_2[0] - zmm4_2[0]
        zmm0_3 = var_270
        zmm2_2[0] = zmm2_2[0] - zmm4_2[0]
        zmm0_3[0] = zmm0_3[0] - zmm4_2[0]
        *arg6 = (_mm_unpacklo_ps(zmm3_2, zmm2_2[0].q)).q
        arg6[1].d = zmm0_3[0]
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        uint64_t rcx_28 = var_288
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
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
            zmm14[0] = zmm14[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_170 + r12)
            zmm14[0] = zmm14[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148 + r12)
            zmm14[0] = zmm14[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148:4 + r12)
            zmm2[0] = zmm2[0] f* *(&var_140 + r12)
            zmm14[0] = zmm14[0] + zmm2[0]
            r12 += 0xc
            zmm14[0] = zmm14[0] + zmm2[0]
            zmm14[0] = zmm14[0] + zmm2[0]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    zmm3 = zx.o(0)
    zmm5 = 0x3f000000
    zmm14[0] = zmm14[0] - zmm14[0]
    zmm14[0] = zmm14[0] - zmm14[0]
    zmm14[0] = zmm14[0] - zmm14[0]
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm14[0] = zmm14[0] + zmm14[0]
    zmm14[0] = zmm14[0] + zmm14[0]
    zmm3[0] = zmm14[0]
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
    zmm2[0] = zmm2[0] + zmm3[0]
    temp0_37[0] = temp0_37[0] * zmm5[0]
    temp0_37[0] = temp0_37[0] + temp0_37[0]
    zmm14[0] = zmm14[0] * temp0_37[0]
    zmm14[0] = zmm14[0] * temp0_37[0]
    zmm14[0] = zmm14[0] * temp0_37[0]
    float temp0_38[0x4] = _mm_unpacklo_ps(zmm14, zmm14[0].q)
    *arg7 = temp0_38.q
    float temp0_39[0x4] = __sqrtss_xmmss_memss(temp0_38[0], var_2a0)
    float var_2a8_2 = zmm14[0]
    zmm2[0] = zmm2[0] - temp0_39[0]
    arg7[2] = var_2a8_2
    *arg4 = zmm2[0]
    zmm2[0] = zmm2[0] f* *arg7
    zmm2[0] = zmm2[0] f* arg7[1]
    zmm2[0] = zmm2[0] f* arg7[2]
    zmm2[0] = zmm2[0] + zmm14[0]
    zmm2[0] = zmm2[0] + zmm14[0]
    zmm2[0] = zmm2[0] + zmm14[0]
    *arg5 = (_mm_unpacklo_ps(zmm2, zmm2[0].q)).q
    arg5[1].d = zmm2[0]
    zmm3[0] = zmm3[0] f* *arg7
    zmm3[0] = zmm3[0] f* arg7[1]
    zmm3[0] = zmm3[0] f* arg7[2]
    zmm14[0] = zmm14[0] - zmm3[0]
    zmm14[0] = zmm14[0] - zmm3[0]
    zmm14[0] = zmm14[0] - zmm3[0]
    *arg6 = (_mm_unpacklo_ps(zmm14, zmm14[0].q)).q
    arg6[1].d = zmm14[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_308)
return result
