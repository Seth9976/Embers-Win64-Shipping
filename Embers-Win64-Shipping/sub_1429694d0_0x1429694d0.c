// 函数: sub_1429694d0
// 地址: 0x1429694d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* result = sub_1428a6a70(0x18)

if (result == 0)
    sub_1428a5670(0x2c, 0x7b, 0x41, "crypto\store\store_lib.c", 0x260)
    return 0

*result = 0xffffffff
*(result + 8) = arg2
int64_t rax

if (arg1 != 0)
    rax = sub_1428a6ba0(arg1)
else
    rax = 0

*(result + 0x10) = rax

if (arg1 == 0 || rax != 0)
    return result

sub_1428a5670((rax + 0x2c).d, (rax + 0x7b).d, (rax + 0x41).d, "crypto\store\store_lib.c", 0x26a)
sub_1429691b0(result)
return nullptr
