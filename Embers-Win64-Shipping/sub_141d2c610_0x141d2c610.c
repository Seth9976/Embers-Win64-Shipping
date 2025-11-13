// 函数: sub_141d2c610
// 地址: 0x141d2c610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143222798
arg1[3].b = 0
void* rcx = &arg1[0xd]
arg1[2] = &data_142fc6e58
__builtin_memset(&arg1[8], 0, 0x12)
arg1[4] = 0
arg1[5].d = 0
*(arg1 + 0x54) = 0xffffffff
arg1[0xb] = 0
arg1[0xc].d = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
int64_t* rcx_1 = &arg1[0x23]
__builtin_memset(&arg1[0x11], 0, 0x30)
arg1[0x19].b = 0
arg1[0x18] = &data_142fc6e58
__builtin_memset(&arg1[0x1e], 0, 0x12)
arg1[0x1a] = 0
arg1[0x1b].d = 0
*(arg1 + 0x104) = 0xffffffff
arg1[0x21] = 0
arg1[0x22].d = 0
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax_1 = rcx_1[2]

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
rcx_1[1] = 0
__builtin_memset(&arg1[0x27], 0, 0x30)
arg1[0x2e] = &arg1[2]
arg1[0x2f] = &arg1[0x18]
return arg1
