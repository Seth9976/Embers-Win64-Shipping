// 函数: sub_1408427d0
// 地址: 0x1408427d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0xffffffff
__builtin_memset(&arg1[1], 0, 0x20)
arg1[9].b = 0xff
__builtin_memset(&arg1[0xa], 0, 0x14)
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0x1d
sub_1407c36f0(&arg1[0x10], 0)
void* rcx_1 = *(arg1 + 0x40)

if ((rcx_1.b & 1) != 0)
    rcx_1 = (rcx_1 s>> 1) + &arg1[0x10]

UnDecorator::getReferenceType(rcx_1, u"Niagara GPU External CBuffer", 0x3a)
arg1[0x14] = 0
sub_14081a4a0(&arg1[0x16])
void* rcx_4 = &arg1[0x84]
*(arg1 + 0x110) = 0
*(arg1 + 0x58) = &data_142ddae10
*(arg1 + 0x118) = 0
*(arg1 + 0x120) = 0
arg1[0x4a].b &= 0xfe
__builtin_memset(&arg1[0x4c], 0, 0x24)
*(arg1 + 0x200) = 0
*(arg1 + 0x208) = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax = *(rcx_4 + 0x10)

if (rax != 0)
    rcx_4 = rax

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0x8d] = 0
arg1[0x8c] = 0xffffffff
*(arg1 + 0x240) = 0
arg1[0x92] = 0
__builtin_memset(&arg1[0x96], 0, 0x18)
arg1[0x95] = 0xffffffff
return arg1
