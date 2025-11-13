// 函数: sub_1419ba5f0
// 地址: 0x1419ba5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x50) -= (arg3 + 0x3ff) u>> 0xa
int64_t* rcx = *arg2
uint32_t result = ((*(*rcx + 0x20))(rcx) + 0x3ff) u>> 0xa
*(arg1 + 0x50) += result
return result
