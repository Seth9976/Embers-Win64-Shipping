// 函数: sub_14118bdf0
// 地址: 0x14118bdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *arg2
*arg1 = 0
arg1[1] = 0

if (rcx == 0)
    sub_1405947f0(arg1, 0x13)
    int32_t rax = arg1[1].d + 0x13
    arg1[1].d = rax
    
    if (rax s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"Forward Horizontal", 0x26)
    return arg1

if (rcx == 2)
    sub_1405947f0(arg1, rcx + 0x11)
    int32_t rax_2 = arg1[1].d + 0x13
    arg1[1].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"Inverse Horizontal", 0x26)
    return arg1

if (rcx == 1)
    sub_1405947f0(arg1, rcx + 0x10)
    int32_t rax_4 = arg1[1].d + 0x11
    arg1[1].d = rax_4
    
    if (rax_4 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"Forward Vertical", 0x22)
    return arg1

if (rcx != 3)
    sub_1405947f0(arg1, 6)
    int32_t rax_8 = arg1[1].d + 6
    arg1[1].d = rax_8
    
    if (rax_8 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"Error", 0xc)
    return arg1

sub_1405947f0(arg1, 0x11)
int32_t rax_6 = arg1[1].d + 0x11
arg1[1].d = rax_6

if (rax_6 s> *(arg1 + 0xc))
    sub_140594770(arg1)

UnDecorator::getReferenceType(*arg1, u"Inverse Vertical", 0x22)
return arg1
