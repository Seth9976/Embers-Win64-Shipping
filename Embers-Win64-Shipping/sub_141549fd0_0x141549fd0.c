// 函数: sub_141549fd0
// 地址: 0x141549fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = *arg2
float zmm1 = arg2[1]
float zmm0 = arg2[2]
int128_t zmm7
zmm7.d = (*(arg3 + 4)).d f- zmm1
float zmm3 = *arg5 - zmm2
int128_t zmm8
zmm8.d = (*(arg4 + 4)).d f- zmm1
int128_t zmm9
zmm9.d = (*(arg3 + 8)).d f- zmm0
int128_t zmm10
zmm10.d = (*(arg4 + 8)).d f- zmm0
int128_t zmm11
zmm11.d = (*arg3).d f- zmm2
int128_t zmm12
zmm12.d = (*arg4).d f- zmm2
int128_t zmm14
zmm14.d = arg5[1].d f- zmm1
zmm2 = arg5[2] f- zmm0
int128_t zmm6
zmm6.d = zmm8.d f* zmm7.d
float zmm4 = zmm14.d f* zmm7.d
int128_t zmm13
zmm13.d = zmm7.d f* zmm7.d
zmm14.d = zmm14.d f* zmm8.d
zmm13.d = zmm13.d f+ zmm11.d f* zmm11.d
zmm13.d = zmm13.d f+ zmm9.d f* zmm9.d
zmm6.d = zmm6.d f+ zmm12.d f* zmm11.d
float zmm5 = zmm8.d f* zmm8.d + zmm12.d f* zmm12.d + zmm10.d f* zmm10.d
zmm14.d = zmm14.d f+ zmm3 f* zmm12.d
zmm6.d = zmm6.d f+ zmm10.d f* zmm9.d
zmm14.d = zmm14.d f+ zmm2 f* zmm10.d
zmm4 = zmm4 + zmm3 f* zmm11.d + zmm2 f* zmm9.d
zmm3 = 1f / (zmm5 f* zmm13.d - zmm6.d f* zmm6.d)
zmm2 = (zmm4 * zmm5 - zmm14.d f* zmm6.d) * zmm3
zmm14.d = zmm14.d f* zmm13.d
*arg1 = zmm2
zmm14.d = zmm14.d f- zmm4 f* zmm6.d
zmm14.d = zmm14.d f* zmm3
arg1[1] = zmm14.d
return arg1
