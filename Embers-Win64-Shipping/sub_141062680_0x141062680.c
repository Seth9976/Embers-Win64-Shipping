// 函数: sub_141062680
// 地址: 0x141062680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx_1 = *(arg1 + 0xc0)

if (*(rcx_1 + 0x170) s<= 0)
    return 0

void* rcx = rcx_1 + 0x160
void* rax = *(rcx + 8)

if (rax != 0)
    rcx = rax

return *rcx
