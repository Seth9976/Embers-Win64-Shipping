// 函数: sub_141dfd4d0
// 地址: 0x141dfd4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
uint64_t result = *(r10 + 0x20)
int32_t r9 = *(result + (sx.q(*(r10 + 0x30) * arg4) << 2) + 4)
uint128_t zmm0

if (r9 s>= 2)
    zmm0 = *(arg3 + 0x1c)
    
    if (not(zmm0.d f<= 0f) && not(zmm0.d f>= 1f))
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(r9 - 1)).d f* zmm0.d
        int32_t rcx_1 = int.d(zmm1.d)
        
        if (rcx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_1)).d f== zmm1.d))
            zmm1 =
                _mm_cvtepi32_ps(zx.o(rcx_1 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))
        
        int32_t rax_4 = int.d(zmm1.d)
        int32_t rcx_3 = r9 - 1
        
        if (rax_4 s<= r9 - 1)
            rcx_3 = rax_4
        
        result = zx.q(rcx_3 + 1)

zmm0 = data_143dbb200
float zmm3[0x4] = data_143dbb1f8
float temp0_6[0x4] = _mm_unpacklo_ps(data_143dbb1fc, 0)
*(arg2 + 0x20) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), temp0_6[0].q)
return result
