// 函数: sub_142b98d50
// 地址: 0x142b98d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xf0)

if (rax == 0 || (*(rax + 8) & 1) == 0)
    *(arg1 + 0x78) = 0
    return rax

int64_t rdx = *(arg1 + 0x78)
int64_t r8 = *(*(arg1 + 8) + 0x98)

if (rdx != 0)
    (*(r8 + 0x10))(r8, rdx, r8)

void* rax_2 = *(arg1 + 0xf0)
*(arg1 + 0x78) = 0
*(rax_2 + 8) &= 0xfffffffe
return rax_2
