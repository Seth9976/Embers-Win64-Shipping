// 函数: sub_141805230
// 地址: 0x141805230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct IModuleInterface::VTable** result = j_sub_140a82f30(0xc0)

if (result == 0)
    return 0

memset(&result[1], 0, 0xb8)
*result = &IModuleInterface::`vftable'
sub_140b0b2f0(&result[1])
void* rcx_2 = &result[0xb]
*result = &data_142fe1468
result[1] = &data_142fe14b0
result[9] = 0
result[0xa] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
result[0xf].d = 0xffffffff
*(result + 0x7c) = 0
result[0x11] = 0
result[0x12].d = 0
result[0x13] = 0
result[0x14] = 0
result[0x16] = 0
result[0x17] = 0
return result
