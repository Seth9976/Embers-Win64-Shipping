// 函数: sub_140918a50
// 地址: 0x140918a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x128)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142e21850
result[2] = &data_142e205a0
result[3] = 0
result[4] = 0
sub_140a96170(&result[5])
sub_140a96170(&result[8])
sub_140a96170(&result[0xb])
sub_140a96170(&result[0xe])
result[0x11].d = 0xffffffff
sub_140a96170(&result[0x12])
result[0x15].d = 0xffffffff
void* rcx_5 = &result[0x1d]
__builtin_memset(&result[0x16], 0, 0x18)
result[0x19] = 0x2bca2875f4373fff
result[0x1a].b = 0
result[0x1b] = 0
result[0x1c] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax = *(rcx_5 + 0x10)

if (rax != 0)
    rcx_5 = rax

*rcx_5 = 0
*(rcx_5 + 8) = 0
result[0x21].d = 0xffffffff
*(result + 0x10c) = 0
result[0x23] = 0
result[0x24].d = 0
return result
