// 函数: sub_142742d50
// 地址: 0x142742d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *(arg2 + 8)
int128_t zmm0 = *(arg2 + 4)
int128_t zmm4 = *arg2
int32_t zmm2 = *(arg2 + 0xc)
int128_t zmm3
zmm3.d = zmm4.d f+ zmm4.d
int128_t zmm11
zmm11.d = zmm1.d f+ zmm1.d
int128_t zmm9
zmm9.d = zmm3.d f* zmm1.d
int128_t zmm13
zmm13.d = zmm0.d f+ zmm0.d
zmm4.d = zmm4.d f* zmm3.d
int128_t zmm6 = zmm3
int128_t zmm10 = zmm3
zmm3 = *(arg2 + 0x14)
zmm6.d = zmm6.d f* zmm0.d
int128_t zmm7
zmm7.d = zmm11.d f* zmm1.d
int128_t zmm8
zmm8.d = zmm13.d f* zmm1.d
int128_t zmm12
zmm12.d = zmm13.d f* zmm0.d
zmm11.d = zmm11.d f* zmm2
zmm0.d = 1f f- zmm12.d
zmm10.d = zmm10.d f* zmm2
zmm13.d = zmm13.d f* zmm2
int128_t zmm5
zmm5.d = 1f f- zmm4.d
zmm2 = arg2[1].d
zmm4 = *(arg2 + 0x18)
zmm0.d = zmm0.d f- zmm7.d
arg1[3] = 0
zmm1.d = zmm9.d f- zmm13.d
zmm13.d = zmm13.d f+ zmm9.d
*arg1 = zmm0.d
arg1[2] = zmm1.d
zmm0.d = zmm11.d f+ zmm6.d
zmm1 = zmm8
zmm6.d = zmm6.d f- zmm11.d
zmm8.d = zmm8.d f- zmm10.d
zmm1.d = zmm1.d f+ zmm10.d
arg1[1] = zmm0.d
arg1[4] = zmm6.d
zmm0.d = zmm5.d f- zmm7.d
zmm5.d = zmm5.d f- zmm12.d
arg1[7] = 0
arg1[5] = zmm0.d
arg1[6] = zmm1.d
arg1[8] = zmm13.d
arg1[9] = zmm8.d
arg1[0xb] = 0
arg1[0xa] = zmm5.d
arg1[0xc] = zmm2
arg1[0xd] = zmm3.d
arg1[0xe] = zmm4.d
arg1[0xf] = 0x3f800000
return arg1
