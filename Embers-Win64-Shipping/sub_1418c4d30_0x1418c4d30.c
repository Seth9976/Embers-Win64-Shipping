// 函数: sub_1418c4d30
// 地址: 0x1418c4d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x240)

if (*(rbx + 0x78) != 0)
    sub_1418c86c0(rbx, 0, 0)

void* rax = *(rbx + 0x70)
*(arg2 + 0x28) = rax
int64_t result = *(rax + 0x98)
*(arg2 + 0x30) = result
return result
