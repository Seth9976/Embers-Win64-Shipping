// 函数: sub_141b5fde0
// 地址: 0x141b5fde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_2 = *(arg1 + 0x98)
int64_t r8 = rax_2 + 8

if (rax_2 == 0)
    r8 = 0

*arg2 = r8
void* rax = *(arg1 + 0xa0)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2
