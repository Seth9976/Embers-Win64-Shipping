// 函数: sub_14285da40
// 地址: 0x14285da40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rax_1 = *(arg1 + 0x820)

if (rax_1 == 0)
    uint64_t rdi_1 = 0x4150
    
    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
        rdi_1 = 0x4148
    
    if (sub_14285eb60(arg1) != 0)
        rdi_1 += 0x400
    
    uint64_t rsi_1 = *(arg1 + 0x828)
    
    if (rsi_1 u<= rdi_1)
        rsi_1 = rdi_1
    
    rax_1 = sub_1428a6730(rsi_1)
    
    if (rax_1 == 0)
        int32_t r9 = (rax_1 + 0x41).d
        sub_142856580(arg1, (rax_1 - 1).d, r9 + 0x5b, r9, "ssl\record\ssl3_buffer.c", 0x46)
        return 0
    
    *(arg1 + 0x820) = rax_1
    *(arg1 + 0x830) = rsi_1

*(arg1 + 0x1648) = rax_1
return 1
