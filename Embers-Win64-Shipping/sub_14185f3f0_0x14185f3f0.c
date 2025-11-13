// 函数: sub_14185f3f0
// 地址: 0x14185f3f0
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
sub_140780e10(arg1, arg2)

if (arg2[8] == 0)
    memmove(&arg1[7], &arg2[7], 4)

int64_t rcx_1 = arg1[8]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

void* rcx_2 = &arg1[0xc]
arg1[8] = arg2[8]
arg2[8] = 0
arg1[9].d = arg2[9].d
arg2[9].d = 0
arg1[0xa] = 0
arg1[0xb] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_3 = *(rcx_2 + 0x10)

if (rax_3 != 0)
    rcx_2 = rax_3

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
arg1[0x12] = 0
arg1[0x13].d = 0
sub_140780e10(&arg1[0xa], &arg2[0xa])

if (arg2[0x12] == 0)
    memmove(&arg1[0x11], &arg2[0x11], 4)

int64_t rcx_5 = arg1[0x12]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[0x12] = arg2[0x12]
arg2[0x12] = 0
arg1[0x13].d = arg2[0x13].d
arg2[0x13].d = 0
return arg1
