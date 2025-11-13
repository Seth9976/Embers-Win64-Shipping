// 函数: sub_141c2db20
// 地址: 0x141c2db20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = arg2
*arg1 = &data_143205020
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
*(arg1 + 0xc) = ((temp1 - temp0) s>> 1) + 1
__builtin_memset(&arg1[4], 0, 0x20)
int32_t rcx_1 = arg1[1].d + arg1[5].d
arg1[5].d = rcx_1

if (rcx_1 s> *(arg1 + 0x2c))
    sub_140775270(&arg1[4])

int32_t rcx_4 = arg1[1].d + arg1[7].d
arg1[7].d = rcx_4

if (rcx_4 s> *(arg1 + 0x3c))
    sub_140775270(&arg1[6])

arg1[2] = arg1[4]
arg1[3] = arg1[6]
return arg1
