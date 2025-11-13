// 函数: sub_142850490
// 地址: 0x142850490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int32_t* rdx = *(arg1 + 8)

if ((*(*(rdx + 0xc0) + 0x60) & 8) == 0)
    int32_t rax_1 = *rdx
    
    if (rax_1 s>= 0x304 && rax_1 != 0x10000)
        sub_1428a5670(0x14, 0x222, 0x10a, "ssl\ssl_lib.c", 0x853)
        return 0

if ((*(arg1 + 0x5c4) & 0x40000000) != 0)
    sub_1428a5670(0x14, 0x222, 0x153, "ssl\ssl_lib.c", 0x858)
    return 0

*(arg1 + 0x750) = 1
*(arg1 + 0x3c) = 0
jump(*(rdx + 0x58))
