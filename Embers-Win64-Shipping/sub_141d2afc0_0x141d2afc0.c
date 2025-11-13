// 函数: sub_141d2afc0
// 地址: 0x141d2afc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg1[1]
*arg2 = **arg1
void* rcx_1 = &arg2[3]
arg2[1] = 0
arg2[2] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg2[7].d = 0xffffffff
*(arg2 + 0x3c) = 0
arg2[9] = 0
arg2[0xa].d = 0
sub_140780e10(&arg2[1], rbp)

if (rbp[8] == 0)
    memmove(&arg2[8], &rbp[7], 4)

int64_t rcx_4 = arg2[9]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg2[9] = rbp[8]
rbp[8] = 0
arg2[0xa].d = rbp[9].d
rbp[9].d = 0
return arg2
