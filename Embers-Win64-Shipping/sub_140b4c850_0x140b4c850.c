// 函数: sub_140b4c850
// 地址: 0x140b4c850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = arg2
*arg1 = 0
arg1[2] = 0

if (arg2 s<= 0)
    r8 = 0

arg1[1] = r8
int64_t rax_1
int32_t rdx
rdx:rax_1 = sx.o(r8 * 3)
int64_t rax_4 = sub_140a846a0(r8 + 0x10 + ((rax_1 + (zx.q(rdx) & 7)) s>> 3), 0)

if (rax_4 s<= 0x10000)
    rax_4 = 0x10000

int64_t rcx_2 = *arg1
arg1[2] = rax_4

if (rcx_2 == 0)
    *arg1 = sub_140a82f30(rax_4, 0)
    return arg1

*arg1 = sub_140a84c80(rcx_2, rax_4, 0)
return arg1
