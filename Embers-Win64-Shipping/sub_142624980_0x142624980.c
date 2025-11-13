// 函数: sub_142624980
// 地址: 0x142624980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm5 = *arg2
float zmm3[0x4] = *arg3
float zmm4 = *(arg3 + 8)
zmm3[0] = zmm3[0] f- zmm5
zmm4 = zmm4 f- arg2[2]
float zmm1[0x4] = arg1[2]
zmm1[0] = zmm1[0] f- arg2[2]
zmm3[0] = zmm3[0] * zmm3[0]
zmm1[0] = zmm1[0] * zmm4
float zmm2 = zmm4 * zmm4 + zmm3[0]
float result[0x4] = *arg1
result[0] = result[0] f- zmm5
result[0] = result[0] * zmm3[0]
zmm1[0] = zmm1[0] + result[0]
result = zx.o(0)

if (not(zmm2 <= 0f))
    zmm1[0] = zmm1[0] / zmm2

if (not(zmm1[0] < 0f))
    result = __minss_xmmss_memss(zmm1[0], 0x3f800000)

result[0] = result[0] * zmm4
result[0] = result[0] * zmm3[0]
result[0] = result[0] f+ arg2[2]
result[0] = result[0] f+ zmm5
result[0] = result[0] f- arg1[2]
result[0] = result[0] f- *arg1
result[0] = result[0] * result[0]
result[0] = result[0] * result[0]
result[0] = result[0] + result[0]
return result
