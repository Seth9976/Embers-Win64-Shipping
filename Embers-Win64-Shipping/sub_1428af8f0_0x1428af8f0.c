// 函数: sub_1428af8f0
// 地址: 0x1428af8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdi = 1
int32_t temp0 = *(arg1 + 0xa0)
*(arg1 + 0xa0) -= 1

if (temp0 == 1)
    int64_t rax_1 = *(arg1 + 0x68)
    
    if (rax_1 != 0)
        if (arg2 != 0)
            sub_1428a5d00(data_144020538)
            rax_1 = *(arg1 + 0x68)
        
        rdi = rax_1(arg1)
        
        if (arg2 != 0)
            sub_1428a5c40(data_144020538)
        
        if (rdi == 0)
            return 0

sub_1428e33d0(arg1, 0)
return zx.q(rdi)
