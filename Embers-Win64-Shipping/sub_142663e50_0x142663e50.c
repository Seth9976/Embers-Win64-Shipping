// 函数: sub_142663e50
// 地址: 0x142663e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = zx.o(0)

if (not(arg3[0] < 0f))
    zmm6 = _mm_min_ss(arg3[0], 0x7f7fc99e)

float zmm7[0x4]

if (arg4[0] >= zmm6[0])
    zmm7 = _mm_min_ss(arg4[0], 0x7f7fc99e)
else
    zmm7 = zmm6

void* arg_8 = arg2
uint32_t rcx_1 = (arg2 u>> 4).d
int32_t r8_1 = (0x9e3779b9 - rcx_1) ^ rcx_1 << 8
int32_t rdx_2 = neg.d(r8_1 + rcx_1) ^ r8_1 u>> 0xd
int32_t rcx_4 = (rcx_1 - r8_1 - rdx_2) ^ rdx_2 u>> 0xc
int32_t r8_4 = (r8_1 - rcx_4 - rdx_2) ^ rcx_4 << 0x10
int32_t rdx_5 = (rdx_2 - r8_4 - rcx_4) ^ r8_4 u>> 5
int32_t rcx_7 = (rcx_4 - r8_4 - rdx_5) ^ rdx_5 u>> 3
int32_t r8_7 = (r8_4 - rcx_7 - rdx_5) ^ rcx_7 << 0xa
void* rax_14 = sub_14263fdd0(arg1 + 0x158, (rdx_5 - r8_7 - rcx_7) ^ r8_7 u>> 0xf, &arg_8)
int64_t result = sub_140d3a3a0(rax_14, arg2)
*(rax_14 + 8) = zmm6[0]
*(rax_14 + 0xc) = zmm7[0]
return result
