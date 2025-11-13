// 函数: sub_141992410
// 地址: 0x141992410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rax = j_sub_140a82f30(0x20)

if (rax == 0)
    rax = nullptr
else
    __builtin_memset(rax, 0, 0x18)
    *(rax + 0x18) = 2

*arg1 = rax
void* rax_1 = j_sub_140a82f30(0x20)

if (rax_1 == 0)
    arg1[1] = 0
    return arg1

__builtin_memset(rax_1, 0, 0x18)
*(rax_1 + 0x18) = 4
arg1[1] = rax_1
return arg1
