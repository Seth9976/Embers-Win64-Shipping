// 函数: sub_1423d19e0
// 地址: 0x1423d19e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
int32_t var_38 = 0
int64_t var_34
sub_140d3a3a0(&var_34, nullptr)
int64_t rdi = sx.q(*(arg1 + 0xc8))
var_34 = zmm0.q
int32_t rax_2 = (rdi + 1).d
*(arg1 + 0xc8) = rax_2

if (rax_2 s> *(arg1 + 0xcc))
    sub_1405c4d20(arg1 + 0xc0)

int64_t rcx_2 = *(arg1 + 0xc0)
int64_t rdx_2 = rdi * 5
*(rcx_2 + (rdx_2 << 2)) = arg2.d.o
int32_t result = zmm0:8.q:4.d
*(rcx_2 + (rdx_2 << 2) + 0x10) = result
return result
