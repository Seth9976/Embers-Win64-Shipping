// 函数: sub_141c571b0
// 地址: 0x141c571b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
char result = ((arg1[1].b * 2) ^ *(rdx + 0x32c)) & 2
*(rdx + 0x32c) ^= result
return result
