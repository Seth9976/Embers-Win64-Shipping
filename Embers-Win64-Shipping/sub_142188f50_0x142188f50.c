// 函数: sub_142188f50
// 地址: 0x142188f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x408)
char rdx = *(arg1 + 0x430) & 0xfb
*(arg1 + 0x430) = rdx

if (rdi == 0)
    return 

rdx |= 8
*(arg1 + 0x430) = rdx
uint8_t rax = *(rdi + 0xb0)

if (rax s>= 0)
    sub_142188d70(rdi)
    rax = *(rdi + 0xb0)
    rdx = *(arg1 + 0x430)

*(arg1 + 0x430) = ((rax u>> 4 ^ rdx) & 4) ^ rdx
