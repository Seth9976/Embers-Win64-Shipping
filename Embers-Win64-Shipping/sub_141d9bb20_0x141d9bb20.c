// 函数: sub_141d9bb20
// 地址: 0x141d9bb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
void* rax = *(rdi + 0xf0)
void* rcx = rdi + 0x100

if (rax != 0)
    rcx = rax

(*(*rcx + 8))(rcx)
jump(*(rdi + 0xe0))
