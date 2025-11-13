// 函数: sub_1414585f0
// 地址: 0x1414585f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg1
uint128_t result = zx.o(0)
float zmm4 = 1f f/ _mm_cvtepi32_ps(zx.o(arg2)).d
float zmm3 = zmm4

if (arg1 s<= 0)
    return zx.o(0)

do
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(i)
    i = divs.dp.d(temp2_1:temp3_1, arg2)
    uint128_t zmm1
    zmm1.d = _mm_cvtepi32_ps(zx.o(mods.dp.d(temp2_1:temp3_1, arg2))).d f* zmm3
    zmm3 = zmm3 * zmm4
    result.d = result.d f+ zmm1.d
while (i s> 0)

return result
