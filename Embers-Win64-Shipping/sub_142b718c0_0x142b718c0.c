// 函数: sub_142b718c0
// 地址: 0x142b718c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return arg1

int32_t rcx = *(arg1 + 8)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0xc) - rcx)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(((temp1 - temp0) s>> 1) + 1 + rcx)
return zx.q((temp3 - temp2) s>> 1)
