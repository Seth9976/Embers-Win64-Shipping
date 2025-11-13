// 函数: sub_142898900
// 地址: 0x142898900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int128_t* result = sub_1428a6730(0x20)

if (result == 0)
    sub_1428a5670((result + 0xf).d, 0x80, (result + 0x41).d, "crypto\stack\stack.c", 0x32)
    return 0

*result = *arg1
result[1] = arg1[1]

if (*arg1 == 0)
    *(result + 8) = 0
    *(result + 0x14) = 0
    return result

int64_t rax_2 = sub_1428a6730(sx.q(*(arg1 + 0x14)) << 3)
*(result + 8) = rax_2

if (rax_2 != 0)
    memcpy(rax_2, *(arg1 + 8), *arg1 << 3)
    return result

sub_142898a10(result)
return 0
