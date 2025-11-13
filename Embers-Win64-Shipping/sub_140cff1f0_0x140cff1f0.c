// 函数: sub_140cff1f0
// 地址: 0x140cff1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3

if (*arg3 != u"UClass")
    int32_t rdx = 0
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != 7)
        sub_1405947f0(arg3, 7)
        rdx = rdi[1].d
    
    rdi[1].d = rdx + 7
    
    if (rdx + 7 s> *(rdi + 0xc))
        sub_140594770(rdi)
    
    __builtin_wcscpy(*rdi, u"UClass")

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 7)
int32_t rax_2 = arg2[1].d + 7
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"OBJECT", 0xe)
return arg2
