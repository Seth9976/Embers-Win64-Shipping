// 函数: sub_141c8a570
// 地址: 0x141c8a570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x60)

if (rax == 0)
    return 0

memset(rax, 0, 0x60)
sub_140b0b2f0(rax)
*rax = &data_14320f1f0
rax[1] = &data_14320f200
void* result = &rax[1]
__builtin_memset(&rax[2], 0, 0x30)

if (rax == 0)
    result = nullptr

rax[8] = 2
rax[9] = 0
rax[0xa] = 0
rax[0xb] = 2
return result
