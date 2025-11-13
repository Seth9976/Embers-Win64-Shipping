// 函数: sub_14270a6d0
// 地址: 0x14270a6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg3 + 0x24)
int64_t rsi = sx.q(*(arg1 + 0x140))
int32_t r12 = *(arg3 + 0x14)
int32_t r13 = arg3[2].d
int32_t rbp = *(arg3 + 0x38)
int128_t zmm6 = *arg3
int128_t zmm7 = *(arg3 + 4)
char rax_1 = *(arg3 + 0x2c)
int128_t zmm8 = *(arg3 + 8)
int64_t rax_2 = arg3[3].q
uint128_t zmm9 = zx.o(*(arg3 + 0xc))
int32_t rax_3 = (rsi + 1).d
uint128_t zmm10 = zx.o(*(arg3 + 0x18))
*(arg1 + 0x140) = rax_3

if (rax_3 s> *(arg1 + 0x144))
    sub_140775520(arg1 + 0x138)

int64_t rax_4 = *(arg1 + 0x138)
int64_t r8 = rsi * 9
*(rax_4 + (r8 << 3)) = arg2
*(rax_4 + (r8 << 3) + 0x2c) = rax
*(rax_4 + (r8 << 3) + 0x14) = zmm9.q
*(rax_4 + (r8 << 3) + 0x20) = zmm10.q
*(rax_4 + (r8 << 3) + 8) = zmm6.d
*(rax_4 + (r8 << 3) + 0xc) = zmm7.d
*(rax_4 + (r8 << 3) + 0x10) = zmm8.d
*(rax_4 + (r8 << 3) + 0x1c) = r12
*(rax_4 + (r8 << 3) + 0x28) = r13
*(rax_4 + (r8 << 3) + 0x34) = rax_1
*(rax_4 + (r8 << 3) + 0x38) = rax_2
*(rax_4 + (r8 << 3) + 0x40) &= 0xfffffff8
*(rax_4 + (r8 << 3) + 0x40) |= rbp & 7
int32_t result = *(*(arg1 + 0x148) + (zx.q(*(arg3 + 0x2c)) << 2))
*(*(arg1 + 0x138) + (r8 << 3) + 0xc) = result
return result
