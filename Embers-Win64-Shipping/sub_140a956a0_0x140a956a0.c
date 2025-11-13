// 函数: sub_140a956a0
// 地址: 0x140a956a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rax = j_sub_140a82f30(0x20)

if (rax == 0)
    rax = nullptr
else
    __builtin_memset(rax, 0, 0x1a)

*arg1 = rax

if (rax != 0)
    *(rax + 0xc) += 1

return arg1
