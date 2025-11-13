// 函数: sub_14141d8f0
// 地址: 0x14141d8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x38)
int32_t var_10 = 1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0x50) + 7)
int32_t var_18 = (temp1 + (temp0 & 7)) s>> 3
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 0x54) + 7)
int32_t var_14 = (temp3 + (temp2 & 7)) s>> 3
var_18.q = var_18.q
return sub_14140efe0(arg2, arg1 + 0x40, r8, &var_18)
