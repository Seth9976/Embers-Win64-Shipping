// 函数: sub_1405d5540
// 地址: 0x1405d5540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_142d56a20
__builtin_memset(&arg1[5], 0, 0x20)
arg1[9] = 2
__builtin_memset(&arg1[0xb], 0, 0x14)
*(arg1 + 0x6c) = 2
*(arg1 + 0x74) = 4
arg1[0x10] = 0
arg1[0x11] = 0
InitializeCriticalSection(&arg1[0x12])
SetCriticalSectionSpinCount(&arg1[0x12], 0xfa0)
__builtin_memcpy(&arg1[0x17], 
    "\x00\x05\x00\x00\xd0\x02\x00\x00\x12\x00\x00\x00\x00\x05\x00\x00\xd0\x02\x00\x00\x12\x00\x00\x00\x00", 
    0x19)
*(arg1 + 0xd4) = data_143dbb180
*(arg1 + 0xdc) = 0x100
arg1[0x1c].b = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
sub_1405947f0(&arg1[0x1d], 0xc)
int32_t rax_1 = arg1[0x1e].d + 0xc
arg1[0x1e].d = rax_1

if (rax_1 s> *(arg1 + 0xf4))
    sub_140594770(&arg1[0x1d])

UnDecorator::getReferenceType(arg1[0x1d], u"[undefined]", 0x18)
arg1[0x1f].w = 0
*(arg1 + 0xfa) = 0
*(arg1 + 0xfb) = 0
*(arg1 + 0xfc) = 0
arg1[0x20].d = 0
return arg1
