// 函数: sub_141e0a870
// 地址: 0x141e0a870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x1f0))
int128_t zmm6 = *arg2
int128_t zmm7 = arg2[1]
int64_t rax = *arg3
int128_t zmm8 = arg2[2]
int32_t rax_1 = (rdi + 1).d
int32_t zmm3
int32_t var_40 = zmm3
*(arg1 + 0x1f0) = rax_1

if (rax_1 s> *(arg1 + 0x1f4))
    sub_1405c4fe0(arg1 + 0x1e8)

int64_t result = *(arg1 + 0x1e8)
int64_t rcx_2 = rdi << 6
*(rcx_2 + result) = zmm6
*(rcx_2 + result + 0x10) = zmm7
*(rcx_2 + result + 0x20) = zmm8
*(rcx_2 + result + 0x30) = rax.o
return result
