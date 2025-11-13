// 函数: sub_14081a190
// 地址: 0x14081a190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x68) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x74) = 1
__builtin_memset(arg1 + 0x78, 0, 0x18)
*(arg1 + 0x90) = 0xffffffff
*(arg1 + 0x9c) &= 0xfc0c003c
*(arg1 + 0x9c) |= 0x40c003c
*(arg1 + 0x94) = 0
*(arg1 + 0x98) = 0xffff0000
int64_t rdi = sx.q(*(arg1 + 0x70))
int32_t rax = (rdi + 1).d
*(arg1 + 0x70) = rax

if (rax s> *(arg1 + 0x74))
    sub_14083a750(arg1, rdi.d)

void* rax_1 = *(arg1 + 0x68)
void* rdx_2 = arg1

if (rax_1 != 0)
    rdx_2 = rax_1

void* rax_2 = rdi * 0x68
void* rax_3 = rax_2 + rdx_2

if (rax_2 != neg.q(rdx_2))
    *(rax_3 + 0x3c) &= 0xf8000000
    *(rax_3 + 0x64) &= 0xfffff800
    __builtin_memset(rax_3, 0, 0x3c)
    *(rax_3 + 0x48) = 1
    *(rax_3 + 0x58) = 0xffffffff
    *(rax_3 + 0x5c) = 0
    *(rax_3 + 0x60) = 0x3f800000

return arg1
