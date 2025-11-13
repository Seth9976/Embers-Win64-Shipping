// 函数: sub_14154a640
// 地址: 0x14154a640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *(arg3 + 0x24)
int128_t zmm4 = *(arg3 + 0x28)
int128_t zmm6 = *arg2
int128_t zmm10 = *(arg2 + 8)
int128_t zmm11 = arg3[2].d
int128_t zmm12 = *(arg3 + 0x14)
float zmm0 = zmm11.d f* zmm6.d
int128_t zmm13 = *(arg2 + 4)
int128_t zmm14 = *arg3
int128_t zmm15 = arg3[1].d
int128_t zmm2
zmm2.d = zmm15.d f* zmm10.d
int128_t zmm8
zmm8.d = zmm14.d f* zmm10.d
float zmm1 = zmm13.d f* zmm11.d f- zmm2.d
zmm11.d = zmm11.d f* zmm10.d
zmm8.d = zmm8.d f- zmm0
int128_t zmm9
zmm9.d = zmm2.d f- zmm6.d * zmm3
zmm2.d = zmm4.d f* zmm13.d
zmm2.d = zmm2.d f- zmm3 f* zmm10.d
zmm9.d = zmm9.d f* zmm6.d
zmm9.d = zmm9.d f- zmm13.d f* zmm8.d
float zmm5 = zmm13.d * zmm3 - zmm12.d f* zmm10.d
arg1[9] = zmm9.d
arg1[6] = zmm9.d
int128_t zmm7
zmm7.d = zmm6.d f* zmm5
zmm7.d = zmm7.d f- zmm13.d * zmm1
zmm0 = zmm6.d
zmm6 = *arg4
arg1[8] = zmm7.d
zmm3 = zmm10.d * zmm1 - zmm0 f* zmm2.d
arg1[2] = zmm7.d
arg1[4] = zmm3
arg1[1] = zmm3
*arg1 = zmm13.d f* zmm2.d - zmm10.d * zmm5 f+ zmm6.d
zmm1 = *arg2
zmm4.d = zmm4.d f* zmm1
zmm12.d = zmm12.d f* zmm1
zmm11.d = zmm11.d f- zmm4.d
zmm11.d = zmm11.d f* zmm1
arg1[5] = zmm10.d f* zmm8.d f- zmm11.d f+ zmm6.d
*(arg1 + 0x30) = 0
arg1[0xe] = 0
arg1[3] = 0
zmm12.d = zmm12.d f- zmm13.d f* zmm15.d
arg1[7] = 0
arg1[0xb] = 0
arg1[0xf] = 0x3f800000
zmm12.d = zmm12.d f* zmm1
zmm12.d = zmm12.d f- (zmm1 f* zmm15.d - zmm13.d f* zmm14.d) f* zmm13.d
zmm12.d = zmm12.d f+ zmm6.d
arg1[0xa] = zmm12.d
return arg1
