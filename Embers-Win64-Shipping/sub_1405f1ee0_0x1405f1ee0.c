// 函数: sub_1405f1ee0
// 地址: 0x1405f1ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2

if (arg2 == 0)
    *arg1 = 0
    arg1[1] = 0
    sub_1405947f0(arg1, 8)
    int32_t rax_6 = arg1[1].d + 8
    arg1[1].d = rax_6
    
    if (rax_6 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"Console", 0x10)
    return arg1

if (arg2 == 1)
    *arg1 = 0
    arg1[1] = 0
    sub_1405947f0(arg1, 0xb)
    int32_t rax_4 = arg1[1].d + 0xb
    arg1[1].d = rax_4
    
    if (rax_4 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"Multimedia", 0x16)
    return arg1

*arg1 = 0
arg1[1] = 0

if (arg2 == 2)
    sub_1405947f0(arg1, 0xf)
    int32_t rax_2 = arg1[1].d + 0xf
    arg1[1].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"Communications", 0x1e)
    return arg1

sub_1405947f0(arg1, 8)
int32_t rax = arg1[1].d + 8
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_140594770(arg1)

UnDecorator::getReferenceType(*arg1, u"Unknown", 0x10)
return arg1
