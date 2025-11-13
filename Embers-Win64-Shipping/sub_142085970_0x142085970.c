// 函数: sub_142085970
// 地址: 0x142085970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t temp0 = _mm_unpacklo_ps(zx.o(0), 0)
int32_t var_30 = 0
*arg5 = temp0
arg5[1].d = 0
*arg4 = temp0
arg4[1].d = 0
char result
float zmm6_1[0x4]
result, zmm6_1 = sub_142099320(arg1)

if (result == 0)
    return result

return sub_1424052f0(*(arg1 + 0x270), _mm_unpacklo_ps(zmm6_1, arg3.q)[0].q, arg4, arg5)
