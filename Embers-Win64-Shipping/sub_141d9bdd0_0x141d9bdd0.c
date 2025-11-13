// 函数: sub_141d9bdd0
// 地址: 0x141d9bdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
void* rax = *(rdi + 0x100)
void* rcx = rdi + 0x110

if (rax != 0)
    rcx = rax

(*(*rcx + 8))(rcx)
jump(*(rdi + 0xf0))
