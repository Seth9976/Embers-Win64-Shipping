// 函数: sub_140ab55e0
// 地址: 0x140ab55e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 8) = *(arg1 + 8)
*(arg2 + 0x10) = *(arg1 + 0x10)
int64_t r8 = *(arg2 + 0x18)
*(arg2 + 0x18) = *(arg1 + 0x18)
*(arg1 + 0x18) = r8
int64_t result = *(arg1 + 0x20)
int64_t rcx = *(arg2 + 0x20)
*(arg2 + 0x20) = result
*(arg1 + 0x20) = rcx
return result
