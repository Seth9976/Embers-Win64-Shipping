// 函数: sub_1428b2610
// 地址: 0x1428b2610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rdi = 0

if (arg2 == 0)
    return 0

sub_142892150(arg1)

if (arg3 == 0x80)
    rdi = arg3 - 0x46
else if (arg3 == 0x40)
    rdi = arg3 + 0x38
else if (arg3 == 0x28)
    rdi = 0xa0

int32_t rax_1 = sub_142890ed0(arg1)
return sub_1428cdf80(arg2, rdi, sub_142890f00(arg1), rax_1) __tailcall
