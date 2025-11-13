// 函数: sub_14066f210
// 地址: 0x14066f210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x28)

if (rax == 0)
    *arg2 = rax
    arg2[1] = rax
    sub_1405947f0(arg2, 5)
    int32_t rax_1 = arg2[1].d + 5
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    sub_1405a7220(*arg2, 5, "None", 5, 0x3f)
    return arg2

int64_t rax_3 = sx.q(*(rax + 8))

if (rax_3.d u> 6)
label_14066f43a:
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(arg2, 5)
    int32_t rax_15 = arg2[1].d + 5
    arg2[1].d = rax_15
    
    if (rax_15 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, u"None", 0xa)
    return arg2

switch (rax_3)
    case 0
        goto label_14066f43a
    case 1
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 5)
        int32_t rax_4 = arg2[1].d + 5
        arg2[1].d = rax_4
        
        if (rax_4 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        UnDecorator::getReferenceType(*arg2, u"Null", 0xa)
        return arg2
    case 2
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 7)
        int32_t rax_5 = arg2[1].d + 7
        arg2[1].d = rax_5
        
        if (rax_5 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        UnDecorator::getReferenceType(*arg2, u"String", 0xe)
        return arg2
    case 3
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 7)
        int32_t rax_7 = arg2[1].d + 7
        arg2[1].d = rax_7
        
        if (rax_7 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        UnDecorator::getReferenceType(*arg2, u"Number", 0xe)
        return arg2
    case 4
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 8)
        int32_t rax_9 = arg2[1].d + 8
        arg2[1].d = rax_9
        
        if (rax_9 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        UnDecorator::getReferenceType(*arg2, u"Boolean", 0x10)
        return arg2
    case 5
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 6)
        int32_t rax_11 = arg2[1].d + 6
        arg2[1].d = rax_11
        
        if (rax_11 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        UnDecorator::getReferenceType(*arg2, u"Array", 0xc)
        return arg2
    case 6
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 7)
        int32_t rax_13 = arg2[1].d + 7
        arg2[1].d = rax_13
        
        if (rax_13 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        UnDecorator::getReferenceType(*arg2, u"Object", 0xe)
        return arg2
