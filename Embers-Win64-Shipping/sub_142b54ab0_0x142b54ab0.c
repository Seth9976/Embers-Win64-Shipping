// 函数: sub_142b54ab0
// 地址: 0x142b54ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4] = arg2
zmm6[0].q = zmm6[0].q f- 2447891.5
uint128_t zmm8 = 0x401921fb54442d18
zmm6[0].q = zmm6[0].q f* 0.017202791632524146
double zmm0_1 = sub_142a4b9b0(zmm6[0].q f/ zmm8.q) f* zmm8.q
zmm6[0].q = zmm6[0].q f- zmm0_1
zmm6[0].q = zmm6[0].q f+ 4.8765075782973497
zmm6[0].q = zmm6[0].q f- 4.9352399845687689
uint32_t zmm0_2[0x4] = sub_142a4b9b0(zmm6[0].q f/ zmm8.q)
zmm0_2[0].q = zmm0_2[0].q f* zmm8.q
zmm6[0].q = zmm6[0].q f- zmm0_2[0].q
*arg4 = zmm6.q
int128_t zmm0_3
double zmm8_1
zmm0_3, zmm8_1 = sub_142b54fd0(zmm6, 0x3f911d3671ac14c6)
int128_t zmm6_1
zmm6_1.q = zmm0_3.q f+ 4.9352399845687689
zmm0_3.q = zmm6_1.q f/ zmm8_1
double result = sub_142a4b9b0(zmm0_3.q) * zmm8_1
zmm6_1.q = zmm6_1.q f- result
*arg3 = zmm6_1.q
return result
