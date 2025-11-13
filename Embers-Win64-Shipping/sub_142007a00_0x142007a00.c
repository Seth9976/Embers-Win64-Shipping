// 函数: sub_142007a00
// 地址: 0x142007a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x28)
uint128_t zmm6
zmm6.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x4c))).d f* arg2
(*(*rcx + 0x288))(rcx)
*arg3 = 0x3f800000
zmm6.d = zmm6.d f/ arg4.d
uint64_t result = zx.q(int.d(zmm6.d))

if (result.d s>= *(arg1 + 0x4c))
    arg4 = zx.o(0)
else
    int64_t rcx_1 = sx.q(result.d)
    result = *(arg1 + 0x38)
    arg4.d = _mm_cvtepi32_ps(zx.o(*(rcx_1 + result))).d f* 0.00392156886f

arg3[1] = arg4.d
*(arg3 + 8) = arg1 + 0x38
return result
