// 函数: sub_141adb6d0
// 地址: 0x141adb6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg2, 0, 0x40)
*(arg2 + 8) = 0x7fffffff
*(arg2 + 0xc) = 0xffffffff
float zmm1[0x4] = data_143f2bb20
zmm1[0].q = zx.o(0) u>> 0x40
*(arg2 + 0x10) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg2 + 0x20) = zx.o(0)
*(arg2 + 0x30) = __andps_xmmxud_memxud(data_143f2bb20, data_143f2bb30)
return 0
