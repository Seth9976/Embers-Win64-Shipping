// 函数: sub_1428f3900
// 地址: 0x1428f3900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg1 == 0)
    sub_1428a5670(0x25, 0x6e, 0x43, "crypto\dso\dso_lib.c", 0xcd)
    return 0xffffffff

if (arg2 == 1)
    return zx.q(*(arg1 + 0x14))

if (arg2 == 2)
    *(arg1 + 0x14) = arg3
    return 0

if (arg2 == 3)
    *(arg1 + 0x14) |= arg3
    return 0

void* rax_1 = *arg1

if (rax_1 != 0)
    int64_t r11_1 = *(rax_1 + 0x20)
    
    if (r11_1 != 0)
        jump(r11_1)

sub_1428a5670(0x25, 0x6e, 0x6c, "crypto\dso\dso_lib.c", 0xe1)
return 0xffffffff
