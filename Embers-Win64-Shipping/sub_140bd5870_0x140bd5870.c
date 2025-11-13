// 函数: sub_140bd5870
// 地址: 0x140bd5870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
sub_140bd5930(&arg1[1], arg3)
sub_140bd5930(&arg1[7], arg4)
void* rcx_2 = &arg1[0x18]
__builtin_memset(&arg1[0xd], 0, 0x18)
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x20] = 0xffffffff
arg1[0x21] = 0
*(arg1 + 0x90) = 0
arg1[0x26] = 0
sub_140be32e0(arg1)
int64_t rcx_4 = *arg3

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *arg4

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg1
