// 函数: sub_1415f07d0
// 地址: 0x1415f07d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm12[0x4]
float var_a8[0x4] = zmm12
float zmm13[0x4]
float var_b8[0x4] = zmm13
void var_318
int64_t rax_1 = __security_cookie ^ &var_318
float zmm2[0x4] = *arg3
void* r10 = arg2
float zmm3[0x4] = zmm2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_2[0] = (temp0 ^ 0x80000000)[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
float zmm11[0x4] = zx.o(0)
temp0_4[0] = (temp0_1 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_188[0x4] = temp0_6
float var_1c8[0x4] = temp0_6
zmm3 = *arg9 ^ 0x80000000
float zmm5[0x4] = (*arg9)[1] ^ 0x80000000
float zmm6[0x4] = (*arg9)[2] ^ 0x80000000
zmm6[0] = zmm6[0] * zmm6[0]
float (* r8)[0x4] = &var_1c8
zmm3[0] = zmm3[0] * zmm3[0]
zmm5[0] = zmm5[0] * zmm5[0]
int64_t var_250 = arg11
void* var_240 = arg1
void* var_238 = r10
zmm5[0] = zmm5[0] + zmm3[0]
float (* var_228)[0x4] = &var_1c8
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
int64_t r12 = 0
float zmm15[0x4] = 0x7f7fffff
int32_t rdx_1 = 0
float zmm14[0x4] = 0x80000000
int32_t i_6 = 0
float zmm9[0x4] = 0x358637bd
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
int32_t var_2d8
uint64_t var_2d0
int32_t var_2c8
uint64_t var_2b0
uint64_t var_2a0
int32_t var_280
int32_t var_27c
int32_t var_278
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rdx_2

while (true)
    rdx_2 = rdx_1 + 1
    var_2d8 = rdx_2
    
    if (rdx_1 s>= 0x20)
        break
    
    if (zmm2[0] <= zmm14[0])
        zmm0 = *(arg1 + 0x1c)
    else
        zmm0 = *(arg1 + 0x10)
    
    float var_290_1 = zmm0[0]
    
    if (zmm13[0] <= zmm14[0])
        zmm0 = *(arg1 + 0x20)
    else
        zmm0 = *(arg1 + 0x14)
    
    float var_28c_1 = zmm0[0]
    
    if (zmm12[0] <= zmm14[0])
        zmm0 = *(arg1 + 0x24)
    else
        zmm0 = *(arg1 + 0x18)
    
    zmm8 = (*r8)[1]
    zmm5 = (*r8)[2]
    zmm7 = *r8
    zmm3 = (*r8)[3]
    float var_288_1 = zmm0[0]
    float var_1f8_1 = zmm0[0]
    zmm5[0] = zmm5[0] * zmm2[0]
    zmm5[0] = zmm5[0] * zmm13[0]
    zmm8[0] = zmm8[0] * zmm12[0]
    zmm7[0] = zmm7[0] * zmm13[0]
    zmm8[0] = zmm8[0] - zmm5[0]
    zmm7[0] = zmm7[0] * zmm12[0]
    zmm5[0] = zmm5[0] - zmm7[0]
    zmm8[0] = zmm8[0] * zmm2[0]
    zmm8[0] = zmm8[0] + zmm8[0]
    zmm7[0] = zmm7[0] - zmm8[0]
    zmm3[0] = zmm3[0] * zmm8[0]
    zmm5[0] = zmm5[0] + zmm5[0]
    zmm3[0] = zmm3[0] + zmm2[0]
    zmm8[0] = zmm8[0] * zmm5[0]
    zmm5[0] = zmm5[0] * zmm5[0]
    zmm7[0] = zmm7[0] + zmm7[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm7[0] = zmm7[0] * zmm8[0]
    zmm7[0] = zmm7[0] - zmm5[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm7[0] = zmm7[0] + zmm3[0]
    zmm3[0] = zmm3[0] * zmm5[0]
    zmm8[0] = zmm8[0] - zmm7[0]
    zmm3[0] = zmm3[0] * zmm7[0]
    zmm5[0] = zmm5[0] * zmm7[0]
    zmm3[0] = zmm3[0] + zmm13[0]
    zmm3[0] = zmm3[0] + zmm12[0]
    zmm5[0] = zmm5[0] - zmm8[0]
    zmm8[0] = zmm8[0] + zmm3[0]
    zmm5[0] = zmm5[0] + zmm3[0]
    int64_t var_220 = (_mm_unpacklo_ps(zmm7, zmm8[0].q)).q
    float var_218_1 = zmm5[0]
    zmm11 = sub_141758e70(r10, &var_280, &var_220, zmm11)
    float temp0_9[0x4] = _mm_unpacklo_ps(var_280, var_278[0].q)
    float zmm4[0x4] = *arg3
    float temp0_11[0x4] = _mm_unpacklo_ps(temp0_9, _mm_unpacklo_ps(var_27c, zmm11[0].q)[0].q)
    float temp0_12[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_13[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
    float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd2), temp0_12)
    float temp0_16[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_18[0x4] = _mm_sub_ps(temp0_15, _mm_mul_ps(temp0_13, temp0_16))
    float temp0_19[0x4] = _mm_add_ps(temp0_18, temp0_18)
    zmm7 = var_290_1
    float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_16)
    float zmm1[0x4] = var_288_1
    float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd2), temp0_12)
    float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), temp0_19)
    zmm5 = var_28c_1
    float temp0_29[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_23, temp0_21), _mm_add_ps(temp0_25, temp0_11)), arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm7[0] = zmm7[0] - temp0_29[0]
    int64_t r13 = sx.q(var_1a8.d)
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)
    float var_1e8_1 = temp0_30[0]
    zmm1[0] = zmm1[0] - temp0_30[0]
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x55)
    int64_t rcx_2 = r13 * 3
    zmm5[0] = zmm5[0] - temp0_31[0]
    i_6 = r13.d + 1
    float temp0_32[0x4] = _mm_unpacklo_ps(zmm7, zmm5[0].q)
    float var_1d8_1 = zmm1[0]
    *(&var_178 + (rcx_2 << 2)) = temp0_32.q
    (&var_170)[rcx_2] = var_1f8_1
    *(&var_148 + (rcx_2 << 2)) = (_mm_unpacklo_ps(temp0_29, temp0_31[0].q)).q
    (&var_140)[rcx_2] = var_1e8_1
    int64_t var_118
    *(&var_118 + (rcx_2 << 2)) = (_mm_unpacklo_ps(zmm7, zmm5[0].q)).q
    int32_t var_110
    (&var_110)[rcx_2] = var_1d8_1
    var_1a8.d = i_6
    int32_t rax_12
    
    if (i_6 == 1)
        int64_t rax_16 = sx.q(var_1a8:4.d)
        int64_t rcx_10 = rax_16 * 3
        var_188[rax_16] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_10 << 2)))
        rax_12 = (&var_110)[rcx_10]
    else if (i_6 == 2)
        uint64_t* rax_15 = sub_1416e69d0(&var_2b0, &var_118, &var_1a8:4, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_15)
        rax_12 = rax_15[1].d
    else if (i_6 == 3)
        uint64_t* rax_14
        rax_14, zmm11, zmm14, zmm15 = sub_1416fa750(&var_2a0, &var_118, &var_1a8, &var_188)
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
        int32_t var_2b8_1 = 0
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
    var_2d0 = zmm0.q
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_7 = (&var_110)[r14_1]
    int32_t rcx_11 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    zmm4 = var_2d0.d
    var_2c8 = rax_12
    int32_t rax_17 = (&var_110)[rdi_1]
    zmm5 = var_2c8
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
    zmm3 = var_2d0:4.d
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
        rdx_2 = var_2d8
        zmm15 = zmm3
        break
    
    zmm12 = 0x3f800000
    arg1 = var_240
    zmm15 = zmm3
    r8 = var_228
    r10 = var_238
    rdx_1 = var_2d8
    zmm12[0] = 1f / _mm_sqrt_ss(0, zmm3[0])[0]
    zmm2 = zmm12
    zmm13 = zmm12
    zmm2[0] = zmm2[0] * zmm4[0]
    zmm13[0] = zmm13[0] * zmm3[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    continue

int64_t r9_5 = var_250

if (r9_5 != 0)
    *r9_5 = rdx_2

uint32_t result

if (zmm15[0] <= zmm9[0])
    __builtin_memset(&var_2b0, 0, 0x20)
    sub_14083ad30(&var_2a0, 8)
    int64_t var_2a8
    
    if (var_2a8:4.d s< 8)
        sub_14083ad30(&var_2b0, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t var_298_1
            int64_t rdi_2 = sx.q(var_298_1.d)
            int32_t rax_23 = (rdi_2 + 1).d
            var_298_1.d = rax_23
            
            if (rax_23 s> var_298_1:4.d)
                sub_14083a7e0(&var_2a0)
            
            uint64_t rcx_18 = var_2a0
            int64_t rdx_11 = rdi_2 * 3
            int32_t rax_24 = *(&var_170 + rbx)
            *(rcx_18 + (rdx_11 << 2)) = *(&var_178 + rbx)
            *(rcx_18 + (rdx_11 << 2) + 8) = rax_24
            int64_t rdi_3 = sx.q(var_2a8.d)
            int32_t rax_25 = (rdi_3 + 1).d
            var_2a8.d = rax_25
            
            if (rax_25 s> var_2a8:4.d)
                sub_14083a7e0(&var_2b0)
            
            uint64_t rcx_20 = var_2b0
            int64_t rdx_13 = rdi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_26 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_20 + (rdx_13 << 2)) = zmm0_1
            *(rcx_20 + (rdx_13 << 2) + 8) = rax_26
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_27
    float zmm9_1
    float zmm11_1[0x4]
    rax_27, zmm9_1, zmm11_1 = sub_14159d440(&var_2a0, &var_2b0, &var_240, &var_238, &var_2d8, 
        &var_2d0, &var_280, &var_250)
    float zmm2_1[0x4]
    float zmm3_1[0x4]
    
    if (rax_27 == 2)
        float zmm6_1 = zmm11_1[0]
        int64_t zmm5_1 = zmm11_1[0].q
        
        if (i_6 s> 0)
            float (* rax_30)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_30
                rax_30 = &(*rax_30)[1]
                zmm2_1[0] = zmm2_1[0] f* *(&var_178 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_178:4 + r12)
                zmm6_1 = zmm6_1 + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_170 + r12)
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148 + r12)
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148:4 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_140 + r12)
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                r12 += 0xc
                zmm5_1.d = zmm5_1.d f+ zmm2_1[0]
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm2_1 = arg8
        zmm3_1 = arg10
        zmm2_1[0] = zmm2_1[0] + zmm3_1[0]
        *arg4 = zmm2_1[0]
        *arg7 = var_2d0
        arg7[1].d = var_2c8
        zmm2_1[0] = zmm2_1[0] f* *arg7
        zmm2_1[0] = zmm2_1[0] f* *(arg7 + 4)
        zmm2_1[0] = zmm2_1[0] f* arg7[1].d
        zmm2_1[0] = zmm2_1[0] + zmm6_1
        zmm2_1[0] = zmm2_1[0] + zmm11_1[0]
        zmm2_1[0] = zmm2_1[0] + zmm11_1[0]
        *arg5 = (_mm_unpacklo_ps(zmm2_1, zmm2_1[0].q)).q
        arg5[1].d = zmm2_1[0]
        zmm3_1[0] = zmm3_1[0] f* *arg7
        zmm3_1[0] = zmm3_1[0] f* *(arg7 + 4)
        zmm3_1[0] = zmm3_1[0] f* arg7[1].d
        zmm11_1[0] = zmm11_1[0] - zmm3_1[0]
        zmm5_1.d = zmm5_1.d f- zmm3_1[0]
        zmm11_1[0] = zmm11_1[0] - zmm3_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm11_1, zmm5_1)).q
        arg6[1].d = zmm11_1[0]
        float temp1_1 = *arg4
        zmm9_1 - temp1_1
        uint64_t rcx_26 = var_2b0
        rbx.b = zmm9_1 < temp1_1
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        uint64_t rcx_27 = var_2a0
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        result = zx.d(rbx.b)
    else
        zmm2_1 = arg8
        float zmm4_1[0x4] = arg10
        zmm3_1 = var_250.d
        *arg7 = var_2d0
        float zmm0_2[0x4] = var_2d8
        zmm0_2[0] = zmm0_2[0] + zmm2_1[0]
        arg7[1].d = var_2c8
        zmm0_2[0] = zmm0_2[0] + zmm4_1[0]
        *arg4 = zmm0_2[0]
        zmm2_1[0] = zmm2_1[0] f* *arg7
        uint64_t rcx_23 = var_2b0
        zmm2_1[0] = zmm2_1[0] f* *(arg7 + 4)
        zmm2_1[0] = zmm2_1[0] f* arg7[1].d
        zmm2_1[0] = zmm2_1[0] f+ var_280
        zmm2_1[0] = zmm2_1[0] f+ var_27c
        zmm2_1[0] = zmm2_1[0] f+ var_278
        *arg5 = (_mm_unpacklo_ps(zmm2_1, zmm2_1[0].q)).q
        float var_2b8_5 = zmm2_1[0]
        zmm2_1 = var_250:4.d
        arg5[1].d = var_2b8_5
        zmm4_1[0] = zmm4_1[0] f* *arg7
        zmm4_1[0] = zmm4_1[0] f* *(arg7 + 4)
        zmm4_1[0] = zmm4_1[0] f* arg7[1].d
        zmm3_1[0] = zmm3_1[0] - zmm4_1[0]
        int32_t var_248
        zmm0_2 = var_248
        zmm2_1[0] = zmm2_1[0] - zmm4_1[0]
        zmm0_2[0] = zmm0_2[0] - zmm4_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)).q
        arg6[1].d = zmm0_2[0]
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        uint64_t rcx_24 = var_2a0
        
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
    float var_2b8_2 = temp0_37[0]
    float temp0_39[0x4] = _mm_sqrt_ss(0, zmm15[0])
    arg7[1].d = var_2b8_2
    zmm2[0] = zmm2[0] - temp0_39[0]
    *arg4 = zmm2[0]
    zmm2[0] = zmm2[0] f* *arg7
    zmm2[0] = zmm2[0] f* *(arg7 + 4)
    zmm2[0] = zmm2[0] f* arg7[1].d
    zmm2[0] = zmm2[0] + zmm11[0]
    zmm2[0] = zmm2[0] + zmm11[0]
    zmm2[0] = zmm2[0] + zmm11[0]
    *arg5 = (_mm_unpacklo_ps(zmm2, zmm2[0].q)).q
    arg5[1].d = zmm2[0]
    zmm3[0] = zmm3[0] f* *arg7
    zmm3[0] = zmm3[0] f* *(arg7 + 4)
    zmm3[0] = zmm3[0] f* arg7[1].d
    zmm11[0] = zmm11[0] - zmm3[0]
    zmm11[0] = zmm11[0] - zmm3[0]
    zmm11[0] = zmm11[0] - zmm3[0]
    float temp0_41[0x4] = _mm_unpacklo_ps(zmm11, zmm11[0].q)
    uint32_t var_2b8_4 = zmm11[0]
    *arg6 = temp0_41.q
    arg6[1].d = var_2b8_4
    result.b = 1

__security_check_cookie(rax_1 ^ &var_318)
return result
