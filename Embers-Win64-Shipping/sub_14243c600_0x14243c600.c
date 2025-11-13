// 函数: sub_14243c600
// 地址: 0x14243c600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(*arg1)).d f* 0.00392156886f
int32_t arg_8 = zmm0.d
uint16_t rdx_1 = (arg_8 u>> 0x17).w & 0xff
uint16_t r8_2 = (((0x70 - zx.d(rdx_1)) s>> 4 u>> 0x1b).w << 0xa & ((rdx_1 + 0x10) * 0x400))
    | ((arg_8 u>> 0x1a).w & 0xffe0) << 0xa | ((arg_8 u>> 0xd).w & 0x3ff)
zmm0.d = _mm_cvtepi32_ps(zx.o(arg1[1])).d f* 0.00392156886f
arg_8 = zmm0.d
uint16_t rcx_3 = (arg_8 u>> 0x17).w & 0xff
uint16_t arg_12 = (((0x70 - zx.d(rcx_3)) s>> 4 u>> 0x1b).w << 0xa & ((rcx_3 + 0x10) * 0x400))
    | ((arg_8 u>> 0x1a).w & 0xffe0) << 0xa | ((arg_8 u>> 0xd).w & 0x3ff)
zmm0.d = _mm_cvtepi32_ps(zx.o(arg1[2])).d f* 0.00392156886f
arg_8 = zmm0.d
uint16_t rcx_7 = (arg_8 u>> 0x17).w & 0xff
int16_t arg_16 = 0x3c00
uint16_t arg_14 = (((0x70 - zx.d(rcx_7)) s>> 4 u>> 0x1b).w << 0xa & ((rcx_7 + 0x10) * 0x400))
    | ((arg_8 u>> 0x1a).w & 0xffe0) << 0xa | ((arg_8 u>> 0xd).w & 0x3ff)
return r8_2.q
