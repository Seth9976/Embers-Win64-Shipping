// 函数: sub_140974070
// 地址: 0x140974070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x110)

if (rcx != 0)
    int64_t r8
    r8.b = 1
    (*(*rcx + 0x78))(rcx, arg3, r8)
    return arg2

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 8)
int32_t rax_2 = arg2[1].d + 8
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"Invalid", 0x10)
return arg2
