// 函数: sub_142a1da80
// 地址: 0x142a1da80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0x14

if (arg2 s>= 0x14)
    rbx = arg2

uint64_t rbx_1 = zx.q(rbx - 0x32)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q((rbx_1 * 5).d * 2)
sub_1403ba8ce(*(arg1 + 0x38), arg1[4], arg1[1], *arg1, 
    ((((temp0 & 7) + temp1) s>> 3) + 0x32) * ((((temp0 & 7) + temp1) s>> 3) + 0x32) s/ 3)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q((rbx_1 * 5).d * 2)
return sub_1403ba683(*(arg1 + 0x38), arg1[4], zx.q(arg1[1]), *arg1, 
    ((((temp4 & 7) + temp5) s>> 3) + 0x32) * ((((temp4 & 7) + temp5) s>> 3) + 0x32) s/ 3)
