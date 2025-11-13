// 函数: sub_14243f510
// 地址: 0x14243f510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r8_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm7 = zx.o(arg2[3])
uint128_t zmm8 = zx.o(arg2[1])
void* rax = &r8_2[5]
uint128_t zmm9 = zx.o(*arg2)
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(arg2[4]))
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    r8_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &r8_2[5]

*(arg1 + 0x30) = rax
*(arg1 + 0x14) += 1
**(arg1 + 8) = r8_2
*(arg1 + 8) = &r8_2[1]
r8_2[1] = 0
*r8_2 = &data_142d54998
r8_2[2].d = zmm9.d
*(r8_2 + 0x14) = zmm8.d
*(r8_2 + 0x1c) = zmm7.d
r8_2[4].d = zmm6.d
r8_2[3].d = 0
*(r8_2 + 0x24) = 0
int64_t rbp = data_143a30810
void*** rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_3[5]

if (rax_3 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_3[5]

*(arg1 + 0x30) = rax_3
int64_t* rax_4 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_4 = rcx_3
*(arg1 + 8) = &rcx_3[1]
rcx_3[3] = rbp
int32_t rbp_2 = arg2[5] - arg2[2]
rcx_3[1] = 0
*rcx_3 = &data_142d56618
rcx_3[2].d = 0
rcx_3[4].d = 0
void*** rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_9[4]

if (rax_6 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_9[4]

*(arg1 + 0x30) = rax_6
int64_t* rax_7 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_7 = rcx_9
*(arg1 + 8) = &rcx_9[1]
rcx_9[1] = 0
rcx_9[3].d = rbp_2
*rcx_9 = &data_142d54988
rcx_9[2].d = 0
*(rcx_9 + 0x14) = 2
return &data_142d54988
