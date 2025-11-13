// 函数: sub_1426b17c0
// 地址: 0x1426b17c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x2e0)

if (rcx != 0 && (*(*rcx + 0x420))(rcx) != 0)
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(arg2, 0x30)
    int32_t rax_3 = arg2[1].d + 0x30
    arg2[1].d = rax_3
    
    if (rax_3 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, u"/Engine/EngineResources/AICON-Green.AICON-Green", 0x60)
    return arg2

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 0x2c)
int32_t rax_5 = arg2[1].d + 0x2c
arg2[1].d = rax_5

if (rax_5 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"/Engine/EngineResources/AICON-Red.AICON-Red", 0x58)
return arg2
