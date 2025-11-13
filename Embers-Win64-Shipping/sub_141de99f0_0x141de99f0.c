// 函数: sub_141de99f0
// 地址: 0x141de99f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 6)
    *arg1 = 0
    arg1[1] = 0
    sub_1405947f0(arg1, 8)
    int32_t rax_15 = arg1[1].d + 8
    arg1[1].d = rax_15
    
    if (rax_15 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, u"Unknown", 0x10)
    return arg1

switch (arg2)
    case 0
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 9)
        int32_t rax_1 = arg1[1].d + 9
        arg1[1].d = rax_1
        
        if (rax_1 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"ACF_None", 0x12)
        return arg1
    case 1
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xf)
        int32_t rax_3 = arg1[1].d + 0xf
        arg1[1].d = rax_3
        
        if (rax_3 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"ACF_Float96NoW", 0x1e)
        return arg1
    case 2
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xf)
        int32_t rax_5 = arg1[1].d + 0xf
        arg1[1].d = rax_5
        
        if (rax_5 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"ACF_Fixed48NoW", 0x1e)
        return arg1
    case 3
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0x17)
        int32_t rax_7 = arg1[1].d + 0x17
        arg1[1].d = rax_7
        
        if (rax_7 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"ACF_IntervalFixed32NoW", 0x2e)
        return arg1
    case 4
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xf)
        int32_t rax_9 = arg1[1].d + 0xf
        arg1[1].d = rax_9
        
        if (rax_9 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"ACF_Fixed32NoW", 0x1e)
        return arg1
    case 5
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xf)
        int32_t rax_11 = arg1[1].d + 0xf
        arg1[1].d = rax_11
        
        if (rax_11 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"ACF_Float32NoW", 0x1e)
        return arg1
    case 6
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xd)
        int32_t rax_13 = arg1[1].d + 0xd
        arg1[1].d = rax_13
        
        if (rax_13 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"ACF_Identity", 0x1a)
        return arg1
