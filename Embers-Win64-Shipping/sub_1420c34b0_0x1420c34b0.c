// 函数: sub_1420c34b0
// 地址: 0x1420c34b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0

if (arg2 != 0)
    sub_1405947f0(arg1, 5)
    int32_t rax_2 = arg1[1].d + 5
    arg1[1].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"None", 0xa)
    return arg1

sub_1405947f0(arg1, 8)
int32_t rax = arg1[1].d + 8
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_140594770(arg1)

UnDecorator::getReferenceType(*arg1, u"Generic", 0x10)
return arg1
