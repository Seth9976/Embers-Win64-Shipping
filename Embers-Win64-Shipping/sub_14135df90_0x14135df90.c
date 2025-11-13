// 函数: sub_14135df90
// 地址: 0x14135df90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 4) & 0x80000001

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffe) + 1

int64_t r8
r8.b = rax_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"POST_PROCESS_MATERIAL_MOBILE", r8)
sub_14135d830(arg1, arg2)
uint64_t r8_1

if ((*(arg1 + 0x30) & 0x100000000000) == 0)
    r8_1 = 6
else
    r8_1 = zx.q(*(arg1 + 0x2c))

return sub_1405d3490(arg2 + 0x2a8, u"MOBILE_STENCIL_COMPARE_FUNCTION", r8_1) __tailcall
