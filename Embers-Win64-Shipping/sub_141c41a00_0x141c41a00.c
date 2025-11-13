// 函数: sub_141c41a00
// 地址: 0x141c41a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t rax
uint128_t zmm0
float zmm1
uint128_t zmm2
float zmm3

if (arg4 s>= 4)
    int32_t rbp_1 = 2
    void* rsi_1 = arg3 + 4
    float* r8_1 = arg2 - arg3
    
    do
        zmm3 = *(r8_1 + rsi_1 - 4)
        int32_t temp1_1 = mods.dp.d(sx.q(i), *(arg1 + 0x38))
        int64_t rcx = sx.q(temp1_1)
        int32_t rax_3
        rax_3.b = temp1_1 == 0
        int64_t rax_4 = *(arg1 + 0x20)
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_3)).d f* *(arg1 + 8)
        zmm0.d = zmm0.d f+ *(arg1 + 4)
        *(arg1 + 4) = zmm0.d
        zmm2 = *(rax_4 + (rcx << 2))
        zmm1 = (zmm3 f- zmm2.d) f* zmm0.d
        zmm2.d = zmm2.d f+ zmm1
        zmm0.d = zmm2.d f+ zmm1
        *(rsi_1 - 4) = zmm3 f- zmm2.d
        *(rax_4 + (rcx << 2)) = zmm0.d
        zmm3 = *(r8_1 + rsi_1)
        int32_t temp1_2 = mods.dp.d(sx.q(rbp_1 - 1), *(arg1 + 0x38))
        int64_t rcx_1 = sx.q(temp1_2)
        int32_t rax_7
        rax_7.b = temp1_2 == 0
        int64_t rax_8 = *(arg1 + 0x20)
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_7)).d f* *(arg1 + 8)
        zmm0.d = zmm0.d f+ *(arg1 + 4)
        *(arg1 + 4) = zmm0.d
        zmm2 = *(rax_8 + (rcx_1 << 2))
        zmm1 = (zmm3 f- zmm2.d) f* zmm0.d
        zmm2.d = zmm2.d f+ zmm1
        zmm0.d = zmm2.d f+ zmm1
        *rsi_1 = zmm3 f- zmm2.d
        zmm3 = *(r8_1 + rsi_1 + 4)
        *(rax_8 + (rcx_1 << 2)) = zmm0.d
        int32_t temp1_3 = mods.dp.d(sx.q(rbp_1), *(arg1 + 0x38))
        int64_t rcx_2 = sx.q(temp1_3)
        int32_t rax_11
        rax_11.b = temp1_3 == 0
        int64_t rax_12 = *(arg1 + 0x20)
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_11)).d f* *(arg1 + 8)
        zmm0.d = zmm0.d f+ *(arg1 + 4)
        *(arg1 + 4) = zmm0.d
        zmm2 = *(rax_12 + (rcx_2 << 2))
        zmm1 = (zmm3 f- zmm2.d) f* zmm0.d
        zmm2.d = zmm2.d f+ zmm1
        zmm0.d = zmm2.d f+ zmm1
        *(rsi_1 + 4) = zmm3 f- zmm2.d
        *(rax_12 + (rcx_2 << 2)) = zmm0.d
        int32_t temp1_4 = mods.dp.d(sx.q(rbp_1 + 1), *(arg1 + 0x38))
        int32_t rax_15
        rax_15.b = temp1_4 == 0
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_15)).d f* *(arg1 + 8)
        zmm0.d = zmm0.d f+ *(arg1 + 4)
        zmm3 = *(r8_1 + rsi_1 + 8)
        i += 4
        rax = *(arg1 + 0x20)
        int64_t rcx_3 = sx.q(temp1_4)
        rbp_1 += 4
        *(arg1 + 4) = zmm0.d
        zmm2 = *(rax + (rcx_3 << 2))
        zmm1 = (zmm3 f- zmm2.d) f* zmm0.d
        zmm2.d = zmm2.d f+ zmm1
        zmm0.d = zmm2.d f+ zmm1
        *(rsi_1 + 8) = zmm3 f- zmm2.d
        rsi_1 += 0x10
        *(rax + (rcx_3 << 2)) = zmm0.d
    while (i s< arg4 - 3)

if (i s>= arg4)
    return 

float* r8_2 = arg3 + (sx.q(i) << 2)

do
    zmm3 = *(r8_2 + arg2 - arg3)
    int32_t temp1_5 = mods.dp.d(sx.q(i), *(arg1 + 0x38))
    int64_t rcx_4 = sx.q(temp1_5)
    int32_t rax_19
    rax_19.b = temp1_5 == 0
    i += 1
    rax = *(arg1 + 0x20)
    zmm0.d = _mm_cvtepi32_ps(zx.o(rax_19)).d f* *(arg1 + 8)
    zmm0.d = zmm0.d f+ *(arg1 + 4)
    *(arg1 + 4) = zmm0.d
    zmm2 = *(rax + (rcx_4 << 2))
    zmm1 = (zmm3 f- zmm2.d) f* zmm0.d
    zmm2.d = zmm2.d f+ zmm1
    zmm0.d = zmm2.d f+ zmm1
    *r8_2 = zmm3 f- zmm2.d
    r8_2 = &r8_2[1]
    *(rax + (rcx_4 << 2)) = zmm0.d
while (i s< arg4)
