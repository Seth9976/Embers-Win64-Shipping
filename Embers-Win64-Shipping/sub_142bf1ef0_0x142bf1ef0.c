// 函数: sub_142bf1ef0
// 地址: 0x142bf1ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = arg1[0xe]
int64_t rdi = arg1[0x1a]
*arg1 = 0
arg1[3] = 0
arg1[4].b = 0
arg1[5] = 0
arg1[0xf].d = 0
*(arg1 + 0x3c) = 9

if (rdx != &arg1[0x11])
    sub_142b99980(rdi, rdx)
    arg1[0xe] = 0

sub_142b99980(rdi, arg1[0xb])
arg1[0xb] = 0
arg1[0xc] = 0
return memset(arg1, 0, 0xd8) __tailcall
