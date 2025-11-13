// 函数: sub_142592b20
// 地址: 0x142592b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
int64_t result
int32_t zmm0
result, zmm0 = sub_141f3cc50(arg1)
*arg3 = zmm0
return result
