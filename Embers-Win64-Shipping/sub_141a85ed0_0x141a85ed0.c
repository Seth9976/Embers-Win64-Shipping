// 函数: sub_141a85ed0
// 地址: 0x141a85ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = zx.d(*(arg1 + 0x10))
uint64_t* rcx = arg2
*arg2 = 0
arg2[1] = 0

if (rdx == 0)
    sub_1405947f0(rcx, 0xc)
    int32_t rax_8 = arg2[1].d + 0xc
    arg2[1].d = rax_8
    
    if (rax_8 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, u"Translation", 0x18)
    return arg2

if (rdx == 1)
    sub_1405947f0(rcx, 9)
    int32_t rax_6 = arg2[1].d + 9
    arg2[1].d = rax_6
    
    if (rax_6 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, u"Rotation", 0x12)
    return arg2

if (rdx == 2)
    sub_1405947f0(rcx, 6)
    int32_t rax_4 = arg2[1].d + 6
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, u"Scale", 0xc)
    return arg2

if (rdx == 3)
    sub_1405947f0(rcx, 7)
    int32_t rax_2 = arg2[1].d + 7
    arg2[1].d = rax_2
    
    if (rax_2 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, u"Parent", 0xe)
    return arg2

sub_1405947f0(rcx, 5)
int32_t rax = arg2[1].d + 5
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"None", 0xa)
return arg2
