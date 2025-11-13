// 函数: sub_141350cc0
// 地址: 0x141350cc0
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
arg2[0xb] = 0xa
arg2[0xa].w = 1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0xc8))
int32_t rax_3 = (temp1 - temp0) s>> 1

if (rax_3 s<= 1)
    rax_3 = 1

arg2[5] = rax_3
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 0xcc))
int32_t rax_7 = (temp3 - temp2) s>> 1

if (rax_7 s<= 1)
    rax_7 = 1

arg2[6] = rax_7
*(arg2 + 0x40) = u"DofBlur"
int32_t rax_8 = data_14399f5e0:0xc.d
*arg2 = 1.o
arg2[4] = rax_8
return arg2
