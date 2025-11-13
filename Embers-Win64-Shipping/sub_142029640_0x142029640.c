// 函数: sub_142029640
// 地址: 0x142029640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x98)
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

if (rdi s<= 0 || *(arg1 + 0xb8) s<= rdi)
    rdi = *(arg1 + 0xb8)

if (rcx_1 s<= 0 || *(arg1 + 0xc0) s<= rcx_1)
    rcx_1 = *(arg1 + 0xc0)

uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rcx_1))
int32_t zmm0 = sub_142027220(arg1, _mm_cvtepi32_ps(zx.o(rdi)), zmm2)
return _mm_max_ss(*(arg1 + 0xb4), zmm0)
