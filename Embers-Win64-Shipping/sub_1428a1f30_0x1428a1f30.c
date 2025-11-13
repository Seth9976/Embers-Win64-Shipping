// 函数: sub_1428a1f30
// 地址: 0x1428a1f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rax = sub_14289ebd0(arg1)
int32_t rdi = rax

if (rax != 0)
    int32_t rax_1 = sub_14289f7e0(arg1)
    rdi = rax_1
    
    if (rax_1 != 0)
        int32_t rax_2 = sub_14289f640(arg1)
        rdi = rax_2
        
        if (rax_2 != 0)
            rdi = sub_14289ff60(arg1)

sub_14289e720(nullptr, *(arg1 + 0x98))

if (rdi != 0)
    int32_t rax_4 = (*(arg1 + 0x50))(arg1)
    rdi = rax_4
    
    if (rax_4 != 0)
        int32_t rax_6 =
            sub_1428a33d0(arg1 + 0xac, nullptr, *(arg1 + 0x98), *(*(arg1 + 0x20) + 0x14))
        int32_t rax_8
        
        if (rax_6 != 0)
            *(arg1 + 0xb8) = sub_142898ea0(*(arg1 + 0x98), *(arg1 + 0xac))
            *(arg1 + 0xb0) = rax_6
            rax_8 = (*(arg1 + 0x38))(0, arg1)
        
        if (rax_6 == 0 || rax_8 != 0)
            int64_t rax_9 = *(arg1 + 0x30)
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = sub_1428a1d30(arg1)
            else
                rax_10 = rax_9(arg1)
            
            if (rax_10 != 0 && sub_1428a0340(arg1) != 0 && sub_1428eb670(arg1) != 0)
                int32_t result = sub_1428ed460(arg1)
                
                if (result != 0)
                    if ((*(*(arg1 + 0x20) + 0x14) & 0x80) == 0)
                        return result
                    
                    return (*(arg1 + 0x70))(arg1)
        
        return 0

return zx.q(rdi)
