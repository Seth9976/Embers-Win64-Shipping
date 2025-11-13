// 函数: sub_141031e00
// 地址: 0x141031e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x20)

if (*(r9 + 0x838) == 0)
    return 

void* rax = *(r9 + 0x850)

if (rax == 0)
    return 

*(rax + 0x10) += 1
void* rax_1 = *(r9 + 0x850)
*(rax_1 + 0x14) += arg2
rax = *(r9 + 0x850)
*(rax + 0x18) += arg3
