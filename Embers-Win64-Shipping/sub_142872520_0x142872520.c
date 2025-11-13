// 函数: sub_142872520
// 地址: 0x142872520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
sub_1428a6780(*(arg1 + 0x188))
*(arg1 + 0x188) = 0
*(arg1 + 0x190) = 0

if (arg2 != 0 && arg3 != 0)
    int64_t rax_1
    
    if (arg3 u<= 0xff)
        rax_1 = sub_1428a6af0(arg2, arg3, "ssl\s3_lib.c", 0x1118)
        *(arg1 + 0x188) = rax_1
    
    if (arg3 u> 0xff || rax_1 == 0)
        return 0
    
    *(arg1 + 0x190) = arg3

return 1
