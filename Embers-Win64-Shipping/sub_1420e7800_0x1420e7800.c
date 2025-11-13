// 函数: sub_1420e7800
// 地址: 0x1420e7800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(arg1 + 0x128)

if (rax_1 == 0)
    *(arg1 + 0xb8) = 1
    return rax_1

uint8_t rax = ((*(rax_1 + 0x1f4) & 0x20) | 0x40) u>> 4
*(arg1 + 0xb8) = rax
return rax
