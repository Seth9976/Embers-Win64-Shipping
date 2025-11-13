// 函数: sub_1405ac2f0
// 地址: 0x1405ac2f0
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
sub_1405af250(arg1, arg2)

if (arg2[8] == 0)
    memmove(&arg1[7], &arg2[7], 4)

int64_t rcx_1 = arg1[8]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[8] = arg2[8]
arg2[8] = 0
arg1[9].d = arg2[9].d
arg2[9].d = 0
arg1[0xa] = 0
arg1[0xa] = arg2[0xa]
arg2[0xa] = 0
arg1[0xb].d = arg2[0xb].d
*(arg1 + 0x5c) = *(arg2 + 0x5c)
arg2[0xb] = 0
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
arg1[0xe] = arg2[0xe]
return arg1
