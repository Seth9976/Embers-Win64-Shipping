// 函数: sub_141ed6cb0
// 地址: 0x141ed6cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
char arg_18 = 0
char arg_8 = 0
char arg_20 = 0
(*(rax + 0x5a8))(arg1, arg2, &arg_18, &arg_20, &arg_8)
char rax_1 = arg_8
char rcx_1 = 0
*(arg1 + 0x389) &= 0xbf
uint64_t r8_1 = zx.q(arg_20)
*(arg1 + 0x386) = rax_1
int64_t rax_2 = *arg1

if (rax_1 == 2)
    rcx_1 = 0x40

*(arg1 + 0x389) |= rcx_1
return (*(rax_2 + 0x590))(arg1, zx.q(arg_18), r8_1)
