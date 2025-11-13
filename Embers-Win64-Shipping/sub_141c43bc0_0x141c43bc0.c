// 函数: sub_141c43bc0
// 地址: 0x141c43bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0

if (0 == *(arg1 + 0x3c))
    *(arg1 + 0x3c) = 0
else
    rax = *(arg1 + 0x3c)

int32_t rax_1 = 0

if (0 == arg1[8].d)
    arg1[8].d = 0
else
    rax_1 = arg1[8].d

if (modu.dp.d(0:(rax - 1 + arg1[7].d - rax_1), arg1[7].d) u< arg3)
    uint64_t rax_4
    rax_4.b = 0
    return rax_4

sub_141c437f0(&arg1[5], arg2, arg3)

if (arg4 != 0)
    return sub_141c37670(arg1) __tailcall

uint64_t rax_5
rax_5.b = 1
return rax_5
