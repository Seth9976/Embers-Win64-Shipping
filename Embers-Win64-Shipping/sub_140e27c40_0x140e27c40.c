// 函数: sub_140e27c40
// 地址: 0x140e27c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *arg2
int128_t zmm1 = *(arg2 + 4)
uint128_t zmm2
zmm2.d = zmm0.d f+ *arg1
int128_t zmm4
zmm4.d = zmm1.d f+ arg1[1]
int128_t zmm11 = *(arg3 + 4)
int128_t zmm6 = zmm11
zmm11.d = zmm11.d f+ *(arg4 + 4)
zmm6.d = zmm6.d f+ zmm1.d
uint128_t zmm13 = *arg3
uint128_t zmm5 = zmm13
zmm13.d = zmm13.d f+ *arg4
int128_t zmm12
zmm12.d = zmm4.d f* 0.5f
zmm5.d = zmm5.d f+ zmm0.d
int128_t zmm9
zmm9.d = zmm11.d f* 0.5f
zmm11.d = zmm11.d f+ zmm6.d
uint128_t zmm14
zmm14.d = zmm2.d f* 0.5f
uint128_t zmm10
zmm10.d = zmm13.d f* 0.5f
zmm13.d = zmm13.d f+ zmm5.d
zmm11.d = zmm11.d f* 0.5f
int128_t zmm3
zmm3.d = zmm6.d f+ zmm4.d
zmm0.d = zmm5.d f+ zmm2.d
zmm13.d = zmm13.d f* 0.5f
zmm1 = zmm11
zmm3.d = zmm3.d f* 0.5f
zmm0.d = zmm0.d f* 0.5f
zmm11.d = zmm11.d f+ zmm3.d
zmm2.d = zmm13.d f* 0.5f
zmm13.d = zmm13.d f+ zmm0.d
zmm1.d = zmm1.d f* 0.5f
uint128_t zmm7 = zmm0
zmm0 = zx.o(*arg1)
zmm11.d = zmm11.d f* 0.25f
zmm13.d = zmm13.d f* 0.25f
zmm7.d = zmm7.d f* 0.5f
zmm4.d = zmm3.d f* 0.5f
arg5[3].d = zmm13.d
arg5[1].d = zmm14.d
*(arg5 + 0xc) = zmm12.d
arg5[2].d = zmm7.d
*(arg5 + 0x1c) = zmm11.d
arg5[5].d = zmm10.d
*(arg5 + 0x2c) = zmm9.d
*(arg5 + 0x14) = zmm4.d
arg5[4].d = zmm2.d
*(arg5 + 0x24) = zmm1.d
*arg5 = zmm0.q
arg5[6] = *arg4
return arg5
