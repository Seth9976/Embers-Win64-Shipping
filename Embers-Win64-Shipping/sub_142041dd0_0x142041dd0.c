// 函数: sub_142041dd0
// 地址: 0x142041dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm6_1 = sub_141efce60(arg1, arg2.d)
int32_t rdx = *(arg1 + 0x214)
uint8_t r9_1 = (rdx u>> 6).b & 1
uint8_t r8_1 = (rdx u>> 5).b & 1
rdx.b &= 1
return (*(*arg1 + 0x528))(arg1, rdx, r8_1, r9_1, zmm6_1)
