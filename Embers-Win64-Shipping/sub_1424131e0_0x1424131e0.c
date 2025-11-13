// 函数: sub_1424131e0
// 地址: 0x1424131e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = data_14399f720
arg1[0x4c] = arg5
int64_t rax_1 = *arg1
arg1[8].d = arg2
arg1[0xf].d = arg2
*(arg1 + 0x2b0) = zmm0
*(arg1 + 0x44) = arg3
*(arg1 + 0x7c) = arg3
arg1[0x4d] = arg4
(*(rax_1 + 0x260))(arg1, 0)
int32_t rcx = arg1[8].d
int32_t rdx = *(arg1 + 0x44)
void* result = arg1[0x4c]
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rcx))
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rdx))
arg1[6].d = zmm1.d
*(arg1 + 0x34) = zmm2.d

if (result != 0)
    zmm0 = 0x3f800000
    int32_t zmm3
    
    if (*(result + 0x94) == 0)
        zmm3 = *(result + 0xa4)
    else
        zmm3 = 0x3f800000
    
    zmm1.d = zmm1.d f/ zmm3
    arg1[6].d = zmm1.d
    
    if (*(result + 0x94) == 0)
        zmm0 = *(result + 0xa4)
    
    zmm2.d = zmm2.d f/ zmm0.d
    *(arg1 + 0x34) = zmm2.d
    *(result + 0x98) = rcx
    *(result + 0x9c) = rdx

return result
