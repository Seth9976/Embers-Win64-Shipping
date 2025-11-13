// 函数: sub_140d35050
// 地址: 0x140d35050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax_1 = *(arg2 + 0x20)
int64_t rcx = sx.q(*rax_1)
*(arg2 + 0x20) = &rax_1[1]
int64_t result = *(arg2 + 0x10)
*(arg2 + 0x20) = rcx + *(result + 0x60)
return result
