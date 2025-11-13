// 函数: sub_141261ca0
// 地址: 0x141261ca0
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
*(arg2 + 0x2c) = 2
arg2[5].w = 1
int32_t rax = *(arg1 + 0xb8)

if (rax s<= 1)
    rax = 1

*(arg2 + 0x14) = rax
int32_t rax_1 = *(arg1 + 0xbc)

if (rax_1 s<= 1)
    rax_1 = 1

arg2[3].d = rax_1
arg2[8] = u"DistortionAccumulatePass"
int32_t rax_2 = data_143dbb1e0:0xc.d
*arg2 = 1.o
arg2[2].d = rax_2
return arg2
