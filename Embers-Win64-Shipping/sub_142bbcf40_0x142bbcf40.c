// 函数: sub_142bbcf40
// 地址: 0x142bbcf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x3e8)

if ((*(arg1 + 8) & 8) != 0 && *(arg1 + 0x2d0) != 0)
    int64_t* rax_3 =
        sub_142b99bf0(sub_142b922e0(*(*(arg1 + 0x90) + 8), "sfnt"), "postscript-font-name", 0)
    
    if (rax_3 != 0)
        int64_t rax_4 = *rax_3
        
        if (rax_4 != 0)
            jump(rax_4)

return *(rdi + 0x5b0)
