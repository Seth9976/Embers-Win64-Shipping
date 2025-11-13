// 函数: sub_1426fd790
// 地址: 0x1426fd790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x288))(arg1, arg3)

if (rax_1 != 0)
    int64_t arg_8 = *(rax_1 + 0x18)
    sub_140b63b70(&arg_8, arg2)
    return arg2

*arg2 = rax_1
arg2[1] = rax_1
sub_1405947f0(arg2, 5)
int32_t rax_2 = arg2[1].d + 5
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"None", 0xa)
return arg2
