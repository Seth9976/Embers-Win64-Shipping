// 函数: sub_1410b7780
// 地址: 0x1410b7780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg4
*(arg1 + 0x48) = *arg2
*(arg1 + 0x4c) = arg2[1]
*(arg1 + 0x50) = arg2[2]
*(arg1 + 0x54) = arg2[3]
void* rbx = *(arg1 + 0x40)
uint128_t zmm9 = zx.o(*(arg1 + 0x50))
uint128_t zmm10 = zx.o(*(arg1 + 0x4c))
uint128_t zmm11 = zx.o(*(arg1 + 0x48))
void*** rcx_2 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm8 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x54)))
void* rax_4 = &rcx_2[5]
zmm9 = _mm_cvtepi32_ps(zmm9)
zmm10 = _mm_cvtepi32_ps(zmm10)
zmm11 = _mm_cvtepi32_ps(zmm11)

if (rax_4 u> *(rbx + 0x38))
    zmm6 = sub_140b0e3d0(rbx + 0x30, 0x30)
    rcx_2 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_2[5]

*(rbx + 0x30) = rax_4
void**** rax_5 = *(rbx + 8)
*(rbx + 0x14) += 1
*rax_5 = rcx_2
*(rbx + 8) = &rcx_2[1]
rcx_2[1] = 0
rcx_2[2].d = zmm11.d
*(rcx_2 + 0x14) = zmm10.d
rcx_2[3].d = arg3.d
*(rcx_2 + 0x1c) = zmm9.d
rcx_2[4].d = zmm8.d
*(rcx_2 + 0x24) = zmm6.d
*rcx_2 = &data_142d54998
return &data_142d54998
