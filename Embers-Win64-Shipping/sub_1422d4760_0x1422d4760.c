// 函数: sub_1422d4760
// 地址: 0x1422d4760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r8 = arg1[1]
*arg2 = **arg1
void* rcx_1 = &arg2[0x10]
arg2[2] = *r8
arg2[3].b = r8[1].b
*(arg2 + 0xd) = *(r8 + 5)
*(arg2 + 0x10) = 0
*(arg2 + 0x10) = *(r8 + 8)
*(r8 + 8) = 0
arg2[6] = r8[4]
arg2[7] = r8[5]
*(r8 + 0x10) = 0
arg2[8].b = r8[6].b
arg2[0xa] = r8[8]
*(arg2 + 0x30) = 0
*(arg2 + 0x38) = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_9 = *(rcx_1 + 0x10)

if (rax_9 != 0)
    rcx_1 = rax_9

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg2[0x18] = 0xffffffff
arg2[0x19] = 0
*(arg2 + 0x70) = 0
arg2[0x1e] = 0
sub_140a3cab0(&arg2[0xc], &r8[0xa])

if (*(r8 + 0x68) == 0)
    memmove(&arg2[0x1a], &r8[0x18], 4)

int64_t rcx_4 = *(arg2 + 0x70)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*(arg2 + 0x70) = *(r8 + 0x68)
*(r8 + 0x68) = 0
arg2[0x1e] = r8[0x1c]
r8[0x1c] = 0
return arg2
