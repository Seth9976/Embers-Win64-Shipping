// 函数: sub_141d15820
// 地址: 0x141d15820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct IModuleInterface::VTable** result = j_sub_140a82f30(0x60)

if (result == 0)
    return 0

*result = &IModuleInterface::`vftable'
sub_140b0b2f0(&result[1])
void* rcx_1 = &result[4]
*result = &data_14321e100
result[1] = &data_14321e158
result[2] = 0
result[3] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
result[8].d = 0xffffffff
*(result + 0x44) = 0
result[0xa] = 0
result[0xb].d = 0
return result
