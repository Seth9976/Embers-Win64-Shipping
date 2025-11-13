// 函数: sub_140d921f0
// 地址: 0x140d921f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
__builtin_memset(arg1 + 0x30, 0, 0x1c)
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0
__builtin_memset(arg1, 0, 0x2c)
void* rcx = arg1 + 0x10
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
int64_t* rcx_1 = arg1 + 0x60
*(arg1 + 0x30) = 0xffffffff
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax_1 = rcx_1[2]

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
rcx_1[1] = 0
*(arg1 + 0x80) = 0xffffffff
__builtin_memset(arg1 + 0x84, 0, 0x24)
*(arg1 + 0xb0) = 0
*(arg1 + 0xb8) = 0xffffffff
return arg1
