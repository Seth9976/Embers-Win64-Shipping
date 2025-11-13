// 函数: sub_142935fc0
// 地址: 0x142935fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
sub_1428b6f70(arg3, "%*s", zx.q(arg4))

if (*arg2 == 0)
    goto label_142936037

sub_14289aa40(arg3, "Not Before: ", 0xc)
sub_1428e55c0(arg3, *arg2)

if (arg2[1] != 0)
    sub_14289aa40(arg3, &data_14321f660, 2)
label_142936037:
    
    if (arg2[1] != 0)
        sub_14289aa40(arg3, "Not After: ", 0xb)
        sub_1428e55c0(arg3, arg2[1])

return 1
