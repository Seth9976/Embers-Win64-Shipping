// 函数: sub_141091400
// 地址: 0x141091400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 1
__builtin_memset(&arg2[1], 0, 0x18)
*(arg2 + 0x2c) = 0
*(arg2 + 0x34) = 0
arg2[7].w = 0
arg2[8] = u"UnknownTexture"
arg2[4] = 1
arg2[5].w = 1
arg2[9].w = 1
*(arg2 + 0x4a) = 0
sub_14139ce70(arg1) == 0 || sub_14139ce70(arg1) != 0
int128_t* rax_4 = sub_14139d290((*(*arg1 + 8))())
*arg2 = *rax_4
arg2[2].d = rax_4[1].d
*(arg2 + 0x14) = *(rax_4 + 0x14)
arg2[3].d = *(rax_4 + 0x18)
*(arg2 + 0x1c) = *(rax_4 + 0x1c)
arg2[4].d = rax_4[2].d
*(arg2 + 0x24) = *(rax_4 + 0x24)
*(arg2 + 0x25) = *(rax_4 + 0x25)
*(arg2 + 0x26) = *(rax_4 + 0x26)
arg2[5].w = *(rax_4 + 0x28)
*(arg2 + 0x2c) = *(rax_4 + 0x2c)
arg2[6].d = rax_4[3].d
*(arg2 + 0x34) = *(rax_4 + 0x34)
arg2[7].b = *(rax_4 + 0x38)
*(arg2 + 0x39) = *(rax_4 + 0x39)
arg2[8] = rax_4[4].q
arg2[9].b = *(rax_4 + 0x48)
*(arg2 + 0x49) = *(rax_4 + 0x49)
*(arg2 + 0x4a) = *(rax_4 + 0x4a)
int32_t rcx_9 = (*(arg2 + 0x34) & 0xfffeffff) | 1
*(arg2 + 0x34) = rcx_9
arg2[5].w = 1
arg2[9].b = 1
arg2[7].w = 0
*(arg2 + 0x2c) = 0xa
*arg2 = data_143f02308
arg2[2].d = data_143f02318
*(arg2 + 0x34) = rcx_9 & 0xfffffffb
int64_t rcx_11 = *(arg2 + 0x14)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q((rcx_11 + 1).d)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q((rcx_11 u>> 0x20).d + 1)
*(arg2 + 0x14) = (temp1 - temp0) s>> 1
arg2[3].d = (temp3 - temp2) s>> 1
arg2[8] = u"AmbientOcclusionSetup"
return arg2
