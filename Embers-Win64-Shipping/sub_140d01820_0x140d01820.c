// 函数: sub_140d01820
// 地址: 0x140d01820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x40) & 0x4000000000000) != 0)
    if (arg3[1].d == 0)
        sub_140a2e390(arg2, u"TSubclassOf<%s> ", &data_142d40450)
        return arg2
    
    sub_140a2e390(arg2, u"TSubclassOf<%s> ", *arg3)
    return arg2

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 8)
int32_t rax_3 = arg2[1].d + 8
arg2[1].d = rax_3

if (rax_3 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"UClass*", 0x10)
return arg2
