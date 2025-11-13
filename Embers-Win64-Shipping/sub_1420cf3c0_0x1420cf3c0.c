// 函数: sub_1420cf3c0
// 地址: 0x1420cf3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 4) * 0xbb38435 + 0x3619636b
*(arg1 + 4) = rax
float zmm1 = (rax u>> 9 | 0x3f800000) - 1f
int32_t result
result.b = int.d(zmm1 + zmm1) == 1
return result
