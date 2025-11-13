// 函数: sub_141d61d20
// 地址: 0x141d61d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
int64_t result
int32_t zmm0
result, zmm0 = sub_141d587f0(arg1)
*arg3 = zmm0
return result
