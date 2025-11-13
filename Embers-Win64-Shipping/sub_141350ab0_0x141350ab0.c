// 函数: sub_141350ab0
// 地址: 0x141350ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_14135d3f0(*(arg1 + 0x1e9), *(arg1 + 0x1ea), *(arg1 + 0x1eb), *(arg1 + 0x1ec))
*arg2 = 1
__builtin_memset(&arg2[1], 0, 0x18)
*(arg2 + 0x24) = 0x10000
arg2[5].w = 1
*(arg2 + 0x2c) = 0
*(arg2 + 0x39) = 0
arg2[8] = u"UnknownTexture"
arg2[9].w = 1
*(arg2 + 0x4a) = 0
arg2[4].d = 1
*(arg2 + 0x34) = 9

if (rax == 0 && arg3 == 0)
    *(arg2 + 0x34) = 0x809

arg2[7].b = 0
int32_t rax_1

if (rax == 0 || *(arg1 + 0x1e9) != 0)
    rax_1 = 0x15
    
    if (arg3 == 0)
        rax_1 = 0x1a
else
    rax_1 = 0x15

*(arg2 + 0x2c) = rax_1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0x1e0) - *(arg1 + 0x1d8) + 3)
int32_t rax_7 = (temp1 + (temp0 & 3)) s>> 2

if (rax_7 s<= 1)
    rax_7 = 1

*(arg2 + 0x14) = rax_7
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 0x1e4) - *(arg1 + 0x1dc) + 3)
int32_t rax_13 = (temp3 + (temp2 & 3)) s>> 2

if (rax_13 s<= 1)
    rax_13 = 1

arg2[3].d = rax_13
wchar16 const* const rax_14

if (arg3 != 0)
    rax_14 = u"BloomSetup2"
    
    if (arg3 == 1)
        rax_14 = u"BloomSetup1"
else
    rax_14 = u"BloomSetup0"

arg2[8] = rax_14
int32_t rax_15 = data_14399f5e0:0xc.d
*arg2 = 1.o
arg2[2].d = rax_15
return arg2
