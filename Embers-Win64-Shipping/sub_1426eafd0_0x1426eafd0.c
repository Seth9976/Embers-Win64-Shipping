// 函数: sub_1426eafd0
// 地址: 0x1426eafd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x2c) & 0xffffffe7
*(arg1 + 0x2b) = 1
int32_t result = rax | 4
*(arg1 + 0x2c) = result
return result
