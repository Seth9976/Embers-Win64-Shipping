// 函数: sub_141a71250
// 地址: 0x141a71250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg2, 0, 0xa8)
*arg2 = 0xffffffff
void* rcx_1 = &arg2[6]
*(arg2 + 0x10) = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* result_1 = &arg2[0x1a]
arg2[0xe] = 0xffffffff
arg2[0xf] = 0
*(arg2 + 0x48) = 0
arg2[0x14] = 0
*(arg2 + 0x58) = 0
*(arg2 + 0x60) = 0
*(result_1 + 0x10) = 0
*(result_1 + 0x18) = 0
*(result_1 + 0x1c) = 0x80
void* result = *(result_1 + 0x10)

if (result != 0)
    result_1 = result

*result_1 = 0
*(result_1 + 8) = 0
arg2[0x22] = 0xffffffff
arg2[0x23] = 0
*(arg2 + 0x98) = 0
arg2[0x28] = 0
return result
