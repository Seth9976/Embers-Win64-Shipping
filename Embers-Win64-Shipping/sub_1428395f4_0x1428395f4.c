// 函数: sub_1428395f4
// 地址: 0x1428395f4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = arg2

if (not(0x3e7ad7f29abcaf48 f<= fconvert.d(arg2.d)))
    zmm7 = 0x33d6bf95

uint128_t zmm0 = *(arg1 + 0xf9c)
*(arg1 + 0xdf0) = zmm7.d
int128_t zmm0_1
zmm0_1.d = sub_14283c02c(zmm0, 1).d f* zmm7.d
zmm0_1.d = zmm0_1.d f* 3.05175781e-05f
*(arg1 + 0xfa0) = zmm0_1.d
float zmm0_2 = sub_14283c02c(*(arg1 + 0xf9c), 0) f* zmm7.d
float zmm1 = zmm7.d
zmm7.d = zmm7.d f* *(arg1 + 0xfb0)
zmm7.d = zmm7.d f* 3.05175781e-05f
zmm1 = zmm1 f* *(arg1 + 0xfa8) * 3.05175781e-05f
*(arg1 + 0xfb4) = zmm7.d
*(arg1 + 0xfac) = zmm1
*(arg1 + 0xfa4) = zmm0_2 * 3.05175781e-05f
return 0
