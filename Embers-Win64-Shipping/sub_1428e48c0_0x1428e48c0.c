// 函数: sub_1428e48c0
// 地址: 0x1428e48c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg2 == 0)
    sub_1428a5670(0xd, 0xe6, 0x43, "crypto\asn1\a_int.c", 0x165)
    return 0

int32_t rcx = arg2[1]

if ((rcx & 0xfffffeff) != 2)
    sub_1428a5670(0xd, 0xe6, 0xe1, "crypto\asn1\a_int.c", 0x169)
    return 0

if (not(test_bit(rcx, 8)))
    return sub_1428e49e0(arg1, *(arg2 + 8), sx.q(*arg2)) __tailcall

sub_1428a5670(0xd, 0xe6, 0xe2, "crypto\asn1\a_int.c", 0x16d)
return 0
