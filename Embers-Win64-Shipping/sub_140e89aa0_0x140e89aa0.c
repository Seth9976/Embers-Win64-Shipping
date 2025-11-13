// 函数: sub_140e89aa0
// 地址: 0x140e89aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x18)
int32_t result = *(arg1 + 0x20) - r8
int32_t rdx_2 = (*(arg1 + 0x24) - *(arg1 + 0x1c)) * result
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg2))
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg3))

if (rdx_2 s> 0)
    uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(r8))
    
    if (zmm1.d f< zmm2.d)
        zmm1 = zmm2
    else
        zmm2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x20)))
        
        if (not(zmm1.d f<= zmm2.d))
            zmm1 = zmm2
    
    zmm2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1c)))
    
    if (zmm0.d f< zmm2.d)
        zmm0 = zmm2
    else
        zmm2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x24)))
        
        if (not(zmm0.d f<= zmm2.d))
            zmm0 = zmm2

*(arg1 + 0x10) = zmm1.d
*(arg1 + 0x14) = zmm0.d
return result
