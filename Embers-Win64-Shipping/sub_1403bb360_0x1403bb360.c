// 函数: sub_1403bb360
// 地址: 0x1403bb360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t result = *arg3
int128_t zmm1 = arg3[1]
int64_t r8 = arg2 * 3
int32_t i_1 = 8
int32_t i

do
    *arg1 = result
    arg1[1] = zmm1
    *(arg1 + arg2) = result
    *(arg1 + arg2 + 0x10) = zmm1
    *(arg1 + (arg2 << 1)) = result
    *(arg1 + (arg2 << 1) + 0x10) = zmm1
    *(arg1 + r8) = result
    *(arg1 + r8 + 0x10) = zmm1
    arg1 += arg2 << 2
    i = i_1
    i_1 -= 1
while (i != 1)
return result
