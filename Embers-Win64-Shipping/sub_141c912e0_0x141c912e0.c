// 函数: sub_141c912e0
// 地址: 0x141c912e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x50)
int64_t* rcx = arg1 + 0x50
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = arg1 + 0xa0
*(arg1 + 0x70) = 0xffffffff
*(arg1 + 0x74) = 0
*(arg1 + 0x80) = 0
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0x98) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
*(arg1 + 0xc0) = 0xffffffff
*(arg1 + 0xc4) = 0
*(arg1 + 0xd0) = 0
*(arg1 + 0xd8) = 0
*(arg1 + 0xe0) = 0
*(arg1 + 0xe2) = 0
return arg1
