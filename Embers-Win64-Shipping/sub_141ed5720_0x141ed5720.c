// 函数: sub_141ed5720
// 地址: 0x141ed5720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (zx.o(0)).d
int128_t zmm6 = *arg2

if ((zmm6.d f!= 0f || 0f f!= *(arg2 + 4) || not(0f f== *(arg2 + 8))) && arg1[0x2d].b != 0
        && (*(arg1 + 0x8a) & 1) != 0 && (*(*arg1 + 0x5c0))() != 0)
    result = arg1[0x41].d
    
    if (not(result f<= 9.99999994e-09f))
        float zmm1 = 1f f/ result
        zmm6.d = zmm6.d f* zmm1
        result = zmm1 f* *(arg2 + 4) f+ *(arg1 + 0x284)
        zmm6.d = zmm6.d f+ arg1[0x50].d
        zmm1 = zmm1 f* *(arg2 + 8) f+ arg1[0x51].d
        *(arg1 + 0x284) = result
        arg1[0x50].d = zmm6.d
        arg1[0x51].d = zmm1

return result
