// 函数: sub_14280f8f0
// 地址: 0x14280f8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm4 = *arg2
int128_t zmm3 = *(arg2 + 0xc)
int128_t zmm5 = *arg3
int128_t zmm8
zmm8.d = zmm5.d f* zmm3.d
int128_t zmm9 = *(arg3 + 0xc)
int128_t zmm10 = *(arg2 + 8)
zmm8.d = zmm8.d f+ zmm4.d f* zmm9.d
int128_t zmm11 = *(arg2 + 4)
int128_t zmm2
zmm2.d = zmm10.d f* zmm9.d
int128_t zmm1
zmm1.d = zmm11.d f* zmm9.d
int128_t zmm12 = *(arg3 + 4)
int128_t zmm13 = *(arg3 + 8)
zmm9.d = zmm9.d f* zmm3.d
int128_t zmm6
zmm6.d = zmm12.d f* zmm3.d
int128_t zmm7
zmm7.d = zmm13.d f* zmm3.d
zmm6.d = zmm6.d f+ zmm1.d
zmm3.d = zmm4.d f* zmm5.d
float zmm0 = zmm12.d f* zmm4.d
zmm7.d = zmm7.d f+ zmm2.d
int32_t arg_10 = zmm9.d
int128_t zmm15 = zmm3
zmm1.d = zmm13.d f* zmm4.d
zmm3.d = zmm3.d f+ zmm3.d
int32_t arg_8 = zmm10.d
int32_t arg_18 = zmm8.d
zmm9.d = zmm11.d f* zmm12.d
int128_t zmm14
zmm14.d = zmm10.d f* zmm13.d
zmm15.d = zmm15.d f+ zmm9.d
zmm8.d = arg_8.d f* zmm5.d
zmm4.d = zmm11.d f* zmm5.d
zmm9.d = zmm9.d f+ zmm9.d
zmm8.d = zmm8.d f+ zmm1.d
zmm15.d = zmm15.d f+ zmm14.d
zmm4.d = zmm4.d f+ zmm0
zmm13.d = zmm13.d f* zmm11.d
zmm10.d = arg_10.d f- zmm15.d
zmm1.d = zmm4.d f+ zmm7.d
zmm3.d = zmm3.d f+ zmm10.d
zmm1.d = zmm1.d f* 0.5f
arg1[2] = (zmm8.d f+ (zmm6 ^ 0x80000000).d) * 0.5f
arg1[1] = zmm1.d
zmm3.d = zmm3.d f* 0.5f
*arg1 = zmm3.d
zmm3.d = arg_8.d f* zmm12.d
zmm3.d = zmm3.d f+ zmm13.d
zmm1 = arg_18
zmm14.d = zmm14.d f+ zmm14.d
zmm8.d = zmm8.d f+ zmm6.d
zmm15.d = zmm15.d f+ arg_10
zmm4.d = zmm4.d f+ (zmm7 ^ 0x80000000).d
zmm0 = zmm3.d f+ zmm1.d
zmm9.d = zmm9.d f+ zmm10.d
zmm14.d = zmm14.d f+ zmm10.d
zmm8.d = zmm8.d f* 0.5f
zmm3.d = zmm3.d f+ (zmm1 ^ 0x80000000).d
zmm4.d = zmm4.d f* 0.5f
arg1[3] = zmm4.d
zmm9.d = zmm9.d f* 0.5f
arg1[5] = zmm0 * 0.5f
arg1[4] = zmm9.d
zmm14.d = zmm14.d f* 0.5f
zmm3.d = zmm3.d f* 0.5f
arg1[8] = zmm14.d
arg1[6] = zmm8.d
arg1[7] = zmm3.d

if (zmm15.d f!= 0f)
    return 

zmm1.d = zmm14.d f+ 1.1920929e-07f
*arg1 = *arg1 + 1.1920929e-07f
arg1[8] = zmm1.d
arg1[4] = zmm9.d + 1.1920929e-07f
