// 函数: sub_142bcd8f0
// 地址: 0x142bcd8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
int32_t rdx = *(r8 + 0x1ec)
arg1[3].d = rdx
*(arg1 + 0x1c) = *(r8 + 0x1f0) - rdx
arg1[4] = *(r8 + 0x1f8)
return 0
