// 函数: sub_140d36470
// 地址: 0x140d36470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx = *(arg2 + 0x20)
*arg3 = *rcx
arg3[1] = rcx[1]
*(arg2 + 0x20) = &rcx[3]
int32_t result = rcx[2]
arg3[2] = result
return result
