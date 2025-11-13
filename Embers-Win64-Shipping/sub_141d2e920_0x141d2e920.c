// 函数: sub_141d2e920
// 地址: 0x141d2e920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = j_sub_140a82f30(0x60)

if (rax == 0)
    *arg1 = nullptr
    arg1[1].b = 0
    return arg1

int64_t* rcx = rax + 0x20
*(rax + 0x30) = 0
*(rax + 0x38) = 0
__builtin_memset(rax + 0x40, 0, 0x20)
__builtin_memset(rax, 0, 0x3c)
*(rcx + 0x1c) = 0x80
int64_t* rax_1 = rcx[2]

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
rcx[1] = 0
*(rax + 0x40) = 0xffffffff
*(rax + 0x44) = 0
*(rax + 0x50) = 0
*(rax + 0x58) = 0
*arg1 = rax
arg1[1].b = 0
return arg1
