// 函数: sub_141be5930
// 地址: 0x141be5930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0x18)
int64_t zmm1 = arg2[1].q
*(arg1 + 0x90) = *arg2
*(arg1 + 0xa0) = zmm1
*(arg1 + 0xa8) = rax
return sub_141bf52c0(arg1) __tailcall
