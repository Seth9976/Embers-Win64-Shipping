// 函数: sub_140bbd840
// 地址: 0x140bbd840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x50)
uint128_t zmm1 = zx.o(0)
int32_t result

if (r9 == 0)
    result = *(arg1 + 0x100)
    
    if (result s> 0)
        zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xb8))).d f/ _mm_cvtepi32_ps(zx.o(result))[0]
else
    int32_t r8_1 = *(r9 + 0x10)
    int32_t rdx_1 = *(arg1 + 0x100)
    int32_t rax_3 = r8_1
    
    if (rdx_1 s>= r8_1)
        rax_3 = rdx_1
    
    result = rax_3 + *(r9 + 0x20) + r8_1
    zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xb8) + *(arg1 + 0xa4) + *(arg1 + 0x9c))).d f* 100f
    zmm1.d = zmm1.d f/ _mm_cvtepi32_ps(zx.o(result))[0]

*(arg1 + 0xf0) = _mm_max_ss((*(arg1 + 0xf0))[0], zmm1.d)[0]
return result
