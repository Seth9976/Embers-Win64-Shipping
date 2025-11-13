// 函数: sub_140a48ae0
// 地址: 0x140a48ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
sub_1405947f0(arg1, 0x10)
int32_t rax = arg1[1].d + 0x10
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_140594770(arg1)

__builtin_memcpy(*arg1, u"GenericGPUBrand", 0x20)
return arg1
