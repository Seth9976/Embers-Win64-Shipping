// 函数: sub_141a99a70
// 地址: 0x141a99a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg2 + 0x10)
void* rax = *(arg2 + 0x50)
int32_t zmm4 = *(arg1 + 0xc8)
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
uint32_t zmm1[0x4] = *(rax + 0x10)
uint32_t var_e8[0x4] = zmm1
zmm1[0] = zmm1[0] f- zmm0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
float var_d8 = zmm0[0]
float var_d4 = temp0[0]
float var_d0 = temp0_1[0]

if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] f> zmm4))
    zmm0 = var_e8[1]
    zmm0[0] = zmm0[0] - temp0[0]
    
    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> zmm4))
        zmm0 = var_e8[2]
        zmm0[0] = zmm0[0] - temp0_1[0]
        
        if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> zmm4))
            rax.b = 0
            return rax

sub_141ac2520(arg2 + 0x60, arg2, *(arg1 + 0xf0))
char rax_1 = data_143de5480
int64_t r15 = data_143f2b9d8
int64_t r12 = r15
int64_t rcx_1
int64_t rbx

if (rax_1 == 0)
    rbx = 0
    rcx_1 = 0
else
    uint32_t rax_2 = GetCurrentThreadId()
    r15 = data_143f2b9d8
    rbx = 0
    rax_1 = data_143de5480
    rcx_1.b = rax_2 != data_143de5470

int32_t r9

if (*(r12 + (rcx_1 << 2)) s<= 0)
    r9 = *(arg1 + 0xcc)
else
    if (rax_1 != 0)
        rbx.b = GetCurrentThreadId() != data_143de5470
    
    r9 = *(r15 + (rbx << 2))

float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
int128_t zmm9
int128_t zmm10
int128_t zmm11
int128_t zmm12
int128_t zmm13
int128_t zmm14
zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
    sub_141aca030(arg2 + 0x60, &var_d8, *(arg1 + 0xc8), r9)
int32_t rcx_3 = *(arg2 + 0x3c)
int64_t r15_1 = sx.q(rcx_3 - 2)

if (rcx_3 - 2 s>= 0)
    float var_38_1[0x4] = zmm6
    float var_48_1[0x4] = zmm7
    float var_58_1[0x4] = zmm8
    int128_t var_68_1 = zmm9
    int128_t var_78_1 = zmm10
    int128_t var_88_1 = zmm11
    int128_t var_98_1 = zmm12
    int128_t var_a8_1 = zmm13
    int64_t rsi_2 = r15_1 * 0x30
    int128_t var_b8_1 = zmm14
    int64_t rbx_1 = r15_1 * 0x3c
    int64_t temp1_1
    
    do
        int64_t r12_1 = *(arg2 + 0x50)
        float (* rax_5)[0x4] = *(arg2 + 0x60)
        zmm9 = data_143dbb200
        zmm10 = data_143dbb1fc
        float zmm1_1[0x4] = *(r12_1 + rsi_2 + 0x40)
        zmm6 = *(r12_1 + rsi_2 + 0x10)
        zmm11 = data_143dbb1f8
        float temp0_5[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        zmm6[0] = zmm6[0] - zmm1_1[0]
        float temp0_6[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        temp0_7[0] = temp0_7[0] - temp0_5[0]
        float temp0_8[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
        temp0_8[0] = temp0_8[0] - temp0_6[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        temp0_7[0] = temp0_7[0] * temp0_7[0]
        temp0_8[0] = temp0_8[0] * temp0_8[0]
        temp0_7[0] = temp0_7[0] + zmm6[0]
        temp0_7[0] = temp0_7[0] + temp0_8[0]
        
        if (temp0_7[0] == 1f)
            goto label_141a99d27
        
        float zmm3_1[0x4]
        float zmm4_1[0x4]
        
        if (temp0_7[0] >= 9.99999994e-09f)
            zmm3_1 = zx.o(0)
            zmm4_1 = zx.o(0)
            zmm4_1[0] = 0x3f000000
            zmm3_1[0] = temp0_7[0]
            float temp0_9[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            temp0_9[0] = temp0_9[0] * temp0_9[0]
            zmm3_1[0] = zmm3_1[0] * temp0_9[0]
            zmm4_1[0] = zmm4_1[0] - zmm3_1[0]
            temp0_9[0] = temp0_9[0] * zmm4_1[0]
            temp0_9[0] = temp0_9[0] + temp0_9[0]
            temp0_9[0] = temp0_9[0] * temp0_9[0]
            zmm3_1[0] = zmm3_1[0] * temp0_9[0]
            zmm4_1[0] = 0.5f - zmm3_1[0]
            temp0_9[0] = temp0_9[0] * zmm4_1[0]
            temp0_9[0] = temp0_9[0] + temp0_9[0]
            zmm6[0] = zmm6[0] * temp0_9[0]
            temp0_7[0] = temp0_7[0] * temp0_9[0]
            temp0_8[0] = temp0_8[0] * temp0_9[0]
        label_141a99d27:
            float var_d0_2 = temp0_8[0]
            float var_d4_2 = temp0_7[0]
            var_d8 = zmm6[0]
        else
            var_d8 = zmm11.d
            int32_t var_d4_1 = zmm10.d
            int32_t var_d0_1 = zmm9.d
        
        zmm6 = *(rax_5 + rbx_1)
        zmm7 = *(rax_5 + rbx_1 + 4)
        zmm6[0] = zmm6[0] f- *(rax_5 + rbx_1 + 0x3c)
        zmm7[0] = zmm7[0] f- *(rax_5 + rbx_1 + 0x40)
        zmm8 = *(rax_5 + rbx_1 + 8)
        zmm8[0] = zmm8[0] f- *(rax_5 + rbx_1 + 0x44)
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm7[0] = zmm7[0] + zmm6[0]
        zmm7[0] = zmm7[0] + zmm8[0]
        
        if (zmm7[0] == 1f)
            goto label_141a99e05
        
        if (zmm7[0] >= 9.99999994e-09f)
            zmm4_1 = zx.o(0)
            zmm4_1[0] = 0x3f000000
            float temp0_10[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
            zmm7[0] = zmm7[0] * 0.5f
            temp0_10[0] = temp0_10[0] * temp0_10[0]
            zmm7[0] = zmm7[0] * temp0_10[0]
            zmm4_1[0] = zmm4_1[0] - zmm7[0]
            temp0_10[0] = temp0_10[0] * zmm4_1[0]
            temp0_10[0] = temp0_10[0] + temp0_10[0]
            temp0_10[0] = temp0_10[0] * temp0_10[0]
            zmm7[0] = zmm7[0] * temp0_10[0]
            zmm4_1[0] = 0.5f - zmm7[0]
            temp0_10[0] = temp0_10[0] * zmm4_1[0]
            temp0_10[0] = temp0_10[0] + temp0_10[0]
            zmm6[0] = zmm6[0] * temp0_10[0]
            zmm7[0] = zmm7[0] * temp0_10[0]
            zmm8[0] = zmm8[0] * temp0_10[0]
        label_141a99e05:
            var_e8[2] = zmm8[0]
            var_e8[1] = zmm7[0]
            var_e8[0] = zmm6[0]
        else
            var_e8[0] = zmm11.d
            var_e8[1] = zmm10.d
            var_e8[2] = zmm9.d
        
        float var_c8[0x4]
        sub_140ad6660(&var_c8, &var_d8, &var_e8)
        zmm3_1 = *(r12_1 + rsi_2 + 0x30)
        rbx_1 -= 0x3c
        float zmm2_2[0x4] = var_c8
        float temp0_11[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b)
        float temp0_12[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
        float temp0_14[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(zmm2_2, zmm2_2, 0))
        float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm3_1)
        float temp0_17[0x4] = __mulps_xmmps_memps(temp0_14, data_143f2b850)
        float temp0_18[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
        float temp0_19[0x4] = _mm_add_ps(temp0_17, temp0_16)
        float temp0_21[0x4] = _mm_mul_ps(temp0_12, _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55))
        float temp0_23[0x4] = _mm_mul_ps(temp0_18, _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa))
        float temp0_24[0x4] = __mulps_xmmps_memps(temp0_21, data_143f2b840)
        float temp0_25[0x4] = __mulps_xmmps_memps(temp0_23, data_143f2b830)
        *(r12_1 + rsi_2 + 0x30) = _mm_add_ps(_mm_add_ps(temp0_19, temp0_24), temp0_25)
        rsi_2 -= 0x30
        temp1_1 = r15_1
        r15_1 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_3 = *(arg2 + 0x3c)

uint64_t rax_7 = zx.q(rcx_3 - 2)
int64_t rdx_2 = sx.q(rax_7.d)

if (rax_7.d s>= 0)
    int64_t r8_3 = rdx_2 * 0x30
    int64_t rcx_5 = rdx_2 * 0x3c
    int64_t temp0_28
    
    do
        temp0_28 = rdx_2
        rdx_2 -= 1
        int64_t rax_6 = *(arg2 + 0x60)
        r8_3 -= 0x30
        rcx_5 -= 0x3c
        *(r8_3 + *(arg2 + 0x50) + 0x40) = _mm_unpacklo_ps(
            _mm_unpacklo_ps(*(rcx_5 + rax_6 + 0x3c), (*(rcx_5 + rax_6 + 0x44))[0].q), 
            _mm_unpacklo_ps(*(rcx_5 + rax_6 + 0x40), zx.o(0)[0].q)[0].q)
    while (temp0_28 - 1 s>= 0)

rax_7.b = 1
return rax_7
