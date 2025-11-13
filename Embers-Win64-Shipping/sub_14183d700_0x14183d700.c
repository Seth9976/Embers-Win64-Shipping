// 函数: sub_14183d700
// 地址: 0x14183d700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = &arg2[2]
*arg2 = 0
arg2[1] = 0
r8[2] = 0
r8[3].d = 0
*(r8 + 0x1c) = 0x80
int64_t* rax = r8[2]

if (rax != 0)
    r8 = rax

*r8 = 0
r8[1] = 0
*(arg2 + 0x34) = 0
arg2[6].d = 0xffffffff
arg2[8] = 0
arg2[9].d = 0
(*(*arg1 + 0xa8))(arg1, arg2)
return arg2
