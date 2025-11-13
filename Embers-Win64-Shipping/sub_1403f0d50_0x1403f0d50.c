// 函数: sub_1403f0d50
// 地址: 0x1403f0d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0

if (arg3 != 0)
    *(arg1 + 0x12d1) = 0
else
    int32_t zmm1 = 0x40000000
    zmm0.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x16a0) + *(arg1 + 0x1220))).d f* *(arg2 + 0x368)
    zmm0.d = zmm0.d f* 0.100000001f
    
    if (not(zmm0.d f> 2f))
        zmm1 = (zx.o(0)).d
        
        if (not(0f f> zmm0.d))
            zmm1 = zmm0.d
    
    *(arg1 + 0x12d1) = (int.d(zmm1)).b

int32_t result = sx.d(*(&data_1436fc870 + (sx.q(*(arg1 + 0x12d1)) << 1)))
zmm0.d = _mm_cvtepi32_ps(zx.o(result)).d f* 6.10351562e-05f
*(arg2 + 0xe0) = zmm0.d
return result
