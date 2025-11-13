// 函数: sub_140adf440
// 地址: 0x140adf440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm7[0x4] = *(arg1 + 8)
uint32_t zmm8[0x4] = *(arg1 + 4)
uint32_t zmm9[0x4] = *arg1
int128_t zmm10 = arg1[1].d
int128_t zmm11 = *(arg1 + 0x14)
int128_t zmm12 = *(arg1 + 0x18)
int128_t zmm13 = *(arg1 + 0x24)
int128_t zmm14 = arg1[2].d
int128_t zmm15 = *(arg1 + 0x28)
uint32_t zmm0_1[0x4] = sub_140a3f4a0(zmm8, zmm9)
zmm8[0] = zmm8[0] f* zmm8[0]
zmm9[0] = zmm9[0] f* zmm9[0]
zmm0_1[0]
zmm8[0] = zmm8[0] f+ zmm9[0]
float zmm0_2
int32_t zmm6_1
zmm0_2, zmm6_1 = sub_140a3f4a0(zmm7, _mm_sqrt_ss(0, zmm8[0]))
arg2[2] = 0
arg2[1] = zmm6_1
*arg2 = zmm0_2 * 180f * 0.318309873f
float var_e8[0x10]
float* rax = sub_14077e760(&var_e8, arg2)
uint32_t zmm5[0x4] = rax[5]
uint32_t zmm3[0x4] = rax[4]
float zmm4 = rax[6]
zmm5[0] = zmm5[0] f* zmm13.d
zmm3[0] = zmm3[0] f* zmm10.d
zmm5[0] = zmm5[0] f* zmm11.d
zmm3[0] = zmm3[0] f* zmm14.d
zmm3[0] = zmm3[0] f+ zmm5[0]
zmm5[0] = zmm5[0] f+ zmm3[0]
zmm3[0] = zmm3[0] f+ zmm4 f* zmm12.d
zmm5[0] = zmm5[0] f+ zmm4 f* zmm15.d
arg2[2] = sub_140a3f4a0(zmm5, zmm3) * 180f * 0.318309873f
return arg2
