// 函数: sub_142256ec0
// 地址: 0x142256ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm3 = *(arg3 + 0xc)
float zmm1 = *(arg2 + 0xc)
float zmm2 = *(arg2 + 4)
int128_t zmm6 = *arg2
int128_t zmm9 = *(arg3 + 4)
int128_t zmm10 = *(arg3 + 8)
int128_t zmm11
zmm11.d = zmm9.d f* zmm2
int128_t zmm13 = *arg3
int128_t zmm15 = *(arg2 + 8)
int128_t zmm12
zmm12.d = zmm13.d f* zmm1
int128_t zmm14
zmm14.d = zmm9.d f* zmm1
zmm12.d = zmm12.d f+ zmm6.d f* zmm3.d
float zmm4 = zmm13.d * zmm2
zmm14.d = zmm14.d f+ zmm2 f* zmm3.d
float zmm0 = zmm15.d f* zmm3.d
zmm3.d = zmm3.d f* zmm1
float zmm5 = zmm10.d * zmm1 + zmm0
int128_t zmm8 = zmm3
int32_t arg_10 = zmm3.d
zmm3.d = zmm6.d f+ zmm6.d
zmm11.d = zmm11.d f+ zmm13.d f* zmm6.d
zmm3.d = zmm3.d f* zmm13.d
zmm11.d = zmm11.d f+ zmm10.d f* zmm15.d
zmm13.d = zmm13.d f* zmm15.d
zmm4 = zmm4 + zmm9.d f* zmm6.d
zmm8.d = zmm8.d f- zmm11.d
zmm13.d = zmm13.d f+ zmm10.d f* zmm6.d
zmm3.d = zmm3.d f+ zmm8.d
zmm3.d = zmm3.d f* 0.5f
arg1[1] = (zmm4 + zmm5) * 0.5f
*arg1 = zmm3.d
arg1[2] = (zmm13.d f- zmm14.d) * 0.5f
zmm1 = (zmm2 + zmm2) f* zmm9.d
zmm9.d = zmm9.d f* zmm15.d
zmm2 = zmm2 f* zmm10.d f+ zmm9.d
zmm1 = (zmm1 f+ zmm8.d) * 0.5f
zmm11.d = zmm11.d f+ arg_10
zmm15.d = zmm15.d f+ zmm15.d
arg1[3] = (zmm4 - zmm5) * 0.5f
arg1[4] = zmm1
zmm14.d = zmm14.d f+ zmm13.d
zmm15.d = zmm15.d f* zmm10.d
zmm14.d = zmm14.d f* 0.5f
zmm15.d = zmm15.d f+ zmm8.d
arg1[5] = (zmm12.d + zmm2) * 0.5f
zmm15.d = zmm15.d f* 0.5f
arg1[6] = zmm14.d
arg1[7] = (zmm2 f- zmm12.d) * 0.5f
arg1[8] = zmm15.d

if (zmm11.d f!= 0f)
    return 

*arg1 = zmm3.d + 1.1920929e-07f
arg1[4] = zmm1 + 1.1920929e-07f
arg1[8] = zmm15.d + 1.1920929e-07f
