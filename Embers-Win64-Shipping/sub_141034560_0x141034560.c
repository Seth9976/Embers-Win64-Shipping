// 函数: sub_141034560
// 地址: 0x141034560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rcx = 4

if (*(arg1 + 0xc) != 0 || rdi.d u> 4)
    rcx = rdi + 0x10 + ((rdi * 3) u>> 3)

int32_t rax_3 = sub_140a846a0(rcx, 0x40)

if (rdi.d s> rax_3)
    rax_3 = 0x7fffffff

*(arg1 + 0xc) = rax_3
return sub_140a30eb0(arg1, zx.q(arg2), rax_3, 1, 0x40)
