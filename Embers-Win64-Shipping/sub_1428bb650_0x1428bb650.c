// 函数: sub_1428bb650
// 地址: 0x1428bb650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rax = sub_1428a6a70(0xb0)

if (rax != 0)
    rax[6] = sub_1428bc0b0
    rax[7] = sub_1428bc0e0
    rax[8] = 0
    *rax = 0
    rax[2] = 0
    
    if (sub_140371c50(rax, "1.2.8", 0x58) == 0)
        rax[0x11] = sub_1428bc0b0
        rax[0xb] = 0
        rax[0x12] = sub_1428bc0e0
        rax[0x13] = 0
        rax[0xd] = 0
        
        if (sub_14036ebd0(&rax[0xb], 0xffffffff, "1.2.8", 0x58) == 0)
            *(arg1 + 0x18) = rax
            return 1

sub_1428a6780(rax)
return 0
