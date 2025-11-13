// 函数: sub_141c54660
// 地址: 0x141c54660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx_1 = sx.q(arg1[1].d) * 0x3f0 + *(*arg1 + 0xc8)
char result = (*(rdx_1 + 0x3d0) & 0xef) | 0x20
*(rdx_1 + 0x3d0) = result
int32_t r8_2 = (*(arg1 + 0xc) + 3) & 0xfffffffc

if (r8_2 s<= 0)
    result &= 0xd3
    *(rdx_1 + 0x3d0) = result
    return result

int128_t zmm1 = *(rdx_1 + 0xfc)
*(rdx_1 + 0x108) = zmm1.d
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(r8_2))
*(rdx_1 + 0x110) = r8_2
*(rdx_1 + 0x10c) = 0
zmm1.d = zmm1.d f/ zmm0.d
*(rdx_1 + 0x104) = (zmm1 ^ data_142d3f780).d
return result
