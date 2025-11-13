// 函数: sub_141d2e860
// 地址: 0x141d2e860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = j_sub_140a82f30(0x70)

if (rax == 0)
    *arg1 = nullptr
    arg1[1].b = 0
    return arg1

*(rax + 8) = 0
void* rcx = &rax[0xc]
*rax = 0xff7fffff
*(rax + 0x10) = 0
rax[6] = 0xff7fffff
*(rax + 0x40) = 0
*(rax + 0x48) = 0
__builtin_memset(&rax[0x14], 0, 0x1c)
*(rax + 0x60) = 0
*(rax + 0x68) = 0
__builtin_memset(&rax[8], 0, 0x2c)
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
rax[0x14] = 0xffffffff
*arg1 = rax
arg1[1].b = 0
return arg1
