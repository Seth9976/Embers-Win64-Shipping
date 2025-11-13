// 函数: sub_141c3baa0
// 地址: 0x141c3baa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = *(arg1 + 8) + *(arg1 + 0x28)
*(arg1 + 0x28) = r8_1

if (r8_1 s> *(arg1 + 0x2c))
    sub_140775270(arg1 + 0x20)

int32_t rcx_2 = *(arg1 + 8) + *(arg1 + 0x38)
*(arg1 + 0x38) = rcx_2

if (rcx_2 s> *(arg1 + 0x3c))
    sub_140775270(arg1 + 0x30)

int32_t rcx_5 = *(arg1 + 8) + *(arg1 + 0x48)
*(arg1 + 0x48) = rcx_5

if (rcx_5 s> *(arg1 + 0x4c))
    sub_140775270(arg1 + 0x40)

int32_t rcx_8 = *(arg1 + 8) + *(arg1 + 0x58)
*(arg1 + 0x58) = rcx_8

if (rcx_8 s> *(arg1 + 0x5c))
    sub_140775270(arg1 + 0x50)

int32_t rcx_11 = *(arg1 + 8) + *(arg1 + 0x68)
*(arg1 + 0x68) = rcx_11

if (rcx_11 s> *(arg1 + 0x6c))
    sub_140775270(arg1 + 0x60)

int32_t rcx_14 = *(arg1 + 8) + *(arg1 + 0x78)
*(arg1 + 0x78) = rcx_14

if (rcx_14 s> *(arg1 + 0x7c))
    sub_140775270(arg1 + 0x70)

int32_t rcx_17 = *(arg1 + 8) + *(arg1 + 0x88)
*(arg1 + 0x88) = rcx_17

if (rcx_17 s> *(arg1 + 0x8c))
    sub_140775270(arg1 + 0x80)

void* r8_2 = arg1 + 0x90
int32_t rcx_20 = *(arg1 + 8) + *(r8_2 + 8)
*(r8_2 + 8) = rcx_20

if (rcx_20 s> *(r8_2 + 0xc))
    sub_140775270(r8_2)
    r8_2 = arg1 + 0x90

uint64_t result = zx.q(*(arg1 + 8))
int64_t rdx_8 = *r8_2
int32_t i = 0
int64_t rsi = *(arg1 + 0x20)
void* rcx_22 = *(arg1 + 0x30)
int64_t r14 = *(arg1 + 0x40)
int64_t r15 = *(arg1 + 0x50)
int64_t rbp = *(arg1 + 0x60)
int64_t r12 = *(arg1 + 0x70)
int64_t r13 = *(arg1 + 0x80)
int32_t i_1 = 0
int128_t zmm6
zmm6.d = 3.14159274f f/ _mm_cvtepi32_ps(zx.o(result.d)).d

if (result.d s> 0)
    float* rdi_1 = rcx_22 + 4
    int32_t* rsi_1 = rsi - rcx_22
    int32_t* r14_1 = r14 - rcx_22
    int32_t* r15_1 = r15 - rcx_22
    void* rbp_1 = rbp - rcx_22
    float* r12_1 = r12 - rcx_22
    void* r13_1 = r13 - rcx_22
    
    do
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(i)).d f* zmm6.d
        uint128_t zmm0
        float zmm7_1
        int128_t zmm8_1
        float zmm9_1
        int32_t zmm10_1
        zmm0, zmm6, zmm7_1, zmm8_1, zmm9_1, zmm10_1 = __libm_sse2_sincosf_(zmm1)
        result = rdx_8 - rcx_22
        float temp0_2[0x4] = _mm_shuffle_ps(zmm0, zmm0, 1)
        i = i_1 + 2
        i_1 = i
        temp0_2[0] = temp0_2[0] * zmm7_1
        temp0_2[0] = temp0_2[0] f* zmm10_1
        uint128_t zmm4_1
        zmm4_1.d = zmm0.d f+ zmm9_1
        float zmm3_1 = (zmm9_1 f- zmm0.d) * zmm7_1
        zmm0 = temp0_2 ^ zmm8_1
        zmm4_1.d = zmm4_1.d f* zmm7_1
        *(rsi_1 + rdi_1 - 4) = zmm4_1.d
        zmm1 = zmm4_1 ^ zmm8_1
        *(rsi_1 + rdi_1) = zmm1.d
        rdi_1[-1] = temp0_2[0]
        *rdi_1 = temp0_2[0]
        *(r14_1 + rdi_1 - 4) = zmm3_1
        *(r14_1 + rdi_1) = zmm3_1
        *(r15_1 + rdi_1 - 4) = zmm0.d
        *(r15_1 + rdi_1) = temp0_2[0]
        *(rdi_1 + rbp_1 - 4) = zmm4_1.d
        *(rdi_1 + rbp_1) = zmm1.d
        *(rdi_1 + r12_1 - 4) = temp0_2[0]
        *(r12_1 + rdi_1) = temp0_2[0]
        *(rdi_1 + r13_1 - 4) = zmm3_1
        *(rdi_1 + r13_1) = zmm3_1
        *(rdi_1 + result - 4) = zmm0.d
        *(result + rdi_1) = temp0_2[0]
        rdi_1 = &rdi_1[2]
    while (i s< *(arg1 + 8))

return result
