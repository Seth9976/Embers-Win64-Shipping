// 函数: sub_1423cf520
// 地址: 0x1423cf520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
void* rbx = &arg1[2]
*(arg1 + 0xc) = 4
*arg1 = &data_14333f8e0
*(rbx + 0x68) = 0
*(rbx + 0x70) = 0
*(rbx + 0x74) = 1
__builtin_memset(rbx + 0x78, 0, 0x18)
*(rbx + 0x90) = 0xffffffff
*(rbx + 0x9c) &= 0xfc0c003c
*(rbx + 0x9c) |= 0x40c003c
*(rbx + 0x94) = 0
*(rbx + 0x98) = 0xffff0000
int64_t rsi = sx.q(*(rbx + 0x70))
int32_t rax = (rsi + 1).d
*(rbx + 0x70) = rax

if (rax s> *(rbx + 0x74))
    sub_14083a750(rbx, rsi.d)

void* rax_1 = *(rbx + 0x68)

if (rax_1 != 0)
    rbx = rax_1

void* rax_2 = rsi * 0x68
void* rax_3 = rax_2 + rbx

if (rax_2 != neg.q(rbx))
    *(rax_3 + 0x3c) &= 0xf8000000
    *(rax_3 + 0x64) &= 0xfffff800
    __builtin_memset(rax_3, 0, 0x3c)
    *(rax_3 + 0x48) = 1
    *(rax_3 + 0x58) = 0xffffffff
    *(rax_3 + 0x5c) = 0
    *(rax_3 + 0x60) = 0x3f800000

arg1[0x17] = arg3
arg1[0x16] = arg2
return arg1
