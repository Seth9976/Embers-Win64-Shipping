// 函数: sub_140ae6ba0
// 地址: 0x140ae6ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = &arg1[2]
*arg1 = 0
arg1[1] = 0
r8[2] = 0
r8[3].d = 0
*(r8 + 0x1c) = 0x80
int64_t* rax = r8[2]

if (rax != 0)
    r8 = rax

*r8 = 0
r8[1] = 0
*(arg1 + 0x34) = 0
arg1[6].d = 0xffffffff
arg1[8] = 0
arg1[9].d = 0
sub_140ae7670(arg1, arg2)
arg1[0xa].d = arg2[0xa].d
return arg1
