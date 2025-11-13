// 函数: sub_1423ce580
// 地址: 0x1423ce580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b4c2a0(arg1)
int64_t* r10 = &arg1[0x16]
int64_t* rcx = &arg1[0x22]
*arg1 = &data_1433407b0
arg1[0x14] = 0
arg1[0x15] = 0
r10[2] = 0
r10[3].d = 0
*(r10 + 0x1c) = 0x80
int64_t* rax = r10[2]

if (rax != 0)
    r10 = rax

*r10 = 0
r10[1] = 0
arg1[0x1a].d = 0xffffffff
*(arg1 + 0xd4) = 0
arg1[0x1c] = 0
arg1[0x1d].d = 0
__builtin_memset(&arg1[0x1e], 0, 0x20)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_1 = rcx[2]

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
rcx[1] = 0
arg1[0x26].d = 0xffffffff
*(arg1 + 0x134) = 0
arg1[0x28] = 0
arg1[0x29].d = 0
char rax_2 = *(arg1 + 0x2a)
*(arg1 + 0x29) &= 0xbf
arg1[0x2b] = arg3
*(arg1 + 0x2a) = (rax_2 & 0xfd) | 0x64
*arg1 = &data_143342cf0
arg1[0x12] = arg2
arg1[0x13].d = 0
arg1[0x2a].b = 0
arg1[0x2c] = arg4

if (arg5 == 0)
    sub_1423ef760(arg1)

return arg1
