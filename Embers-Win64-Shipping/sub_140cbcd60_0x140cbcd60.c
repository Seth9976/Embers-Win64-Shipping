// 函数: sub_140cbcd60
// 地址: 0x140cbcd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1

if (arg1[1].b != 0)
    int64_t arg_8 = *(rax + 0x18)
    sub_140b63b70(&arg_8, arg2)
    return arg2

if (rax != 0)
    sub_140b63b70(rax + 0x28, arg2)
    return arg2

*arg2 = rax
arg2[1] = rax
sub_1405947f0(arg2, 5)
int32_t rax_4 = arg2[1].d + 5
arg2[1].d = rax_4

if (rax_4 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"None", 0xa)
return arg2
