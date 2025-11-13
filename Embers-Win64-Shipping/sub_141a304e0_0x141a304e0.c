// 函数: sub_141a304e0
// 地址: 0x141a304e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = &arg1[4]
*arg1 = *arg2
arg1[1].d = arg2[1].d
arg1[2] = 0
arg1[3] = 0
r8[2] = 0
r8[3].d = 0
*(r8 + 0x1c) = 0x80
int64_t* rax_2 = r8[2]

if (rax_2 != 0)
    r8 = rax_2

*r8 = 0
r8[1] = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
sub_141a333e0(&arg1[2], &arg2[2])

if (arg2[0xa] == 0)
    memmove(&arg1[9], &arg2[9], 4)

int64_t rcx_2 = arg1[0xa]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

void* rcx_3 = &arg1[0xe]
arg1[0xa] = arg2[0xa]
arg2[0xa] = 0
arg1[0xb].d = arg2[0xb].d
arg2[0xb].d = 0
arg1[0xc] = 0
arg1[0xd] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_5 = *(rcx_3 + 0x10)

if (rax_5 != 0)
    rcx_3 = rax_5

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
sub_141a33690(&arg1[0xc], &arg2[0xc])

if (arg2[0x14] == 0)
    memmove(&arg1[0x13], &arg2[0x13], 4)

int64_t rcx_6 = arg1[0x14]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[0x14] = arg2[0x14]
arg2[0x14] = 0
arg1[0x15].d = arg2[0x15].d
arg2[0x15].d = 0
return arg1
