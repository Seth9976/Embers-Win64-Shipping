// 函数: sub_140948320
// 地址: 0x140948320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_142e2ce38
arg1[0x44] = 0
arg1[0x45] = 0
sub_1405947f0(&arg1[0x44], 0xa)
int32_t rax = arg1[0x45].d + 0xa
arg1[0x45].d = rax

if (rax s> *(arg1 + 0x22c))
    sub_140594770(&arg1[0x44])

UnDecorator::getReferenceType(arg1[0x44], u"UNDEFINED", 0x14)
__builtin_memset(&arg1[0x46], 0, 0x18)
*(arg1 + 0x32) |= 2
return arg1
