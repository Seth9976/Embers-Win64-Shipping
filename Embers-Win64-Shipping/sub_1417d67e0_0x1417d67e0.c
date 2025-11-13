// 函数: sub_1417d67e0
// 地址: 0x1417d67e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm3[0x4] = data_143ef8a30
*arg1 = 0
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143ef8a40)
arg1[1].b = 0
*(arg1 + 0x40) = 0
zmm3[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x10) = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
*(arg1 + 0x20) = zx.o(0)
*(arg1 + 0x30) = temp0
*(arg1 + 0x48) = 0
*(arg1 + 0x50) = 0
return arg1
