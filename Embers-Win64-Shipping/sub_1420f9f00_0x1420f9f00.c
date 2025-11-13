// 函数: sub_1420f9f00
// 地址: 0x1420f9f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = *(arg2 + 0x3a8)
int128_t zmm7
zmm7.d = (*(arg1 + 0xb4)).d f- *(arg2 + 0x390)
int128_t zmm8
zmm8.d = arg1[0x17].d.d f- *(arg2 + 0x394)
int128_t zmm9
zmm9.d = arg1[0x16].d.d f- *(arg2 + 0x38c)
(*(*arg1 + 0x18))()
zmm9.d = zmm9.d f* zmm9.d
zmm7.d = zmm7.d f* zmm7.d
zmm8.d = zmm8.d f* zmm8.d
zmm9.d = zmm9.d f+ zmm7.d
zmm9.d = zmm9.d f+ zmm8.d
return arg3 f* zmm6.d f/ __maxss_xmmss_memss(_mm_sqrt_ss(0, zmm9.d), 0x3f800000)
