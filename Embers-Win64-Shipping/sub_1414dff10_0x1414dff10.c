// 函数: sub_1414dff10
// 地址: 0x1414dff10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = data_1439b706c
int32_t r9_1 = *(arg1 + 0x15a4) - *(arg1 + 0x159c)
void* rbp = *(*(*arg1 + 0x20) + 0x1c18)
int32_t r8_2 = arg1[0x2b4].d - arg1[0x2b3].d
int32_t rcx = data_1439c7a88
int32_t r10 = divs.dp.d(sx.q(rdi - 1 + r8_2), rdi)
int32_t rax_8

if (r10 s<= rcx)
    rax_8 = divs.dp.d(sx.q(rdi - 1 + r9_1), rdi)

uint128_t zmm1
uint128_t zmm2

if (r10 s> rcx || rax_8 s> rcx)
    zmm2.d = 1f / _mm_cvtepi32_ps(zx.o(rcx))[0]
    float zmm0[0x4] = 0xbf000000
    zmm1.d = _mm_cvtepi32_ps(zx.o(r9_1)).d f* zmm2.d
    zmm1.d = zmm1.d f+ zmm1.d
    zmm0[0] = -0.5f f- zmm1.d
    int32_t rdi_1 = int.d(zmm0[0])
    zmm0 = _mm_cvtepi32_ps(zx.o(r8_2))
    rdi = neg.d(rdi_1 s>> 1)
    zmm0[0] = zmm0[0] f* zmm2.d
    zmm0[0] = zmm0[0] + zmm0[0]
    int32_t rax_11 = neg.d(int.d(-0.5f - zmm0[0]) s>> 1)
    
    if (rax_11 s>= rdi)
        rdi = rax_11
    
    r10 = divs.dp.d(sx.q(r8_2 - 1 + rdi), rdi)
    rax_8 = divs.dp.d(sx.q(r9_1 - 1 + rdi), rdi)

int32_t r9_2 = data_1439b7070
arg2[1] = rax_8
*arg2 = r10
arg2[2] = r9_2
zmm1 = _mm_cvtepi32_ps(zx.o(rax_8))
float var_20 = _mm_cvtepi32_ps(zx.o(r9_2))[0]
*(arg2 + 0x10) = (_mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(r10)), zmm1.q)).q
arg2[6] = var_20
int64_t var_28
float zmm6[0x4] = sub_1414cd150(&var_28, arg1[0x1a6].d.q, (*(rbp + 0x98)).d, r9_2)
*(arg2 + 0x20) = var_28
arg2[0xa] = var_20
zmm2 = _mm_cvtepi32_ps(zx.o(rdi))
int64_t zmm0_1 = zmm2.q
zmm2.d = zmm2.d f* arg2[5]
zmm0_1.d = zmm0_1.d f* arg2[4]
zmm6[0] = zmm6[0] f/ zmm2.d
zmm6[0] = zmm6[0] f/ zmm0_1.d
arg2[0xd] = zmm6[0]
arg2[0xc] = zmm6[0]
arg2[0xe] = rdi
arg2[0xf] = rdi
arg2[0x10] = *(rbp + 0x98)
*(arg2 + 0x50) = arg1[0x91a]
arg2[0x16] = arg1[0x91b].d
*(arg2 + 0x60) = data_143dbb1f8.q
int32_t result = data_143dbb200
arg2[0x1a] = result

if (*(rbp + 0xa0) != 0 && *(arg1 + 0x490c) != 0 && arg1[0x91f] == 0)
    result = (*(arg1 + 0x492c)).d
    *(arg2 + 0x60) = (_mm_unpacklo_ps(*(arg1 + 0x4924), arg1[0x925].d.q)).q
    arg2[0x1a] = result

return result
