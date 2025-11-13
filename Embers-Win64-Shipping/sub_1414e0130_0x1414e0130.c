// 函数: sub_1414e0130
// 地址: 0x1414e0130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
void* rdi = *(rdx + 0x20)

if (sub_1414e09c0(rdi, rdx) == 0)
    *(arg2 + 0xc90) = data_143dbb1f8.q
    *(arg2 + 0xc98) = data_143dbb200
    *(arg2 + 0xca0) = data_143dbb1f8.q
    *(arg2 + 0xca8) = data_143dbb200
    *(arg2 + 0xcb0) = 0
    *(arg2 + 0xcb8) = 0
    return 0

int32_t r8_1 = arg1[0x2b4].d - arg1[0x2b3].d
int32_t r9_1 = *(arg1 + 0x15a4) - *(arg1 + 0x159c)
int32_t rcx_1 = data_1439c7a88
void* rbp = *(rdi + 0x1c18)
int32_t rdi_1 = data_1439b706c
int32_t r10 = divs.dp.d(sx.q(rdi_1 - 1 + r8_1), rdi_1)
int32_t rax_8

if (r10 s<= rcx_1)
    rax_8 = divs.dp.d(sx.q(rdi_1 - 1 + r9_1), rdi_1)

uint128_t zmm1
int64_t zmm2
uint128_t zmm3

if (r10 s> rcx_1 || rax_8 s> rcx_1)
    zmm2.d = 1f f/ _mm_cvtepi32_ps(zx.o(rcx_1)).d
    zmm1.d = _mm_cvtepi32_ps(zx.o(r9_1)).d f* zmm2.d
    zmm1.d = zmm1.d f+ zmm1.d
    uint128_t zmm0_1
    zmm0_1.d = -0.5f f- zmm1.d
    rdi_1 = neg.d(int.d(zmm0_1.d) s>> 1)
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(r8_1)).d f* zmm2.d
    zmm0_1.d = zmm0_1.d f+ zmm0_1.d
    zmm3.d = -0.5f f- zmm0_1.d
    int32_t rax_11 = neg.d(int.d(zmm3.d) s>> 1)
    
    if (rax_11 s>= rdi_1)
        rdi_1 = rax_11
    
    r10 = divs.dp.d(sx.q(r8_1 - 1 + rdi_1), rdi_1)
    rax_8 = divs.dp.d(sx.q(r9_1 - 1 + rdi_1), rdi_1)

int32_t r9_2 = data_1439b7070
zmm1.d = 1f f/ _mm_cvtepi32_ps(zx.o(r9_2)).d
zmm3.d = 1f f/ _mm_cvtepi32_ps(zx.o(r10)).d
int32_t result = zmm1.d
zmm2.d = 1f f/ _mm_cvtepi32_ps(zx.o(rax_8)).d
*(arg2 + 0xc90) = (_mm_unpacklo_ps(zmm3, zmm2)).q
*(arg2 + 0xc98) = result
int64_t var_48
float zmm6_1
float zmm7_1
float zmm8
zmm6_1, zmm7_1, zmm8 = sub_1414cd150(&var_48, arg1[0x1a6].d.q, (*(rbp + 0x98)).d, r9_2)
*(arg2 + 0xca0) = var_48
uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(rdi_1))
*(arg2 + 0xca8) = result
*(arg2 + 0xcb0) = zmm8 / (zmm6_1 f* zmm0_2.d)
*(arg2 + 0xcb4) = zmm8 / (zmm7_1 f* zmm0_2.d)
*(arg2 + 0xcb8) = (*(rbp + 0x98)).d
return result
