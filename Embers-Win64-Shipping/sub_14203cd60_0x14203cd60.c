// 函数: sub_14203cd60
// 地址: 0x14203cd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg1 + 0xb4)

if (not(arg2[0] < zmm0[0]))
    zmm0 = __minss_xmmss_memss(arg2[0], 0x42c80000)

int32_t rax = *(arg1 + 0x98)
*(arg1 + 0x30) = zmm0[0]
int32_t arg_8
int32_t rdi

if (rax != 1)
    rdi = *(arg1 + 0x80)
else
    rdi = *sub_142029700(arg1, &arg_8)
    rax = *(arg1 + 0x98)

int32_t rcx_1

if (rax != 1)
    rcx_1 = *(arg1 + 0x84)
else
    rcx_1 = sub_142029700(arg1, &arg_8)[1]

float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(rdi))
temp0_2[0] = temp0_2[0] f* *(arg1 + 0x30)
temp0_2[0] = temp0_2[0] * 0.00999999978f
int32_t rax_3 = int.d(temp0_2[0])
float temp0_3[0x4] = _mm_cvtepi32_ps(zx.o(rcx_1))
*(arg1 + 0xb8) = rax_3
temp0_3[0] = temp0_3[0] f* *(arg1 + 0x30)
temp0_3[0] = temp0_3[0] * 0.00999999978f
int32_t result = int.d(temp0_3[0])
*(arg1 + 0xc0) = result
return result
