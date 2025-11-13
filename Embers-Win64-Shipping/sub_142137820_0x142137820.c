// 函数: sub_142137820
// 地址: 0x142137820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = &arg1[4]
__builtin_memset(arg1, 0, 0x20)
r8[2] = 0
r8[3].d = 0
*(r8 + 0x1c) = 0x80
int64_t* rax = r8[2]

if (rax != 0)
    r8 = rax

*r8 = 0
r8[1] = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
arg1[0xc].d = 0
*(arg1 + 0x64) = arg2

if (arg2 s> *(arg1 + 0xc))
    sub_14083ad30(arg1, arg2)

return arg1
