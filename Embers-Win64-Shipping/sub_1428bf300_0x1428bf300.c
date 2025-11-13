// 函数: sub_1428bf300
// 地址: 0x1428bf300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
sub_1428a6780(*(arg1 + 0x30))
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = 0

if (arg3 == 0 || arg2 == 0)
    return 1

int64_t rax = sub_1428a6730(arg3)
*(arg1 + 0x30) = rax

if (rax == 0)
    sub_1428a5670((rax + 0x10).d, 0x11e, (rax + 0x41).d, "crypto\ec\ec_lib.c", 0x18f)
    return 0

memcpy(rax, arg2, arg3.d)
*(arg1 + 0x38) = arg3
return arg3
