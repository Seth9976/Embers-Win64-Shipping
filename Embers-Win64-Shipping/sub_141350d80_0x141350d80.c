// 函数: sub_141350d80
// 地址: 0x141350d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 1
__builtin_memset(&arg2[1], 0, 0x18)
arg2[8] = u"UnknownTexture"
*(arg2 + 0x24) = 0x10000
arg2[6].d = 0
arg2[7].w = 0
arg2[9].w = 1
*(arg2 + 0x4a) = 0
arg2[4].d = 1
*(arg2 + 0x34) = 9
*(arg2 + 0x2c) = 0xa
arg2[5].w = 1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0xe0) - *(arg1 + 0xd8))
int32_t rax_4 = (temp1 - temp0) s>> 1

if (rax_4 s<= 1)
    rax_4 = 1

int32_t r8_1 = *(arg1 + 0xe4) - *(arg1 + 0xdc)
*(arg2 + 0x14) = rax_4
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r8_1)
int32_t rax_8 = (temp3 - temp2) s>> 1

if (rax_8 s<= 1)
    rax_8 = 1

arg2[3].d = rax_8
arg2[8] = u"DofDown"
int32_t rax_9 = data_14399f5e0:0xc.d
*arg2 = 1.o
arg2[2].d = rax_9
return arg2
