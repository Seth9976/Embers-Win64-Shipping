// 函数: sub_141fa0a30
// 地址: 0x141fa0a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = *arg1
int64_t* rbp = arg1[1]
*(arg2 + 8) = 0
void* rcx = &arg2[6]
*arg2 = *rax
*(arg2 + 0x10) = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg2[0xe] = 0xffffffff
arg2[0xf] = 0
*(arg2 + 0x48) = 0
arg2[0x14] = 0
sub_1409fb720(&arg2[2], rbp)

if (rbp[8] == 0)
    memmove(&arg2[0x10], &rbp[7], 4)

int64_t rcx_3 = *(arg2 + 0x48)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*(arg2 + 0x48) = rbp[8]
rbp[8] = 0
arg2[0x14] = rbp[9].d
rbp[9].d = 0
return arg2
