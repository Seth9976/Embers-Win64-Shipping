// 函数: sub_141dffb60
// 地址: 0x141dffb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg3 + 0x10)
int32_t r10 = *(*(result + 0x10) + (sx.q((arg4 << 2).d) << 2) + 4)
uint128_t zmm0

if (r10 s>= 2)
    zmm0 = *(arg3 + 0x1c)
    
    if (not(zmm0.d f<= 0f) && not(zmm0.d f>= 1f))
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(r10 - 1)).d f* zmm0.d
        int32_t rcx_1 = int.d(zmm1.d)
        
        if (rcx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_1)).d f== zmm1.d))
            zmm1 =
                _mm_cvtepi32_ps(zx.o(rcx_1 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))
        
        int32_t rax_2 = int.d(zmm1.d)
        int32_t rcx_3 = r10 - 1
        
        if (rax_2 s<= r10 - 1)
            rcx_3 = rax_2
        
        result = zx.q(rcx_3 + 1)

zmm0 = data_143dbb200
float zmm3[0x4] = data_143dbb1f8
float temp0_6[0x4] = _mm_unpacklo_ps(data_143dbb1fc, 0)
*(arg2 + 0x10) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), temp0_6[0].q)
return result
