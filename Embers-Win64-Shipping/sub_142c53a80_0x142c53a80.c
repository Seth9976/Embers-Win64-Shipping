// 函数: sub_142c53a80
// 地址: 0x142c53a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(*arg1 + 0x248) = 0
int64_t rax = arg1[0x8a]
int64_t rdx = arg1[0x8b]

if (rax u> rdx)
    rdx = rax

*(*arg1 + 0x218) = rdx + 1
return sub_142c6f300(*arg1, 6) __tailcall
