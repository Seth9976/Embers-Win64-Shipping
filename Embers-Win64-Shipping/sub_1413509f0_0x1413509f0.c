// 函数: sub_1413509f0
// 地址: 0x1413509f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 1
__builtin_memset(&arg2[1], 0, 0x1c)
*(arg2 + 0x40) = u"UnknownTexture"
arg2[0xc] = 0
arg2[0xe].w = 0
*(arg2 + 0x4a) = 0
arg2[9] = 0x10000
arg2[0x12].w = 1
arg2[8] = 1
arg2[0xd] = 9
arg2[0xb] = 0x1a
arg2[0xa].w = 1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0xb8) + 1)
arg2[5] = (temp1 - temp0) s>> 1
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 0xbc) + 1)
arg2[6] = (temp3 - temp2) s>> 1
*(arg2 + 0x40) = u"BloomDown"
int32_t rax_10 = data_14399f5e0:0xc.d
*arg2 = 1.o
arg2[4] = rax_10
return arg2
