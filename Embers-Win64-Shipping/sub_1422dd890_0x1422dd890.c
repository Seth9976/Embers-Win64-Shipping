// 函数: sub_1422dd890
// 地址: 0x1422dd890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8
r8.b = 1
sub_14236bb40(arg1[5], 0)
int32_t rax = *(arg1 + 0x1c)
void* rdx = arg1[5]
*(rdx + 0x16e) &= 0xfb
*(rdx + 0x16e) |= 8
*(rdx + 0x208) = rax
*(arg1[5] + 0x204) = arg1[3].d
*(arg1[5] + 0x274) = arg1[2].d * 2
void* rax_3 = arg1[5]
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14))).d f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1c))).d
*(rax_3 + 0xf8) = zmm1.d
void* rax_4 = arg1[5]
int64_t rcx_3 = *(rax_4 + 0x278)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)
    rax_4 = arg1[5]

*(arg1[5] + 0x278) = sub_140a82f30(sx.q(*(rax_4 + 0x274)), 0)
void* rcx_6 = arg1[5]
return memcpy(*(rcx_6 + 0x278), *arg1, *(rcx_6 + 0x274)) __tailcall
