// 函数: sub_140ebf340
// 地址: 0x140ebf340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = data_1439b38e0
uint32_t zmm8[0x4] = *arg1
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm8, data_142d3f770)
temp0[0] = temp0[0] f+ zmm6.d
int128_t zmm7
zmm7.d = logf(temp0[0]).d f* zmm6.d
int128_t result = logf(zmm6.d)
zmm8[0] f- 0f
int128_t zmm2
zmm2.d = result.d f* zmm6.d
result.d = zmm7.d f- zmm2.d

if (not(zmm8[0] f> 0f))
    if (zmm8[0] f>= 0f)
        result = zx.o(0)
    else
        result.d = zmm2.d f- zmm7.d

result.d = result.d f* *(arg2 + 8)
return result
