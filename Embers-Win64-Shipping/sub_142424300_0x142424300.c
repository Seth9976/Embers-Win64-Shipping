// 函数: sub_142424300
// 地址: 0x142424300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x260))(arg1, 0)
int32_t rcx = arg1[8].d
int32_t rdx = *(arg1 + 0x44)
void* result = arg1[0x4c]
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rcx))
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rdx))
arg1[6].d = zmm1.d
*(arg1 + 0x34) = zmm2.d

if (result != 0)
    int32_t zmm0 = 0x3f800000
    int32_t zmm3
    
    if (*(result + 0x94) == 0)
        zmm3 = *(result + 0xa4)
    else
        zmm3 = 0x3f800000
    
    zmm1.d = zmm1.d f/ zmm3
    arg1[6].d = zmm1.d
    
    if (*(result + 0x94) == 0)
        zmm0 = *(result + 0xa4)
    
    zmm2.d = zmm2.d f/ zmm0
    *(arg1 + 0x34) = zmm2.d
    *(result + 0x98) = rcx
    *(result + 0x9c) = rdx

return result
