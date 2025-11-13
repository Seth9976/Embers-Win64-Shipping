// 函数: sub_1429130c0
// 地址: 0x1429130c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rsi = *(arg1 + 0x28)

if (*(arg1 + 0x10) == 0 && *rsi == 0)
    sub_1428a5670(0x10, 0xc7, 0x8b, "crypto\ec\ec_pmeth.c", 0x1a0)
    return 0

int64_t* rax_1 = sub_1428c0d20()

if (rax_1 != 0)
    if (sub_142896310(arg2, 0x198, rax_1) != 0)
        int32_t* rdx = *(arg1 + 0x10)
        int32_t rax_4
        
        if (rdx == 0)
            rax_4 = sub_1428c1040(rax_1, *rsi)
        else
            rax_4 = sub_142896470(arg2, rdx)
        
        if (rax_4 != 0)
            return sub_1428c0c50(rax_1)
    else
        sub_1428c0b90(rax_1)

return 0
