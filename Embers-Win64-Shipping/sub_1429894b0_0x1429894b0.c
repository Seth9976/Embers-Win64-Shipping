// 函数: sub_1429894b0
// 地址: 0x1429894b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = arg2[7]
int128_t zmm3 = arg2[6]
int128_t zmm6 = arg2[3]
int128_t zmm7 = arg2[1]
float zmm0 = zmm6.d f- zmm7.d
int128_t zmm12 = arg3
arg3 = arg2[5]
float zmm1 = zmm7.d f- arg3.d
float arg_8 = zmm0
int128_t zmm14
zmm14.d = arg3.d f- zmm6.d
float zmm5 = 1f f- zmm3.d
int128_t zmm13
zmm13.d = zmm3.d f* zmm12.d
zmm3.d = arg3.d f- 1f
int128_t zmm11
zmm11.d = zmm14.d f* *arg2
zmm13.d = zmm13.d f/ zmm4
zmm11.d = zmm11.d f+ zmm0 f* arg2[4]
zmm3.d = zmm3.d f* zmm12.d
zmm14.d = zmm14.d f* zmm13.d
zmm11.d = zmm11.d f+ zmm1 f* arg2[2]
zmm5 = (zmm5 - zmm4) f* zmm12.d / zmm4 f+ zmm13.d
zmm0 = zmm5 f* arg3.d
arg3.d = zmm6.d f- 1f
zmm3.d = zmm3.d f+ zmm0
arg3.d = arg3.d f* zmm12.d
arg3.d = arg3.d f+ zmm5 f* zmm6.d
zmm0 = zmm3.d
zmm3.d = zmm3.d f* *arg2
zmm4 = zmm1 f* zmm13.d f+ zmm3.d
zmm1 = arg3.d f* arg2[4]
arg3.d = arg3.d f* *arg2
zmm14.d = zmm14.d f- zmm0 f* arg2[2]
zmm3.d = arg_8.d f* zmm13.d
zmm14.d = zmm14.d f+ zmm1
zmm3.d = zmm3.d f- arg3.d
zmm14.d = zmm14.d f/ zmm11.d
zmm1 = (zmm7.d - 1f) f* zmm12.d + zmm5 f* zmm7.d
zmm0 = zmm1
zmm1 = zmm1 f* arg2[2]
zmm0 = zmm0 f* arg2[4]
*(arg1 + 4) = 0
zmm3.d = zmm3.d f+ zmm1
*(arg1 + 0xc) = 0
*(arg1 + 0x18) = 0
zmm3.d = zmm3.d f/ zmm11.d
zmm4 = (zmm4 - zmm0) f/ zmm11.d
*(arg1 + 0x20) = 0
*(arg1 + 0x2c) = 0
*(arg1 + 0x34) = 0
*arg1 = 1f
arg1[5] = 0x3f800000
arg1[0xa] = 0x3f800000
arg1[0xf] = 0x3f800000
*arg1 = zmm14.d f* *arg2
arg1[1] = zmm14.d f* arg2[1]
arg1[2] = (1f f- *arg2 f- arg2[1]) f* zmm14.d
arg1[4] = zmm4 f* arg2[2]
arg1[5] = zmm4 f* arg2[3]
arg1[6] = (1f f- arg2[2] f- arg2[3]) * zmm4
arg1[8] = zmm3.d f* arg2[4]
arg1[9] = zmm3.d f* arg2[5]
int128_t zmm15
zmm15.d = 1f f- arg2[4]
zmm15.d = zmm15.d f- arg2[5]
zmm15.d = zmm15.d f* zmm3.d
arg1[0xa] = zmm15.d
return arg1
