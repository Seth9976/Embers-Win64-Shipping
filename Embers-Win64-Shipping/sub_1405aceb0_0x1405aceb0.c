// 函数: sub_1405aceb0
// 地址: 0x1405aceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
arg1[5].b = 1
*(arg1 + 0x2c) = 0
arg1[7] = 0
arg1[8] = 0
arg1[9].d = 0xffffffff
*(arg1 + 0x4c) = 0
*(arg1 + 0x54) = 0x780
arg1[0xb].d = 0x438
*(arg1 + 0x5c) = 6
*arg1 = &data_142d48c88
__builtin_memset(&arg1[0xc], 0, 0x20)
sub_1405947f0(&arg1[0xe], 8)
int32_t rax = &arg1[0xf].d[1]
arg1[0xf].d = rax

if (rax s> *(arg1 + 0x7c))
    sub_140594770(&arg1[0xe])

UnDecorator::getReferenceType(arg1[0xe], u"{frame}", 0x10)
arg1[0x10].d = 0x18
*(arg1 + 0x84) = 1
*(arg1 + 0x8c) = 0
arg1[0x12] = 0
arg1[0x11].b = 1
return arg1
