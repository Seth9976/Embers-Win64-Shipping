// 函数: sub_1403f7690
// 地址: 0x1403f7690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t temp0 = divu.dp.d(0:(*(arg1 + 0x20)), arg2)
*(arg1 + 0x28) = temp0
uint32_t temp0_1 = divu.dp.d(0:(*(arg1 + 0x24)), temp0)
int32_t r8_1
r8_1.b = arg2 u< temp0_1 + 1
return zx.q(arg2 - (neg.d(r8_1) & (arg2 - temp0_1 - 1)) - temp0_1 - 1)
