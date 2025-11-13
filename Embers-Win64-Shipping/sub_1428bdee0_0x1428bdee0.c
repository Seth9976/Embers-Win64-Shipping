// 函数: sub_1428bdee0
// 地址: 0x1428bdee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (sub_1428be530(arg1) != 0 && sub_142891c70(arg1[2], arg2[2]) != 0
        && sub_142891c70(arg1[3], arg2[3]) != 0 && sub_142891c70(arg1[1], arg2[1]) != 0)
    *(arg1 + 0x24) = *(arg2 + 0x24)
    *(arg1 + 0x34) = *(arg2 + 0x34)
    *(arg1 + 0x44) = *(arg2 + 0x44)
    *(arg1 + 0x54) = *(arg2 + 0x54)
    *(arg1 + 0x64) = *(arg2 + 0x64)
    *(arg1 + 0x74) = *(arg2 + 0x74)
    *(arg1 + 0x84) = *(arg2 + 0x84)
    *(arg1 + 0x94) = *(arg2 + 0x94)
    *(arg1 + 0xa4) = *(arg2 + 0xa4)
    arg1[4].d = arg2[4].d
    *arg1 = *arg2
    return 1

sub_142891f10(arg1[2])
sub_142891f10(arg1[3])
sub_142891f10(arg1[1])
*arg1 = 0
arg1[4].d = 0
sub_1428b8960(arg1 + 0x24, 0x90)
return 0
