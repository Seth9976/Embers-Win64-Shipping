// 函数: sub_140a3b500
// 地址: 0x140a3b500
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
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
sub_140a3c5e0(arg1, arg2)
arg1[0xa] = 0
arg1[0xb] = 0
void* rdx = &arg1[0xc]
*(rdx + 0x1c) = 0x80
void* rax_1 = *(rdx + 0x10)

if (rax_1 != 0)
    rdx = rax_1

__builtin_memset(rdx, 0, 0x1c)
arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
arg1[0x12] = 0
arg1[0x13].d = 0
sub_140747450(&arg1[0xa], &arg2[0xa])
return arg1
