// 函数: sub_141f624d0
// 地址: 0x141f624d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm10 = arg1[0xc].d
int128_t zmm12 = arg1[8].d
int128_t zmm13 = arg1[0xa].d
(*(*arg1 + 0x18))()
int128_t zmm9 = arg1[0x34].d
int128_t zmm6 = arg1[0x16].d
int128_t zmm7 = *(arg1 + 0xb4)
int128_t zmm8 = arg1[0x17].d
(*(*arg1 + 0x18))(arg1)
zmm13.d = zmm13.d f* arg3[0]
zmm12.d = zmm12.d f* arg3[0]
arg3[0] = arg3[0] f* arg1[0x35].d
zmm13.d = zmm13.d f* zmm9.d
arg3[0] = arg3[0] f* *(arg2 + 0x3a8)
arg3[0] = arg3[0] f* zmm10.d
zmm13.d = zmm13.d f+ zmm7.d
zmm12.d = zmm12.d f* zmm9.d
zmm13.d = zmm13.d f- *(arg2 + 0x390)
arg3[0] = arg3[0] f* zmm9.d
zmm12.d = zmm12.d f+ zmm6.d
arg3[0] = arg3[0] f+ zmm8.d
zmm13.d = zmm13.d f* zmm13.d
zmm12.d = zmm12.d f- *(arg2 + 0x38c)
arg3[0] = arg3[0] f- *(arg2 + 0x394)
zmm12.d = zmm12.d f* zmm12.d
arg3[0] = arg3[0] * arg3[0]
zmm13.d = zmm13.d f+ zmm12.d
zmm13.d = zmm13.d f+ arg3[0]
float temp0_1[0x4] = __maxss_xmmss_memss(_mm_sqrt_ss(0, zmm13.d)[0], 0x3f800000)
arg3[0] = arg3[0] / temp0_1[0]
return arg3
