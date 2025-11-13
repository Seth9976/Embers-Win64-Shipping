// 函数: sub_1418640c0
// 地址: 0x1418640c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1] = arg3
arg1[2] = arg4
*(arg1 + 0x18) = *arg5
*(arg1 + 0x28) = arg5[1]
int128_t zmm0 = arg5[2]
arg1[9] = 0
*(arg1 + 0x38) = zmm0
arg1[0xa] = 0
arg1[0xb] = 0
void* rcx = &arg1[0xc]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x16]
arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
arg1[0x12] = 0
arg1[0x13].d = 0
arg1[0x14] = 0
arg1[0x15] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
arg1[0x1a].d = 0xffffffff
*(arg1 + 0xd4) = 0
arg1[0x1c] = 0
arg1[0x1d].d = 0
arg1[0x1e] = 0
arg1[0x1f] = 0
return arg1
