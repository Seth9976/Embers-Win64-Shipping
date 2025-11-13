// 函数: sub_141aa10e0
// 地址: 0x141aa10e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* r13 = arg2[3]
int32_t rcx = *(arg1 + 0xd0)
int32_t rbx

if (rcx s>= 0)
    rbx = *(arg1 + 0xd4)
else
    int32_t rcx_1 = rcx * 2
    
    if ((rcx_1 & 0xfffffffe) == 0xfffffffe)
        rbx = -1
    else
        rbx = *(*(r13 + 0x80) + (sx.q(rcx_1) s>> 1 << 2))

int64_t r12 = sx.q(rbx)

if (*(r12 + arg2[4]) == 0)
    sub_141a98300(&arg2[1], rbx)

int64_t rax_6 = arg2[1]
int64_t rcx_6 = r12 * 6
bool cond:0 = *(arg1 + 0xfe) == 0
float var_d8[0x4] = *(rax_6 + (rcx_6 << 3))
float var_c8[0x4] = *(rax_6 + (rcx_6 << 3) + 0x10)
void* rax_7 = *arg2
float var_b8[0x4] = *(rax_6 + (rcx_6 << 3) + 0x20)
float var_a8[0x4] = *(rax_7 + 0x10)
float var_98[0x4] = *(rax_7 + 0x20)
float var_88[0x4] = *(rax_7 + 0x30)

if (not(cond:0))
    uint32_t var_138_1 = zx.d(*(arg1 + 0x101))
    sub_141de6760(&var_a8, &arg2[1], &var_d8, rbx)
    float zmm0_1[0x4]
    float zmm2_1[0x4]
    float zmm3_1[0x4]
    
    if (*(arg1 + 0xfe) != 2)
        zmm0_1 = *(arg1 + 0xf8)
        zmm2_1 = *(arg1 + 0xf4)
        zmm3_1 = *(arg1 + 0xf0)
    else
        zmm3_1 = var_b8
        zmm3_1[0] = zmm3_1[0] f* *(arg1 + 0xf0)
        zmm2_1 = _mm_shuffle_ps(var_b8, var_b8, 0x55)
        zmm2_1[0] = zmm2_1[0] f* *(arg1 + 0xf4)
        zmm0_1 = _mm_shuffle_ps(var_b8, var_b8, 0xaa)
        zmm0_1[0] = zmm0_1[0] f* *(arg1 + 0xf8)
    
    uint32_t rax_9 = zx.d(*(arg1 + 0x101))
    float temp0_3[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
    var_b8 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, zmm0_1[0].q), temp0_3[0].q)
    uint32_t var_138_2 = rax_9
    sub_141de5f60(&var_a8, &arg2[1], &var_d8, rbx)

if (*(arg1 + 0xfd) != 0)
    uint32_t var_138_3 = zx.d(*(arg1 + 0x100))
    sub_141de6760(&var_a8, &arg2[1], &var_d8, rbx)
    float var_128[0x4]
    float zmm4_1[0x4] = *sub_140ade170(arg1 + 0xe4, &var_128)
    
    if (*(arg1 + 0xfd) != 2)
        var_d8 = zmm4_1
    else
        float zmm2_2[0x4] = var_d8
        float temp0_6[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
        float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0x1b), temp0_6)
        float temp0_9[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x4e)
        float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xff), zmm2_2)
        float temp0_12[0x4] = __mulps_xmmps_memps(temp0_8, data_143f2b850)
        float temp0_13[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xb1)
        float temp0_14[0x4] = _mm_add_ps(temp0_12, temp0_11)
        float temp0_16[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55))
        float temp0_18[0x4] = _mm_mul_ps(temp0_13, _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa))
        float temp0_19[0x4] = __mulps_xmmps_memps(temp0_16, data_143f2b840)
        float temp0_20[0x4] = __mulps_xmmps_memps(temp0_18, data_143f2b830)
        var_d8 = _mm_add_ps(_mm_add_ps(temp0_14, temp0_19), temp0_20)
    
    uint32_t var_138_4 = zx.d(*(arg1 + 0x100))
    sub_141de5f60(&var_a8, &arg2[1], &var_d8, rbx)

if (*(arg1 + 0xfc) != 0)
    uint32_t var_138_5 = zx.d(*(arg1 + 0xff))
    sub_141de6760(&var_a8, &arg2[1], &var_d8, rbx)
    bool cond:3_1 = *(arg1 + 0xfc) != 2
    float zmm0_3[0x4] = *(arg1 + 0xe0)
    float zmm3_3[0x4] = *(arg1 + 0xd8)
    float temp0_23[0x4] = _mm_unpacklo_ps(*(arg1 + 0xdc), 0)
    float temp0_25[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_3, zmm0_3[0].q), temp0_23[0].q)
    
    if (cond:3_1)
        var_c8 = temp0_25
    else
        var_c8 = _mm_add_ps(var_c8, temp0_25)
    
    uint32_t var_138_6 = zx.d(*(arg1 + 0xff))
    sub_141de5f60(&var_a8, &arg2[1], &var_d8, rbx)

int32_t rax_15 = *(arg1 + 0xd0)
int32_t rdx_8

if (rax_15 s>= 0)
    rdx_8 = *(arg1 + 0xd4)
else
    int32_t rcx_14 = rax_15 * 2
    
    if ((rcx_14 & 0xfffffffe) == 0xfffffffe)
        rdx_8 = -1
    else
        rdx_8 = *(*(r13 + 0x80) + (sx.q(rcx_14) s>> 1 << 2))

int64_t rbx_1 = sx.q(arg3[1].d)
zmm6 = var_d8
int32_t rax_19 = (rbx_1 + 1).d
arg3[1].d = rax_19

if (rax_19 s> *(arg3 + 0xc))
    sub_1405c4fe0(arg3)

int64_t result = *arg3
float (* rcx_19)[0x4] = rbx_1 << 6
*(rcx_19 + result) = rdx_8.o
*(rcx_19 + result + 0x10) = zmm6
*(rcx_19 + result + 0x20) = var_c8
*(rcx_19 + result + 0x30) = var_b8
__security_check_cookie(rax_1 ^ &var_158)
return result
