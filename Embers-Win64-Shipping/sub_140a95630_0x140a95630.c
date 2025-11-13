// 函数: sub_140a95630
// 地址: 0x140a95630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)
void* const rax = j_sub_140a82f30(0x20)

if (rax == 0)
    rax = nullptr
else
    __builtin_memset(rax, 0, 0x1a)

*(arg1 + 0x28) = rax

if (rax != 0)
    *(rax + 0xc) += 1

__builtin_memset(arg1 + 0x30, 0, 0x21)
return arg1
