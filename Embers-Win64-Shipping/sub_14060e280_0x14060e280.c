// 函数: sub_14060e280
// 地址: 0x14060e280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3 = arg3 f+ *(arg1 + 0x29c)
uint32_t r8 = zx.d(arg2.b)
*(arg1 + 0x29c) = arg3
int32_t rdi = int.d(arg3 f* *(arg1 + 0x298))

if (r8 == 8)
    sub_1405887c0(arg1 + 0x220, 1, rdi, (arg2 u>> 8).b, (arg2 u>> 0x10).b)
    sub_140588670(arg1 + 0x220, 1, rdi, arg2:1.b, arg2:2.b, arg2:3.b)
else if (r8 == 9)
    sub_140588670(arg1 + 0x220, 1, rdi, arg2:1.b, arg2:2.b, arg2:3.b)
else if (r8 != 0xb)
    return 

uint32_t var_10_2 = zx.d(arg2:3.b)
sub_140588910(arg1 + 0x220, 1, rdi, arg2:1.b, arg2:2.b)
